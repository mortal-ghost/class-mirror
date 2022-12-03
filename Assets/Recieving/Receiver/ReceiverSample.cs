using System;
using System.Threading;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Unity.RenderStreaming;
using Unity.RenderStreaming.Signaling;

public class ReceiverSample : MonoBehaviour
{   

#pragma warning disable 0649
    [SerializeField] private RenderStreaming renderStreaming;
        [SerializeField] private Button startButton;
        [SerializeField] private Button stopButton;
        [SerializeField] private InputField connectionIdInput;
        [SerializeField] private InputField addressInput;
        // [SerializeField] private RawImage remoteVideoImage;

        [SerializeField] private Renderer renderTexture;
        [SerializeField] private VideoStreamReceiver receiveVideoViewer;
        [SerializeField] private SingleConnection connection;
        [SerializeField] private Button proceedButton;
        [SerializeField] private GameObject createConnection;

#pragma warning restore 0649

        private string connectionId;
        private string signalingAddress = "localhost";
        private ISignaling signaling;
        private InputSender inputSender;

        public ISignaling Signaling
        {
            get {
                return new WebSocketSignaling($"ws://{signalingAddress}", 5, SynchronizationContext.Current);
            }
        }
        
        void Awake()
        {   
            
            startButton.onClick.AddListener(OnStart);
            stopButton.onClick.AddListener(OnStop);
            proceedButton.onClick.AddListener(OnProceed);
            addressInput.onValueChanged.AddListener(OnAddressChange);
            if(connectionIdInput != null)
                connectionIdInput.onValueChanged.AddListener(input => connectionId = input);

            receiveVideoViewer.OnUpdateReceiveTexture += OnUpdateReceiveTexture;
      
            inputSender = GetComponent<InputSender>();
            inputSender.OnStartedChannel += OnStartedChannel;
        }

        void Start()
        {
            if (renderStreaming.runOnAwake)
                return;
        }

        void OnUpdateReceiveTexture(Texture texture)
        {
            renderTexture.material.mainTexture = texture;
            SetInputChange();
        }

        void OnStartedChannel(string connectionId)
        {
            SetInputChange();
        }

        void SetInputChange()
        {
            if (inputSender == null || !inputSender.IsConnected)
                return;
            inputSender.EnableInputPositionCorrection(true);
        }

        void OnProceed()
        {
            renderStreaming.Run(signaling: Signaling);
            connectionIdInput.gameObject.SetActive(true);
            startButton.gameObject.SetActive(true);

            createConnection.SetActive(false);
        }
        
        void OnAddressChange(string value)
        {
            signalingAddress = value;
        }

        private void OnStart()
        {   
            if (string.IsNullOrEmpty(connectionId))
            {
                connectionId = System.Guid.NewGuid().ToString("N");
                connectionIdInput.text = connectionId;
            }
            connectionIdInput.interactable = false;
                // receiveVideoViewer.SetCodec(settings.ReceiverVideoCodec);

            connection.CreateConnection(connectionId);
            startButton.gameObject.SetActive(false);
            stopButton.gameObject.SetActive(true);
        }

        private void OnStop()
        {
            connection.DeleteConnection(connectionId);
            connectionId = String.Empty;
            connectionIdInput.text = String.Empty;
            connectionIdInput.interactable = true;
            startButton.gameObject.SetActive(true);
            stopButton.gameObject.SetActive(false);
        }
}
