// Examples of VideoPlayer function
using UnityEngine.UI;
using UnityEditor;
using UnityEngine;
using SimpleFileBrowser;
using UnityEngine.Video;

public class VideoPlay : MonoBehaviour
{   
    public Slider slider;
    private bool stopped = true;
    public GameObject pauseIcon;
    public Button homeButton;
    public Button stopButton;
    public GameObject fileBrowser;
    public GameObject videoEffectCanvas;
    public GameObject esh;
    public double shiftTime = 10d;
    private string videoURL = "";
    private VideoPlayer videoPlayer;
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
        string[] videoURLs = FileBrowser.Result;
        //if no file is selected yet
        if (videoURLs==null || videoURLs.Length == 0)
        {
            return;
        }
        videoURL = videoURLs[0];
        Debug.Log(videoURL);
        //native, only works inside unity editor
        //videoURL = EditorUtility.OpenFilePanel("Select a Video File", "", "mp4");
    }
    /// <summary>
    /// we may not be able to set the video right away at the start
    /// this will help us add component only when required
    /// </summary>
    void SetVideo()
    {
        //Instanciate the object to which the script is attached to
        GameObject screen = gameObject;

        //adding VideoPlayer to the screen
        videoPlayer = screen.AddComponent<VideoPlayer>();

        // Play on awake defaults to true. Set it to false to avoid the url set
        videoPlayer.playOnAwake = false;

        //for different render usage we have different modes
        //here we use MaterialOverride
        videoPlayer.renderMode = VideoRenderMode.MaterialOverride;

        // URL of the video to be played
        // Here, we are using absolute path
        videoPlayer.url = videoURL;

        // Restart from beginning when done.
        videoPlayer.isLooping = true;

        //if video is causing delay or buffering then enable this
        videoPlayer.Prepare();

        //play the current video
        videoPlayer.Play();
        stopped = false;

        stopButton.gameObject.SetActive(true);
        homeButton.gameObject.SetActive(false);
        videoEffectCanvas.SetActive(true);
    }

    private void Start()
    {
        //searching for an instance of filebrowser script
        FileBrowser inputField = FindObjectOfType<FileBrowser>();
        //making default input in input box
        inputField.OnPathChanged(initialPath);
        slider.minValue = 0;
    }

    public void VideoPlayPause()
    {   
        Debug.Log("Pausing/Playing");
        if (videoPlayer.isPlaying)
        {
            videoPlayer.Pause();
            pauseIcon.GetComponent<RawImage>().enabled = true;
        }
        else
        {   
            videoPlayer.Play();
            pauseIcon.GetComponent<RawImage>().enabled = false;
        }
            
    }

    public void OnStop()
    {   
        stopped = true;
        FileBrowser.Result = null;
        videoURL = "";
        videoPlayer.Stop();
        homeButton.gameObject.SetActive(true);
        stopButton.gameObject.SetActive(false);
        videoEffectCanvas.SetActive(false);
        pauseIcon.GetComponent<RawImage>().enabled = false;
        fileBrowser.SetActive(true);
        slider.maxValue = 1;
    }
    
    public void MoveBackward()
    {   
        Debug.Log("Going back");
        double currentTime = videoPlayer.time;
        currentTime -= shiftTime;
        if (currentTime < 0)
            currentTime = 0;
        videoPlayer.time = currentTime;
    }

    public void MoveForward()
    {   
        Debug.Log("Going front");
        double currentTime = videoPlayer.time;
        double maxTime = videoPlayer.length;
        currentTime += shiftTime;
        if (currentTime > maxTime)
            currentTime = maxTime;
        videoPlayer.time = currentTime;
    }
    private void Update()
    {
        // If no file is selected yet
        if(stopped)
        {
            // If no file is selected then return
            if (videoURL == "")
            {
                return;
            }
            esh.SetActive(true);
            // A file is selected, set up the video player component
            SetVideo();
        }

        slider.maxValue = (float)videoPlayer.length;
        slider.value = (float)videoPlayer.time;
        
    }
}