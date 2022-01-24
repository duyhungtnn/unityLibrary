package com.unity3d.player;

public class NativeCallProxy {
    static NativeCallsProtocol api;
    public static void registerAPIforNativeCalls(NativeCallsProtocol m_api){
        api = m_api;
    }
    public static void receiveTexttureId(long textTureId){
        if (api != null){
            api.receiveTexttureId(textTureId);
        }
    }
}

