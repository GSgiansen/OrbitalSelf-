using FlutterUnityIntegration;
using UnityEngine;

using UnityEngine.SceneManagement;

public class MyGameManager: MonoBehaviour
{

    public void ChangeTheSceneNow(string sceneName)
    {
        UnityMessageManager.Instance.SendMessageToFlutter("Let's change scene to: " + sceneName);
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }
}
