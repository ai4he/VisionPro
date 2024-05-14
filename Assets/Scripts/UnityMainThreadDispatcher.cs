using System.Collections;
using System.Collections.Concurrent;
using UnityEngine;

public class UnityMainThreadDispatcher : MonoBehaviour
{
    private static UnityMainThreadDispatcher instance;
    private readonly ConcurrentQueue<System.Action> actions = new ConcurrentQueue<System.Action>();

    public static UnityMainThreadDispatcher Instance()
    {
        if (!instance)
        {
            throw new System.Exception("UnityMainThreadDispatcher instance is not set.");
        }
        return instance;
    }

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void Update()
    {
        while (actions.Count > 0)
        {
            if (actions.TryDequeue(out System.Action action))
            {
                action?.Invoke();
            }
        }
    }

    public void Enqueue(System.Action action)
    {
        actions.Enqueue(action);
    }
}