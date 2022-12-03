// Examples of VideoPlayer function
using UnityEngine.UI;
using UnityEditor;
using UnityEngine;
using SimpleFileBrowser;
using UnityEngine.Video;
using Paroxe.PdfRenderer;

public class PdfStart : MonoBehaviour
{   
    private bool stopped = true;
    public GameObject pdfObject;
    public Button homeButton;
    public Button stopButton;
    public GameObject fileBrowser;
    public GameObject esh;
    private string pdfURL = "";
    private PDFViewer pdfComponent;
    //path where the file explorer will open initially
    private static string initialPath =
#if UNITY_EDITOR
     "C:/";
    //using android as default OS
#else
    "/storage/emulated/0/";
#endif

    /// <summary>
    /// open file explorer to fetch the video files of format .mp4
    /// only mp4 is supported natively
    /// </summary>
    public void FetchFile()
    {
        // save the url selected by user in a variable
        //this is recived from the static variables in "FileBrowser" class
        string[] pdfURLs = FileBrowser.Result;
        //if no file is selected yet
        if (pdfURLs == null || pdfURLs.Length == 0)
        {
            return;
        }
        pdfURL = pdfURLs[0];
        
    }
    /// <summary>
    /// we may not be able to set the video right away at the start
    /// this will help us add component only when required
    /// </summary>
    private void Start()
    {   
        pdfComponent = (PDFViewer)pdfObject.GetComponent(typeof(PDFViewer));
        //searching for an instance of filebrowser script
        FileBrowser inputField = FindObjectOfType<FileBrowser>();
        //making default input in input box
        inputField.OnPathChanged(initialPath);

    }
    void ForwardURL()
    {   
        Debug.Log(pdfURL);
        stopped = false;
        pdfObject.SetActive(true);
        //set the file path in the object
        pdfComponent.FilePath = pdfURL;

        homeButton.gameObject.SetActive(false);
        stopButton.gameObject.SetActive(true);

    }

    public void OnStop()
    {   
        stopped = true;
        FileBrowser.Result = null;
        pdfURL = "";


        pdfComponent.CloseDocument();
        homeButton.gameObject.SetActive(true);
        stopButton.gameObject.SetActive(false);

        fileBrowser.SetActive(true);
        pdfObject.SetActive(false);
    }
    
    private void Update()
    {
        // If no file is selected yet
        if(stopped)
        {
            // If no file is selected then return
            if (pdfURL == "")
            {
                return;
            }
            esh.SetActive(true);
            // A file is selected, set up the video player component
            ForwardURL();
        }
    }
}