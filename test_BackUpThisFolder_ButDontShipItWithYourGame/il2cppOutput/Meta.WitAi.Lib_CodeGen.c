﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Meta.Voice.VoiceRequestState Meta.Voice.IVoiceRequest`4::get_State()
// 0x00000002 System.Single Meta.Voice.IVoiceRequest`4::get_DownloadProgress()
// 0x00000003 System.Single Meta.Voice.IVoiceRequest`4::get_UploadProgress()
// 0x00000004 TOptions Meta.Voice.IVoiceRequest`4::get_Options()
// 0x00000005 TEvents Meta.Voice.IVoiceRequest`4::get_Events()
// 0x00000006 TResults Meta.Voice.IVoiceRequest`4::get_Results()
// 0x00000007 System.Boolean Meta.Voice.IVoiceRequest`4::get_CanSend()
// 0x00000008 System.Void Meta.Voice.IVoiceRequest`4::Send()
// 0x00000009 System.Void Meta.Voice.IVoiceRequest`4::Cancel(System.String)
// 0x0000000A TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnStateChange()
// 0x0000000B TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x0000000C TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x0000000D TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnInit()
// 0x0000000E TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSend()
// 0x0000000F TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnCancel()
// 0x00000010 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnFailed()
// 0x00000011 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSuccess()
// 0x00000012 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnComplete()
// 0x00000013 System.String Meta.Voice.IVoiceRequestOptions::get_RequestId()
// 0x00000014 System.String Meta.Voice.IVoiceRequestResults::get_Message()
// 0x00000015 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000016 System.Void Meta.Voice.NLPRequestResponseEvent::.ctor()
extern void NLPRequestResponseEvent__ctor_m5DAADB236F720F195FFABA26B94C8E97FE8CCA48 (void);
// 0x00000017 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPRequestEvents`1::get_OnFullResponse()
// 0x00000018 Meta.WitAi.Json.WitResponseNode Meta.Voice.INLPRequestResults::get_ResponseData()
// 0x00000019 System.String Meta.Voice.INLPTextRequestOptions::get_Text()
// 0x0000001A System.Void Meta.Voice.INLPTextRequestOptions::set_Text(System.String)
// 0x0000001B System.Void Meta.Voice.NLPAudioRequest`4::.ctor(TOptions,TEvents)
// 0x0000001C Meta.WitAi.Json.WitResponseNode Meta.Voice.NLPAudioRequest`4::get_ResponseData()
// 0x0000001D System.Void Meta.Voice.NLPAudioRequest`4::OnInit()
// 0x0000001E System.Void Meta.Voice.NLPAudioRequest`4::HandlePartialNlpResponse(Meta.WitAi.Json.WitResponseNode)
// 0x0000001F System.Void Meta.Voice.NLPAudioRequest`4::ApplyResultResponseData(Meta.WitAi.Json.WitResponseNode)
// 0x00000020 System.Void Meta.Voice.NLPAudioRequest`4::OnPartialResponse()
// 0x00000021 System.Void Meta.Voice.NLPAudioRequest`4::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
// 0x00000022 System.Void Meta.Voice.NLPAudioRequest`4::OnFullResponse()
// 0x00000023 System.Void Meta.Voice.NLPAudioRequest`4::CompleteEarly()
// 0x00000024 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000025 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnFullResponse()
// 0x00000026 System.Void Meta.Voice.NLPAudioRequestEvents`1::.ctor()
// 0x00000027 Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::get_InputType()
// 0x00000028 System.Void Meta.Voice.NLPRequest`4::set_InputType(Meta.Voice.NLPRequestInputType)
// 0x00000029 System.Void Meta.Voice.NLPRequest`4::.ctor(Meta.Voice.NLPRequestInputType,TOptions,TEvents)
// 0x0000002A System.Void Meta.Voice.NLPRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x0000002B System.Void Meta.Voice.NLPRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x0000002C System.String Meta.Voice.NLPRequest`4::GetActivateAudioError()
// 0x0000002D System.String Meta.Voice.NLPRequest`4::GetSendError()
// 0x0000002E System.Void Meta.Voice.NLPRequestEvents`1::.ctor()
// 0x0000002F Meta.Voice.VoiceAudioInputState Meta.Voice.ITranscriptionRequest`4::get_AudioInputState()
// 0x00000030 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000031 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsListening()
// 0x00000032 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanActivateAudio()
// 0x00000033 System.Void Meta.Voice.ITranscriptionRequest`4::ActivateAudio()
// 0x00000034 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000035 System.Void Meta.Voice.ITranscriptionRequest`4::DeactivateAudio()
// 0x00000036 System.Void Meta.Voice.TranscriptionRequestEvent::.ctor()
extern void TranscriptionRequestEvent__ctor_m79205A4049FAC31DE5F80B8115C267A27B7586DE (void);
// 0x00000037 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x00000038 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x00000039 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStartListening()
// 0x0000003A TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x0000003B TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStopListening()
// 0x0000003C Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x0000003D Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x0000003E System.Single Meta.Voice.ITranscriptionRequestOptions::get_AudioThreshold()
// 0x0000003F System.String Meta.Voice.ITranscriptionRequestResults::get_Transcription()
// 0x00000040 System.Boolean Meta.Voice.ITranscriptionRequestResults::get_IsFinalTranscription()
// 0x00000041 System.String[] Meta.Voice.ITranscriptionRequestResults::get_FinalTranscriptions()
// 0x00000042 Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::get_AudioInputState()
// 0x00000043 System.Void Meta.Voice.TranscriptionRequest`4::set_AudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x00000044 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000045 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsListening()
// 0x00000046 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanActivateAudio()
// 0x00000047 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000048 System.Void Meta.Voice.TranscriptionRequest`4::.ctor(TOptions,TEvents)
// 0x00000049 System.Void Meta.Voice.TranscriptionRequest`4::SetAudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x0000004A System.Void Meta.Voice.TranscriptionRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x0000004B System.String Meta.Voice.TranscriptionRequest`4::get_Transcription()
// 0x0000004C System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsFinalTranscription()
// 0x0000004D System.String[] Meta.Voice.TranscriptionRequest`4::get_FinalTranscriptions()
// 0x0000004E System.Void Meta.Voice.TranscriptionRequest`4::ApplyTranscription(System.String,System.Boolean)
// 0x0000004F System.Void Meta.Voice.TranscriptionRequest`4::OnTranscriptionChanged()
// 0x00000050 System.String Meta.Voice.TranscriptionRequest`4::GetActivateAudioError()
// 0x00000051 System.Void Meta.Voice.TranscriptionRequest`4::ActivateAudio()
// 0x00000052 System.Void Meta.Voice.TranscriptionRequest`4::OnAudioActivation()
// 0x00000053 System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioActivation()
// 0x00000054 System.Void Meta.Voice.TranscriptionRequest`4::OnStartListening()
// 0x00000055 System.Void Meta.Voice.TranscriptionRequest`4::DeactivateAudio()
// 0x00000056 System.Void Meta.Voice.TranscriptionRequest`4::OnAudioDeactivation()
// 0x00000057 System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioDeactivation()
// 0x00000058 System.Void Meta.Voice.TranscriptionRequest`4::OnStopListening()
// 0x00000059 System.Void Meta.Voice.TranscriptionRequest`4::Send()
// 0x0000005A System.Void Meta.Voice.TranscriptionRequest`4::OnSuccess()
// 0x0000005B System.Void Meta.Voice.TranscriptionRequest`4::Cancel(System.String)
// 0x0000005C TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x0000005D TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x0000005E TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStartListening()
// 0x0000005F TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x00000060 TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStopListening()
// 0x00000061 Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x00000062 Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x00000063 System.Void Meta.Voice.TranscriptionRequestEvents`1::.ctor()
// 0x00000064 Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::get_State()
// 0x00000065 System.Void Meta.Voice.VoiceRequest`4::set_State(Meta.Voice.VoiceRequestState)
// 0x00000066 System.Boolean Meta.Voice.VoiceRequest`4::get_IsActive()
// 0x00000067 System.Single Meta.Voice.VoiceRequest`4::get_DownloadProgress()
// 0x00000068 System.Void Meta.Voice.VoiceRequest`4::set_DownloadProgress(System.Single)
// 0x00000069 System.Single Meta.Voice.VoiceRequest`4::get_UploadProgress()
// 0x0000006A System.Void Meta.Voice.VoiceRequest`4::set_UploadProgress(System.Single)
// 0x0000006B TOptions Meta.Voice.VoiceRequest`4::get_Options()
// 0x0000006C System.Void Meta.Voice.VoiceRequest`4::set_Options(TOptions)
// 0x0000006D TEvents Meta.Voice.VoiceRequest`4::get_Events()
// 0x0000006E System.Void Meta.Voice.VoiceRequest`4::set_Events(TEvents)
// 0x0000006F TResults Meta.Voice.VoiceRequest`4::get_Results()
// 0x00000070 System.Void Meta.Voice.VoiceRequest`4::set_Results(TResults)
// 0x00000071 System.Boolean Meta.Voice.VoiceRequest`4::get_CanSend()
// 0x00000072 System.Void Meta.Voice.VoiceRequest`4::.ctor(TOptions,TEvents)
// 0x00000073 System.Void Meta.Voice.VoiceRequest`4::OnInit()
// 0x00000074 System.Void Meta.Voice.VoiceRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x00000075 System.Void Meta.Voice.VoiceRequest`4::SetDownloadProgress(System.Single)
// 0x00000076 System.Void Meta.Voice.VoiceRequest`4::SetUploadProgress(System.Single)
// 0x00000077 System.Void Meta.Voice.VoiceRequest`4::RaiseEvent(TUnityEvent)
// 0x00000078 System.Void Meta.Voice.VoiceRequest`4::Log(System.String,System.Boolean)
// 0x00000079 System.Void Meta.Voice.VoiceRequest`4::LogW(System.String)
// 0x0000007A System.Void Meta.Voice.VoiceRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x0000007B System.String Meta.Voice.VoiceRequest`4::GetSendError()
// 0x0000007C System.Void Meta.Voice.VoiceRequest`4::Send()
// 0x0000007D System.Void Meta.Voice.VoiceRequest`4::OnSend()
// 0x0000007E System.Void Meta.Voice.VoiceRequest`4::HandleSend()
// 0x0000007F System.Boolean Meta.Voice.VoiceRequest`4::OnSimulateResponse()
// 0x00000080 TResults Meta.Voice.VoiceRequest`4::GetResultsWithMessage(System.String)
// 0x00000081 System.Void Meta.Voice.VoiceRequest`4::HandleFailure(System.String)
// 0x00000082 System.Void Meta.Voice.VoiceRequest`4::HandleFailure(TResults)
// 0x00000083 System.Void Meta.Voice.VoiceRequest`4::OnFailed()
// 0x00000084 System.Void Meta.Voice.VoiceRequest`4::HandleSuccess(TResults)
// 0x00000085 System.Void Meta.Voice.VoiceRequest`4::OnSuccess()
// 0x00000086 System.Void Meta.Voice.VoiceRequest`4::Cancel(System.String)
// 0x00000087 System.Void Meta.Voice.VoiceRequest`4::HandleCancel()
// 0x00000088 System.Void Meta.Voice.VoiceRequest`4::OnCancel()
// 0x00000089 System.Void Meta.Voice.VoiceRequest`4::OnComplete()
// 0x0000008A TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnStateChange()
// 0x0000008B TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnInit()
// 0x0000008C TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSend()
// 0x0000008D TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnCancel()
// 0x0000008E TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnFailed()
// 0x0000008F TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSuccess()
// 0x00000090 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnComplete()
// 0x00000091 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x00000092 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x00000093 System.Void Meta.Voice.VoiceRequestEvents`1::.ctor()
// 0x00000094 System.Boolean Meta.Voice.Audio.AudioClipStream::get_IsReady()
extern void AudioClipStream_get_IsReady_m0EEB4D94BD550F42B4A84D0785A1568065BF4FCB (void);
// 0x00000095 System.Void Meta.Voice.Audio.AudioClipStream::set_IsReady(System.Boolean)
extern void AudioClipStream_set_IsReady_mE2CA8AB9D45D39572FCB84F953877151EFC3838C (void);
// 0x00000096 System.Boolean Meta.Voice.Audio.AudioClipStream::get_IsComplete()
extern void AudioClipStream_get_IsComplete_m77F28AAD5EFA261DB1232393925E0DB4658B6ACF (void);
// 0x00000097 System.Void Meta.Voice.Audio.AudioClipStream::set_IsComplete(System.Boolean)
extern void AudioClipStream_set_IsComplete_m4BE1CB321931398875EB0DAF84FFA94B9B91BAD0 (void);
// 0x00000098 System.Int32 Meta.Voice.Audio.AudioClipStream::get_Channels()
extern void AudioClipStream_get_Channels_mC2CF1EF76706A334E771AEB616062D017EAD726C (void);
// 0x00000099 System.Void Meta.Voice.Audio.AudioClipStream::set_Channels(System.Int32)
extern void AudioClipStream_set_Channels_m159BC71A1F31E0D7D2BD89ACD9E21BDDA5B8BB9E (void);
// 0x0000009A System.Int32 Meta.Voice.Audio.AudioClipStream::get_SampleRate()
extern void AudioClipStream_get_SampleRate_m60235C33D1AE1B823473584558398271B66341F9 (void);
// 0x0000009B System.Void Meta.Voice.Audio.AudioClipStream::set_SampleRate(System.Int32)
extern void AudioClipStream_set_SampleRate_m2B70E48F6012B3D72E53CCF3681BB9EF2C56C06E (void);
// 0x0000009C System.Int32 Meta.Voice.Audio.AudioClipStream::get_AddedSamples()
extern void AudioClipStream_get_AddedSamples_m5743705A0F988EEF678EAD4C5E4C04B96E3FCE21 (void);
// 0x0000009D System.Void Meta.Voice.Audio.AudioClipStream::set_AddedSamples(System.Int32)
extern void AudioClipStream_set_AddedSamples_m9713FAD2933F47F9B6F4408381489D11076A0926 (void);
// 0x0000009E System.Int32 Meta.Voice.Audio.AudioClipStream::get_TotalSamples()
extern void AudioClipStream_get_TotalSamples_mCE072A69E5C56A2D6F520A705A605E5E6FD37227 (void);
// 0x0000009F System.Void Meta.Voice.Audio.AudioClipStream::set_TotalSamples(System.Int32)
extern void AudioClipStream_set_TotalSamples_m2776529FFB3A9F2CA5F6EF4C8C7AE77F2FE5A90D (void);
// 0x000000A0 System.Single Meta.Voice.Audio.AudioClipStream::get_Length()
extern void AudioClipStream_get_Length_mA47F7FF736B5C955DE14E6A09E407162777D7311 (void);
// 0x000000A1 System.Single Meta.Voice.Audio.AudioClipStream::get_StreamReadyLength()
extern void AudioClipStream_get_StreamReadyLength_m7169D0C412CBA1E9246A2AA637215B66E4C6039A (void);
// 0x000000A2 System.Void Meta.Voice.Audio.AudioClipStream::set_StreamReadyLength(System.Single)
extern void AudioClipStream_set_StreamReadyLength_m9EE785F14BC3DEE9A80AA0E0CE5702479E5AECD6 (void);
// 0x000000A3 Meta.Voice.Audio.AudioClipStreamDelegate Meta.Voice.Audio.AudioClipStream::get_OnStreamReady()
extern void AudioClipStream_get_OnStreamReady_m0422F666021311EA33B4AC935E983ED475860920 (void);
// 0x000000A4 System.Void Meta.Voice.Audio.AudioClipStream::set_OnStreamReady(Meta.Voice.Audio.AudioClipStreamDelegate)
extern void AudioClipStream_set_OnStreamReady_m8678A47353D28CCD77C7A566E7042808A4325A74 (void);
// 0x000000A5 Meta.Voice.Audio.AudioClipStreamDelegate Meta.Voice.Audio.AudioClipStream::get_OnStreamUpdated()
extern void AudioClipStream_get_OnStreamUpdated_m0D3C1B8E84B3FC5806E351F373F0980CE81D8B49 (void);
// 0x000000A6 System.Void Meta.Voice.Audio.AudioClipStream::set_OnStreamUpdated(Meta.Voice.Audio.AudioClipStreamDelegate)
extern void AudioClipStream_set_OnStreamUpdated_m2D9BF8AE56788AD6785841EA973CC18FBDE5AD2A (void);
// 0x000000A7 Meta.Voice.Audio.AudioClipStreamDelegate Meta.Voice.Audio.AudioClipStream::get_OnStreamComplete()
extern void AudioClipStream_get_OnStreamComplete_m2B7CB56AD5A461E9CF09B10890F2F38FC722CA05 (void);
// 0x000000A8 System.Void Meta.Voice.Audio.AudioClipStream::set_OnStreamComplete(Meta.Voice.Audio.AudioClipStreamDelegate)
extern void AudioClipStream_set_OnStreamComplete_m305151A3BEBFAEA42BA65A8C012D07E3F98B88E4 (void);
// 0x000000A9 System.Void Meta.Voice.Audio.AudioClipStream::.ctor(System.Int32,System.Int32,System.Single)
extern void AudioClipStream__ctor_m84AB7DEBBF5C42AB2792B2D457477558DC11CBF8 (void);
// 0x000000AA System.Void Meta.Voice.Audio.AudioClipStream::AddSamples(System.Single[])
extern void AudioClipStream_AddSamples_mA15CCCC511BF4FC9CE25015BCEA112AEA940096F (void);
// 0x000000AB System.Void Meta.Voice.Audio.AudioClipStream::SetTotalSamples(System.Int32)
extern void AudioClipStream_SetTotalSamples_mE9BAD17E9AC225CC7AD8BD54842D71F31A60C2B9 (void);
// 0x000000AC System.Void Meta.Voice.Audio.AudioClipStream::UpdateState()
extern void AudioClipStream_UpdateState_m335D755AC52F83AD499E40FD6D99A80BCACADB66 (void);
// 0x000000AD System.Void Meta.Voice.Audio.AudioClipStream::HandleStreamReady()
extern void AudioClipStream_HandleStreamReady_m977C3F30E464CF50B14476A16CAB7E76F7F512CC (void);
// 0x000000AE System.Void Meta.Voice.Audio.AudioClipStream::HandleStreamUpdated()
extern void AudioClipStream_HandleStreamUpdated_m27B601D1B7C072211D570CB142161B15B9EE5F6F (void);
// 0x000000AF System.Void Meta.Voice.Audio.AudioClipStream::HandleStreamComplete()
extern void AudioClipStream_HandleStreamComplete_m01BA13F6343F3174EA45511734F03F4FE0D27709 (void);
// 0x000000B0 System.Void Meta.Voice.Audio.AudioClipStream::Unload()
extern void AudioClipStream_Unload_mBBB143DA97E015ECD1105894DEDC20B1E50051E2 (void);
// 0x000000B1 System.Single Meta.Voice.Audio.AudioClipStream::GetSampleLength(System.Int32)
extern void AudioClipStream_GetSampleLength_m9F7EC25BDCE33ADBE96E233E18824F6FFCA539A3 (void);
// 0x000000B2 System.Single Meta.Voice.Audio.AudioClipStream::GetLength(System.Int32,System.Int32,System.Int32)
extern void AudioClipStream_GetLength_m6B3848C5BF0AF66F3C6796916F0C965C8A54C709 (void);
// 0x000000B3 Meta.Voice.Audio.IAudioClipStream Meta.Voice.Audio.AudioPlayer::get_ClipStream()
extern void AudioPlayer_get_ClipStream_mBC0506001A62BF037C6E5C283E394EF7F283FDBC (void);
// 0x000000B4 System.Void Meta.Voice.Audio.AudioPlayer::set_ClipStream(Meta.Voice.Audio.IAudioClipStream)
extern void AudioPlayer_set_ClipStream_m0DC77FA4380B2C01C5F78FA918D90530B0B3351C (void);
// 0x000000B5 System.Boolean Meta.Voice.Audio.AudioPlayer::get_IsPlaying()
extern void AudioPlayer_get_IsPlaying_m7AD5272848F09B048EE366CB6B688CAEC8127A45 (void);
// 0x000000B6 System.Int32 Meta.Voice.Audio.AudioPlayer::get_ElapsedSamples()
// 0x000000B7 System.Void Meta.Voice.Audio.AudioPlayer::Init()
// 0x000000B8 System.String Meta.Voice.Audio.AudioPlayer::GetPlaybackErrors()
// 0x000000B9 System.Void Meta.Voice.Audio.AudioPlayer::Play(Meta.Voice.Audio.IAudioClipStream,System.Int32)
extern void AudioPlayer_Play_mFBA6A6D282FBA3BEE5F05BD28F5069D42FF7FBD8 (void);
// 0x000000BA System.Void Meta.Voice.Audio.AudioPlayer::Play(System.Int32)
// 0x000000BB System.Void Meta.Voice.Audio.AudioPlayer::Pause()
// 0x000000BC System.Void Meta.Voice.Audio.AudioPlayer::Resume()
// 0x000000BD System.Void Meta.Voice.Audio.AudioPlayer::Stop()
extern void AudioPlayer_Stop_m2ED8CF1FEDDDA7BD65152F589BF9F32BE1501676 (void);
// 0x000000BE System.Void Meta.Voice.Audio.AudioPlayer::.ctor()
extern void AudioPlayer__ctor_mA431DECA7FFF28838B4315CD7D538DFED963AD13 (void);
// 0x000000BF UnityEngine.AudioClip Meta.Voice.Audio.IAudioClipProvider::get_Clip()
// 0x000000C0 System.Void Meta.Voice.Audio.AudioClipStreamDelegate::.ctor(System.Object,System.IntPtr)
extern void AudioClipStreamDelegate__ctor_m623E8CC4A52808BB61C3B0E5057863399D4B19FF (void);
// 0x000000C1 System.Void Meta.Voice.Audio.AudioClipStreamDelegate::Invoke(Meta.Voice.Audio.IAudioClipStream)
extern void AudioClipStreamDelegate_Invoke_mA68F02568616AA6888A64E2B4CA3B0020F5FA208 (void);
// 0x000000C2 System.IAsyncResult Meta.Voice.Audio.AudioClipStreamDelegate::BeginInvoke(Meta.Voice.Audio.IAudioClipStream,System.AsyncCallback,System.Object)
extern void AudioClipStreamDelegate_BeginInvoke_mD957E8599D523C8D3AF3231BA7DBE0EE1F62C9D4 (void);
// 0x000000C3 System.Void Meta.Voice.Audio.AudioClipStreamDelegate::EndInvoke(System.IAsyncResult)
extern void AudioClipStreamDelegate_EndInvoke_m669A845416B70D365D298DC0F53CDD9452CB2BC4 (void);
// 0x000000C4 System.Boolean Meta.Voice.Audio.IAudioClipStream::get_IsReady()
// 0x000000C5 System.Boolean Meta.Voice.Audio.IAudioClipStream::get_IsComplete()
// 0x000000C6 System.Int32 Meta.Voice.Audio.IAudioClipStream::get_Channels()
// 0x000000C7 System.Int32 Meta.Voice.Audio.IAudioClipStream::get_SampleRate()
// 0x000000C8 System.Int32 Meta.Voice.Audio.IAudioClipStream::get_AddedSamples()
// 0x000000C9 System.Int32 Meta.Voice.Audio.IAudioClipStream::get_TotalSamples()
// 0x000000CA System.Single Meta.Voice.Audio.IAudioClipStream::get_Length()
// 0x000000CB System.Single Meta.Voice.Audio.IAudioClipStream::get_StreamReadyLength()
// 0x000000CC System.Void Meta.Voice.Audio.IAudioClipStream::set_OnStreamReady(Meta.Voice.Audio.AudioClipStreamDelegate)
// 0x000000CD System.Void Meta.Voice.Audio.IAudioClipStream::set_OnStreamUpdated(Meta.Voice.Audio.AudioClipStreamDelegate)
// 0x000000CE System.Void Meta.Voice.Audio.IAudioClipStream::set_OnStreamComplete(Meta.Voice.Audio.AudioClipStreamDelegate)
// 0x000000CF System.Void Meta.Voice.Audio.IAudioClipStream::AddSamples(System.Single[])
// 0x000000D0 System.Void Meta.Voice.Audio.IAudioClipStream::SetTotalSamples(System.Int32)
// 0x000000D1 System.Void Meta.Voice.Audio.IAudioClipStream::UpdateState()
// 0x000000D2 System.Void Meta.Voice.Audio.IAudioClipStream::Unload()
// 0x000000D3 Meta.Voice.Audio.IAudioClipStream Meta.Voice.Audio.IAudioPlayer::get_ClipStream()
// 0x000000D4 System.Boolean Meta.Voice.Audio.IAudioPlayer::get_IsPlaying()
// 0x000000D5 System.Int32 Meta.Voice.Audio.IAudioPlayer::get_ElapsedSamples()
// 0x000000D6 System.Void Meta.Voice.Audio.IAudioPlayer::Init()
// 0x000000D7 System.String Meta.Voice.Audio.IAudioPlayer::GetPlaybackErrors()
// 0x000000D8 System.Void Meta.Voice.Audio.IAudioPlayer::Play(Meta.Voice.Audio.IAudioClipStream,System.Int32)
// 0x000000D9 System.Void Meta.Voice.Audio.IAudioPlayer::Pause()
// 0x000000DA System.Void Meta.Voice.Audio.IAudioPlayer::Resume()
// 0x000000DB System.Void Meta.Voice.Audio.IAudioPlayer::Stop()
// 0x000000DC UnityEngine.AudioSource Meta.Voice.Audio.IAudioSourceProvider::get_AudioSource()
// 0x000000DD Meta.Voice.Audio.IAudioClipStream Meta.Voice.Audio.IAudioSystem::GetAudioClipStream(System.Int32,System.Int32)
// 0x000000DE Meta.Voice.Audio.IAudioPlayer Meta.Voice.Audio.IAudioSystem::GetAudioPlayer(UnityEngine.GameObject)
// 0x000000DF UnityEngine.AudioClip Meta.Voice.Audio.UnityAudioClipStream::get_Clip()
extern void UnityAudioClipStream_get_Clip_m23335E15640116041F479CCC6D8F6551145AAEAA (void);
// 0x000000E0 System.Void Meta.Voice.Audio.UnityAudioClipStream::set_Clip(UnityEngine.AudioClip)
extern void UnityAudioClipStream_set_Clip_mC56FA62D64755884685D4713CB3F2030CE729223 (void);
// 0x000000E1 System.Void Meta.Voice.Audio.UnityAudioClipStream::.ctor(System.Int32,System.Int32,System.Single)
extern void UnityAudioClipStream__ctor_m88D61E564A71B35D5C18067D1258C4A2D389D8F0 (void);
// 0x000000E2 System.Void Meta.Voice.Audio.UnityAudioClipStream::.ctor(System.Int32,System.Int32,System.Single,System.Single)
extern void UnityAudioClipStream__ctor_m6126EDC0F6EE280B87975FC5FE4B079E0205FA42 (void);
// 0x000000E3 System.Void Meta.Voice.Audio.UnityAudioClipStream::.ctor(UnityEngine.AudioClip)
extern void UnityAudioClipStream__ctor_mA45352A085E2ED9BAC511ED22C0A1D55D04B9C32 (void);
// 0x000000E4 System.Void Meta.Voice.Audio.UnityAudioClipStream::AddSamples(System.Single[])
extern void UnityAudioClipStream_AddSamples_m9AE9D7C8AABEB3C7061369675E05B665B37EADA7 (void);
// 0x000000E5 System.Void Meta.Voice.Audio.UnityAudioClipStream::SetTotalSamples(System.Int32)
extern void UnityAudioClipStream_SetTotalSamples_m8A285C86DAA732C3657B5B92BD7B4E1D4EEB747B (void);
// 0x000000E6 System.Void Meta.Voice.Audio.UnityAudioClipStream::Unload()
extern void UnityAudioClipStream_Unload_mD7A379A680B26DAFB805D84534C60051BB4CA2CD (void);
// 0x000000E7 System.Void Meta.Voice.Audio.UnityAudioClipStream::UpdateClip(System.Int32)
extern void UnityAudioClipStream_UpdateClip_m4C069FA47F93972CA81C4E97008B5DBBA702920C (void);
// 0x000000E8 System.Void Meta.Voice.Audio.UnityAudioClipStream::PreloadCachedClips(System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnityAudioClipStream_PreloadCachedClips_m563CCE13101B6B04817365D520CB0CC8274C85FA (void);
// 0x000000E9 System.Void Meta.Voice.Audio.UnityAudioClipStream::GenerateCacheClip(System.Int32,System.Int32,System.Int32)
extern void UnityAudioClipStream_GenerateCacheClip_m1B5F432439C60D6D1B6BCCDA27E434154AF91D6F (void);
// 0x000000EA UnityEngine.AudioClip Meta.Voice.Audio.UnityAudioClipStream::GetCachedClip(System.Int32,System.Int32,System.Int32)
extern void UnityAudioClipStream_GetCachedClip_m66DD616A38F4B9E8D2FDD94CBCC4E670DCC94B29 (void);
// 0x000000EB System.Boolean Meta.Voice.Audio.UnityAudioClipStream::DoesClipMatch(UnityEngine.AudioClip,System.Int32,System.Int32,System.Int32)
extern void UnityAudioClipStream_DoesClipMatch_m4B3272FA3BA5456A71FB30EBD13F83A6C9F203BF (void);
// 0x000000EC System.Void Meta.Voice.Audio.UnityAudioClipStream::ReuseCachedClip(UnityEngine.AudioClip)
extern void UnityAudioClipStream_ReuseCachedClip_mAC92A6E8654118C890EB08DB3DC9058695E68ACA (void);
// 0x000000ED System.Void Meta.Voice.Audio.UnityAudioClipStream::DestroyCachedClips()
extern void UnityAudioClipStream_DestroyCachedClips_mF2B6EB12076974D99250D612F85B9312780597A2 (void);
// 0x000000EE System.Void Meta.Voice.Audio.UnityAudioClipStream::.cctor()
extern void UnityAudioClipStream__cctor_m44ACBD17555DCBC99F954C8F1629E44D2231DAA1 (void);
// 0x000000EF System.Void Meta.Voice.Audio.UnityAudioClipStream/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_m6ED725B69A5A4C378C6F9795280B6EA440421EC2 (void);
// 0x000000F0 System.Boolean Meta.Voice.Audio.UnityAudioClipStream/<>c__DisplayClass18_0::<GetCachedClip>b__0(UnityEngine.AudioClip)
extern void U3CU3Ec__DisplayClass18_0_U3CGetCachedClipU3Eb__0_m832FA482416909F46C5F5BBB5A8BC901F18B018A (void);
// 0x000000F1 UnityEngine.AudioSource Meta.Voice.Audio.UnityAudioPlayer::get_AudioSource()
extern void UnityAudioPlayer_get_AudioSource_m76C87F5FE98AAC976807D58C829C1B84E38FA2FD (void);
// 0x000000F2 System.Boolean Meta.Voice.Audio.UnityAudioPlayer::get_CloneAudioSource()
extern void UnityAudioPlayer_get_CloneAudioSource_mEC4BE8203510B04D1C0CFCDDA9FB12AA747B8289 (void);
// 0x000000F3 System.Void Meta.Voice.Audio.UnityAudioPlayer::Init()
extern void UnityAudioPlayer_Init_mB1AEECDEAC748734376BDFE27163FE128FC3CEEF (void);
// 0x000000F4 System.String Meta.Voice.Audio.UnityAudioPlayer::GetPlaybackErrors()
extern void UnityAudioPlayer_GetPlaybackErrors_m35B474A01A911FBA39285157A77AA0562CD280D6 (void);
// 0x000000F5 System.Void Meta.Voice.Audio.UnityAudioPlayer::Play(System.Int32)
extern void UnityAudioPlayer_Play_m0ECDA07FF60C7C99615E7B8CA537FCF67077A7C5 (void);
// 0x000000F6 System.Boolean Meta.Voice.Audio.UnityAudioPlayer::get_IsPlaying()
extern void UnityAudioPlayer_get_IsPlaying_mE711270AB00B40A45415F1BC883962011DC659F5 (void);
// 0x000000F7 System.Int32 Meta.Voice.Audio.UnityAudioPlayer::get_ElapsedSamples()
extern void UnityAudioPlayer_get_ElapsedSamples_m7A45AB9CB3C31F9F84C510FC0FE153EB1160A74D (void);
// 0x000000F8 System.Void Meta.Voice.Audio.UnityAudioPlayer::Pause()
extern void UnityAudioPlayer_Pause_mF8CE0AED6D6E5FE6203B765BA46FF620E3D47C97 (void);
// 0x000000F9 System.Void Meta.Voice.Audio.UnityAudioPlayer::Resume()
extern void UnityAudioPlayer_Resume_mBD5274C36F8367FCD54EED8E5CF43310AA61082A (void);
// 0x000000FA System.Void Meta.Voice.Audio.UnityAudioPlayer::Stop()
extern void UnityAudioPlayer_Stop_m4A90A8A48EE2A27FC15B28A8538A29D16C49DF8D (void);
// 0x000000FB System.Void Meta.Voice.Audio.UnityAudioPlayer::.ctor()
extern void UnityAudioPlayer__ctor_m9D685C44BBC12A09089AB7A9F450EFE9652B04EA (void);
// 0x000000FC System.Void Meta.Voice.Audio.UnityAudioSystem::Awake()
extern void UnityAudioSystem_Awake_m5FE6EEC9E957AA7CB3C67B1CC708421662BEC544 (void);
// 0x000000FD System.Void Meta.Voice.Audio.UnityAudioSystem::OnDestroy()
extern void UnityAudioSystem_OnDestroy_m81C90ABFDC24F72959D8B2B05D4056675B8637AF (void);
// 0x000000FE Meta.Voice.Audio.IAudioClipStream Meta.Voice.Audio.UnityAudioSystem::GetAudioClipStream(System.Int32,System.Int32)
extern void UnityAudioSystem_GetAudioClipStream_m7E3C311A100B47418389119F6EBCDD388B51BF43 (void);
// 0x000000FF Meta.Voice.Audio.IAudioPlayer Meta.Voice.Audio.UnityAudioSystem::GetAudioPlayer(UnityEngine.GameObject)
extern void UnityAudioSystem_GetAudioPlayer_m691C7D442141E59F242787B76EDC407E9A8122E7 (void);
// 0x00000100 System.Void Meta.Voice.Audio.UnityAudioSystem::.ctor()
extern void UnityAudioSystem__ctor_m18D54AAFB9A2CBFF373A14C6ED34FBF0A07A7E3C (void);
// 0x00000101 System.String Meta.WitAi.IWitRequestEndpointInfo::get_UriScheme()
// 0x00000102 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Authority()
// 0x00000103 System.Int32 Meta.WitAi.IWitRequestEndpointInfo::get_Port()
// 0x00000104 System.String Meta.WitAi.IWitRequestEndpointInfo::get_WitApiVersion()
// 0x00000105 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Message()
// 0x00000106 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Speech()
// 0x00000107 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Dictation()
// 0x00000108 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Synthesize()
// 0x00000109 System.String Meta.WitAi.IWitRequestEndpointInfo::get_Event()
// 0x0000010A System.String Meta.WitAi.IWitRequestEndpointInfo::get_Converse()
// 0x0000010B System.String Meta.WitAi.IWitRequestConfiguration::GetConfigurationId()
// 0x0000010C System.String Meta.WitAi.IWitRequestConfiguration::GetApplicationId()
// 0x0000010D Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.IWitRequestConfiguration::GetApplicationInfo()
// 0x0000010E Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] Meta.WitAi.IWitRequestConfiguration::GetConfigData()
// 0x0000010F Meta.WitAi.IWitRequestEndpointInfo Meta.WitAi.IWitRequestConfiguration::GetEndpointInfo()
// 0x00000110 System.String Meta.WitAi.IWitRequestConfiguration::GetClientAccessToken()
// 0x00000111 System.Void Meta.WitAi.IWitRequestConfiguration::UpdateDataAssets()
// 0x00000112 System.Void Meta.WitAi.ComponentExtensions::Copy(T,T)
// 0x00000113 System.Void Meta.WitAi.ComponentExtensions::PreloadCopyData(T)
// 0x00000114 Meta.WitAi.ComponentExtensions/ComponentCopyData Meta.WitAi.ComponentExtensions::GetCopyData(T)
// 0x00000115 System.Boolean Meta.WitAi.ComponentExtensions::IsObsolete(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
extern void ComponentExtensions_IsObsolete_mF3FBC6E62F70BB30162C8D526534139E4282F22A (void);
// 0x00000116 System.Boolean Meta.WitAi.ComponentExtensions::HasCustomAttributes(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
// 0x00000117 System.Void Meta.WitAi.ComponentExtensions::.cctor()
extern void ComponentExtensions__cctor_mE9EBB8123961C3141C841F969A2C540CC000BC96 (void);
// 0x00000118 Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
extern void CoroutineUtility_StartCoroutine_mC6A524CF8F8F56300569C6B76539FD99F4A4D8DA (void);
// 0x00000119 Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::GetPerformer()
extern void CoroutineUtility_GetPerformer_mA65A748BA60B218963E01911CF1D4C1FE416E784 (void);
// 0x0000011A System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::get_IsRunning()
extern void CoroutinePerformer_get_IsRunning_m19E6CECFFAC5B06651F463FEF2C63C5394FFE227 (void);
// 0x0000011B System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::set_IsRunning(System.Boolean)
extern void CoroutinePerformer_set_IsRunning_m897C40657C00115C43D53CBEF4C3143B9A9B23A1 (void);
// 0x0000011C System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Awake()
extern void CoroutinePerformer_Awake_m903BD197AF349AA78E509053AC670749F15E4E64 (void);
// 0x0000011D System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineBegin(System.Collections.IEnumerator,System.Boolean)
extern void CoroutinePerformer_CoroutineBegin_m168F0759DFBF0128EE9C1BB3855D5EE5C12E2F32 (void);
// 0x0000011E System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateEnumerator()
extern void CoroutinePerformer_CoroutineIterateEnumerator_m110D9685700AD6EA9D7FD07C9D87CFF46F6772D0 (void);
// 0x0000011F System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Update()
extern void CoroutinePerformer_Update_mF318B1FD0CA4DF28A2AE2F05A3D78461EDE43B5F (void);
// 0x00000120 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateUpdate()
extern void CoroutinePerformer_CoroutineIterateUpdate_m6E65F4FACA2E969CC66A5FF3BC6A7FADC5C1F944 (void);
// 0x00000121 System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::MoveNext(System.Collections.IEnumerator)
extern void CoroutinePerformer_MoveNext_m79ADEA3A1DFA04FCB54C5812BD0BF230052C4A49 (void);
// 0x00000122 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::OnDestroy()
extern void CoroutinePerformer_OnDestroy_m51550C2552E781808BB4A6ED7CC3D5C241B248B7 (void);
// 0x00000123 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
extern void CoroutinePerformer_CoroutineCancel_m51E365ADABD833BDC0ED8020BF6400F3D87A3E14 (void);
// 0x00000124 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
extern void CoroutinePerformer_CoroutineComplete_mAD804B2B7CCCF5FD9B27548D3AE9A03DC6589E12 (void);
// 0x00000125 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineUnload()
extern void CoroutinePerformer_CoroutineUnload_mB36A94A478413E587602AEF7801242E27CC57041 (void);
// 0x00000126 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::.ctor()
extern void CoroutinePerformer__ctor_m38757CB7375B7289938A5B9381AEB2321E4794E9 (void);
// 0x00000127 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::.ctor(System.Int32)
extern void U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m004DE712531EB1CC04344B1CF1FC4D087B69560F (void);
// 0x00000128 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.IDisposable.Dispose()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mADE839050C9C4523150F56B0A6D34D437A44BA21 (void);
// 0x00000129 System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::MoveNext()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m4389ECBDACF6356F0675DDC17FBBF3ACA9BE2BE6 (void);
// 0x0000012A System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFEED8F504F0EB8227AB65BC8FA0D346D86CA6B2 (void);
// 0x0000012B System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.Reset()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mF0CD85E8E99747845372CCE5C8A0399A09401B10 (void);
// 0x0000012C System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_m32F9100BB3E02E28735715AB1CA4C656A43E8C84 (void);
// 0x0000012D System.Boolean Meta.WitAi.EnumerableExtensions::Equivalent(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000012E Meta.WitAi.ThreadUtility/ThreadPerformer`1<T> Meta.WitAi.ThreadUtility::PerformInBackground(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x0000012F System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::get_IsRunning()
// 0x00000130 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::set_IsRunning(System.Boolean)
// 0x00000131 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::.ctor(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x00000132 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Work()
// 0x00000133 System.Collections.IEnumerator Meta.WitAi.ThreadUtility/ThreadPerformer`1::WaitForCompletion()
// 0x00000134 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::IsTimedOut(System.DateTime)
// 0x00000135 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Quit()
// 0x00000136 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::.ctor(System.Int32)
// 0x00000137 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.IDisposable.Dispose()
// 0x00000138 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::MoveNext()
// 0x00000139 System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x0000013A System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.Reset()
// 0x0000013B System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.get_Current()
// 0x0000013C System.Collections.Generic.List`1<System.Type> Meta.WitAi.TypeExtensions::GetTypes(System.Func`2<System.Type,System.Boolean>,System.Boolean)
extern void TypeExtensions_GetTypes_m38A26AEF5F72C1C2F4C725C3ADA8BFD15D5A71B4 (void);
// 0x0000013D System.Collections.Generic.List`1<System.Type> Meta.WitAi.TypeExtensions::GetSubclassTypes(System.Type,System.Boolean)
extern void TypeExtensions_GetSubclassTypes_mF061C7C0A6604A6C8B014C9E00EDD2A9DBEE3805 (void);
// 0x0000013E System.Void Meta.WitAi.TypeExtensions/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mB25CBCD569A1ED69A3B3BD84432B2F6C261A3E81 (void);
// 0x0000013F System.Boolean Meta.WitAi.TypeExtensions/<>c__DisplayClass1_0::<GetSubclassTypes>b__0(System.Type)
extern void U3CU3Ec__DisplayClass1_0_U3CGetSubclassTypesU3Eb__0_m61363D00460DAFCB3F02B4A1F94811FC9032483E (void);
// 0x00000140 System.Void Meta.WitAi.UnityObjectExtensions::DestroySafely(UnityEngine.Object)
extern void UnityObjectExtensions_DestroySafely_mAC99596C6A3A1AAA11A6DA3D49CA77BDF8617C7C (void);
// 0x00000141 System.Boolean Meta.WitAi.VLog::get_SuppressLogs()
extern void VLog_get_SuppressLogs_mB5686D97E2EB228763D2DC4CADFF0ACA511F8F55 (void);
// 0x00000142 System.Void Meta.WitAi.VLog::set_SuppressLogs(System.Boolean)
extern void VLog_set_SuppressLogs_mA3B99720B9F63DE020E90B04C7AEA49A1C059894 (void);
// 0x00000143 System.Void Meta.WitAi.VLog::add_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel>)
extern void VLog_add_OnPreLog_m37617FCD4905F68D1FA0B1BB3127FE5FEE245818 (void);
// 0x00000144 System.Void Meta.WitAi.VLog::remove_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel>)
extern void VLog_remove_OnPreLog_mA05C5088E8016CBB863A9695EC5BB1C7953BEFF1 (void);
// 0x00000145 System.Void Meta.WitAi.VLog::I(System.Object)
extern void VLog_I_m302D9E938513C21B2DBBCB0E94EADE3AD8D08BBF (void);
// 0x00000146 System.Void Meta.WitAi.VLog::I(System.String,System.Object)
extern void VLog_I_m0B6BE0B6A2B46C602FD1730B8404B57DB8B98901 (void);
// 0x00000147 System.Void Meta.WitAi.VLog::D(System.Object)
extern void VLog_D_m98CADFAD363A33C07CAB1B3C3B1483202354409C (void);
// 0x00000148 System.Void Meta.WitAi.VLog::D(System.String,System.Object)
extern void VLog_D_m22D024A880AB2C09ED50FD5B585FFE3FBF76452E (void);
// 0x00000149 System.Void Meta.WitAi.VLog::W(System.Object)
extern void VLog_W_m878B376CCE791D170CA238533BBD3778475A8594 (void);
// 0x0000014A System.Void Meta.WitAi.VLog::W(System.String,System.Object)
extern void VLog_W_mCFEEAAFD9789EBB80654AE9300C547E32E8DB160 (void);
// 0x0000014B System.Void Meta.WitAi.VLog::E(System.Object)
extern void VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137 (void);
// 0x0000014C System.Void Meta.WitAi.VLog::E(System.String,System.Object)
extern void VLog_E_mBF56658B4A3B33A173A0A8274AF1859BEC8A6234 (void);
// 0x0000014D System.Void Meta.WitAi.VLog::Log(Meta.WitAi.VLogLevel,System.String,System.Object)
extern void VLog_Log_m21BE9C4162A06D4D2553F006DE394ACC89445026 (void);
// 0x0000014E System.String Meta.WitAi.VLog::GetCallingCategory()
extern void VLog_GetCallingCategory_mFDC3C83B2A2E29262CB49F4FEAD309DEA248BA8A (void);
// 0x0000014F System.Void Meta.WitAi.VLog::WrapWithCallingLink(System.Text.StringBuilder,System.Int32)
extern void VLog_WrapWithCallingLink_m97EC7EA1B2A945D92078CCE7BC1B416E7B172357 (void);
// 0x00000150 System.Void Meta.WitAi.VLog::WrapWithLogColor(System.Text.StringBuilder,System.Int32,Meta.WitAi.VLogLevel)
extern void VLog_WrapWithLogColor_m323CBFAC168142F56D6539963A62757FA8B7D678 (void);
// 0x00000151 Meta.WitAi.Speech.VoiceSpeechEvents Meta.WitAi.Speech.ISpeechEventProvider::get_SpeechEvents()
// 0x00000152 System.Void Meta.WitAi.Speech.VoiceTextEvent::.ctor()
extern void VoiceTextEvent__ctor_mE0747CF9F23D10DA7A0BB7952A84666AC6FD7D01 (void);
// 0x00000153 System.Void Meta.WitAi.Speech.VoiceAudioEvent::.ctor()
extern void VoiceAudioEvent__ctor_mA0ABFB2BE4ED1EFF6FAD547B13FF59767177180F (void);
// 0x00000154 System.Void Meta.WitAi.Speech.VoiceSpeechEvents::.ctor()
extern void VoiceSpeechEvents__ctor_m994E6167A09C56B239B06AE6423F7E303CFFC2DF (void);
// 0x00000155 Meta.Voice.Audio.IAudioClipStream Meta.WitAi.Requests.AudioStreamHandler::get_ClipStream()
extern void AudioStreamHandler_get_ClipStream_m62450AB763D00767F9EAA7383A69E8501E37FCDE (void);
// 0x00000156 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_ClipStream(Meta.Voice.Audio.IAudioClipStream)
extern void AudioStreamHandler_set_ClipStream_mB506418D06F14A579C7B51CE2CBBCE9A42F5B7BF (void);
// 0x00000157 Meta.WitAi.Requests.AudioStreamDecodeType Meta.WitAi.Requests.AudioStreamHandler::get_DecodeType()
extern void AudioStreamHandler_get_DecodeType_m5A4CC3EA0FBB05E1FA0B164183686C82B31ED9A3 (void);
// 0x00000158 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_DecodeType(Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_set_DecodeType_m8281FE262708566E5BB1A8C91DE750196D15DE7F (void);
// 0x00000159 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamReady()
extern void AudioStreamHandler_get_IsStreamReady_mFD9B02008ABEB7BF1837157D604F45FFAA127AA8 (void);
// 0x0000015A System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamReady(System.Boolean)
extern void AudioStreamHandler_set_IsStreamReady_m350DCAE21E48AE68DF27BCB8DDFE86F813DAE095 (void);
// 0x0000015B System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamComplete()
extern void AudioStreamHandler_get_IsStreamComplete_m1A099C37024126D10D8094BC3E36DA58C627B086 (void);
// 0x0000015C System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamComplete(System.Boolean)
extern void AudioStreamHandler_set_IsStreamComplete_mF41DBBC75E16C58EE528B4ACE8BFBA9B91CD922D (void);
// 0x0000015D System.Void Meta.WitAi.Requests.AudioStreamHandler::.ctor(Meta.Voice.Audio.IAudioClipStream,UnityEngine.AudioType)
extern void AudioStreamHandler__ctor_m20B7534A0E744500CB85C3B71E442E9BA0D7E595 (void);
// 0x0000015E System.Void Meta.WitAi.Requests.AudioStreamHandler::ReceiveContentLengthHeader(System.UInt64)
extern void AudioStreamHandler_ReceiveContentLengthHeader_m7E8E3C8E3FAC43D6E4406911BE5A3BB43379FBE2 (void);
// 0x0000015F System.Boolean Meta.WitAi.Requests.AudioStreamHandler::ReceiveData(System.Byte[],System.Int32)
extern void AudioStreamHandler_ReceiveData_mA88E9D02BBCDDBB4228BD7A80218D507D01B2F66 (void);
// 0x00000160 System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeData(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeData_mE0DE760485C5464BD53DDC7DB6FEC0575D874499 (void);
// 0x00000161 System.Void Meta.WitAi.Requests.AudioStreamHandler::OnDecodeComplete(System.Single[],System.String)
extern void AudioStreamHandler_OnDecodeComplete_mDD5A5DFDACAFADB45BEE75698B22DFF478A081EC (void);
// 0x00000162 System.String Meta.WitAi.Requests.AudioStreamHandler::GetText()
extern void AudioStreamHandler_GetText_m668ED264DD68BB9E68705D89A2411084CE7EA625 (void);
// 0x00000163 System.Single Meta.WitAi.Requests.AudioStreamHandler::GetProgress()
extern void AudioStreamHandler_GetProgress_m1BE37456DBD89F42EBB602EAD1C276384B569C39 (void);
// 0x00000164 System.Void Meta.WitAi.Requests.AudioStreamHandler::CompleteContent()
extern void AudioStreamHandler_CompleteContent_mCDF44FC48EBAFF5CAD189271196AF3556658425F (void);
// 0x00000165 System.Void Meta.WitAi.Requests.AudioStreamHandler::TryToFinalize()
extern void AudioStreamHandler_TryToFinalize_m426998AB8F44729E43EBEE0E8059F95FEB8977A4 (void);
// 0x00000166 System.Collections.IEnumerator Meta.WitAi.Requests.AudioStreamHandler::FinalWait()
extern void AudioStreamHandler_FinalWait_m4A9AD04D0E82EFE6A6B194A11976A8A3DB1E265E (void);
// 0x00000167 System.Void Meta.WitAi.Requests.AudioStreamHandler::CleanUp()
extern void AudioStreamHandler_CleanUp_m7A0E7E65A342223E16CD572779EADE88CE6D0D6D (void);
// 0x00000168 Meta.WitAi.Requests.AudioStreamDecodeType Meta.WitAi.Requests.AudioStreamHandler::GetDecodeType(UnityEngine.AudioType)
extern void AudioStreamHandler_GetDecodeType_m00A7EFD9302101258D38ED464DD481454BCFB4E4 (void);
// 0x00000169 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::CanDecodeType(UnityEngine.AudioType)
extern void AudioStreamHandler_CanDecodeType_mAB81DD9FA928996251FB4B780FF0E46C35CF8C5E (void);
// 0x0000016A UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawData(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromRawData_m597533D5DC11A3DC052EB617F4B6745F406B99F1 (void);
// 0x0000016B System.Void Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawDataAsync(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32,System.Action`2<UnityEngine.AudioClip,System.String>)
extern void AudioStreamHandler_GetClipFromRawDataAsync_m7BE27E9F2D79B39504DA1FA92A62FCF33E48DBAD (void);
// 0x0000016C System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeAudio(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_DecodeAudio_mE8FBDF2FD45CD0469D38E51FB1CD940B406AD0CD (void);
// 0x0000016D UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromSamples(System.Single[],System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromSamples_mB36D2A8134236C829BE96CF0FBCB9D6D778B322F (void);
// 0x0000016E System.Int32 Meta.WitAi.Requests.AudioStreamHandler::GetClipSamplesFromContentLength(System.UInt64,Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_GetClipSamplesFromContentLength_m6F66907B465C66599CF4F4A79DB9CFBE2CDA897E (void);
// 0x0000016F System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodePCM16(System.Byte[])
extern void AudioStreamHandler_DecodePCM16_mC29F768FB2CA4680BE93AF3AF4CD36A2E8896B18 (void);
// 0x00000170 System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeChunkPCM16(System.Byte[],System.Int32,System.Boolean&,System.Byte[]&)
extern void AudioStreamHandler_DecodeChunkPCM16_mE113FF92DE467932ADC379244B784560DC21EDD6 (void);
// 0x00000171 System.Single Meta.WitAi.Requests.AudioStreamHandler::DecodeSamplePCM16(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeSamplePCM16_mD01185ABA1B2F75D43CED30528D88470D86C6707 (void);
// 0x00000172 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m15DBAE703278CF712564A3D14EAC8E0469A51163 (void);
// 0x00000173 System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass24_0::<ReceiveData>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CReceiveDataU3Eb__0_m35617410658D25E262C651C8C752CA685D91FEA0 (void);
// 0x00000174 System.Void Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::.ctor(System.Int32)
extern void U3CFinalWaitU3Ed__31__ctor_m212799CA8E4E5A44C797F675CEEA8120C1DF32F3 (void);
// 0x00000175 System.Void Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::System.IDisposable.Dispose()
extern void U3CFinalWaitU3Ed__31_System_IDisposable_Dispose_m3D28D1E40D75EE5222DE2B5109015D34474E16F9 (void);
// 0x00000176 System.Boolean Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::MoveNext()
extern void U3CFinalWaitU3Ed__31_MoveNext_m8A9414407B7E249EEBFE3E93F15756C66F3AEB2B (void);
// 0x00000177 System.Object Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CFinalWaitU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m70ED9EFCF3392061D189636A7D0DB6CCA7A21891 (void);
// 0x00000178 System.Void Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::System.Collections.IEnumerator.Reset()
extern void U3CFinalWaitU3Ed__31_System_Collections_IEnumerator_Reset_m623BFF9D9C87BCD72EC4F2B237AC53F9ED634E08 (void);
// 0x00000179 System.Object Meta.WitAi.Requests.AudioStreamHandler/<FinalWait>d__31::System.Collections.IEnumerator.get_Current()
extern void U3CFinalWaitU3Ed__31_System_Collections_IEnumerator_get_Current_m584A1CBCB755AEF7C75C9C6BC60CBB75376191E0 (void);
// 0x0000017A System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass36_0::.ctor()
extern void U3CU3Ec__DisplayClass36_0__ctor_mF63B7DAB4009FEC5422D6774FFBEF5B64C0E569E (void);
// 0x0000017B System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass36_0::<GetClipFromRawDataAsync>b__0()
extern void U3CU3Ec__DisplayClass36_0_U3CGetClipFromRawDataAsyncU3Eb__0_mF9A721CFA84DD05E727519D5D863FC9EF4BFE30A (void);
// 0x0000017C System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass36_0::<GetClipFromRawDataAsync>b__1(System.Single[],System.String)
extern void U3CU3Ec__DisplayClass36_0_U3CGetClipFromRawDataAsyncU3Eb__1_mB02DB685A553D81F9E8BAE922676718B4C404AC1 (void);
// 0x0000017D System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamReady()
// 0x0000017E System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamComplete()
// 0x0000017F System.Int32 Meta.WitAi.Requests.VRequest::get_Timeout()
extern void VRequest_get_Timeout_m0C2A0B6850A5377DF0439A1BE30E3FCD98FCD225 (void);
// 0x00000180 System.Void Meta.WitAi.Requests.VRequest::set_Timeout(System.Int32)
extern void VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B (void);
// 0x00000181 System.Boolean Meta.WitAi.Requests.VRequest::get_IsPerforming()
extern void VRequest_get_IsPerforming_mB8C0D61A2D99A3CE2D4CF74C89D82827BD239393 (void);
// 0x00000182 System.Void Meta.WitAi.Requests.VRequest::set_IsPerforming(System.Boolean)
extern void VRequest_set_IsPerforming_m8A46B5029B49226F342D87B99C5818AFA83E2137 (void);
// 0x00000183 System.Boolean Meta.WitAi.Requests.VRequest::get_IsComplete()
extern void VRequest_get_IsComplete_m81474D77CDD9BDFEDDF752B12A81D0794FB1BE0C (void);
// 0x00000184 System.Void Meta.WitAi.Requests.VRequest::set_IsComplete(System.Boolean)
extern void VRequest_set_IsComplete_mC5583B96C76FD15B52AE82B4D055B26783B9B9B1 (void);
// 0x00000185 System.Int32 Meta.WitAi.Requests.VRequest::get_ResponseCode()
extern void VRequest_get_ResponseCode_mD26D66C2F4A4998F1A95B078EE48A9709FDD8CA2 (void);
// 0x00000186 System.Void Meta.WitAi.Requests.VRequest::set_ResponseCode(System.Int32)
extern void VRequest_set_ResponseCode_m0FA92BCE548EB9811C8941EBFE1D0B8DE4E8F42C (void);
// 0x00000187 System.Single Meta.WitAi.Requests.VRequest::get_UploadProgress()
extern void VRequest_get_UploadProgress_m571C4B1E0791B34CE19F3462639D4E60973B441A (void);
// 0x00000188 System.Void Meta.WitAi.Requests.VRequest::set_UploadProgress(System.Single)
extern void VRequest_set_UploadProgress_m5AB82D06DF9B536B91AFFA6CC51450FC850EB633 (void);
// 0x00000189 System.Single Meta.WitAi.Requests.VRequest::get_DownloadProgress()
extern void VRequest_get_DownloadProgress_mD1CEE1319E3DDD8138561CC86A419B1EEFF5409E (void);
// 0x0000018A System.Void Meta.WitAi.Requests.VRequest::set_DownloadProgress(System.Single)
extern void VRequest_set_DownloadProgress_mB370255DF8D2CFE146898455AEB0F3007BF35427 (void);
// 0x0000018B System.Void Meta.WitAi.Requests.VRequest::.ctor(Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
extern void VRequest__ctor_mDC19CBE77B6651810E40C0DBE5FB0BD854E51A4F (void);
// 0x0000018C System.Boolean Meta.WitAi.Requests.VRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>)
extern void VRequest_Request_m85FFE686C39EA999028605E6D9A39856D08932D1 (void);
// 0x0000018D System.String Meta.WitAi.Requests.VRequest::CleanUrl(System.String)
extern void VRequest_CleanUrl_m5876C13024534312528195DB22E81CD8C06D7430 (void);
// 0x0000018E System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VRequest::GetHeaders()
extern void VRequest_GetHeaders_m5DE012C50EDAA025BCE7EB3839E3147642D055A0 (void);
// 0x0000018F System.Collections.IEnumerator Meta.WitAi.Requests.VRequest::PerformUpdate()
extern void VRequest_PerformUpdate_mAC5A928ACD1D56ECF2FB316E604A6A0381927567 (void);
// 0x00000190 System.Void Meta.WitAi.Requests.VRequest::Begin()
extern void VRequest_Begin_m3863AA40526B8AD5F9222AEBE286772BF2833075 (void);
// 0x00000191 System.Boolean Meta.WitAi.Requests.VRequest::IsRequestComplete()
extern void VRequest_IsRequestComplete_m490F7D4B8B881C967A98BE2C9D2E7A5072728474 (void);
// 0x00000192 System.Void Meta.WitAi.Requests.VRequest::Complete()
extern void VRequest_Complete_mAD054B7711A37664EB212EF1DAA32CDAA09E3287 (void);
// 0x00000193 System.Void Meta.WitAi.Requests.VRequest::Cancel()
extern void VRequest_Cancel_mC26F1718B30082B2F939CE3898AF4481F897FDB2 (void);
// 0x00000194 System.Void Meta.WitAi.Requests.VRequest::Unload()
extern void VRequest_Unload_mC59B7F890F95E41EA11D4165DF259F5CF2AF54EA (void);
// 0x00000195 System.String Meta.WitAi.Requests.VRequest::GetSpecificRequestError(UnityEngine.Networking.UnityWebRequest)
extern void VRequest_GetSpecificRequestError_mD75843C5873E88CC9B573EE176CD81F66850AE2E (void);
// 0x00000196 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileHeaders(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void VRequest_RequestFileHeaders_m11ECE714308E5E494427593E2C70E18217114844 (void);
// 0x00000197 System.Boolean Meta.WitAi.Requests.VRequest::RequestFile(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Byte[]>)
extern void VRequest_RequestFile_mA51EDF945255BF5049BD6677CF47921A94D38895 (void);
// 0x00000198 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileDownload(System.String,UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
extern void VRequest_RequestFileDownload_m274EAE905EEC77642885B2E4FEC9BEBFF4D8DBB0 (void);
// 0x00000199 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileExists(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
extern void VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778 (void);
// 0x0000019A System.Boolean Meta.WitAi.Requests.VRequest::RequestText(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.String>)
extern void VRequest_RequestText_mD3DFDEA98193AD3770EDEC1E1C5935BBC12E8F17 (void);
// 0x0000019B System.Boolean Meta.WitAi.Requests.VRequest::RequestJson(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x0000019C System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonGet(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x0000019D System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x0000019E System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x0000019F System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x000001A0 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x000001A1 System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioStream(Meta.Voice.Audio.IAudioClipStream,UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.Voice.Audio.IAudioClipStream>,UnityEngine.AudioType,System.Boolean)
extern void VRequest_RequestAudioStream_mE8662FD6A09644113A9B3B6670FF48EA799C0875 (void);
// 0x000001A2 System.Void Meta.WitAi.Requests.VRequest::OnRequestAudioReady(Meta.Voice.Audio.IAudioClipStream,UnityEngine.AudioType,UnityEngine.Networking.UnityWebRequest,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.Voice.Audio.IAudioClipStream>)
extern void VRequest_OnRequestAudioReady_m1A748DA7DC689A17DD68BCDD079848DC58B4F566 (void);
// 0x000001A3 System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioStream(Meta.Voice.Audio.IAudioClipStream,System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.Voice.Audio.IAudioClipStream>,UnityEngine.AudioType,System.Boolean)
extern void VRequest_RequestAudioStream_mADB34AD83B6C57E4607D970B9DF5DEF7DA024FAC (void);
// 0x000001A4 System.Void Meta.WitAi.Requests.VRequest::.cctor()
extern void VRequest__cctor_mB37A1B93A82DF1DFD82959711105755A3B817510 (void);
// 0x000001A5 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F (void);
// 0x000001A6 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::Invoke(System.Single)
extern void RequestProgressDelegate_Invoke_m26170A39DD5E2DBC99E324679C632FDE0AFEE46C (void);
// 0x000001A7 System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void RequestProgressDelegate_BeginInvoke_m384DB7AB3E11756EFC97B3AB16D850BC3D5BCE97 (void);
// 0x000001A8 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::EndInvoke(System.IAsyncResult)
extern void RequestProgressDelegate_EndInvoke_m1041D2E110074E4C4B527C17CFC53D015A0FB882 (void);
// 0x000001A9 System.Void Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestFirstResponseDelegate__ctor_mE40E7F87A43B270914A1D14E8C0BCA8A9115F384 (void);
// 0x000001AA System.Void Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate::Invoke()
extern void RequestFirstResponseDelegate_Invoke_m044BAD8188CFF565AE6336EA21E470178E5DEFC4 (void);
// 0x000001AB System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void RequestFirstResponseDelegate_BeginInvoke_mD9301894923440C7DC16598949CEFFC89965F0C6 (void);
// 0x000001AC System.Void Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate::EndInvoke(System.IAsyncResult)
extern void RequestFirstResponseDelegate_EndInvoke_mD9E0F99AC9C9E982D6C664CCABDAA5C57C974465 (void);
// 0x000001AD System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::.ctor(System.Object,System.IntPtr)
// 0x000001AE System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::Invoke(TResult,System.String)
// 0x000001AF System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::BeginInvoke(TResult,System.String,System.AsyncCallback,System.Object)
// 0x000001B0 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::EndInvoke(System.IAsyncResult)
// 0x000001B1 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::.ctor(System.Int32)
extern void U3CPerformUpdateU3Ed__38__ctor_m3E56DFB442A7E29493A483E5C7ACEE49581C3CE0 (void);
// 0x000001B2 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::System.IDisposable.Dispose()
extern void U3CPerformUpdateU3Ed__38_System_IDisposable_Dispose_mB750ADDCB683933554D31EB955EC899236C11D6B (void);
// 0x000001B3 System.Boolean Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::MoveNext()
extern void U3CPerformUpdateU3Ed__38_MoveNext_m9B39CA65D1DB63829695AF6FDFB8B1683A0F4E9D (void);
// 0x000001B4 System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CPerformUpdateU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF86839714DA0BEC1F053CE68E91683930FB42E6A (void);
// 0x000001B5 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::System.Collections.IEnumerator.Reset()
extern void U3CPerformUpdateU3Ed__38_System_Collections_IEnumerator_Reset_m446475F527617D36A0C4085BED3317CE19F6E517 (void);
// 0x000001B6 System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__38::System.Collections.IEnumerator.get_Current()
extern void U3CPerformUpdateU3Ed__38_System_Collections_IEnumerator_get_Current_m491D2AC4FD254B4E6CBBC56FCCF73BD5A477E249 (void);
// 0x000001B7 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass45_0::.ctor()
extern void U3CU3Ec__DisplayClass45_0__ctor_mB8F9E04B4593C5D965BD5D7D180D86DA2BBFCCC5 (void);
// 0x000001B8 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass45_0::<RequestFileHeaders>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass45_0_U3CRequestFileHeadersU3Eb__0_m7FB309DBDF3D638A2E758D46BC85CD7E1961A471 (void);
// 0x000001B9 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass46_0::.ctor()
extern void U3CU3Ec__DisplayClass46_0__ctor_m513FA4977A847441270E2992044037A68EF4D3A1 (void);
// 0x000001BA System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass46_0::<RequestFile>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass46_0_U3CRequestFileU3Eb__0_m404B7359322D56934D49129A11E6A15CBE5FEB2F (void);
// 0x000001BB System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass47_0::.ctor()
extern void U3CU3Ec__DisplayClass47_0__ctor_mCE6ED2BBE05721217B37C3372598E80270FE31E7 (void);
// 0x000001BC System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass47_0::<RequestFileDownload>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass47_0_U3CRequestFileDownloadU3Eb__0_mCC7326E88749CF128B0B090A910FD86302806755 (void);
// 0x000001BD System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m5AADCC155C32A110B95DE9CFCA3D6B8CB7FA1EED (void);
// 0x000001BE System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::<RequestFileExists>b__0(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern void U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__0_m954A57DAE6E07A06BEE23EB5815C43C516ED04AD (void);
// 0x000001BF System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::<RequestFileExists>b__1(System.Single)
extern void U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__1_m1F9D77FDFF99F9F9972C8B60D8F931B5CB844468 (void);
// 0x000001C0 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::<RequestFileExists>b__2(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__2_mCA400BC2CD8948E8AF88CE1AFA9E31F585DC34E7 (void);
// 0x000001C1 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::.ctor()
extern void U3CU3Ec__DisplayClass49_0__ctor_m3A082C4F50DDE27AC5F409D2CAE40F3989575CE1 (void);
// 0x000001C2 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::<RequestText>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass49_0_U3CRequestTextU3Eb__0_mDDEC60387A083E5B9529EF6894B219F266957FAF (void);
// 0x000001C3 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_0`1::.ctor()
// 0x000001C4 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_0`1::<RequestJson>b__0(System.String,System.String)
// 0x000001C5 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_1`1::.ctor()
// 0x000001C6 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_1`1::<RequestJson>b__1(TData,System.Boolean)
// 0x000001C7 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass56_0::.ctor()
extern void U3CU3Ec__DisplayClass56_0__ctor_m7DF7EC48CF0039262FE7B05E8EB67F01FDB115E5 (void);
// 0x000001C8 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass56_0::<RequestAudioStream>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass56_0_U3CRequestAudioStreamU3Eb__0_m50FA299F8A06B0C4F35BFB535051E382A983DA16 (void);
// 0x000001C9 System.Void Meta.WitAi.Requests.WitMessageVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
extern void WitMessageVRequest__ctor_m5E94E413CE0B9A512F3B3974771C8977E1E26A40 (void);
// 0x000001CA System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>)
extern void WitMessageVRequest_MessageRequest_m2F3AA4A4F7EAB17F685F3F07F78AB085BDB3345A (void);
// 0x000001CB System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>)
extern void WitMessageVRequest_MessageRequest_m7C6ECF4242EF48C9F51455028BD9C62F41DBCAC5 (void);
// 0x000001CC System.String Meta.WitAi.Requests.WitTTSVRequest::get_TextToSpeak()
extern void WitTTSVRequest_get_TextToSpeak_mA15D8D46EF12336766136F83E4590435781D4CCC (void);
// 0x000001CD System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitTTSVRequest::get_TtsData()
extern void WitTTSVRequest_get_TtsData_m0AD368BB277724D5A48FC65AAE417DAF61378EF6 (void);
// 0x000001CE Meta.WitAi.Requests.TTSWitAudioType Meta.WitAi.Requests.WitTTSVRequest::get_FileType()
extern void WitTTSVRequest_get_FileType_m80C194BDE25BF6BD1335796F44A81B455844E21A (void);
// 0x000001CF System.Boolean Meta.WitAi.Requests.WitTTSVRequest::get_Stream()
extern void WitTTSVRequest_get_Stream_m4D16C35B9B56B8CB17C99CDE14F981A87251E231 (void);
// 0x000001D0 System.Void Meta.WitAi.Requests.WitTTSVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.TTSWitAudioType,System.Boolean,Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
extern void WitTTSVRequest__ctor_m2398F2E2AEAFA75430F4147E2D09C65B6CA66DA5 (void);
// 0x000001D1 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitTTSVRequest::GetHeaders()
extern void WitTTSVRequest_GetHeaders_mA5024FDF9CE31B0EBEA48A2D65E61018A0BD5C63 (void);
// 0x000001D2 System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestStream(Meta.Voice.Audio.IAudioClipStream,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.Voice.Audio.IAudioClipStream>)
extern void WitTTSVRequest_RequestStream_mD9470A035BD49AA5F4BFE5B6E31338E7D2B7D749 (void);
// 0x000001D3 System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestDownload(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
extern void WitTTSVRequest_RequestDownload_m59BAAFC13A24F4893A87604A09F44701EF8E5423 (void);
// 0x000001D4 System.Void Meta.WitAi.Requests.WitTTSVRequest::EncodePostBytesAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Byte[]>)
extern void WitTTSVRequest_EncodePostBytesAsync_m3B6D887932B4E8BBFFF2C3B891309F8DC0771EB6 (void);
// 0x000001D5 System.Byte[] Meta.WitAi.Requests.WitTTSVRequest::EncodePostData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitTTSVRequest_EncodePostData_m60D2943144682CCAB3E04C9FA4B8043EED960C6F (void);
// 0x000001D6 UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.WitTTSVRequest::GetUnityRequest(Meta.WitAi.Requests.TTSWitAudioType,System.Byte[])
extern void WitTTSVRequest_GetUnityRequest_m6154E4AF121B5AED7D4CBBB5FE05CD535CB432D3 (void);
// 0x000001D7 UnityEngine.AudioType Meta.WitAi.Requests.WitTTSVRequest::GetAudioType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioType_m605529CDB259E2B7EB9145882690FA0E7DD7B8CE (void);
// 0x000001D8 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioMimeType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioMimeType_mC002C95483DAC7DF258474B0250B15E5EA58DCCD (void);
// 0x000001D9 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioExtension_mC14B1B7147E3FF3CFE424F814B1CC16C4BE840B7 (void);
// 0x000001DA System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(UnityEngine.AudioType)
extern void WitTTSVRequest_GetAudioExtension_m813A70EB1A6D77266AADAE5FD3424107783E0984 (void);
// 0x000001DB System.Boolean Meta.WitAi.Requests.WitTTSVRequest::CanStreamAudio(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_CanStreamAudio_mC7B3FD792C123AE72EEC2DA366389B46494241A5 (void);
// 0x000001DC System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m2D8B4428A40980007D423E79001C5CE91A3299C8 (void);
// 0x000001DD System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass14_0::<RequestStream>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass14_0_U3CRequestStreamU3Eb__0_m0D25666D784424CF85830DE163AE59B213062E41 (void);
// 0x000001DE System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m847FD9863B95CD7ECD3AE034828B32AE1FD61455 (void);
// 0x000001DF System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass15_0::<RequestDownload>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass15_0_U3CRequestDownloadU3Eb__0_m1E09C1C4953F36AC619CFC5AF701A85006A61161 (void);
// 0x000001E0 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mDBA69E6D04B1AC0B8536D1F3A882E618AF725C59 (void);
// 0x000001E1 System.Byte[] Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass16_0::<EncodePostBytesAsync>b__0()
extern void U3CU3Ec__DisplayClass16_0_U3CEncodePostBytesAsyncU3Eb__0_m9929B530861961D35A61AB1067199C8AC4939533 (void);
// 0x000001E2 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass16_0::<EncodePostBytesAsync>b__1(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CEncodePostBytesAsyncU3Eb__1_mD4E6CA255DDF19501AEBB38CA7B218351FF0BCE4 (void);
// 0x000001E3 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_add_OnProvideCustomUri_mF94AA11F46BFEE871D7D04E3ED68CF4DDB8B7E09 (void);
// 0x000001E4 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_remove_OnProvideCustomUri_m01C61285C3E5915CAAC8719CA05EDDE211CA8196 (void);
// 0x000001E5 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_add_OnProvideCustomHeaders_mFA918D27C7BEEE5035FCF3B62C4E270C54F596C4 (void);
// 0x000001E6 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_remove_OnProvideCustomHeaders_mAB4ED4E138B013AC94A0E368C65FA362C05EE838 (void);
// 0x000001E7 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_add_OnProvideCustomUserAgent_m12E3F2312E78A9614D8A20203BEE1C9C62AB9D92 (void);
// 0x000001E8 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_remove_OnProvideCustomUserAgent_mC20AD2430F261364DC0840279AD508F4526CB58E (void);
// 0x000001E9 System.String Meta.WitAi.Requests.WitVRequest::get_RequestId()
extern void WitVRequest_get_RequestId_m806FACDF98460F4D0F759421BF47AF325725B6B9 (void);
// 0x000001EA System.Void Meta.WitAi.Requests.WitVRequest::set_RequestId(System.String)
extern void WitVRequest_set_RequestId_mE52FF96D3BE05BB2865B7D380AAC1560EBD0A720 (void);
// 0x000001EB Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::get_Configuration()
extern void WitVRequest_get_Configuration_m249A5C4BF1B892702955A74A30BBFA082E5F124F (void);
// 0x000001EC System.Void Meta.WitAi.Requests.WitVRequest::set_Configuration(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_set_Configuration_mD1B49FF89AD9A4539458E07E1525AAE293A0DCFB (void);
// 0x000001ED System.Void Meta.WitAi.Requests.WitVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean,Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
extern void WitVRequest__ctor_mAA5138697D93B13259C263D1E3D051B04AA0231E (void);
// 0x000001EE System.Uri Meta.WitAi.Requests.WitVRequest::GetUri(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetUri_m2B02986E00CD6AB6903AA77A2418494D1494B468 (void);
// 0x000001EF System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetHeaders()
extern void WitVRequest_GetHeaders_m9E469964828B68DB649BE59D9E53A3C06E68DE05 (void);
// 0x000001F0 System.Boolean Meta.WitAi.Requests.WitVRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>)
extern void WitVRequest_Request_m0B449868267FD3B399A479E380F960A1F819CAC2 (void);
// 0x000001F1 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitGet(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x000001F2 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPost(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x000001F3 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPut(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>)
// 0x000001F4 System.Uri Meta.WitAi.Requests.WitVRequest::GetWitUri(Meta.WitAi.IWitRequestConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetWitUri_mB822F3FFC3812CCE33D818C6A04F57D006BEE3BA (void);
// 0x000001F5 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetWitHeaders(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean)
extern void WitVRequest_GetWitHeaders_m39D7EB5F6FBF4E32309ABC324ED303BD87F7A601 (void);
// 0x000001F6 System.String Meta.WitAi.Requests.WitVRequest::GetAuthorizationHeader(Meta.WitAi.IWitRequestConfiguration,System.Boolean)
extern void WitVRequest_GetAuthorizationHeader_mB026A08B27459DFEDAB239F4EAB1F90A5CCFE7A2 (void);
// 0x000001F7 System.String Meta.WitAi.Requests.WitVRequest::GetUserAgentHeader(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_GetUserAgentHeader_m651C5CC36C2F7B3172A161C3C04B9B387B517A0B (void);
// 0x000001F8 System.Boolean Meta.WitAi.Json.ColorConverter::get_CanRead()
extern void ColorConverter_get_CanRead_m6BA7E1A33F289174197CDC9472504788516030AC (void);
// 0x000001F9 System.Boolean Meta.WitAi.Json.ColorConverter::get_CanWrite()
extern void ColorConverter_get_CanWrite_m2882801C1832AA3433F8862734DFDB2D11F0A8CA (void);
// 0x000001FA System.Boolean Meta.WitAi.Json.ColorConverter::CanConvert(System.Type)
extern void ColorConverter_CanConvert_mF6A94F71611BBCF9ADDCB1D5B7996CD1EF1BE1F8 (void);
// 0x000001FB System.Object Meta.WitAi.Json.ColorConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void ColorConverter_ReadJson_m56167EE71B1F42659EAA4BAED37155C59EA764E5 (void);
// 0x000001FC Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.ColorConverter::WriteJson(System.Object)
extern void ColorConverter_WriteJson_m04D2BEB8964E516512AD8205C500D00DB638ADD0 (void);
// 0x000001FD System.Void Meta.WitAi.Json.ColorConverter::.ctor()
extern void ColorConverter__ctor_m806E5A48DA7D9E1508D2CC8230CB169A38943731 (void);
// 0x000001FE System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanRead()
extern void DateTimeConverter_get_CanRead_m9E90F893D1E98AD77631006DF2338944A1C03670 (void);
// 0x000001FF System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanWrite()
extern void DateTimeConverter_get_CanWrite_mBB56A0BF211282AE3DB9BBD34C199BE213982861 (void);
// 0x00000200 System.Boolean Meta.WitAi.Json.DateTimeConverter::CanConvert(System.Type)
extern void DateTimeConverter_CanConvert_m4C07AB765E9C480554C43C75DB48BA41AB36D742 (void);
// 0x00000201 System.Object Meta.WitAi.Json.DateTimeConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void DateTimeConverter_ReadJson_mD8AFB276D86DDAA360E639895AAB31207823489E (void);
// 0x00000202 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.DateTimeConverter::WriteJson(System.Object)
extern void DateTimeConverter_WriteJson_m5C0BAB79CADD5E5F832057C4E6A9787B86B6622F (void);
// 0x00000203 System.Void Meta.WitAi.Json.DateTimeConverter::.ctor()
extern void DateTimeConverter__ctor_m2EFD9B80003DA80056F01787FB0F697F141DABDD (void);
// 0x00000204 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanRead()
// 0x00000205 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanWrite()
// 0x00000206 System.Boolean Meta.WitAi.Json.HashSetConverter`1::CanConvert(System.Type)
// 0x00000207 System.Object Meta.WitAi.Json.HashSetConverter`1::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
// 0x00000208 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.HashSetConverter`1::WriteJson(System.Object)
// 0x00000209 System.Void Meta.WitAi.Json.HashSetConverter`1::.ctor()
// 0x0000020A System.Boolean Meta.WitAi.Json.IJsonDeserializer::DeserializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000020B System.Boolean Meta.WitAi.Json.IJsonSerializer::SerializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000020C Meta.WitAi.Json.JsonConverter[] Meta.WitAi.Json.JsonConvert::get_DefaultConverters()
extern void JsonConvert_get_DefaultConverters_mEE3CE28EC9281DE82A8CE7615E23AB7097BE1DA5 (void);
// 0x0000020D System.Object Meta.WitAi.Json.JsonConvert::EnsureExists(System.Type,System.Object)
extern void JsonConvert_EnsureExists_mD88536D685EFB4066751AB383AE4A52CC6F6B4FC (void);
// 0x0000020E Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::DeserializeToken(System.String)
extern void JsonConvert_DeserializeToken_m5408524FEE96BA3D2D9479680123B7352881AFB3 (void);
// 0x0000020F System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(System.String,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000210 System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(Meta.WitAi.Json.WitResponseNode,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000211 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000212 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000213 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000214 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000215 System.Object Meta.WitAi.Json.JsonConvert::DeserializeToken(System.Type,System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeToken_m7A94808FA84DC1434257970BAE6801264BBA380F (void);
// 0x00000216 System.Object Meta.WitAi.Json.JsonConvert::DeserializeEnum(System.Type,System.Object,System.String,System.Text.StringBuilder)
extern void JsonConvert_DeserializeEnum_mD031F2A9538CDBC476A0C541B5D1342E8325CBA6 (void);
// 0x00000217 ITEM_TYPE[] Meta.WitAi.Json.JsonConvert::DeserializeArray(System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
// 0x00000218 System.Object Meta.WitAi.Json.JsonConvert::DeserializeClass(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeClass_m5AA8A5A4DB633DFAE9668143A9F94F48DDEA0D97 (void);
// 0x00000219 System.Object Meta.WitAi.Json.JsonConvert::DeserializeDictionary(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeDictionary_m5ED3C147A0573269CB423B7A17B06C2F3DFA046E (void);
// 0x0000021A System.String Meta.WitAi.Json.JsonConvert::SerializeObject(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000021B Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000021C Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(System.Type,System.Object,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeToken_m46591F5D14997EA50CE4232BB7F9315803B50E81 (void);
// 0x0000021D System.Void Meta.WitAi.Json.JsonConvert::SerializeProperty(Meta.WitAi.Json.WitResponseClass,System.Type,System.String,System.Object,Meta.WitAi.Json.JsonPropertyAttribute[],System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeProperty_mB8A7AFD761986C64992A1D78DCAE998460B7C4CD (void);
// 0x0000021E System.Void Meta.WitAi.Json.JsonConvert::.cctor()
extern void JsonConvert__cctor_mEF88425943BD8D174A54D77F1D338BA2C454AA4D (void);
// 0x0000021F System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::.ctor()
// 0x00000220 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__0()
// 0x00000221 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000222 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::.ctor()
// 0x00000223 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__0()
// 0x00000224 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000225 System.Void Meta.WitAi.Json.JsonConvert/<>c::.cctor()
extern void U3CU3Ec__cctor_m047B08CED49EDA7F3EFFAF4F3FF04BE30D496EDF (void);
// 0x00000226 System.Void Meta.WitAi.Json.JsonConvert/<>c::.ctor()
extern void U3CU3Ec__ctor_mEF36652F13BCFC1EC3AE5783EE338870E2F79AE9 (void);
// 0x00000227 System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeEnum>b__14_0(System.Reflection.MethodInfo)
extern void U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m60DF2C4DC62E88858ABC926EAE01C06A425115C9 (void);
// 0x00000228 System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_0(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_0_mCE6A239BE0087BE70D131DE1473A3DC22FF63A4E (void);
// 0x00000229 System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_1(System.Reflection.PropertyInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_1_mB6DAB0BC584FA4777AC92B2DFF8056CF69BA3FA6 (void);
// 0x0000022A System.Boolean Meta.WitAi.Json.JsonConverter::get_CanRead()
extern void JsonConverter_get_CanRead_m0D0337361BBA3C6ABA3D3F1A3199347F433F6781 (void);
// 0x0000022B System.Boolean Meta.WitAi.Json.JsonConverter::get_CanWrite()
extern void JsonConverter_get_CanWrite_m5232AD00808BC3A406EFEFA603473DFE82A1AC72 (void);
// 0x0000022C System.Boolean Meta.WitAi.Json.JsonConverter::CanConvert(System.Type)
// 0x0000022D System.Object Meta.WitAi.Json.JsonConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void JsonConverter_ReadJson_m8F6B56995D06D9A0C05364EE37537BFD3453991F (void);
// 0x0000022E Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConverter::WriteJson(System.Object)
extern void JsonConverter_WriteJson_mDE8DB3BAD12B58DC79FC6EEDBDA2C470E2BF485E (void);
// 0x0000022F System.Void Meta.WitAi.Json.JsonConverter::.ctor()
extern void JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25 (void);
// 0x00000230 System.Void Meta.WitAi.Json.JsonIgnoreAttribute::.ctor()
extern void JsonIgnoreAttribute__ctor_mA5292D2E1AF12AEA492F815FD06A1BB21496F805 (void);
// 0x00000231 System.String Meta.WitAi.Json.JsonPropertyAttribute::get_PropertyName()
extern void JsonPropertyAttribute_get_PropertyName_mEF2DC572AB5568F23749E61FF62E92A5748A0121 (void);
// 0x00000232 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_PropertyName(System.String)
extern void JsonPropertyAttribute_set_PropertyName_mB079F70AD0296B76D4B8395B43DDC8F2CEDAFDBA (void);
// 0x00000233 System.Object Meta.WitAi.Json.JsonPropertyAttribute::get_DefaultValue()
extern void JsonPropertyAttribute_get_DefaultValue_mD78E689C9EC517AFCA4E0F8E606062824E075FDA (void);
// 0x00000234 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_DefaultValue(System.Object)
extern void JsonPropertyAttribute_set_DefaultValue_m51A3B98B7F4DB29DF9E1EAD8DAE8FEE346E2DF7E (void);
// 0x00000235 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String)
extern void JsonPropertyAttribute__ctor_m4F66BBBF83BC759671E7923AA3E780DAA4E7E94F (void);
// 0x00000236 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String,System.Object)
extern void JsonPropertyAttribute__ctor_m46B867941D1D018F5A4EEA7F14F259B229753B83 (void);
// 0x00000237 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseJson::Parse(System.String)
extern void WitResponseJson_Parse_mF97FE5668AB9F11B768C337512D6DC99B2BA831C (void);
// 0x00000238 System.Void Meta.WitAi.Json.WitResponseNode::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_m29D8906DA4C698B7D80F1F86DB1CE904C4B6D030 (void);
// 0x00000239 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32)
extern void WitResponseNode_get_Item_mEB5205FD8A42FA9B270F1B9B96937CBF8EE184B2 (void);
// 0x0000023A System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_mECAC385EB82F5273D6B28B187693E96110155548 (void);
// 0x0000023B Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String)
extern void WitResponseNode_get_Item_m5BF8C3A148006635AB42BB486B08FAA1C26575BF (void);
// 0x0000023C System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_m0C3DDE61566EAD1E55DFF684A034A8A49DD542DD (void);
// 0x0000023D System.String Meta.WitAi.Json.WitResponseNode::get_Value()
extern void WitResponseNode_get_Value_m40A3D728DC3D7129DB7A3152B691836F67CDCC78 (void);
// 0x0000023E System.Void Meta.WitAi.Json.WitResponseNode::set_Value(System.String)
extern void WitResponseNode_set_Value_m580C71D577A96A750E21671793B6ED44A66716CA (void);
// 0x0000023F System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count()
extern void WitResponseNode_get_Count_mA9EBE5B8F8170D7ED335A273E9C50A4F7B91EDFE (void);
// 0x00000240 System.Void Meta.WitAi.Json.WitResponseNode::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_mB8A4565AFD7F3697C8599E96DA4C00B2B372C20D (void);
// 0x00000241 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.String)
extern void WitResponseNode_Remove_mF641E5E61801FAB44770E3A473CB94F2D207A15C (void);
// 0x00000242 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.Int32)
extern void WitResponseNode_Remove_mA5DA9B1052B0FB5E5615A05DB1747ADAD78C0FB3 (void);
// 0x00000243 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Remove_m12C1A50193247D3EBD2E8B33710DA2DD9842FE30 (void);
// 0x00000244 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_Childs()
extern void WitResponseNode_get_Childs_m717121EAB7095B6F617F93ADD6872A92674707AA (void);
// 0x00000245 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_DeepChilds()
extern void WitResponseNode_get_DeepChilds_m3C8A1D680D6D2D65025EDBD017E695EBA09FAFF5 (void);
// 0x00000246 System.String Meta.WitAi.Json.WitResponseNode::ToString()
extern void WitResponseNode_ToString_m3D445D2CF30C85801A49605C4C6A5C1712F793B4 (void);
// 0x00000247 System.String Meta.WitAi.Json.WitResponseNode::ToString(System.String)
extern void WitResponseNode_ToString_m66D87595107D7F314691209D8B44F1203279F05C (void);
// 0x00000248 System.Int32 Meta.WitAi.Json.WitResponseNode::get_AsInt()
extern void WitResponseNode_get_AsInt_m024AA9F3EC47061E2381DFBCEBC26371C451B5CF (void);
// 0x00000249 System.Void Meta.WitAi.Json.WitResponseNode::set_AsInt(System.Int32)
extern void WitResponseNode_set_AsInt_m33831C323A76432BEABE58F8E35CEA90F5445735 (void);
// 0x0000024A System.Single Meta.WitAi.Json.WitResponseNode::get_AsFloat()
extern void WitResponseNode_get_AsFloat_m927097B265B30F942C3A6857847665FE235787B9 (void);
// 0x0000024B System.Void Meta.WitAi.Json.WitResponseNode::set_AsFloat(System.Single)
extern void WitResponseNode_set_AsFloat_mF8F2BC7C194229DFB33094BCBCF9A197F6C6C588 (void);
// 0x0000024C System.Double Meta.WitAi.Json.WitResponseNode::get_AsDouble()
extern void WitResponseNode_get_AsDouble_mE345478726534C4A90DB6A112C31A750791E88EC (void);
// 0x0000024D System.Void Meta.WitAi.Json.WitResponseNode::set_AsDouble(System.Double)
extern void WitResponseNode_set_AsDouble_m752E687B6F5B140AB053C4FBAB0DCB27C89676D6 (void);
// 0x0000024E System.Boolean Meta.WitAi.Json.WitResponseNode::get_AsBool()
extern void WitResponseNode_get_AsBool_m6DC15B28EDFB12DBDB8FF8E30B51DC7A6AAC5F28 (void);
// 0x0000024F System.Void Meta.WitAi.Json.WitResponseNode::set_AsBool(System.Boolean)
extern void WitResponseNode_set_AsBool_m0DD7E58848900E2EEDD53A49D0681B089913CF39 (void);
// 0x00000250 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseNode::get_AsArray()
extern void WitResponseNode_get_AsArray_m784676147F5A1FCE06852FA64F7734238B336CEF (void);
// 0x00000251 System.String[] Meta.WitAi.Json.WitResponseNode::get_AsStringArray()
extern void WitResponseNode_get_AsStringArray_m1929B213720A7A709E34179350673BE6C4F98472 (void);
// 0x00000252 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseNode::get_AsObject()
extern void WitResponseNode_get_AsObject_m75B873A53748CE15CDD14FE1C68EAE8586D752C9 (void);
// 0x00000253 T Meta.WitAi.Json.WitResponseNode::Cast(T)
// 0x00000254 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::op_Implicit(System.String)
extern void WitResponseNode_op_Implicit_m80D548C98C4DF76ED2A5CF2A9122B42D7CD91F8B (void);
// 0x00000255 System.String Meta.WitAi.Json.WitResponseNode::op_Implicit(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_op_Implicit_mE4676543EBC8CD986736414A2E668AE8D763AE2F (void);
// 0x00000256 System.Boolean Meta.WitAi.Json.WitResponseNode::op_Equality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Equality_m5973BD0E47BBAEE1966B4A6CA314A87E45556B1C (void);
// 0x00000257 System.Boolean Meta.WitAi.Json.WitResponseNode::op_Inequality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Inequality_m9C943ADD55500D43472D7692D175CF94D9DC4DEF (void);
// 0x00000258 System.Boolean Meta.WitAi.Json.WitResponseNode::Equals(System.Object)
extern void WitResponseNode_Equals_mFF70A626804C0712E4D98F3937EF5E3CC69B32A8 (void);
// 0x00000259 System.Int32 Meta.WitAi.Json.WitResponseNode::GetHashCode()
extern void WitResponseNode_GetHashCode_mAC54EE6F975835618C3E065D237A5D106CFAAC41 (void);
// 0x0000025A System.String Meta.WitAi.Json.WitResponseNode::Escape(System.String)
extern void WitResponseNode_Escape_mD0105F14FFD8AFF9E913B8EB4A9D957711AE8BD2 (void);
// 0x0000025B Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Parse(System.String)
extern void WitResponseNode_Parse_mA02D30356B42E6140881A44B7B86E0F09B6C8361 (void);
// 0x0000025C System.Void Meta.WitAi.Json.WitResponseNode::Serialize(System.IO.BinaryWriter)
extern void WitResponseNode_Serialize_m230A781CE376919326F281846377306B8057A875 (void);
// 0x0000025D System.Void Meta.WitAi.Json.WitResponseNode::SaveToStream(System.IO.Stream)
extern void WitResponseNode_SaveToStream_m6C31F731D7150456EEB45235903258F26837C0D9 (void);
// 0x0000025E System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedStream(System.IO.Stream)
extern void WitResponseNode_SaveToCompressedStream_m86FA6AEB787FB004374E62C0127DFF0A0F611C3E (void);
// 0x0000025F System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedFile(System.String)
extern void WitResponseNode_SaveToCompressedFile_m7B619C8603B7F32454D68231DC19B618E6C0BEFB (void);
// 0x00000260 System.String Meta.WitAi.Json.WitResponseNode::SaveToCompressedBase64()
extern void WitResponseNode_SaveToCompressedBase64_m773829A70940A5D40CA31E08EB826FDA126890FA (void);
// 0x00000261 System.Void Meta.WitAi.Json.WitResponseNode::SaveToFile(System.String)
extern void WitResponseNode_SaveToFile_m77E5FD343DAF070D7FF77345FB81C73497F704B8 (void);
// 0x00000262 System.String Meta.WitAi.Json.WitResponseNode::SaveToBase64()
extern void WitResponseNode_SaveToBase64_mE3EB208A8BDF11697043FBA4849F29DB2A3526D8 (void);
// 0x00000263 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Deserialize(System.IO.BinaryReader)
extern void WitResponseNode_Deserialize_m10C651D6CD0DA95535F2E11AEEB4DE973B478CDC (void);
// 0x00000264 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedFile(System.String)
extern void WitResponseNode_LoadFromCompressedFile_mCA39BE6D48FC23975C6E8E5FD3350A07C0A5E16D (void);
// 0x00000265 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedStream(System.IO.Stream)
extern void WitResponseNode_LoadFromCompressedStream_m68552C6C352F0FBD208A35261EF89B26E470DAD0 (void);
// 0x00000266 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedBase64(System.String)
extern void WitResponseNode_LoadFromCompressedBase64_mC06566AB4540A2CA9F42C39A466D78534C11A7F9 (void);
// 0x00000267 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromStream(System.IO.Stream)
extern void WitResponseNode_LoadFromStream_mF13A4E4F4BB7A9214D62126F8B49CDCC82904E3C (void);
// 0x00000268 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromFile(System.String)
extern void WitResponseNode_LoadFromFile_mA100AAC620CAD0329C74E802B4F560EBF008D6E2 (void);
// 0x00000269 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromBase64(System.String)
extern void WitResponseNode_LoadFromBase64_mCD9F62A1C29E979E91D83B93DA5B483024F1D59B (void);
// 0x0000026A System.Void Meta.WitAi.Json.WitResponseNode::.ctor()
extern void WitResponseNode__ctor_mC4FB7662DDD3350001A2B6B50931748A05953B7B (void);
// 0x0000026B System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m7A92E3693E17CE7E6D1E5692F8C4959A9A711C2A (void);
// 0x0000026C System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6DDF83606276C09F26793524996CFCB0A7D9897C (void);
// 0x0000026D System.Boolean Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m5516806BD78EDD680ED67BD5D9CBF1B8FCDA79B4 (void);
// 0x0000026E Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m826F96A6640F68D994863FA335F1AB2719B4A9E8 (void);
// 0x0000026F System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mC9F5BF2729285825E48FFD4D56AB280FF9AE20C0 (void);
// 0x00000270 System.Object Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m9684938739FB25877D5A1B6376ACFF90702617AE (void);
// 0x00000271 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m638574D9566D546CE1FA8156C49E622271A69E04 (void);
// 0x00000272 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m55CF60E5AAC2740B8806D8798993F4307585B275 (void);
// 0x00000273 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
extern void U3Cget_DeepChildsU3Ed__19__ctor_m1ECA6AF267714944E0D88CC844C3024481B0C6F9 (void);
// 0x00000274 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
extern void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m057C39F716CCFCB6EC09EB570622F3283AFC99A6 (void);
// 0x00000275 System.Boolean Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::MoveNext()
extern void U3Cget_DeepChildsU3Ed__19_MoveNext_mD05A17730B6D957244157C241083B484C0DDDE01 (void);
// 0x00000276 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m34EAF3C3EC3B5B50FBF66D3443C53572CAE2AFC9 (void);
// 0x00000277 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m734B4CEBA5FDA07D95296334838EF75AC796F34E (void);
// 0x00000278 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m82AA5AA38BCD89F425BFF1EA4553BFADFED80E61 (void);
// 0x00000279 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_mFA4A0BF498C57BA45D789E929AFC71BF61DAC90B (void);
// 0x0000027A System.Object Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m7A12CA35475E08BE8DC3ABB2DA8E7F4CC1E6E13F (void);
// 0x0000027B System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m974C9CD69CAC6CC231D47EF095087FB6AE3A3657 (void);
// 0x0000027C System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_mE964ED7F36A034A941050E850DB5B296CCB36389 (void);
// 0x0000027D Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.Int32)
extern void WitResponseArray_get_Item_m927FFFE46DFDC0803F897C7396D30221080C61A7 (void);
// 0x0000027E System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_m27C3BAB5EA3B1BB4FEDCE88FA6873663982991BB (void);
// 0x0000027F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.String)
extern void WitResponseArray_get_Item_m7B53C8F8BD9A22A65F68218727330CFC8F3AF58D (void);
// 0x00000280 System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_mCDBFCE84ADABB704F25DBBF960E27DCA38294465 (void);
// 0x00000281 System.Int32 Meta.WitAi.Json.WitResponseArray::get_Count()
extern void WitResponseArray_get_Count_m3C0846E5646C8FDDBBCCEF276B524D13AAB658DA (void);
// 0x00000282 System.Void Meta.WitAi.Json.WitResponseArray::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Add_mDC72A2B60BF5E3C870CBD364F9E10FD0B46BF5D8 (void);
// 0x00000283 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(System.Int32)
extern void WitResponseArray_Remove_m9D56D4CF28E1912CE311E2BF41042219C2869CF4 (void);
// 0x00000284 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Remove_mF9D743830FBFE9B3722661915ABB3E6013C9D69A (void);
// 0x00000285 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray::get_Childs()
extern void WitResponseArray_get_Childs_m574A7FD2693EA36AFFD83098FEF5A8302C04272D (void);
// 0x00000286 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray::GetEnumerator()
extern void WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026 (void);
// 0x00000287 System.String Meta.WitAi.Json.WitResponseArray::ToString()
extern void WitResponseArray_ToString_mDA58401450439B53B96BCA568DEEA801743A22AD (void);
// 0x00000288 System.String Meta.WitAi.Json.WitResponseArray::ToString(System.String)
extern void WitResponseArray_ToString_m9E2A94668564EF25411A7BD98961CD4E4B05F6A1 (void);
// 0x00000289 System.Void Meta.WitAi.Json.WitResponseArray::Serialize(System.IO.BinaryWriter)
extern void WitResponseArray_Serialize_mD50F05A3ADB0F34EA23332AA32FC54254AEF5589 (void);
// 0x0000028A System.Void Meta.WitAi.Json.WitResponseArray::.ctor()
extern void WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55 (void);
// 0x0000028B System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__13__ctor_m429A0436140CAAC11D1FEC5AE457F973E5CBCE81 (void);
// 0x0000028C System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m77150F5238147EF1A1123553B144D32384FDF041 (void);
// 0x0000028D System.Boolean Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::MoveNext()
extern void U3Cget_ChildsU3Ed__13_MoveNext_mED66E2F0C7AC042B0DDA325CE0A625CCE9F84629 (void);
// 0x0000028E System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mC36DE4425B467C1530E7B63FAFF3953BCB0F5A4A (void);
// 0x0000028F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mCCA6C7443157D72D027788498250E4190F7588BB (void);
// 0x00000290 System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m951018C550B587C6BC6EB1028EA39DD11B9BFDF3 (void);
// 0x00000291 System.Object Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m15D840D5299CA52E41DFC537BBCA8114DFF3340B (void);
// 0x00000292 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m5F25DA4843C4E27A1832287B6A8C0E97E2E900C6 (void);
// 0x00000293 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m0D4D4A2C8508D22357D51157A1DD0865F7562297 (void);
// 0x00000294 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_m3E2ECECCB821D8BC7EC4F6AC5AA5266317FB0363 (void);
// 0x00000295 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m8B46DC03D65B315AF464114378C6E71C2268AFD7 (void);
// 0x00000296 System.Boolean Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m3ACEEE39EBBE063061A2E69B85883B999B0BAA78 (void);
// 0x00000297 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mE7D3B2D552B46B7CE8FC72BF74533B5957F988E7 (void);
// 0x00000298 System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7CE42F21A88CC604C4EE5C5F806AB3D537F3438 (void);
// 0x00000299 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m630CFD8E7B2F011E087BBD24EDA563AC94B3D181 (void);
// 0x0000029A System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mBB676A0A25E054C8115154F7F3BA5FE44EDF1CE3 (void);
// 0x0000029B System.String[] Meta.WitAi.Json.WitResponseClass::get_ChildNodeNames()
extern void WitResponseClass_get_ChildNodeNames_m17643A6B0646BB4C0432A7ABE39A0EEE0FFA09FC (void);
// 0x0000029C System.Boolean Meta.WitAi.Json.WitResponseClass::HasChild(System.String)
extern void WitResponseClass_HasChild_mA300E73E9D4346D21FEDDC071B2D52538625A3FB (void);
// 0x0000029D Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.String)
extern void WitResponseClass_get_Item_m46C1E02FA07F165B10C5E55B22329F77C83F66CB (void);
// 0x0000029E System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_mB95FE232445471A1C68C8FF19CC1C361F9619E68 (void);
// 0x0000029F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.Int32)
extern void WitResponseClass_get_Item_m789E7BBCFB8C73602AEE9B3DA54628A03B15A74B (void);
// 0x000002A0 System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_m559D8991F4C5F4F3830D9CB5267DCEE5006A3504 (void);
// 0x000002A1 System.Int32 Meta.WitAi.Json.WitResponseClass::get_Count()
extern void WitResponseClass_get_Count_m04014274AF6AFFDB69D92A954D5666387C67A8F1 (void);
// 0x000002A2 System.Void Meta.WitAi.Json.WitResponseClass::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Add_m6561A55FFA76C268F5261E171853D5AB24FCBFB4 (void);
// 0x000002A3 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.String)
extern void WitResponseClass_Remove_m33C6F72D72F766ACF1081F8074C03F93409AE943 (void);
// 0x000002A4 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.Int32)
extern void WitResponseClass_Remove_mE01845757C9328C5CE82EE0F80899EE2483B6D76 (void);
// 0x000002A5 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Remove_m9BACA15EB93394E290B3854D2966110EA189F5FE (void);
// 0x000002A6 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::get_Childs()
extern void WitResponseClass_get_Childs_mBF1BBBEFE5A4FB7B1D05B526034C9EC7372C1A27 (void);
// 0x000002A7 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass::GetEnumerator()
extern void WitResponseClass_GetEnumerator_m50FF38C23BACEA00930A2BE4E5789E20DDA5F3FB (void);
// 0x000002A8 T Meta.WitAi.Json.WitResponseClass::GetChild(System.String,T)
// 0x000002A9 System.String Meta.WitAi.Json.WitResponseClass::ToString()
extern void WitResponseClass_ToString_m88D914030920CBA87C43C06976D5FF9539718486 (void);
// 0x000002AA System.String Meta.WitAi.Json.WitResponseClass::ToString(System.String)
extern void WitResponseClass_ToString_m00C5C60A74D446F1FA202ABBEA9A9D754D4EDD8F (void);
// 0x000002AB System.Void Meta.WitAi.Json.WitResponseClass::Serialize(System.IO.BinaryWriter)
extern void WitResponseClass_Serialize_mBA795A5A5945066A8BE18B572B5D781FE932434D (void);
// 0x000002AC System.Void Meta.WitAi.Json.WitResponseClass::.ctor()
extern void WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47 (void);
// 0x000002AD System.Void Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m70566E35212CD98AC59D425A2CF4832FEC0F9F94 (void);
// 0x000002AE System.Boolean Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Meta.WitAi.Json.WitResponseNode>)
extern void U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mAD41BE11BCE3E900BFC3DCF57DF0CDCEB67618BB (void);
// 0x000002AF System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m12B9ABD0288987CD61E2BA7D036767AE1BF4D0BE (void);
// 0x000002B0 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m251435C763D9BD1F83DA693B60652B15C0D6412B (void);
// 0x000002B1 System.Boolean Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m6EDCA79501326B1ABA3BAC7D4CA09CCC28CE5F58 (void);
// 0x000002B2 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m0CEC896D7B08ACC1EE2FD7E652B9E7F0C034A3CC (void);
// 0x000002B3 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mB3A70175F3C17A89A9797E27574A99B95C0D7B6D (void);
// 0x000002B4 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mE1C1598BCB643AE91F487DFDC674CCB620D50099 (void);
// 0x000002B5 System.Object Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCD4D28D5213447AC15E46908877BDCBDFEF0FE41 (void);
// 0x000002B6 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mB45B52244BD5D55A8882EEDEEA2537D9CDF73038 (void);
// 0x000002B7 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mA94336900DAAE3CBBBB867857026C11EEDED92BC (void);
// 0x000002B8 System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__18__ctor_m76216DA4E7DA7307BEAD2051640156E3FF114BAC (void);
// 0x000002B9 System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4C26F7E170E59A2FFB51CC5EA1C9E4B3FAB74013 (void);
// 0x000002BA System.Boolean Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::MoveNext()
extern void U3CGetEnumeratorU3Ed__18_MoveNext_m924931A590B530D38EE346F596B85484107A43A2 (void);
// 0x000002BB System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m8E677E16C3DA39A359DDD922234114FD8FE583CF (void);
// 0x000002BC System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2BDB5B90BCC1F22D345F711D64DD290BC239A7D (void);
// 0x000002BD System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m04F4FC789272FD7A8ABE9AD024086B4594C2594A (void);
// 0x000002BE System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m79C6A5ACEEAB2BB4A1DF627A2D8AF060A24B5BAE (void);
// 0x000002BF System.String Meta.WitAi.Json.WitResponseData::get_Value()
extern void WitResponseData_get_Value_m0975849486729B3D273D4E37707F857C5D6FFC02 (void);
// 0x000002C0 System.Void Meta.WitAi.Json.WitResponseData::set_Value(System.String)
extern void WitResponseData_set_Value_m95872341BCA728770E707806BD3E27AC58B4F8A4 (void);
// 0x000002C1 System.Void Meta.WitAi.Json.WitResponseData::.ctor()
extern void WitResponseData__ctor_m6E2DA42660A147D601A3559FACB77F41D24CC93A (void);
// 0x000002C2 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.String)
extern void WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD (void);
// 0x000002C3 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Single)
extern void WitResponseData__ctor_mF2E1CC4ECA3A729D104130CCB5CCB873C75F86C2 (void);
// 0x000002C4 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Double)
extern void WitResponseData__ctor_mC9CE8379EAC42B7F85910B573447E05117CE2A81 (void);
// 0x000002C5 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Boolean)
extern void WitResponseData__ctor_m61443D4A59044E96DC07C970FD2C03C7F9F7F782 (void);
// 0x000002C6 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Int32)
extern void WitResponseData__ctor_m0A2E4A8270DB755B5D7172F178890C323FB22290 (void);
// 0x000002C7 System.String Meta.WitAi.Json.WitResponseData::ToString()
extern void WitResponseData_ToString_m7093EC5D51B180ECA77D88196C00FB4FCE9BE5D2 (void);
// 0x000002C8 System.String Meta.WitAi.Json.WitResponseData::ToString(System.String)
extern void WitResponseData_ToString_m8E4076FBB7CE6838EA2F55F39E6740929581967E (void);
// 0x000002C9 System.Void Meta.WitAi.Json.WitResponseData::Serialize(System.IO.BinaryWriter)
extern void WitResponseData_Serialize_m96CF5AC981F31FD000115E5BCE1CB79737369BA0 (void);
// 0x000002CA System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator__ctor_mDABB3CE3048D2FB3FC72597DF35ABD46824DC7B6 (void);
// 0x000002CB System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode,System.String)
extern void WitResponseLazyCreator__ctor_m806225C5DE01971257BC07EEFBD8D5FCD2522175 (void);
// 0x000002CC System.Void Meta.WitAi.Json.WitResponseLazyCreator::Set(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Set_mE5ED8C6DDB40D47373E29A6F3CE3FD453FA21458 (void);
// 0x000002CD Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.Int32)
extern void WitResponseLazyCreator_get_Item_m10F2D23CB786080CCE534BAC1527D7AB606C71CB (void);
// 0x000002CE System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_m79594FDE487845703B9B7F79323FC6310C11620D (void);
// 0x000002CF Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.String)
extern void WitResponseLazyCreator_get_Item_m0FFB198C00D3D5EC389B69C30AE09AF06586C631 (void);
// 0x000002D0 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_m725459A2CE4DFABF6820B5363B6C436A0F84DE10 (void);
// 0x000002D1 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_m9FF2438CD8A3F7C63F039757C9DC452AEB349D7B (void);
// 0x000002D2 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_mCEF57F8B2B20499AA785B8368B76CA34057DCC37 (void);
// 0x000002D3 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Equality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Equality_m30BB54E2E426CE0B5DD5BBA11F1FF9C0A97E3443 (void);
// 0x000002D4 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Inequality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Inequality_m28D57AEF7114E30E2D8159F181B3AB171A9F9D3C (void);
// 0x000002D5 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::Equals(System.Object)
extern void WitResponseLazyCreator_Equals_m3F855190140F333CE7DE73AF8F7D0416C9565C2E (void);
// 0x000002D6 System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::GetHashCode()
extern void WitResponseLazyCreator_GetHashCode_m5BFA3A0F74348EB2EA8CBA562560EB7E59BDC14E (void);
// 0x000002D7 System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString()
extern void WitResponseLazyCreator_ToString_m50E84D2603E3FCA2E03780E40B4470B946EAB6A6 (void);
// 0x000002D8 System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString(System.String)
extern void WitResponseLazyCreator_ToString_mBA8C042FD615F473466BE9FF11DA64E1D32F6A54 (void);
// 0x000002D9 System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::get_AsInt()
extern void WitResponseLazyCreator_get_AsInt_m9832160B8EDDE9DA685242FF3E95CABCDF9CD292 (void);
// 0x000002DA System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsInt(System.Int32)
extern void WitResponseLazyCreator_set_AsInt_m4DADF35E8FF2BE8C29A1D500FF06EFDF0547562C (void);
// 0x000002DB System.Single Meta.WitAi.Json.WitResponseLazyCreator::get_AsFloat()
extern void WitResponseLazyCreator_get_AsFloat_m29FE6CE3C5010431FB4FE58D5BCC3231846F327D (void);
// 0x000002DC System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsFloat(System.Single)
extern void WitResponseLazyCreator_set_AsFloat_mA3DF95778AEED4EC889F60C5712E376B446AB86B (void);
// 0x000002DD System.Double Meta.WitAi.Json.WitResponseLazyCreator::get_AsDouble()
extern void WitResponseLazyCreator_get_AsDouble_m586C0C0F3E95273F6FEA3E6089B8004817EF0C4A (void);
// 0x000002DE System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsDouble(System.Double)
extern void WitResponseLazyCreator_set_AsDouble_m60421A9649FE75462BD9ABA38670B256FB11BF93 (void);
// 0x000002DF System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::get_AsBool()
extern void WitResponseLazyCreator_get_AsBool_m050753D7DD79B6E7A7CC22F47CD18D30CBF31274 (void);
// 0x000002E0 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsBool(System.Boolean)
extern void WitResponseLazyCreator_set_AsBool_m302B40878819EE83ECEA42F6B38C9B39516A10EF (void);
// 0x000002E1 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseLazyCreator::get_AsArray()
extern void WitResponseLazyCreator_get_AsArray_m0E5FC1BCF1EF029788E36B6555CCDE23E202DDDA (void);
// 0x000002E2 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseLazyCreator::get_AsObject()
extern void WitResponseLazyCreator_get_AsObject_m5ED9930AD5553B2C3682A44DC592AE0CD87F978B (void);
// 0x000002E3 System.Void Meta.WitAi.Json.JSONParseException::.ctor(System.String)
extern void JSONParseException__ctor_mBFCD4AD2D31AB830D846E482EDBD04B6BE05F55B (void);
// 0x000002E4 System.Void Meta.WitAi.Data.SimulatedResponse::.ctor()
extern void SimulatedResponse__ctor_m38CAF5449F81A5B199A930950C70423E2BB34BFA (void);
// 0x000002E5 System.Void Meta.WitAi.Data.SimulatedResponseMessage::.ctor()
extern void SimulatedResponseMessage__ctor_m2A37252D88C2D97EFAE4E8FD9C3A92306882208A (void);
// 0x000002E6 System.Void Meta.WitAi.Data.Configuration.WitConfigurationAssetData::Refresh(Meta.WitAi.IWitRequestConfiguration)
// 0x000002E7 System.Void Meta.WitAi.Data.Configuration.WitConfigurationAssetData::.ctor()
extern void WitConfigurationAssetData__ctor_m4400181BFC421C3A13B3DB9152E4197634DE3A84 (void);
// 0x000002E8 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(System.Object)
extern void WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212 (void);
// 0x000002E9 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(Meta.WitAi.Data.Info.WitEntityInfo)
extern void WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889 (void);
// 0x000002EA System.Int32 Meta.WitAi.Data.Info.WitEntityInfo::GetHashCode()
extern void WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0 (void);
// 0x000002EB System.Void Meta.WitAi.Data.Info.WitEntityKeywordInfo::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern void WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7 (void);
// 0x000002EC System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(System.Object)
extern void WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6 (void);
// 0x000002ED System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(Meta.WitAi.Data.Info.WitEntityKeywordInfo)
extern void WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8 (void);
// 0x000002EE System.Int32 Meta.WitAi.Data.Info.WitEntityKeywordInfo::GetHashCode()
extern void WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427 (void);
// 0x000002EF System.Void Meta.WitAi.Data.Info.WitTraitInfo::.ctor()
extern void WitTraitInfo__ctor_m55F786DE2C051C2BC4320576E0D96316417F62CA (void);
// 0x000002F0 System.Void Meta.WitAi.Data.Info.WitVersionTagInfo::.ctor(System.String,System.String,System.String,System.String)
extern void WitVersionTagInfo__ctor_mC951F49A5F5C7662A2458C1A0AEA9E02115BB6B2 (void);
// 0x000002F1 System.Void Meta.WitAi.Attributes.HideWhenSetAttribute::.ctor()
extern void HideWhenSetAttribute__ctor_m60D425AFDA42863878515E20E2DA872D97421D45 (void);
static Il2CppMethodPointer s_methodPointers[753] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NLPRequestResponseEvent__ctor_m5DAADB236F720F195FFABA26B94C8E97FE8CCA48,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TranscriptionRequestEvent__ctor_m79205A4049FAC31DE5F80B8115C267A27B7586DE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AudioClipStream_get_IsReady_m0EEB4D94BD550F42B4A84D0785A1568065BF4FCB,
	AudioClipStream_set_IsReady_mE2CA8AB9D45D39572FCB84F953877151EFC3838C,
	AudioClipStream_get_IsComplete_m77F28AAD5EFA261DB1232393925E0DB4658B6ACF,
	AudioClipStream_set_IsComplete_m4BE1CB321931398875EB0DAF84FFA94B9B91BAD0,
	AudioClipStream_get_Channels_mC2CF1EF76706A334E771AEB616062D017EAD726C,
	AudioClipStream_set_Channels_m159BC71A1F31E0D7D2BD89ACD9E21BDDA5B8BB9E,
	AudioClipStream_get_SampleRate_m60235C33D1AE1B823473584558398271B66341F9,
	AudioClipStream_set_SampleRate_m2B70E48F6012B3D72E53CCF3681BB9EF2C56C06E,
	AudioClipStream_get_AddedSamples_m5743705A0F988EEF678EAD4C5E4C04B96E3FCE21,
	AudioClipStream_set_AddedSamples_m9713FAD2933F47F9B6F4408381489D11076A0926,
	AudioClipStream_get_TotalSamples_mCE072A69E5C56A2D6F520A705A605E5E6FD37227,
	AudioClipStream_set_TotalSamples_m2776529FFB3A9F2CA5F6EF4C8C7AE77F2FE5A90D,
	AudioClipStream_get_Length_mA47F7FF736B5C955DE14E6A09E407162777D7311,
	AudioClipStream_get_StreamReadyLength_m7169D0C412CBA1E9246A2AA637215B66E4C6039A,
	AudioClipStream_set_StreamReadyLength_m9EE785F14BC3DEE9A80AA0E0CE5702479E5AECD6,
	AudioClipStream_get_OnStreamReady_m0422F666021311EA33B4AC935E983ED475860920,
	AudioClipStream_set_OnStreamReady_m8678A47353D28CCD77C7A566E7042808A4325A74,
	AudioClipStream_get_OnStreamUpdated_m0D3C1B8E84B3FC5806E351F373F0980CE81D8B49,
	AudioClipStream_set_OnStreamUpdated_m2D9BF8AE56788AD6785841EA973CC18FBDE5AD2A,
	AudioClipStream_get_OnStreamComplete_m2B7CB56AD5A461E9CF09B10890F2F38FC722CA05,
	AudioClipStream_set_OnStreamComplete_m305151A3BEBFAEA42BA65A8C012D07E3F98B88E4,
	AudioClipStream__ctor_m84AB7DEBBF5C42AB2792B2D457477558DC11CBF8,
	AudioClipStream_AddSamples_mA15CCCC511BF4FC9CE25015BCEA112AEA940096F,
	AudioClipStream_SetTotalSamples_mE9BAD17E9AC225CC7AD8BD54842D71F31A60C2B9,
	AudioClipStream_UpdateState_m335D755AC52F83AD499E40FD6D99A80BCACADB66,
	AudioClipStream_HandleStreamReady_m977C3F30E464CF50B14476A16CAB7E76F7F512CC,
	AudioClipStream_HandleStreamUpdated_m27B601D1B7C072211D570CB142161B15B9EE5F6F,
	AudioClipStream_HandleStreamComplete_m01BA13F6343F3174EA45511734F03F4FE0D27709,
	AudioClipStream_Unload_mBBB143DA97E015ECD1105894DEDC20B1E50051E2,
	AudioClipStream_GetSampleLength_m9F7EC25BDCE33ADBE96E233E18824F6FFCA539A3,
	AudioClipStream_GetLength_m6B3848C5BF0AF66F3C6796916F0C965C8A54C709,
	AudioPlayer_get_ClipStream_mBC0506001A62BF037C6E5C283E394EF7F283FDBC,
	AudioPlayer_set_ClipStream_m0DC77FA4380B2C01C5F78FA918D90530B0B3351C,
	AudioPlayer_get_IsPlaying_m7AD5272848F09B048EE366CB6B688CAEC8127A45,
	NULL,
	NULL,
	NULL,
	AudioPlayer_Play_mFBA6A6D282FBA3BEE5F05BD28F5069D42FF7FBD8,
	NULL,
	NULL,
	NULL,
	AudioPlayer_Stop_m2ED8CF1FEDDDA7BD65152F589BF9F32BE1501676,
	AudioPlayer__ctor_mA431DECA7FFF28838B4315CD7D538DFED963AD13,
	NULL,
	AudioClipStreamDelegate__ctor_m623E8CC4A52808BB61C3B0E5057863399D4B19FF,
	AudioClipStreamDelegate_Invoke_mA68F02568616AA6888A64E2B4CA3B0020F5FA208,
	AudioClipStreamDelegate_BeginInvoke_mD957E8599D523C8D3AF3231BA7DBE0EE1F62C9D4,
	AudioClipStreamDelegate_EndInvoke_m669A845416B70D365D298DC0F53CDD9452CB2BC4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnityAudioClipStream_get_Clip_m23335E15640116041F479CCC6D8F6551145AAEAA,
	UnityAudioClipStream_set_Clip_mC56FA62D64755884685D4713CB3F2030CE729223,
	UnityAudioClipStream__ctor_m88D61E564A71B35D5C18067D1258C4A2D389D8F0,
	UnityAudioClipStream__ctor_m6126EDC0F6EE280B87975FC5FE4B079E0205FA42,
	UnityAudioClipStream__ctor_mA45352A085E2ED9BAC511ED22C0A1D55D04B9C32,
	UnityAudioClipStream_AddSamples_m9AE9D7C8AABEB3C7061369675E05B665B37EADA7,
	UnityAudioClipStream_SetTotalSamples_m8A285C86DAA732C3657B5B92BD7B4E1D4EEB747B,
	UnityAudioClipStream_Unload_mD7A379A680B26DAFB805D84534C60051BB4CA2CD,
	UnityAudioClipStream_UpdateClip_m4C069FA47F93972CA81C4E97008B5DBBA702920C,
	UnityAudioClipStream_PreloadCachedClips_m563CCE13101B6B04817365D520CB0CC8274C85FA,
	UnityAudioClipStream_GenerateCacheClip_m1B5F432439C60D6D1B6BCCDA27E434154AF91D6F,
	UnityAudioClipStream_GetCachedClip_m66DD616A38F4B9E8D2FDD94CBCC4E670DCC94B29,
	UnityAudioClipStream_DoesClipMatch_m4B3272FA3BA5456A71FB30EBD13F83A6C9F203BF,
	UnityAudioClipStream_ReuseCachedClip_mAC92A6E8654118C890EB08DB3DC9058695E68ACA,
	UnityAudioClipStream_DestroyCachedClips_mF2B6EB12076974D99250D612F85B9312780597A2,
	UnityAudioClipStream__cctor_m44ACBD17555DCBC99F954C8F1629E44D2231DAA1,
	U3CU3Ec__DisplayClass18_0__ctor_m6ED725B69A5A4C378C6F9795280B6EA440421EC2,
	U3CU3Ec__DisplayClass18_0_U3CGetCachedClipU3Eb__0_m832FA482416909F46C5F5BBB5A8BC901F18B018A,
	UnityAudioPlayer_get_AudioSource_m76C87F5FE98AAC976807D58C829C1B84E38FA2FD,
	UnityAudioPlayer_get_CloneAudioSource_mEC4BE8203510B04D1C0CFCDDA9FB12AA747B8289,
	UnityAudioPlayer_Init_mB1AEECDEAC748734376BDFE27163FE128FC3CEEF,
	UnityAudioPlayer_GetPlaybackErrors_m35B474A01A911FBA39285157A77AA0562CD280D6,
	UnityAudioPlayer_Play_m0ECDA07FF60C7C99615E7B8CA537FCF67077A7C5,
	UnityAudioPlayer_get_IsPlaying_mE711270AB00B40A45415F1BC883962011DC659F5,
	UnityAudioPlayer_get_ElapsedSamples_m7A45AB9CB3C31F9F84C510FC0FE153EB1160A74D,
	UnityAudioPlayer_Pause_mF8CE0AED6D6E5FE6203B765BA46FF620E3D47C97,
	UnityAudioPlayer_Resume_mBD5274C36F8367FCD54EED8E5CF43310AA61082A,
	UnityAudioPlayer_Stop_m4A90A8A48EE2A27FC15B28A8538A29D16C49DF8D,
	UnityAudioPlayer__ctor_m9D685C44BBC12A09089AB7A9F450EFE9652B04EA,
	UnityAudioSystem_Awake_m5FE6EEC9E957AA7CB3C67B1CC708421662BEC544,
	UnityAudioSystem_OnDestroy_m81C90ABFDC24F72959D8B2B05D4056675B8637AF,
	UnityAudioSystem_GetAudioClipStream_m7E3C311A100B47418389119F6EBCDD388B51BF43,
	UnityAudioSystem_GetAudioPlayer_m691C7D442141E59F242787B76EDC407E9A8122E7,
	UnityAudioSystem__ctor_m18D54AAFB9A2CBFF373A14C6ED34FBF0A07A7E3C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ComponentExtensions_IsObsolete_mF3FBC6E62F70BB30162C8D526534139E4282F22A,
	NULL,
	ComponentExtensions__cctor_mE9EBB8123961C3141C841F969A2C540CC000BC96,
	CoroutineUtility_StartCoroutine_mC6A524CF8F8F56300569C6B76539FD99F4A4D8DA,
	CoroutineUtility_GetPerformer_mA65A748BA60B218963E01911CF1D4C1FE416E784,
	CoroutinePerformer_get_IsRunning_m19E6CECFFAC5B06651F463FEF2C63C5394FFE227,
	CoroutinePerformer_set_IsRunning_m897C40657C00115C43D53CBEF4C3143B9A9B23A1,
	CoroutinePerformer_Awake_m903BD197AF349AA78E509053AC670749F15E4E64,
	CoroutinePerformer_CoroutineBegin_m168F0759DFBF0128EE9C1BB3855D5EE5C12E2F32,
	CoroutinePerformer_CoroutineIterateEnumerator_m110D9685700AD6EA9D7FD07C9D87CFF46F6772D0,
	CoroutinePerformer_Update_mF318B1FD0CA4DF28A2AE2F05A3D78461EDE43B5F,
	CoroutinePerformer_CoroutineIterateUpdate_m6E65F4FACA2E969CC66A5FF3BC6A7FADC5C1F944,
	CoroutinePerformer_MoveNext_m79ADEA3A1DFA04FCB54C5812BD0BF230052C4A49,
	CoroutinePerformer_OnDestroy_m51550C2552E781808BB4A6ED7CC3D5C241B248B7,
	CoroutinePerformer_CoroutineCancel_m51E365ADABD833BDC0ED8020BF6400F3D87A3E14,
	CoroutinePerformer_CoroutineComplete_mAD804B2B7CCCF5FD9B27548D3AE9A03DC6589E12,
	CoroutinePerformer_CoroutineUnload_mB36A94A478413E587602AEF7801242E27CC57041,
	CoroutinePerformer__ctor_m38757CB7375B7289938A5B9381AEB2321E4794E9,
	U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m004DE712531EB1CC04344B1CF1FC4D087B69560F,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mADE839050C9C4523150F56B0A6D34D437A44BA21,
	U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m4389ECBDACF6356F0675DDC17FBBF3ACA9BE2BE6,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFEED8F504F0EB8227AB65BC8FA0D346D86CA6B2,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mF0CD85E8E99747845372CCE5C8A0399A09401B10,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_m32F9100BB3E02E28735715AB1CA4C656A43E8C84,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TypeExtensions_GetTypes_m38A26AEF5F72C1C2F4C725C3ADA8BFD15D5A71B4,
	TypeExtensions_GetSubclassTypes_mF061C7C0A6604A6C8B014C9E00EDD2A9DBEE3805,
	U3CU3Ec__DisplayClass1_0__ctor_mB25CBCD569A1ED69A3B3BD84432B2F6C261A3E81,
	U3CU3Ec__DisplayClass1_0_U3CGetSubclassTypesU3Eb__0_m61363D00460DAFCB3F02B4A1F94811FC9032483E,
	UnityObjectExtensions_DestroySafely_mAC99596C6A3A1AAA11A6DA3D49CA77BDF8617C7C,
	VLog_get_SuppressLogs_mB5686D97E2EB228763D2DC4CADFF0ACA511F8F55,
	VLog_set_SuppressLogs_mA3B99720B9F63DE020E90B04C7AEA49A1C059894,
	VLog_add_OnPreLog_m37617FCD4905F68D1FA0B1BB3127FE5FEE245818,
	VLog_remove_OnPreLog_mA05C5088E8016CBB863A9695EC5BB1C7953BEFF1,
	VLog_I_m302D9E938513C21B2DBBCB0E94EADE3AD8D08BBF,
	VLog_I_m0B6BE0B6A2B46C602FD1730B8404B57DB8B98901,
	VLog_D_m98CADFAD363A33C07CAB1B3C3B1483202354409C,
	VLog_D_m22D024A880AB2C09ED50FD5B585FFE3FBF76452E,
	VLog_W_m878B376CCE791D170CA238533BBD3778475A8594,
	VLog_W_mCFEEAAFD9789EBB80654AE9300C547E32E8DB160,
	VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137,
	VLog_E_mBF56658B4A3B33A173A0A8274AF1859BEC8A6234,
	VLog_Log_m21BE9C4162A06D4D2553F006DE394ACC89445026,
	VLog_GetCallingCategory_mFDC3C83B2A2E29262CB49F4FEAD309DEA248BA8A,
	VLog_WrapWithCallingLink_m97EC7EA1B2A945D92078CCE7BC1B416E7B172357,
	VLog_WrapWithLogColor_m323CBFAC168142F56D6539963A62757FA8B7D678,
	NULL,
	VoiceTextEvent__ctor_mE0747CF9F23D10DA7A0BB7952A84666AC6FD7D01,
	VoiceAudioEvent__ctor_mA0ABFB2BE4ED1EFF6FAD547B13FF59767177180F,
	VoiceSpeechEvents__ctor_m994E6167A09C56B239B06AE6423F7E303CFFC2DF,
	AudioStreamHandler_get_ClipStream_m62450AB763D00767F9EAA7383A69E8501E37FCDE,
	AudioStreamHandler_set_ClipStream_mB506418D06F14A579C7B51CE2CBBCE9A42F5B7BF,
	AudioStreamHandler_get_DecodeType_m5A4CC3EA0FBB05E1FA0B164183686C82B31ED9A3,
	AudioStreamHandler_set_DecodeType_m8281FE262708566E5BB1A8C91DE750196D15DE7F,
	AudioStreamHandler_get_IsStreamReady_mFD9B02008ABEB7BF1837157D604F45FFAA127AA8,
	AudioStreamHandler_set_IsStreamReady_m350DCAE21E48AE68DF27BCB8DDFE86F813DAE095,
	AudioStreamHandler_get_IsStreamComplete_m1A099C37024126D10D8094BC3E36DA58C627B086,
	AudioStreamHandler_set_IsStreamComplete_mF41DBBC75E16C58EE528B4ACE8BFBA9B91CD922D,
	AudioStreamHandler__ctor_m20B7534A0E744500CB85C3B71E442E9BA0D7E595,
	AudioStreamHandler_ReceiveContentLengthHeader_m7E8E3C8E3FAC43D6E4406911BE5A3BB43379FBE2,
	AudioStreamHandler_ReceiveData_mA88E9D02BBCDDBB4228BD7A80218D507D01B2F66,
	AudioStreamHandler_DecodeData_mE0DE760485C5464BD53DDC7DB6FEC0575D874499,
	AudioStreamHandler_OnDecodeComplete_mDD5A5DFDACAFADB45BEE75698B22DFF478A081EC,
	AudioStreamHandler_GetText_m668ED264DD68BB9E68705D89A2411084CE7EA625,
	AudioStreamHandler_GetProgress_m1BE37456DBD89F42EBB602EAD1C276384B569C39,
	AudioStreamHandler_CompleteContent_mCDF44FC48EBAFF5CAD189271196AF3556658425F,
	AudioStreamHandler_TryToFinalize_m426998AB8F44729E43EBEE0E8059F95FEB8977A4,
	AudioStreamHandler_FinalWait_m4A9AD04D0E82EFE6A6B194A11976A8A3DB1E265E,
	AudioStreamHandler_CleanUp_m7A0E7E65A342223E16CD572779EADE88CE6D0D6D,
	AudioStreamHandler_GetDecodeType_m00A7EFD9302101258D38ED464DD481454BCFB4E4,
	AudioStreamHandler_CanDecodeType_mAB81DD9FA928996251FB4B780FF0E46C35CF8C5E,
	AudioStreamHandler_GetClipFromRawData_m597533D5DC11A3DC052EB617F4B6745F406B99F1,
	AudioStreamHandler_GetClipFromRawDataAsync_m7BE27E9F2D79B39504DA1FA92A62FCF33E48DBAD,
	AudioStreamHandler_DecodeAudio_mE8FBDF2FD45CD0469D38E51FB1CD940B406AD0CD,
	AudioStreamHandler_GetClipFromSamples_mB36D2A8134236C829BE96CF0FBCB9D6D778B322F,
	AudioStreamHandler_GetClipSamplesFromContentLength_m6F66907B465C66599CF4F4A79DB9CFBE2CDA897E,
	AudioStreamHandler_DecodePCM16_mC29F768FB2CA4680BE93AF3AF4CD36A2E8896B18,
	AudioStreamHandler_DecodeChunkPCM16_mE113FF92DE467932ADC379244B784560DC21EDD6,
	AudioStreamHandler_DecodeSamplePCM16_mD01185ABA1B2F75D43CED30528D88470D86C6707,
	U3CU3Ec__DisplayClass24_0__ctor_m15DBAE703278CF712564A3D14EAC8E0469A51163,
	U3CU3Ec__DisplayClass24_0_U3CReceiveDataU3Eb__0_m35617410658D25E262C651C8C752CA685D91FEA0,
	U3CFinalWaitU3Ed__31__ctor_m212799CA8E4E5A44C797F675CEEA8120C1DF32F3,
	U3CFinalWaitU3Ed__31_System_IDisposable_Dispose_m3D28D1E40D75EE5222DE2B5109015D34474E16F9,
	U3CFinalWaitU3Ed__31_MoveNext_m8A9414407B7E249EEBFE3E93F15756C66F3AEB2B,
	U3CFinalWaitU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m70ED9EFCF3392061D189636A7D0DB6CCA7A21891,
	U3CFinalWaitU3Ed__31_System_Collections_IEnumerator_Reset_m623BFF9D9C87BCD72EC4F2B237AC53F9ED634E08,
	U3CFinalWaitU3Ed__31_System_Collections_IEnumerator_get_Current_m584A1CBCB755AEF7C75C9C6BC60CBB75376191E0,
	U3CU3Ec__DisplayClass36_0__ctor_mF63B7DAB4009FEC5422D6774FFBEF5B64C0E569E,
	U3CU3Ec__DisplayClass36_0_U3CGetClipFromRawDataAsyncU3Eb__0_mF9A721CFA84DD05E727519D5D863FC9EF4BFE30A,
	U3CU3Ec__DisplayClass36_0_U3CGetClipFromRawDataAsyncU3Eb__1_mB02DB685A553D81F9E8BAE922676718B4C404AC1,
	NULL,
	NULL,
	VRequest_get_Timeout_m0C2A0B6850A5377DF0439A1BE30E3FCD98FCD225,
	VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B,
	VRequest_get_IsPerforming_mB8C0D61A2D99A3CE2D4CF74C89D82827BD239393,
	VRequest_set_IsPerforming_m8A46B5029B49226F342D87B99C5818AFA83E2137,
	VRequest_get_IsComplete_m81474D77CDD9BDFEDDF752B12A81D0794FB1BE0C,
	VRequest_set_IsComplete_mC5583B96C76FD15B52AE82B4D055B26783B9B9B1,
	VRequest_get_ResponseCode_mD26D66C2F4A4998F1A95B078EE48A9709FDD8CA2,
	VRequest_set_ResponseCode_m0FA92BCE548EB9811C8941EBFE1D0B8DE4E8F42C,
	VRequest_get_UploadProgress_m571C4B1E0791B34CE19F3462639D4E60973B441A,
	VRequest_set_UploadProgress_m5AB82D06DF9B536B91AFFA6CC51450FC850EB633,
	VRequest_get_DownloadProgress_mD1CEE1319E3DDD8138561CC86A419B1EEFF5409E,
	VRequest_set_DownloadProgress_mB370255DF8D2CFE146898455AEB0F3007BF35427,
	VRequest__ctor_mDC19CBE77B6651810E40C0DBE5FB0BD854E51A4F,
	VRequest_Request_m85FFE686C39EA999028605E6D9A39856D08932D1,
	VRequest_CleanUrl_m5876C13024534312528195DB22E81CD8C06D7430,
	VRequest_GetHeaders_m5DE012C50EDAA025BCE7EB3839E3147642D055A0,
	VRequest_PerformUpdate_mAC5A928ACD1D56ECF2FB316E604A6A0381927567,
	VRequest_Begin_m3863AA40526B8AD5F9222AEBE286772BF2833075,
	VRequest_IsRequestComplete_m490F7D4B8B881C967A98BE2C9D2E7A5072728474,
	VRequest_Complete_mAD054B7711A37664EB212EF1DAA32CDAA09E3287,
	VRequest_Cancel_mC26F1718B30082B2F939CE3898AF4481F897FDB2,
	VRequest_Unload_mC59B7F890F95E41EA11D4165DF259F5CF2AF54EA,
	VRequest_GetSpecificRequestError_mD75843C5873E88CC9B573EE176CD81F66850AE2E,
	VRequest_RequestFileHeaders_m11ECE714308E5E494427593E2C70E18217114844,
	VRequest_RequestFile_mA51EDF945255BF5049BD6677CF47921A94D38895,
	VRequest_RequestFileDownload_m274EAE905EEC77642885B2E4FEC9BEBFF4D8DBB0,
	VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778,
	VRequest_RequestText_mD3DFDEA98193AD3770EDEC1E1C5935BBC12E8F17,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VRequest_RequestAudioStream_mE8662FD6A09644113A9B3B6670FF48EA799C0875,
	VRequest_OnRequestAudioReady_m1A748DA7DC689A17DD68BCDD079848DC58B4F566,
	VRequest_RequestAudioStream_mADB34AD83B6C57E4607D970B9DF5DEF7DA024FAC,
	VRequest__cctor_mB37A1B93A82DF1DFD82959711105755A3B817510,
	RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F,
	RequestProgressDelegate_Invoke_m26170A39DD5E2DBC99E324679C632FDE0AFEE46C,
	RequestProgressDelegate_BeginInvoke_m384DB7AB3E11756EFC97B3AB16D850BC3D5BCE97,
	RequestProgressDelegate_EndInvoke_m1041D2E110074E4C4B527C17CFC53D015A0FB882,
	RequestFirstResponseDelegate__ctor_mE40E7F87A43B270914A1D14E8C0BCA8A9115F384,
	RequestFirstResponseDelegate_Invoke_m044BAD8188CFF565AE6336EA21E470178E5DEFC4,
	RequestFirstResponseDelegate_BeginInvoke_mD9301894923440C7DC16598949CEFFC89965F0C6,
	RequestFirstResponseDelegate_EndInvoke_mD9E0F99AC9C9E982D6C664CCABDAA5C57C974465,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CPerformUpdateU3Ed__38__ctor_m3E56DFB442A7E29493A483E5C7ACEE49581C3CE0,
	U3CPerformUpdateU3Ed__38_System_IDisposable_Dispose_mB750ADDCB683933554D31EB955EC899236C11D6B,
	U3CPerformUpdateU3Ed__38_MoveNext_m9B39CA65D1DB63829695AF6FDFB8B1683A0F4E9D,
	U3CPerformUpdateU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF86839714DA0BEC1F053CE68E91683930FB42E6A,
	U3CPerformUpdateU3Ed__38_System_Collections_IEnumerator_Reset_m446475F527617D36A0C4085BED3317CE19F6E517,
	U3CPerformUpdateU3Ed__38_System_Collections_IEnumerator_get_Current_m491D2AC4FD254B4E6CBBC56FCCF73BD5A477E249,
	U3CU3Ec__DisplayClass45_0__ctor_mB8F9E04B4593C5D965BD5D7D180D86DA2BBFCCC5,
	U3CU3Ec__DisplayClass45_0_U3CRequestFileHeadersU3Eb__0_m7FB309DBDF3D638A2E758D46BC85CD7E1961A471,
	U3CU3Ec__DisplayClass46_0__ctor_m513FA4977A847441270E2992044037A68EF4D3A1,
	U3CU3Ec__DisplayClass46_0_U3CRequestFileU3Eb__0_m404B7359322D56934D49129A11E6A15CBE5FEB2F,
	U3CU3Ec__DisplayClass47_0__ctor_mCE6ED2BBE05721217B37C3372598E80270FE31E7,
	U3CU3Ec__DisplayClass47_0_U3CRequestFileDownloadU3Eb__0_mCC7326E88749CF128B0B090A910FD86302806755,
	U3CU3Ec__DisplayClass48_0__ctor_m5AADCC155C32A110B95DE9CFCA3D6B8CB7FA1EED,
	U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__0_m954A57DAE6E07A06BEE23EB5815C43C516ED04AD,
	U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__1_m1F9D77FDFF99F9F9972C8B60D8F931B5CB844468,
	U3CU3Ec__DisplayClass48_0_U3CRequestFileExistsU3Eb__2_mCA400BC2CD8948E8AF88CE1AFA9E31F585DC34E7,
	U3CU3Ec__DisplayClass49_0__ctor_m3A082C4F50DDE27AC5F409D2CAE40F3989575CE1,
	U3CU3Ec__DisplayClass49_0_U3CRequestTextU3Eb__0_mDDEC60387A083E5B9529EF6894B219F266957FAF,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass56_0__ctor_m7DF7EC48CF0039262FE7B05E8EB67F01FDB115E5,
	U3CU3Ec__DisplayClass56_0_U3CRequestAudioStreamU3Eb__0_m50FA299F8A06B0C4F35BFB535051E382A983DA16,
	WitMessageVRequest__ctor_m5E94E413CE0B9A512F3B3974771C8977E1E26A40,
	WitMessageVRequest_MessageRequest_m2F3AA4A4F7EAB17F685F3F07F78AB085BDB3345A,
	WitMessageVRequest_MessageRequest_m7C6ECF4242EF48C9F51455028BD9C62F41DBCAC5,
	WitTTSVRequest_get_TextToSpeak_mA15D8D46EF12336766136F83E4590435781D4CCC,
	WitTTSVRequest_get_TtsData_m0AD368BB277724D5A48FC65AAE417DAF61378EF6,
	WitTTSVRequest_get_FileType_m80C194BDE25BF6BD1335796F44A81B455844E21A,
	WitTTSVRequest_get_Stream_m4D16C35B9B56B8CB17C99CDE14F981A87251E231,
	WitTTSVRequest__ctor_m2398F2E2AEAFA75430F4147E2D09C65B6CA66DA5,
	WitTTSVRequest_GetHeaders_mA5024FDF9CE31B0EBEA48A2D65E61018A0BD5C63,
	WitTTSVRequest_RequestStream_mD9470A035BD49AA5F4BFE5B6E31338E7D2B7D749,
	WitTTSVRequest_RequestDownload_m59BAAFC13A24F4893A87604A09F44701EF8E5423,
	WitTTSVRequest_EncodePostBytesAsync_m3B6D887932B4E8BBFFF2C3B891309F8DC0771EB6,
	WitTTSVRequest_EncodePostData_m60D2943144682CCAB3E04C9FA4B8043EED960C6F,
	WitTTSVRequest_GetUnityRequest_m6154E4AF121B5AED7D4CBBB5FE05CD535CB432D3,
	WitTTSVRequest_GetAudioType_m605529CDB259E2B7EB9145882690FA0E7DD7B8CE,
	WitTTSVRequest_GetAudioMimeType_mC002C95483DAC7DF258474B0250B15E5EA58DCCD,
	WitTTSVRequest_GetAudioExtension_mC14B1B7147E3FF3CFE424F814B1CC16C4BE840B7,
	WitTTSVRequest_GetAudioExtension_m813A70EB1A6D77266AADAE5FD3424107783E0984,
	WitTTSVRequest_CanStreamAudio_mC7B3FD792C123AE72EEC2DA366389B46494241A5,
	U3CU3Ec__DisplayClass14_0__ctor_m2D8B4428A40980007D423E79001C5CE91A3299C8,
	U3CU3Ec__DisplayClass14_0_U3CRequestStreamU3Eb__0_m0D25666D784424CF85830DE163AE59B213062E41,
	U3CU3Ec__DisplayClass15_0__ctor_m847FD9863B95CD7ECD3AE034828B32AE1FD61455,
	U3CU3Ec__DisplayClass15_0_U3CRequestDownloadU3Eb__0_m1E09C1C4953F36AC619CFC5AF701A85006A61161,
	U3CU3Ec__DisplayClass16_0__ctor_mDBA69E6D04B1AC0B8536D1F3A882E618AF725C59,
	U3CU3Ec__DisplayClass16_0_U3CEncodePostBytesAsyncU3Eb__0_m9929B530861961D35A61AB1067199C8AC4939533,
	U3CU3Ec__DisplayClass16_0_U3CEncodePostBytesAsyncU3Eb__1_mD4E6CA255DDF19501AEBB38CA7B218351FF0BCE4,
	WitVRequest_add_OnProvideCustomUri_mF94AA11F46BFEE871D7D04E3ED68CF4DDB8B7E09,
	WitVRequest_remove_OnProvideCustomUri_m01C61285C3E5915CAAC8719CA05EDDE211CA8196,
	WitVRequest_add_OnProvideCustomHeaders_mFA918D27C7BEEE5035FCF3B62C4E270C54F596C4,
	WitVRequest_remove_OnProvideCustomHeaders_mAB4ED4E138B013AC94A0E368C65FA362C05EE838,
	WitVRequest_add_OnProvideCustomUserAgent_m12E3F2312E78A9614D8A20203BEE1C9C62AB9D92,
	WitVRequest_remove_OnProvideCustomUserAgent_mC20AD2430F261364DC0840279AD508F4526CB58E,
	WitVRequest_get_RequestId_m806FACDF98460F4D0F759421BF47AF325725B6B9,
	WitVRequest_set_RequestId_mE52FF96D3BE05BB2865B7D380AAC1560EBD0A720,
	WitVRequest_get_Configuration_m249A5C4BF1B892702955A74A30BBFA082E5F124F,
	WitVRequest_set_Configuration_mD1B49FF89AD9A4539458E07E1525AAE293A0DCFB,
	WitVRequest__ctor_mAA5138697D93B13259C263D1E3D051B04AA0231E,
	WitVRequest_GetUri_m2B02986E00CD6AB6903AA77A2418494D1494B468,
	WitVRequest_GetHeaders_m9E469964828B68DB649BE59D9E53A3C06E68DE05,
	WitVRequest_Request_m0B449868267FD3B399A479E380F960A1F819CAC2,
	NULL,
	NULL,
	NULL,
	WitVRequest_GetWitUri_mB822F3FFC3812CCE33D818C6A04F57D006BEE3BA,
	WitVRequest_GetWitHeaders_m39D7EB5F6FBF4E32309ABC324ED303BD87F7A601,
	WitVRequest_GetAuthorizationHeader_mB026A08B27459DFEDAB239F4EAB1F90A5CCFE7A2,
	WitVRequest_GetUserAgentHeader_m651C5CC36C2F7B3172A161C3C04B9B387B517A0B,
	ColorConverter_get_CanRead_m6BA7E1A33F289174197CDC9472504788516030AC,
	ColorConverter_get_CanWrite_m2882801C1832AA3433F8862734DFDB2D11F0A8CA,
	ColorConverter_CanConvert_mF6A94F71611BBCF9ADDCB1D5B7996CD1EF1BE1F8,
	ColorConverter_ReadJson_m56167EE71B1F42659EAA4BAED37155C59EA764E5,
	ColorConverter_WriteJson_m04D2BEB8964E516512AD8205C500D00DB638ADD0,
	ColorConverter__ctor_m806E5A48DA7D9E1508D2CC8230CB169A38943731,
	DateTimeConverter_get_CanRead_m9E90F893D1E98AD77631006DF2338944A1C03670,
	DateTimeConverter_get_CanWrite_mBB56A0BF211282AE3DB9BBD34C199BE213982861,
	DateTimeConverter_CanConvert_m4C07AB765E9C480554C43C75DB48BA41AB36D742,
	DateTimeConverter_ReadJson_mD8AFB276D86DDAA360E639895AAB31207823489E,
	DateTimeConverter_WriteJson_m5C0BAB79CADD5E5F832057C4E6A9787B86B6622F,
	DateTimeConverter__ctor_m2EFD9B80003DA80056F01787FB0F697F141DABDD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_get_DefaultConverters_mEE3CE28EC9281DE82A8CE7615E23AB7097BE1DA5,
	JsonConvert_EnsureExists_mD88536D685EFB4066751AB383AE4A52CC6F6B4FC,
	JsonConvert_DeserializeToken_m5408524FEE96BA3D2D9479680123B7352881AFB3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_DeserializeToken_m7A94808FA84DC1434257970BAE6801264BBA380F,
	JsonConvert_DeserializeEnum_mD031F2A9538CDBC476A0C541B5D1342E8325CBA6,
	NULL,
	JsonConvert_DeserializeClass_m5AA8A5A4DB633DFAE9668143A9F94F48DDEA0D97,
	JsonConvert_DeserializeDictionary_m5ED3C147A0573269CB423B7A17B06C2F3DFA046E,
	NULL,
	NULL,
	JsonConvert_SerializeToken_m46591F5D14997EA50CE4232BB7F9315803B50E81,
	JsonConvert_SerializeProperty_mB8A7AFD761986C64992A1D78DCAE998460B7C4CD,
	JsonConvert__cctor_mEF88425943BD8D174A54D77F1D338BA2C454AA4D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__cctor_m047B08CED49EDA7F3EFFAF4F3FF04BE30D496EDF,
	U3CU3Ec__ctor_mEF36652F13BCFC1EC3AE5783EE338870E2F79AE9,
	U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m60DF2C4DC62E88858ABC926EAE01C06A425115C9,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_0_mCE6A239BE0087BE70D131DE1473A3DC22FF63A4E,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_1_mB6DAB0BC584FA4777AC92B2DFF8056CF69BA3FA6,
	JsonConverter_get_CanRead_m0D0337361BBA3C6ABA3D3F1A3199347F433F6781,
	JsonConverter_get_CanWrite_m5232AD00808BC3A406EFEFA603473DFE82A1AC72,
	NULL,
	JsonConverter_ReadJson_m8F6B56995D06D9A0C05364EE37537BFD3453991F,
	JsonConverter_WriteJson_mDE8DB3BAD12B58DC79FC6EEDBDA2C470E2BF485E,
	JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25,
	JsonIgnoreAttribute__ctor_mA5292D2E1AF12AEA492F815FD06A1BB21496F805,
	JsonPropertyAttribute_get_PropertyName_mEF2DC572AB5568F23749E61FF62E92A5748A0121,
	JsonPropertyAttribute_set_PropertyName_mB079F70AD0296B76D4B8395B43DDC8F2CEDAFDBA,
	JsonPropertyAttribute_get_DefaultValue_mD78E689C9EC517AFCA4E0F8E606062824E075FDA,
	JsonPropertyAttribute_set_DefaultValue_m51A3B98B7F4DB29DF9E1EAD8DAE8FEE346E2DF7E,
	JsonPropertyAttribute__ctor_m4F66BBBF83BC759671E7923AA3E780DAA4E7E94F,
	JsonPropertyAttribute__ctor_m46B867941D1D018F5A4EEA7F14F259B229753B83,
	WitResponseJson_Parse_mF97FE5668AB9F11B768C337512D6DC99B2BA831C,
	WitResponseNode_Add_m29D8906DA4C698B7D80F1F86DB1CE904C4B6D030,
	WitResponseNode_get_Item_mEB5205FD8A42FA9B270F1B9B96937CBF8EE184B2,
	WitResponseNode_set_Item_mECAC385EB82F5273D6B28B187693E96110155548,
	WitResponseNode_get_Item_m5BF8C3A148006635AB42BB486B08FAA1C26575BF,
	WitResponseNode_set_Item_m0C3DDE61566EAD1E55DFF684A034A8A49DD542DD,
	WitResponseNode_get_Value_m40A3D728DC3D7129DB7A3152B691836F67CDCC78,
	WitResponseNode_set_Value_m580C71D577A96A750E21671793B6ED44A66716CA,
	WitResponseNode_get_Count_mA9EBE5B8F8170D7ED335A273E9C50A4F7B91EDFE,
	WitResponseNode_Add_mB8A4565AFD7F3697C8599E96DA4C00B2B372C20D,
	WitResponseNode_Remove_mF641E5E61801FAB44770E3A473CB94F2D207A15C,
	WitResponseNode_Remove_mA5DA9B1052B0FB5E5615A05DB1747ADAD78C0FB3,
	WitResponseNode_Remove_m12C1A50193247D3EBD2E8B33710DA2DD9842FE30,
	WitResponseNode_get_Childs_m717121EAB7095B6F617F93ADD6872A92674707AA,
	WitResponseNode_get_DeepChilds_m3C8A1D680D6D2D65025EDBD017E695EBA09FAFF5,
	WitResponseNode_ToString_m3D445D2CF30C85801A49605C4C6A5C1712F793B4,
	WitResponseNode_ToString_m66D87595107D7F314691209D8B44F1203279F05C,
	WitResponseNode_get_AsInt_m024AA9F3EC47061E2381DFBCEBC26371C451B5CF,
	WitResponseNode_set_AsInt_m33831C323A76432BEABE58F8E35CEA90F5445735,
	WitResponseNode_get_AsFloat_m927097B265B30F942C3A6857847665FE235787B9,
	WitResponseNode_set_AsFloat_mF8F2BC7C194229DFB33094BCBCF9A197F6C6C588,
	WitResponseNode_get_AsDouble_mE345478726534C4A90DB6A112C31A750791E88EC,
	WitResponseNode_set_AsDouble_m752E687B6F5B140AB053C4FBAB0DCB27C89676D6,
	WitResponseNode_get_AsBool_m6DC15B28EDFB12DBDB8FF8E30B51DC7A6AAC5F28,
	WitResponseNode_set_AsBool_m0DD7E58848900E2EEDD53A49D0681B089913CF39,
	WitResponseNode_get_AsArray_m784676147F5A1FCE06852FA64F7734238B336CEF,
	WitResponseNode_get_AsStringArray_m1929B213720A7A709E34179350673BE6C4F98472,
	WitResponseNode_get_AsObject_m75B873A53748CE15CDD14FE1C68EAE8586D752C9,
	NULL,
	WitResponseNode_op_Implicit_m80D548C98C4DF76ED2A5CF2A9122B42D7CD91F8B,
	WitResponseNode_op_Implicit_mE4676543EBC8CD986736414A2E668AE8D763AE2F,
	WitResponseNode_op_Equality_m5973BD0E47BBAEE1966B4A6CA314A87E45556B1C,
	WitResponseNode_op_Inequality_m9C943ADD55500D43472D7692D175CF94D9DC4DEF,
	WitResponseNode_Equals_mFF70A626804C0712E4D98F3937EF5E3CC69B32A8,
	WitResponseNode_GetHashCode_mAC54EE6F975835618C3E065D237A5D106CFAAC41,
	WitResponseNode_Escape_mD0105F14FFD8AFF9E913B8EB4A9D957711AE8BD2,
	WitResponseNode_Parse_mA02D30356B42E6140881A44B7B86E0F09B6C8361,
	WitResponseNode_Serialize_m230A781CE376919326F281846377306B8057A875,
	WitResponseNode_SaveToStream_m6C31F731D7150456EEB45235903258F26837C0D9,
	WitResponseNode_SaveToCompressedStream_m86FA6AEB787FB004374E62C0127DFF0A0F611C3E,
	WitResponseNode_SaveToCompressedFile_m7B619C8603B7F32454D68231DC19B618E6C0BEFB,
	WitResponseNode_SaveToCompressedBase64_m773829A70940A5D40CA31E08EB826FDA126890FA,
	WitResponseNode_SaveToFile_m77E5FD343DAF070D7FF77345FB81C73497F704B8,
	WitResponseNode_SaveToBase64_mE3EB208A8BDF11697043FBA4849F29DB2A3526D8,
	WitResponseNode_Deserialize_m10C651D6CD0DA95535F2E11AEEB4DE973B478CDC,
	WitResponseNode_LoadFromCompressedFile_mCA39BE6D48FC23975C6E8E5FD3350A07C0A5E16D,
	WitResponseNode_LoadFromCompressedStream_m68552C6C352F0FBD208A35261EF89B26E470DAD0,
	WitResponseNode_LoadFromCompressedBase64_mC06566AB4540A2CA9F42C39A466D78534C11A7F9,
	WitResponseNode_LoadFromStream_mF13A4E4F4BB7A9214D62126F8B49CDCC82904E3C,
	WitResponseNode_LoadFromFile_mA100AAC620CAD0329C74E802B4F560EBF008D6E2,
	WitResponseNode_LoadFromBase64_mCD9F62A1C29E979E91D83B93DA5B483024F1D59B,
	WitResponseNode__ctor_mC4FB7662DDD3350001A2B6B50931748A05953B7B,
	U3Cget_ChildsU3Ed__17__ctor_m7A92E3693E17CE7E6D1E5692F8C4959A9A711C2A,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6DDF83606276C09F26793524996CFCB0A7D9897C,
	U3Cget_ChildsU3Ed__17_MoveNext_m5516806BD78EDD680ED67BD5D9CBF1B8FCDA79B4,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m826F96A6640F68D994863FA335F1AB2719B4A9E8,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mC9F5BF2729285825E48FFD4D56AB280FF9AE20C0,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m9684938739FB25877D5A1B6376ACFF90702617AE,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m638574D9566D546CE1FA8156C49E622271A69E04,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m55CF60E5AAC2740B8806D8798993F4307585B275,
	U3Cget_DeepChildsU3Ed__19__ctor_m1ECA6AF267714944E0D88CC844C3024481B0C6F9,
	U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m057C39F716CCFCB6EC09EB570622F3283AFC99A6,
	U3Cget_DeepChildsU3Ed__19_MoveNext_mD05A17730B6D957244157C241083B484C0DDDE01,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m34EAF3C3EC3B5B50FBF66D3443C53572CAE2AFC9,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m734B4CEBA5FDA07D95296334838EF75AC796F34E,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m82AA5AA38BCD89F425BFF1EA4553BFADFED80E61,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_mFA4A0BF498C57BA45D789E929AFC71BF61DAC90B,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m7A12CA35475E08BE8DC3ABB2DA8E7F4CC1E6E13F,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m974C9CD69CAC6CC231D47EF095087FB6AE3A3657,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_mE964ED7F36A034A941050E850DB5B296CCB36389,
	WitResponseArray_get_Item_m927FFFE46DFDC0803F897C7396D30221080C61A7,
	WitResponseArray_set_Item_m27C3BAB5EA3B1BB4FEDCE88FA6873663982991BB,
	WitResponseArray_get_Item_m7B53C8F8BD9A22A65F68218727330CFC8F3AF58D,
	WitResponseArray_set_Item_mCDBFCE84ADABB704F25DBBF960E27DCA38294465,
	WitResponseArray_get_Count_m3C0846E5646C8FDDBBCCEF276B524D13AAB658DA,
	WitResponseArray_Add_mDC72A2B60BF5E3C870CBD364F9E10FD0B46BF5D8,
	WitResponseArray_Remove_m9D56D4CF28E1912CE311E2BF41042219C2869CF4,
	WitResponseArray_Remove_mF9D743830FBFE9B3722661915ABB3E6013C9D69A,
	WitResponseArray_get_Childs_m574A7FD2693EA36AFFD83098FEF5A8302C04272D,
	WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026,
	WitResponseArray_ToString_mDA58401450439B53B96BCA568DEEA801743A22AD,
	WitResponseArray_ToString_m9E2A94668564EF25411A7BD98961CD4E4B05F6A1,
	WitResponseArray_Serialize_mD50F05A3ADB0F34EA23332AA32FC54254AEF5589,
	WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55,
	U3Cget_ChildsU3Ed__13__ctor_m429A0436140CAAC11D1FEC5AE457F973E5CBCE81,
	U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m77150F5238147EF1A1123553B144D32384FDF041,
	U3Cget_ChildsU3Ed__13_MoveNext_mED66E2F0C7AC042B0DDA325CE0A625CCE9F84629,
	U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mC36DE4425B467C1530E7B63FAFF3953BCB0F5A4A,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mCCA6C7443157D72D027788498250E4190F7588BB,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m951018C550B587C6BC6EB1028EA39DD11B9BFDF3,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m15D840D5299CA52E41DFC537BBCA8114DFF3340B,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m5F25DA4843C4E27A1832287B6A8C0E97E2E900C6,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m0D4D4A2C8508D22357D51157A1DD0865F7562297,
	U3CGetEnumeratorU3Ed__14__ctor_m3E2ECECCB821D8BC7EC4F6AC5AA5266317FB0363,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m8B46DC03D65B315AF464114378C6E71C2268AFD7,
	U3CGetEnumeratorU3Ed__14_MoveNext_m3ACEEE39EBBE063061A2E69B85883B999B0BAA78,
	U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mE7D3B2D552B46B7CE8FC72BF74533B5957F988E7,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7CE42F21A88CC604C4EE5C5F806AB3D537F3438,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m630CFD8E7B2F011E087BBD24EDA563AC94B3D181,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mBB676A0A25E054C8115154F7F3BA5FE44EDF1CE3,
	WitResponseClass_get_ChildNodeNames_m17643A6B0646BB4C0432A7ABE39A0EEE0FFA09FC,
	WitResponseClass_HasChild_mA300E73E9D4346D21FEDDC071B2D52538625A3FB,
	WitResponseClass_get_Item_m46C1E02FA07F165B10C5E55B22329F77C83F66CB,
	WitResponseClass_set_Item_mB95FE232445471A1C68C8FF19CC1C361F9619E68,
	WitResponseClass_get_Item_m789E7BBCFB8C73602AEE9B3DA54628A03B15A74B,
	WitResponseClass_set_Item_m559D8991F4C5F4F3830D9CB5267DCEE5006A3504,
	WitResponseClass_get_Count_m04014274AF6AFFDB69D92A954D5666387C67A8F1,
	WitResponseClass_Add_m6561A55FFA76C268F5261E171853D5AB24FCBFB4,
	WitResponseClass_Remove_m33C6F72D72F766ACF1081F8074C03F93409AE943,
	WitResponseClass_Remove_mE01845757C9328C5CE82EE0F80899EE2483B6D76,
	WitResponseClass_Remove_m9BACA15EB93394E290B3854D2966110EA189F5FE,
	WitResponseClass_get_Childs_mBF1BBBEFE5A4FB7B1D05B526034C9EC7372C1A27,
	WitResponseClass_GetEnumerator_m50FF38C23BACEA00930A2BE4E5789E20DDA5F3FB,
	NULL,
	WitResponseClass_ToString_m88D914030920CBA87C43C06976D5FF9539718486,
	WitResponseClass_ToString_m00C5C60A74D446F1FA202ABBEA9A9D754D4EDD8F,
	WitResponseClass_Serialize_mBA795A5A5945066A8BE18B572B5D781FE932434D,
	WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47,
	U3CU3Ec__DisplayClass15_0__ctor_m70566E35212CD98AC59D425A2CF4832FEC0F9F94,
	U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mAD41BE11BCE3E900BFC3DCF57DF0CDCEB67618BB,
	U3Cget_ChildsU3Ed__17__ctor_m12B9ABD0288987CD61E2BA7D036767AE1BF4D0BE,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m251435C763D9BD1F83DA693B60652B15C0D6412B,
	U3Cget_ChildsU3Ed__17_MoveNext_m6EDCA79501326B1ABA3BAC7D4CA09CCC28CE5F58,
	U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m0CEC896D7B08ACC1EE2FD7E652B9E7F0C034A3CC,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mB3A70175F3C17A89A9797E27574A99B95C0D7B6D,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mE1C1598BCB643AE91F487DFDC674CCB620D50099,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCD4D28D5213447AC15E46908877BDCBDFEF0FE41,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mB45B52244BD5D55A8882EEDEEA2537D9CDF73038,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mA94336900DAAE3CBBBB867857026C11EEDED92BC,
	U3CGetEnumeratorU3Ed__18__ctor_m76216DA4E7DA7307BEAD2051640156E3FF114BAC,
	U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4C26F7E170E59A2FFB51CC5EA1C9E4B3FAB74013,
	U3CGetEnumeratorU3Ed__18_MoveNext_m924931A590B530D38EE346F596B85484107A43A2,
	U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m8E677E16C3DA39A359DDD922234114FD8FE583CF,
	U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2BDB5B90BCC1F22D345F711D64DD290BC239A7D,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m04F4FC789272FD7A8ABE9AD024086B4594C2594A,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m79C6A5ACEEAB2BB4A1DF627A2D8AF060A24B5BAE,
	WitResponseData_get_Value_m0975849486729B3D273D4E37707F857C5D6FFC02,
	WitResponseData_set_Value_m95872341BCA728770E707806BD3E27AC58B4F8A4,
	WitResponseData__ctor_m6E2DA42660A147D601A3559FACB77F41D24CC93A,
	WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD,
	WitResponseData__ctor_mF2E1CC4ECA3A729D104130CCB5CCB873C75F86C2,
	WitResponseData__ctor_mC9CE8379EAC42B7F85910B573447E05117CE2A81,
	WitResponseData__ctor_m61443D4A59044E96DC07C970FD2C03C7F9F7F782,
	WitResponseData__ctor_m0A2E4A8270DB755B5D7172F178890C323FB22290,
	WitResponseData_ToString_m7093EC5D51B180ECA77D88196C00FB4FCE9BE5D2,
	WitResponseData_ToString_m8E4076FBB7CE6838EA2F55F39E6740929581967E,
	WitResponseData_Serialize_m96CF5AC981F31FD000115E5BCE1CB79737369BA0,
	WitResponseLazyCreator__ctor_mDABB3CE3048D2FB3FC72597DF35ABD46824DC7B6,
	WitResponseLazyCreator__ctor_m806225C5DE01971257BC07EEFBD8D5FCD2522175,
	WitResponseLazyCreator_Set_mE5ED8C6DDB40D47373E29A6F3CE3FD453FA21458,
	WitResponseLazyCreator_get_Item_m10F2D23CB786080CCE534BAC1527D7AB606C71CB,
	WitResponseLazyCreator_set_Item_m79594FDE487845703B9B7F79323FC6310C11620D,
	WitResponseLazyCreator_get_Item_m0FFB198C00D3D5EC389B69C30AE09AF06586C631,
	WitResponseLazyCreator_set_Item_m725459A2CE4DFABF6820B5363B6C436A0F84DE10,
	WitResponseLazyCreator_Add_m9FF2438CD8A3F7C63F039757C9DC452AEB349D7B,
	WitResponseLazyCreator_Add_mCEF57F8B2B20499AA785B8368B76CA34057DCC37,
	WitResponseLazyCreator_op_Equality_m30BB54E2E426CE0B5DD5BBA11F1FF9C0A97E3443,
	WitResponseLazyCreator_op_Inequality_m28D57AEF7114E30E2D8159F181B3AB171A9F9D3C,
	WitResponseLazyCreator_Equals_m3F855190140F333CE7DE73AF8F7D0416C9565C2E,
	WitResponseLazyCreator_GetHashCode_m5BFA3A0F74348EB2EA8CBA562560EB7E59BDC14E,
	WitResponseLazyCreator_ToString_m50E84D2603E3FCA2E03780E40B4470B946EAB6A6,
	WitResponseLazyCreator_ToString_mBA8C042FD615F473466BE9FF11DA64E1D32F6A54,
	WitResponseLazyCreator_get_AsInt_m9832160B8EDDE9DA685242FF3E95CABCDF9CD292,
	WitResponseLazyCreator_set_AsInt_m4DADF35E8FF2BE8C29A1D500FF06EFDF0547562C,
	WitResponseLazyCreator_get_AsFloat_m29FE6CE3C5010431FB4FE58D5BCC3231846F327D,
	WitResponseLazyCreator_set_AsFloat_mA3DF95778AEED4EC889F60C5712E376B446AB86B,
	WitResponseLazyCreator_get_AsDouble_m586C0C0F3E95273F6FEA3E6089B8004817EF0C4A,
	WitResponseLazyCreator_set_AsDouble_m60421A9649FE75462BD9ABA38670B256FB11BF93,
	WitResponseLazyCreator_get_AsBool_m050753D7DD79B6E7A7CC22F47CD18D30CBF31274,
	WitResponseLazyCreator_set_AsBool_m302B40878819EE83ECEA42F6B38C9B39516A10EF,
	WitResponseLazyCreator_get_AsArray_m0E5FC1BCF1EF029788E36B6555CCDE23E202DDDA,
	WitResponseLazyCreator_get_AsObject_m5ED9930AD5553B2C3682A44DC592AE0CD87F978B,
	JSONParseException__ctor_mBFCD4AD2D31AB830D846E482EDBD04B6BE05F55B,
	SimulatedResponse__ctor_m38CAF5449F81A5B199A930950C70423E2BB34BFA,
	SimulatedResponseMessage__ctor_m2A37252D88C2D97EFAE4E8FD9C3A92306882208A,
	NULL,
	WitConfigurationAssetData__ctor_m4400181BFC421C3A13B3DB9152E4197634DE3A84,
	WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212,
	WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889,
	WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0,
	WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7,
	WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6,
	WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8,
	WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427,
	WitTraitInfo__ctor_m55F786DE2C051C2BC4320576E0D96316417F62CA,
	WitVersionTagInfo__ctor_mC951F49A5F5C7662A2458C1A0AEA9E02115BB6B2,
	HideWhenSetAttribute__ctor_m60D425AFDA42863878515E20E2DA872D97421D45,
};
extern void WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212_AdjustorThunk (void);
extern void WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889_AdjustorThunk (void);
extern void WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0_AdjustorThunk (void);
extern void WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8_AdjustorThunk (void);
extern void WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427_AdjustorThunk (void);
extern void WitVersionTagInfo__ctor_mC951F49A5F5C7662A2458C1A0AEA9E02115BB6B2_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[8] = 
{
	{ 0x060002E8, WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212_AdjustorThunk },
	{ 0x060002E9, WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889_AdjustorThunk },
	{ 0x060002EA, WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0_AdjustorThunk },
	{ 0x060002EB, WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7_AdjustorThunk },
	{ 0x060002EC, WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6_AdjustorThunk },
	{ 0x060002ED, WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8_AdjustorThunk },
	{ 0x060002EE, WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427_AdjustorThunk },
	{ 0x060002F0, WitVersionTagInfo__ctor_mC951F49A5F5C7662A2458C1A0AEA9E02115BB6B2_AdjustorThunk },
};
static const int32_t s_InvokerIndices[753] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9016,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9016,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8751,
	7010,
	8751,
	7010,
	8825,
	7087,
	8825,
	7087,
	8825,
	7087,
	8825,
	7087,
	8924,
	8924,
	7183,
	8874,
	7136,
	8874,
	7136,
	8874,
	7136,
	2127,
	7136,
	7087,
	9016,
	9016,
	9016,
	9016,
	9016,
	6494,
	11178,
	8874,
	7136,
	8751,
	0,
	0,
	0,
	4038,
	0,
	0,
	0,
	9016,
	9016,
	0,
	4040,
	7136,
	1953,
	7136,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8874,
	7136,
	2127,
	1488,
	7136,
	7136,
	7087,
	9016,
	7087,
	10643,
	11405,
	11097,
	10185,
	14058,
	14952,
	14952,
	9016,
	5144,
	8874,
	8751,
	9016,
	8874,
	7087,
	8751,
	8825,
	9016,
	9016,
	9016,
	9016,
	9016,
	9016,
	3157,
	6399,
	9016,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	13378,
	0,
	14952,
	12127,
	14908,
	8751,
	7010,
	9016,
	4026,
	8874,
	9016,
	9016,
	5144,
	9016,
	9016,
	9016,
	9016,
	9016,
	7087,
	9016,
	8751,
	8874,
	9016,
	8874,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12127,
	12127,
	9016,
	5144,
	14058,
	14873,
	14046,
	14058,
	14058,
	14058,
	12516,
	14058,
	12516,
	14058,
	12516,
	14058,
	12516,
	11411,
	14908,
	12509,
	11490,
	0,
	9016,
	9016,
	9016,
	8874,
	7136,
	8825,
	7087,
	8751,
	7010,
	8751,
	7010,
	4038,
	7249,
	2535,
	3175,
	4046,
	8874,
	8924,
	9016,
	9016,
	8874,
	9016,
	13521,
	13373,
	9891,
	9596,
	12133,
	10531,
	12025,
	13677,
	10517,
	12219,
	9016,
	8874,
	7087,
	9016,
	8751,
	8874,
	9016,
	8874,
	9016,
	8874,
	4046,
	0,
	0,
	8825,
	7087,
	8751,
	7010,
	8751,
	7010,
	8825,
	7087,
	8924,
	7183,
	8924,
	7183,
	4046,
	2538,
	6399,
	8874,
	8874,
	9016,
	8751,
	9016,
	9016,
	9016,
	13677,
	2538,
	2538,
	1772,
	2538,
	2538,
	0,
	0,
	0,
	0,
	0,
	0,
	454,
	780,
	454,
	14952,
	4040,
	7183,
	1962,
	7136,
	4040,
	9016,
	3177,
	7136,
	0,
	0,
	0,
	0,
	7087,
	9016,
	8751,
	8874,
	9016,
	8874,
	9016,
	4046,
	9016,
	4046,
	9016,
	4046,
	9016,
	4046,
	7183,
	4046,
	9016,
	4046,
	0,
	0,
	0,
	0,
	9016,
	4046,
	1592,
	1772,
	441,
	8874,
	8874,
	8825,
	8751,
	144,
	8874,
	2538,
	2538,
	2213,
	3177,
	3158,
	13521,
	13673,
	13673,
	13673,
	13373,
	9016,
	7136,
	9016,
	7136,
	9016,
	8874,
	4046,
	14058,
	14058,
	14058,
	14058,
	14058,
	14058,
	8874,
	7136,
	8874,
	7136,
	789,
	3177,
	8874,
	2538,
	0,
	0,
	0,
	11128,
	11125,
	12127,
	13677,
	8751,
	8751,
	5144,
	1953,
	6399,
	9016,
	8751,
	8751,
	5144,
	1953,
	6399,
	9016,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	14908,
	12138,
	13677,
	0,
	0,
	0,
	0,
	0,
	0,
	9910,
	10537,
	0,
	9910,
	9910,
	0,
	0,
	10537,
	9479,
	14952,
	0,
	0,
	0,
	0,
	0,
	0,
	14952,
	9016,
	5144,
	5144,
	5144,
	8751,
	8751,
	0,
	1953,
	6399,
	9016,
	9016,
	8874,
	7136,
	8874,
	7136,
	7136,
	4046,
	13677,
	4046,
	6390,
	3715,
	6399,
	4046,
	8874,
	7136,
	8825,
	7136,
	6399,
	6390,
	6399,
	8874,
	8874,
	8874,
	6399,
	8825,
	7087,
	8924,
	7183,
	8772,
	7036,
	8751,
	7010,
	8874,
	8874,
	8874,
	0,
	13677,
	13677,
	11819,
	11819,
	5144,
	8825,
	13677,
	13677,
	7136,
	7136,
	7136,
	7136,
	8874,
	7136,
	8874,
	13677,
	13677,
	13677,
	13677,
	13677,
	13677,
	13677,
	9016,
	7087,
	9016,
	8751,
	8874,
	9016,
	8874,
	8874,
	8874,
	7087,
	9016,
	8751,
	9016,
	9016,
	8874,
	9016,
	8874,
	8874,
	8874,
	6390,
	3715,
	6399,
	4046,
	8825,
	4046,
	6390,
	6399,
	8874,
	8874,
	8874,
	6399,
	7136,
	9016,
	7087,
	9016,
	8751,
	9016,
	8874,
	9016,
	8874,
	8874,
	8874,
	7087,
	9016,
	8751,
	9016,
	8874,
	9016,
	8874,
	8874,
	5144,
	6399,
	4046,
	6390,
	3715,
	8825,
	4046,
	6399,
	6390,
	6399,
	8874,
	8874,
	0,
	8874,
	6399,
	7136,
	9016,
	9016,
	4847,
	7087,
	9016,
	8751,
	9016,
	8874,
	9016,
	8874,
	8874,
	8874,
	7087,
	9016,
	8751,
	9016,
	8874,
	9016,
	8874,
	8874,
	7136,
	9016,
	7136,
	7183,
	7036,
	7010,
	7087,
	8874,
	6399,
	7136,
	7136,
	4046,
	7136,
	6390,
	3715,
	6399,
	4046,
	7136,
	4046,
	11819,
	11819,
	5144,
	8825,
	8874,
	6399,
	8825,
	7087,
	8924,
	7183,
	8772,
	7036,
	8751,
	7010,
	8874,
	8874,
	7136,
	9016,
	9016,
	0,
	9016,
	5144,
	5276,
	8825,
	4046,
	5144,
	5277,
	8825,
	9016,
	1592,
	9016,
};
static const Il2CppTokenRangePair s_rgctxIndices[41] = 
{
	{ 0x02000012, { 0, 27 } },
	{ 0x02000013, { 27, 3 } },
	{ 0x02000015, { 30, 14 } },
	{ 0x02000016, { 44, 4 } },
	{ 0x0200001C, { 48, 46 } },
	{ 0x0200001D, { 94, 3 } },
	{ 0x0200001F, { 97, 51 } },
	{ 0x02000020, { 148, 1 } },
	{ 0x02000037, { 157, 8 } },
	{ 0x02000038, { 165, 5 } },
	{ 0x02000053, { 178, 8 } },
	{ 0x02000054, { 186, 2 } },
	{ 0x0200005F, { 191, 12 } },
	{ 0x02000063, { 231, 3 } },
	{ 0x02000064, { 234, 3 } },
	{ 0x06000112, { 149, 2 } },
	{ 0x06000113, { 151, 1 } },
	{ 0x06000114, { 152, 1 } },
	{ 0x06000116, { 153, 1 } },
	{ 0x0600012D, { 154, 1 } },
	{ 0x0600012E, { 155, 2 } },
	{ 0x0600019B, { 170, 3 } },
	{ 0x0600019C, { 173, 1 } },
	{ 0x0600019D, { 174, 1 } },
	{ 0x0600019E, { 175, 1 } },
	{ 0x0600019F, { 176, 1 } },
	{ 0x060001A0, { 177, 1 } },
	{ 0x060001F1, { 188, 1 } },
	{ 0x060001F2, { 189, 1 } },
	{ 0x060001F3, { 190, 1 } },
	{ 0x0600020F, { 203, 6 } },
	{ 0x06000210, { 209, 6 } },
	{ 0x06000211, { 215, 3 } },
	{ 0x06000212, { 218, 3 } },
	{ 0x06000213, { 221, 1 } },
	{ 0x06000214, { 222, 2 } },
	{ 0x06000217, { 224, 4 } },
	{ 0x0600021A, { 228, 1 } },
	{ 0x0600021B, { 229, 2 } },
	{ 0x06000253, { 237, 2 } },
	{ 0x060002A8, { 239, 1 } },
};
extern const uint32_t g_rgctx_TranscriptionRequest_4__ctor_m57091F2E672A10E8B5A0421BA90286EBD48405B4;
extern const uint32_t g_rgctx_TranscriptionRequest_4_tB9A0C67A8519A599FA2A43EFC011A5031E706FAB;
extern const uint32_t g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m04C92D21A6FD697D59C83F8BD168C808111CB80F;
extern const uint32_t g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB_INLPRequestResults_get_ResponseData_mEF8D42C8E4C712517C2ED95F7F9FD232E7A8E3FA;
extern const uint32_t g_rgctx_VoiceRequest_4_OnInit_m5628854AFF5F2CEC7BAA1FEC232A5C6CB9460277;
extern const uint32_t g_rgctx_VoiceRequest_4_get_IsActive_mE57856EDA8DE99703AEE92AAD09D0B649E2ABA90;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Options_mBD6EE2B1C6ABC9AE9F0886D14DCC7CB828733714;
extern const uint32_t g_rgctx_TOptions_t632ACD98F4466636A137DAB20D7C6B80231D4E81;
extern const Il2CppRGCTXConstrainedData g_rgctx_TOptions_t632ACD98F4466636A137DAB20D7C6B80231D4E81_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3;
extern const uint32_t g_rgctx_NLPAudioRequest_4_t9AECAE8AB7D8C674963F3FC612F64A881028AE0E;
extern const uint32_t g_rgctx_NLPAudioRequest_4_ApplyResultResponseData_m05F43A2D61B472E59F72D5307354607BE4485BE1;
extern const uint32_t g_rgctx_NLPAudioRequest_4_OnPartialResponse_mC7776453BC1B008DFFD42AA68C817AA1813CFFB9;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_mCFCEA8A72A177D7AD66107D7F166F8AD52AA81DF;
extern const uint32_t g_rgctx_TEvents_t3267A536B8F24A35526A7B4C5845B03AD695DEFF;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_t62DCC88A22B2FB7176EDDB426B1370741F4E367E;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_get_OnPartialResponse_m4D023E807341EC1024BEE3256680C6E6D178BB7D;
extern const uint32_t g_rgctx_NLPAudioRequest_4_get_ResponseData_m9467BC7A0B2D6CBE84CA9AEFBE6B02F9E94B2C29;
extern const uint32_t g_rgctx_NLPAudioRequest_4_HandlePartialNlpResponse_m565F132A456FFF210C828FB7C12D071B2C6E6C0F;
extern const uint32_t g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m7AB11634FD8839E45C90C8F74EB3BA85A1794692;
extern const uint32_t g_rgctx_NLPAudioRequest_4_OnFullResponse_m98F14EC72BE5B7EEEF74AD6DA45978F4433A0BB1;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleSuccess_mA3427B739B52ECAA87287F337B3C600795A5A380;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_get_OnFullResponse_m2EF1510F1BD686382E5D7CD78956E98EDF9C9B05;
extern const uint32_t g_rgctx_VoiceRequest_4_Cancel_m245BC9593CE5C06DCC06C12DB8888FA8D0279093;
extern const uint32_t g_rgctx_NLPAudioRequest_4_HandleFinalNlpResponse_mEBAAFF08BB13232FD47B4AE2088E382926B6DF5B;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1__ctor_mA095782C8FA50E880195BC71CBD8CD5CC4328BD4;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_t643535CCD09C1915DB1D39B3B0D44ABD9CAD0DC9;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t514B0F3631DC5E67F5118AB39B98AA2BB67AC6CD;
extern const uint32_t g_rgctx_NLPAudioRequest_4__ctor_m362252244572AD2E63FC529C9AC932365709F4E6;
extern const uint32_t g_rgctx_NLPAudioRequest_4_t8C3541EAA464EE5379030243FE19E54CBE328774;
extern const uint32_t g_rgctx_TranscriptionRequest_4_tD22A4AA7BC7FC72442BFC4B9A3A748B30BFC192A;
extern const uint32_t g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B;
extern const uint32_t g_rgctx_NLPRequest_4_set_InputType_mFB9ABE4710A76F5F9CD83D44697C5708ACF3FA7C;
extern const uint32_t g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B;
extern const uint32_t g_rgctx_VoiceRequest_4_SetState_m5BA8666C220E0CCB7EC42C7C41282F379A0CECE6;
extern const uint32_t g_rgctx_TranscriptionRequest_4_AppendLogData_mAD8616AEE2ECE0F14E1043739FB006DD78E299C7;
extern const uint32_t g_rgctx_NLPRequest_4_get_InputType_m4E3CD37F73A702798C62C7AE3A9EA1ED81354D66;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mF2C9836323891A27DABDCCFBFCF9600417FC4EB5;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Options_m9171B5F246DFCCB0E83A8F6650F6200FA3B58C95;
extern const uint32_t g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485;
extern const Il2CppRGCTXConstrainedData g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485_INLPTextRequestOptions_get_Text_mA4427AFE7208A123693F0F74D417FB46B08A87B3;
extern const uint32_t g_rgctx_VoiceRequest_4_GetSendError_mB44144FD1F8B32319409BA9CDA12EFD605863CBE;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1__ctor_mC33C0DA105E4B8ED521B473C3D4B11ECFFE5A9D9;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_t0296A90F89F354D801B05E207B73D59E2F65C636;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_t40105BD8A5D6B58AF13573DF6EBA12E74DC9613B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t6B5D092CA735A8B5483B265983CF35694C5CAF1D;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_AudioInputState_m2BAD47423D53BDE6F53A3FD54C8F458BAC9364BE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_t5483B8B0C88C85BC3EB4741A31FD8123053506D0;
extern const uint32_t g_rgctx_TranscriptionRequest_4_GetActivateAudioError_mBBC69A03F365B3CB07813538442C04F4D8F38092;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mC3C7219D141A016C4D2D28501E92547AD1286A5C;
extern const uint32_t g_rgctx_VoiceRequest_4__ctor_mCC4AA7DF3044E123ACDFE77BEC6911A927AAC04E;
extern const uint32_t g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A;
extern const uint32_t g_rgctx_TranscriptionRequest_4_set_AudioInputState_m7380282C011978D4C2C0E07A4BE7C6B312F1B753;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_mEE59D9BDC50AB161017850643826E880917C994F;
extern const uint32_t g_rgctx_TEvents_t93F02A5CC92B88BE1CC9E9D55E9540F13AC69EA0;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_tB04F307AD89894E4C10B7E94D367EE743DAEA3FE;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m1C4AE28668968701FBBB537D1EA2A75A61BDEDCC;
extern const uint32_t g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A;
extern const uint32_t g_rgctx_VoiceRequest_4_RaiseEvent_m76C121760DE7CE4BA72A11FE56E6A885C871D660;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnAudioActivation_mFFD302FBDCB5808E2D42BB5B3D8AE9355C369DCD;
extern const uint32_t g_rgctx_TranscriptionRequest_4_HandleAudioActivation_m2E76B76021CCA5AC2581B36DEAF49D9B3FF7E7A7;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnStartListening_m8FA3240FAB45FCA9892F6C8A407D502716FDA5C9;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnAudioDeactivation_m9E72ED033FB4161A4003A804EFA83E6B8F0585AE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_HandleAudioDeactivation_m4F100586114EBFCB3E30D722D342595374040B87;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnStopListening_m646C85A815857EBD72705F9C431F0E83A1665920;
extern const uint32_t g_rgctx_VoiceRequest_4_AppendLogData_m10F6E77E3B83A1B842CF947FB5D3FFBCF6BD049B;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m2FA99DDFB3E72B401E10BE825267EA90A9BEDEAC;
extern const uint32_t g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_Transcription_mBD53AFF1ADB285E2FAE4184F901B348307C74FA1;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_IsFinalTranscription_mCD6468F079203E39AC29BDB109D6478C6EBAAB42;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_FinalTranscriptions_m3ED430C150BD127B056A7D2643B615E97019FB67;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_IsFinalTranscription_mD375C568560FB4095E5901D108E64A03A74C672A;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnPartialTranscription_m3915EC53BB22616DC27F6A47243DAA31C4EA23B1;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_Transcription_mE222854F665D814FF74159BB0405EBC93C37D002;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnFullTranscription_m5521F5F2371EB22B4FBCB9FDB023EF2FD5C3D407;
extern const uint32_t g_rgctx_VoiceRequest_4_LogW_m36176C5A7334740E79E4096528043D1F1B5FBB75;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_mCF1A5E958B881AD78BEC5E369E3BF9A547A8E4B9;
extern const uint32_t g_rgctx_TranscriptionRequest_4_SetAudioInputState_mCE91FE33F2D9EE8E0D03EC1F0A2E3CCB5C804670;
extern const uint32_t g_rgctx_VoiceRequest_4_Log_mF969E97A210F467E74B310DA46B8A9E152CF2A4B;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioActivation_m34B216E599FCC8889EC88273096511282A51AFDD;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnStartListening_mC9244620871CE3716D510971ACF979CADA98867C;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioDeactivation_m61FCCC18C7D9BD25DF2B41A6E714404FA3EC3BAE;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnStopListening_m3248769F53092F989B77B6A0BAF96EDF0B86AD03;
extern const uint32_t g_rgctx_VoiceRequest_4_get_State_m67A915A6F243750D4ACB31FD23455BDAD725025E;
extern const uint32_t g_rgctx_VoiceRequest_4_Cancel_m1169AD3F0603A3A94BB53122C8ACE7DB4E91DE9F;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_CanActivateAudio_mF18B726D0BA154502078878282DA9FE7C94B740C;
extern const uint32_t g_rgctx_VoiceRequest_4_get_CanSend_mD6ACA42F5EB85A18DA51871042AC1855EFC6584D;
extern const uint32_t g_rgctx_TranscriptionRequest_4_ActivateAudio_m46575F418F254C03F388B2ABF4B60238CEFFA485;
extern const uint32_t g_rgctx_VoiceRequest_4_Send_m26D8F471B0CF7E8BB9022D4210F0A91ACD6A438A;
extern const uint32_t g_rgctx_TranscriptionRequest_4_ApplyTranscription_m9D5D243E1A962785B85096C491739768923B85D2;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSuccess_m323961356BC3D29B3731993D3907069A24640CFE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_DeactivateAudio_m72CF55883C369AF9DBE327DE2B1F5C1F03B62EB2;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTUnityEvent_t20516CF0061B6300B1FAD4AC46DCF5EA05754550_m66B6E25FFDDC7C58A92B1A85CCE2207802154C09;
extern const uint32_t g_rgctx_VoiceRequestEvents_1__ctor_m101810392D3DA15FF168EE92964F3DECC51B4DBB;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t0931AAD0EBFB0C8A527EC22B6F9225F89E6DBE8B;
extern const uint32_t g_rgctx_VoiceRequest_4_get_State_m26840ABF9F42D6D006AFF787E67923C394CA4EDB;
extern const uint32_t g_rgctx_VoiceRequest_4_t14A62AFB967B0C4CE5036D4B66AC6B62E4660390;
extern const uint32_t g_rgctx_VoiceRequest_4_GetSendError_m9C1DB46029CE5D3C0201D8FAFD93B6758AC25DC4;
extern const uint32_t g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTOptions_t298F856044F04D2D1523F12653371DB3DD74D673_mCB75C3A9106983AB5253617AC7614B9299B8C484;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Options_mAF3CB2D81D57D815C92AFBDB597A6C4E9C976F85;
extern const uint32_t g_rgctx_TEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8_m594267F2BF21578521570AFC6CEE2B84DCC4BA21;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Events_m9E37ADC83A1DBE40B85F484F92371D9772DA1FAF;
extern const uint32_t g_rgctx_VoiceRequest_4_SetState_m9D58634DE73E2B602B38EEAB78752FECCCE619BA;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_m53BF9894A415F70F60A642DFF16BFEEE3FEF4B0C;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t35E96E5210D5A5A6C91982A2505990A6A430356C;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnInit_m574BCB1CF48F4E417B6F00CEE1F5094FFF3B849E;
extern const uint32_t g_rgctx_VoiceRequest_4_RaiseEvent_mA50F80ABB55FF23E0F4835CE73158F8B9B2541C0;
extern const uint32_t g_rgctx_VoiceRequest_4_SetUploadProgress_mA329F7EEB525700470438E7A1E52170D443BD3D4;
extern const uint32_t g_rgctx_VoiceRequest_4_SetDownloadProgress_mFBB7965B9C2E406CD68B501A11B2DB3D6962890B;
extern const uint32_t g_rgctx_VoiceRequest_4_set_State_m66652474D128AEAE8649FCCF657522E080092B2B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnStateChange_mDEA128BF25D6BE235909A8B9DF721AB0D4066123;
extern const uint32_t g_rgctx_VoiceRequest_4_OnInit_m7D6305EB317DE79B03D4284B634AFC163A114C45;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSend_mAD5FC09D6BB7AD3B1579CD14DBC4CEB8E0B8251A;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSimulateResponse_m08545612C0433928368F5795DBCB718F6EBE353F;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleSend_m99F90A4BF167C0F1789733B1332C1506F5DB202E;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleCancel_mA7DEADFD81B4F8F31B8CDB78CFFECDD34BAB13A6;
extern const uint32_t g_rgctx_VoiceRequest_4_OnCancel_mD8D8B058324CC165A7467C7D123CE5BE4053CD49;
extern const uint32_t g_rgctx_VoiceRequest_4_OnComplete_m2A4BEBCD86DC469F4E43B42080B35CA1A7C89E52;
extern const uint32_t g_rgctx_VoiceRequest_4_OnFailed_m0E1623D1A8D4F163B5D5262793BAB76FA6414AD5;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSuccess_m740E02195BDBDF373241584EDCCB0537F70C9A62;
extern const uint32_t g_rgctx_VoiceRequest_4_get_DownloadProgress_m79E39329E70329B3558D11A57FAB13FF99EB229B;
extern const uint32_t g_rgctx_VoiceRequest_4_set_DownloadProgress_mC14EFF32477E525FEAA841170E5DE506E0BDD4D2;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnDownloadProgressChange_m84468637A5190C443F297FD33D8FD992D9E5F264;
extern const uint32_t g_rgctx_VoiceRequest_4_get_UploadProgress_m50D60A790A0089459F512028FFF6B1B8F480C3C4;
extern const uint32_t g_rgctx_VoiceRequest_4_set_UploadProgress_m77A05D82D3C8D3B2D5850F3692E75F5D8FD0023B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnUploadProgressChange_m8449FE2CC8572F7B9B8024347596C714C0ADFF23;
extern const uint32_t g_rgctx_VoiceRequest_4_AppendLogData_m41741F795DEE8A71FCD09696C88E0303962BEA22;
extern const uint32_t g_rgctx_VoiceRequest_4_Log_m4F6358377D188B02217EC33CB0A8C6B074EAA4A6;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Options_mBB35D08F9771FBDE259DAE8CE6DACBACEE0BAB45;
extern const Il2CppRGCTXConstrainedData g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3;
extern const uint32_t g_rgctx_VoiceRequest_4_LogW_m234FBE33E21E8449EB420A7ADB2B70418CB182A0;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m205095A8419ED2412803C7C10034639E6C44646E;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnSend_m6D0ADC6F9C0796FDE46BF5C37748214F4210427F;
extern const uint32_t g_rgctx_VoiceRequest_4_GetResultsWithMessage_mFD2C98BA1CB59E6FB2A98F619C2ECBA2F82FD93D;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m78646C1CA9AF9688B106B1A3D65FA55556CFB7F4;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Results_mDCC3356053910CA58D28060979B709A645CF1B64;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m158D3ED4F14E380199FE37372760F42508E02F25;
extern const uint32_t g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_IVoiceRequestResults_get_Message_m25FC16EC19AEE6AA0EB0341C85F7E3526B5124D1;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnFailed_mD3B0A85E2186DA8B329C51907C2098E2EF9CA457;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_m24C2ED056895482E0104E53C216AE7205A0C6FFC;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnSuccess_mE125E4129309D13F6DE13E2CCB45BAC83516DFD2;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnCancel_m7B6D7E400A0004A83AD5962B9C99DA5EDA224BB8;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnComplete_m77651DB7AE3FB5C4A6518475B1ABAA6065A12946;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTUnityEvent_t9034BC3B79C7203C9A18F3DF1F4330B7A142D7F2_mB4C99EE4C66C07677B83C741C4AA01A3888DB747;
extern const uint32_t g_rgctx_T_t338D642FF7E83E8D91D0DF9C52313369B6871DE5;
extern const uint32_t g_rgctx_ComponentExtensions_GetCopyData_TisT_t338D642FF7E83E8D91D0DF9C52313369B6871DE5_m3ED0DF4F462E27F53BE9B900CC1DC5D5F64A3FD8;
extern const uint32_t g_rgctx_ComponentExtensions_GetCopyData_TisT_t0B9FBEB5AA23E4478FA850B50960A7EAE480C179_mC5CDEF2C94695CD0E8E0114A73B7A2B46990C85E;
extern const uint32_t g_rgctx_T_t9AA95CB17EB86AEB33BD85874BA3DDCF8B27F61B;
extern const uint32_t g_rgctx_TAttribute_t2F66D2DAC4FF41F0FC86A48D0D86317DB2908970;
extern const uint32_t g_rgctx_Enumerable_SequenceEqual_TisTSource_tA54AA55DA29CF2A555F0530909635800CBBAA1C9_m96CC7E236FB47FD4D34FD05BE979772B030F764D;
extern const uint32_t g_rgctx_ThreadPerformer_1_t4510B15F100F8E3EF4AC6CE9D76DD9FE674788B1;
extern const uint32_t g_rgctx_ThreadPerformer_1__ctor_mA71DE540C5AE15F2D2C079FE6B35C7D9F94F891E;
extern const uint32_t g_rgctx_ThreadPerformer_1_set_IsRunning_m2343870A4A276C3A3B1259B14FF361ED3A4CAC0F;
extern const uint32_t g_rgctx_ThreadPerformer_1_WaitForCompletion_mAD9CFB763B383290AD7648BCCBB5D268E64A7CE2;
extern const uint32_t g_rgctx_ThreadPerformer_1_Work_m1DC2519BCA5EB0D3DF52D346075793EF82315B05;
extern const uint32_t g_rgctx_Func_1_tBE286A5318281FC7BE8CDE7C7A9A7470F95AD157;
extern const uint32_t g_rgctx_Func_1_Invoke_mE2D1C3B7435C065E9DE075B8DE7AB09092C9173C;
extern const uint32_t g_rgctx_U3CWaitForCompletionU3Ed__13_tC015CF9A147C42EFDC0BD40C5980D18CB8376F17;
extern const uint32_t g_rgctx_U3CWaitForCompletionU3Ed__13__ctor_mFE549F36F2E2B79992435BEE3F187A71CEDDAD2D;
extern const uint32_t g_rgctx_ThreadPerformer_1_get_IsRunning_mCA85D8A2562A6AEEEC027164131304B5A035ED8A;
extern const uint32_t g_rgctx_ThreadPerformer_1_get_IsRunning_mCBF188654377B945EA94969C06876722AD75C457;
extern const uint32_t g_rgctx_ThreadPerformer_1_IsTimedOut_mAF59E532D0AD7372ECDDC7C7D7826047800F0880;
extern const uint32_t g_rgctx_Action_2_t9E9085DE4E81A280D53621B3EF8493328946ECB5;
extern const uint32_t g_rgctx_Action_2_Invoke_m2F06EFF5811750B1E7C11465D8BDDE5A12D35342;
extern const uint32_t g_rgctx_ThreadPerformer_1_Quit_m35858F0D64C34F867CE0DCB219FA8A1FD7A8898F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1_t7688B30C8AC611B344E37AA42F52793CC8991559;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1__ctor_m5BEB1E558855307F480F6A4D41396F7E29C86085;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1_U3CRequestJsonU3Eb__0_m6F303760DBD6B2CB7C6D7409979D7D7DEB28800B;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_tF8CEB55298D5577E603812B7BCBEE49F65826BCF_mAAD3751EEB8F3D6AB559C2A8D2A2FAA20EC3D9C3;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_tD192F7A37471F391EA4DB015551FC74D708D25D4_m4E0BDF2C23E81A3ADF8FF84244460527F4916F42;
extern const uint32_t g_rgctx_VRequest_RequestJsonPost_TisTData_t24510CD93B495916F41F20EB00A14CBF1225B1DD_m3F9B53EF04C7761DB1907030BC65701CDDE474E7;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_tA056E2895FE434A3237A21B79EC013C4D6165238_m5FC58D5E0D3EE1C43A2CA2C865E53873D6DB6806;
extern const uint32_t g_rgctx_VRequest_RequestJsonPut_TisTData_t32F0992844F30426D724B883E8B2C3189C1F5211_m19F4592848696C88506DFC505300E2DA12C29BF4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_1_1_t833DD9DA7A6E6DFCD49513BE74EA4D713B6A3C03;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_1_1__ctor_m32D2066A781E42F120A4404B78C25FEC1BE8C92F;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_tAB9C7E1A6972DA0A5656CAD780F6D481A45B2A48;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_Invoke_mA00B22E3A426D84BB0A1C44B4C75299842554A63;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_1_1_U3CRequestJsonU3Eb__1_m3731DE0ED0AB2ED541B36B0BAF435FBF66E63977;
extern const uint32_t g_rgctx_Action_2_tBF8063655F2344055645A6E16A36ADF9695371E5;
extern const uint32_t g_rgctx_Action_2__ctor_m12CACAE16504E09DA9611E9F16C109EB883D9EBA;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObjectAsync_TisTData_tF8AFE19AF7BFB7B59E9DA94A13EC999F6CBC628A_m962FD2C7CBD18369E49E69E4F9F9E708A786A1EA;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_tB7D5A752426EA47D367F9CFEBA76A46DD2EB164B;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_Invoke_mC4E05C140116D3B1CDF29A9C59AFB9F5D88BBB42;
extern const uint32_t g_rgctx_VRequest_RequestJsonGet_TisTData_tA944A9C1F734E923D856104D30556303DB0E478F_m382EDA78A7F95090171DBF90C1B5D28BBD6F5C33;
extern const uint32_t g_rgctx_VRequest_RequestJsonPost_TisTData_t991AC5981C41822ECB27AAE3906A14B39316F372_mB6C2897FD236FEAECA79BD76FE76F13CF050DE7E;
extern const uint32_t g_rgctx_VRequest_RequestJsonPut_TisTData_t61731C59A9D4EB353B69EF18EA12C5CD54DAD28B_m51F5918C79EBB470F66D9A17541AAEFF38CC51F3;
extern const uint32_t g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4;
extern const uint32_t g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4;
extern const uint32_t g_rgctx_HashSet_1__ctor_m8446056EA2DE7FA08CBAE5450924C5ACBFBD4B5A;
extern const uint32_t g_rgctx_WitResponseNode_Cast_TisT_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_mCB665F44B26A12C1BFADE07B38387A3CF15DB231;
extern const uint32_t g_rgctx_HashSet_1_Add_m0D2491EE7549BA8B4CF7594236D9BAB615945DC7;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_m3B78092878D414DAAB1493BFD9E8A63503994452;
extern const uint32_t g_rgctx_Enumerator_get_Current_m84CB662CC9C87417F628A5CF06E3C220AC41BD3A;
extern const uint32_t g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mFE5A57DA3AF156373825C42345019029FC8D1F7C;
extern const uint32_t g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_tD05EA25715FEB89D9E9660503F304EDCE6991070;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mF3934F777459C5ACA908FC3F5AF0B145F3BADA86;
extern const uint32_t g_rgctx_IN_TYPE_tD022FDFD2690BE9EACEDD992A72F468269952E75;
extern const uint32_t g_rgctx_IN_TYPE_tD022FDFD2690BE9EACEDD992A72F468269952E75;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__0_m113E2B8A7F7C25183989C4C6283CF07F5C51568A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__1_m77F41BC5DA263DBE690EF0840FC9855F24117C90;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_t0BA82C05CEE30A53384BD48EFA7E1EC86062CD74;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_mD5FA355E47725141C8217438226EA002C522639A;
extern const uint32_t g_rgctx_IN_TYPE_t5E8F9837D64287D8013D2185AD9D6D09DE7C105F;
extern const uint32_t g_rgctx_IN_TYPE_t5E8F9837D64287D8013D2185AD9D6D09DE7C105F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__0_m6ED27422883A2106A72F204F7EB171DC8804F43A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__1_m35EFF82E7203467724D76229C455BC21F0A6B13F;
extern const uint32_t g_rgctx_IN_TYPE_t82C02511840A769C5650784888479EE38490B76C;
extern const uint32_t g_rgctx_IN_TYPE_t82C02511840A769C5650784888479EE38490B76C;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t82C02511840A769C5650784888479EE38490B76C_m10E80302CBD9F5809CEDADE8B31C2ED81F6C81B8;
extern const uint32_t g_rgctx_IN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C;
extern const uint32_t g_rgctx_IN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C_m880DDCD7BA307C2D1DE2E016D7C7BB5D5916C993;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t9562AF57D28C420DAA9778B4642E65C52D6CB1C5_mC5225B555A92C3050CB3F4B43363337397BDE5B6;
extern const uint32_t g_rgctx_IN_TYPE_t419198AC2C6EE3061F8C1D8B8EC60FE6A6B23020;
extern const uint32_t g_rgctx_IN_TYPE_t419198AC2C6EE3061F8C1D8B8EC60FE6A6B23020;
extern const uint32_t g_rgctx_ITEM_TYPEU5BU5D_t7C59DAB3088CE54DAD8111076D7AB163F4148BC0;
extern const uint32_t g_rgctx_ITEM_TYPEU5BU5D_t7C59DAB3088CE54DAD8111076D7AB163F4148BC0;
extern const uint32_t g_rgctx_ITEM_TYPE_tB6B7EA0000780C45F91B2672CD1AA83AE367FD04;
extern const uint32_t g_rgctx_ITEM_TYPE_tB6B7EA0000780C45F91B2672CD1AA83AE367FD04;
extern const uint32_t g_rgctx_JsonConvert_SerializeToken_TisFROM_TYPE_t4478E79EEAD6ACD28D00116BE1D75CF60A3E83C6_m0DE8A57F0F7D91E2A244F0DCD354EC78B03E8340;
extern const uint32_t g_rgctx_FROM_TYPE_tBC3425F00057CE01345212759C86DEAE2B8089EA;
extern const uint32_t g_rgctx_FROM_TYPE_tBC3425F00057CE01345212759C86DEAE2B8089EA;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tFAFAD028A21C8AC6113128B6072F114AD3F49092_mDDA1346219EA8440F20F5F7B366C70771127FF03;
extern const uint32_t g_rgctx_Action_2_t09D1FBAA199EE3A5C3D05F8EE2938218D0B7F3EB;
extern const uint32_t g_rgctx_Action_2_Invoke_m4E232944FF87A89CA8A23DFD63EDD5C8CEB45706;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t7B18BDEA13918DE234C07526B55E8EC61FF01DA4_mF27117FF8C28CA08F027738EF0B756E579230252;
extern const uint32_t g_rgctx_Action_2_t5134859EA1D179A65306CC08560420CB76382E60;
extern const uint32_t g_rgctx_Action_2_Invoke_m4CEBA72C411996B24E317BC10A43D633A91AFE10;
extern const uint32_t g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975;
extern const uint32_t g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975;
extern const uint32_t g_rgctx_WitResponseNode_Cast_TisT_t433BE44C793E00A0BE12BF38A035B538AF82195D_m73AEE2DA09907B081A6C7E3E9313A6B2528CDED4;
static const Il2CppRGCTXDefinition s_rgctxValues[240] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4__ctor_m57091F2E672A10E8B5A0421BA90286EBD48405B4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_tB9A0C67A8519A599FA2A43EFC011A5031E706FAB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m04C92D21A6FD697D59C83F8BD168C808111CB80F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB_INLPRequestResults_get_ResponseData_mEF8D42C8E4C712517C2ED95F7F9FD232E7A8E3FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnInit_m5628854AFF5F2CEC7BAA1FEC232A5C6CB9460277 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_IsActive_mE57856EDA8DE99703AEE92AAD09D0B649E2ABA90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Options_mBD6EE2B1C6ABC9AE9F0886D14DCC7CB828733714 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TOptions_t632ACD98F4466636A137DAB20D7C6B80231D4E81 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TOptions_t632ACD98F4466636A137DAB20D7C6B80231D4E81_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequest_4_t9AECAE8AB7D8C674963F3FC612F64A881028AE0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_ApplyResultResponseData_m05F43A2D61B472E59F72D5307354607BE4485BE1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_OnPartialResponse_mC7776453BC1B008DFFD42AA68C817AA1813CFFB9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_mCFCEA8A72A177D7AD66107D7F166F8AD52AA81DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t3267A536B8F24A35526A7B4C5845B03AD695DEFF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequestEvents_1_t62DCC88A22B2FB7176EDDB426B1370741F4E367E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1_get_OnPartialResponse_m4D023E807341EC1024BEE3256680C6E6D178BB7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_get_ResponseData_m9467BC7A0B2D6CBE84CA9AEFBE6B02F9E94B2C29 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_HandlePartialNlpResponse_m565F132A456FFF210C828FB7C12D071B2C6E6C0F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m7AB11634FD8839E45C90C8F74EB3BA85A1794692 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_OnFullResponse_m98F14EC72BE5B7EEEF74AD6DA45978F4433A0BB1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleSuccess_mA3427B739B52ECAA87287F337B3C600795A5A380 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1_get_OnFullResponse_m2EF1510F1BD686382E5D7CD78956E98EDF9C9B05 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Cancel_m245BC9593CE5C06DCC06C12DB8888FA8D0279093 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_HandleFinalNlpResponse_mEBAAFF08BB13232FD47B4AE2088E382926B6DF5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1__ctor_mA095782C8FA50E880195BC71CBD8CD5CC4328BD4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_t643535CCD09C1915DB1D39B3B0D44ABD9CAD0DC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t514B0F3631DC5E67F5118AB39B98AA2BB67AC6CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4__ctor_m362252244572AD2E63FC529C9AC932365709F4E6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequest_4_t8C3541EAA464EE5379030243FE19E54CBE328774 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_tD22A4AA7BC7FC72442BFC4B9A3A748B30BFC192A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPRequest_4_set_InputType_mFB9ABE4710A76F5F9CD83D44697C5708ACF3FA7C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetState_m5BA8666C220E0CCB7EC42C7C41282F379A0CECE6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_AppendLogData_mAD8616AEE2ECE0F14E1043739FB006DD78E299C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPRequest_4_get_InputType_m4E3CD37F73A702798C62C7AE3A9EA1ED81354D66 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mF2C9836323891A27DABDCCFBFCF9600417FC4EB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Options_m9171B5F246DFCCB0E83A8F6650F6200FA3B58C95 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485_INLPTextRequestOptions_get_Text_mA4427AFE7208A123693F0F74D417FB46B08A87B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetSendError_mB44144FD1F8B32319409BA9CDA12EFD605863CBE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1__ctor_mC33C0DA105E4B8ED521B473C3D4B11ECFFE5A9D9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequestEvents_1_t0296A90F89F354D801B05E207B73D59E2F65C636 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_t40105BD8A5D6B58AF13573DF6EBA12E74DC9613B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t6B5D092CA735A8B5483B265983CF35694C5CAF1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_AudioInputState_m2BAD47423D53BDE6F53A3FD54C8F458BAC9364BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_t5483B8B0C88C85BC3EB4741A31FD8123053506D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_GetActivateAudioError_mBBC69A03F365B3CB07813538442C04F4D8F38092 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mC3C7219D141A016C4D2D28501E92547AD1286A5C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4__ctor_mCC4AA7DF3044E123ACDFE77BEC6911A927AAC04E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_set_AudioInputState_m7380282C011978D4C2C0E07A4BE7C6B312F1B753 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_mEE59D9BDC50AB161017850643826E880917C994F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t93F02A5CC92B88BE1CC9E9D55E9540F13AC69EA0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_tB04F307AD89894E4C10B7E94D367EE743DAEA3FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m1C4AE28668968701FBBB537D1EA2A75A61BDEDCC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_RaiseEvent_m76C121760DE7CE4BA72A11FE56E6A885C871D660 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnAudioActivation_mFFD302FBDCB5808E2D42BB5B3D8AE9355C369DCD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_HandleAudioActivation_m2E76B76021CCA5AC2581B36DEAF49D9B3FF7E7A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnStartListening_m8FA3240FAB45FCA9892F6C8A407D502716FDA5C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnAudioDeactivation_m9E72ED033FB4161A4003A804EFA83E6B8F0585AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_HandleAudioDeactivation_m4F100586114EBFCB3E30D722D342595374040B87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnStopListening_m646C85A815857EBD72705F9C431F0E83A1665920 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_AppendLogData_m10F6E77E3B83A1B842CF947FB5D3FFBCF6BD049B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m2FA99DDFB3E72B401E10BE825267EA90A9BEDEAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_Transcription_mBD53AFF1ADB285E2FAE4184F901B348307C74FA1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_IsFinalTranscription_mCD6468F079203E39AC29BDB109D6478C6EBAAB42 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_FinalTranscriptions_m3ED430C150BD127B056A7D2643B615E97019FB67 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_IsFinalTranscription_mD375C568560FB4095E5901D108E64A03A74C672A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnPartialTranscription_m3915EC53BB22616DC27F6A47243DAA31C4EA23B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_Transcription_mE222854F665D814FF74159BB0405EBC93C37D002 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnFullTranscription_m5521F5F2371EB22B4FBCB9FDB023EF2FD5C3D407 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_LogW_m36176C5A7334740E79E4096528043D1F1B5FBB75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_mCF1A5E958B881AD78BEC5E369E3BF9A547A8E4B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_SetAudioInputState_mCE91FE33F2D9EE8E0D03EC1F0A2E3CCB5C804670 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Log_mF969E97A210F467E74B310DA46B8A9E152CF2A4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioActivation_m34B216E599FCC8889EC88273096511282A51AFDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnStartListening_mC9244620871CE3716D510971ACF979CADA98867C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioDeactivation_m61FCCC18C7D9BD25DF2B41A6E714404FA3EC3BAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnStopListening_m3248769F53092F989B77B6A0BAF96EDF0B86AD03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_State_m67A915A6F243750D4ACB31FD23455BDAD725025E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Cancel_m1169AD3F0603A3A94BB53122C8ACE7DB4E91DE9F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_CanActivateAudio_mF18B726D0BA154502078878282DA9FE7C94B740C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_CanSend_mD6ACA42F5EB85A18DA51871042AC1855EFC6584D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_ActivateAudio_m46575F418F254C03F388B2ABF4B60238CEFFA485 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Send_m26D8F471B0CF7E8BB9022D4210F0A91ACD6A438A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_ApplyTranscription_m9D5D243E1A962785B85096C491739768923B85D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSuccess_m323961356BC3D29B3731993D3907069A24640CFE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_DeactivateAudio_m72CF55883C369AF9DBE327DE2B1F5C1F03B62EB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTUnityEvent_t20516CF0061B6300B1FAD4AC46DCF5EA05754550_m66B6E25FFDDC7C58A92B1A85CCE2207802154C09 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1__ctor_m101810392D3DA15FF168EE92964F3DECC51B4DBB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t0931AAD0EBFB0C8A527EC22B6F9225F89E6DBE8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_State_m26840ABF9F42D6D006AFF787E67923C394CA4EDB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t14A62AFB967B0C4CE5036D4B66AC6B62E4660390 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetSendError_m9C1DB46029CE5D3C0201D8FAFD93B6758AC25DC4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTOptions_t298F856044F04D2D1523F12653371DB3DD74D673_mCB75C3A9106983AB5253617AC7614B9299B8C484 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Options_mAF3CB2D81D57D815C92AFBDB597A6C4E9C976F85 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8_m594267F2BF21578521570AFC6CEE2B84DCC4BA21 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Events_m9E37ADC83A1DBE40B85F484F92371D9772DA1FAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetState_m9D58634DE73E2B602B38EEAB78752FECCCE619BA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_m53BF9894A415F70F60A642DFF16BFEEE3FEF4B0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t35E96E5210D5A5A6C91982A2505990A6A430356C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnInit_m574BCB1CF48F4E417B6F00CEE1F5094FFF3B849E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_RaiseEvent_mA50F80ABB55FF23E0F4835CE73158F8B9B2541C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetUploadProgress_mA329F7EEB525700470438E7A1E52170D443BD3D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetDownloadProgress_mFBB7965B9C2E406CD68B501A11B2DB3D6962890B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_State_m66652474D128AEAE8649FCCF657522E080092B2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnStateChange_mDEA128BF25D6BE235909A8B9DF721AB0D4066123 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnInit_m7D6305EB317DE79B03D4284B634AFC163A114C45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSend_mAD5FC09D6BB7AD3B1579CD14DBC4CEB8E0B8251A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSimulateResponse_m08545612C0433928368F5795DBCB718F6EBE353F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleSend_m99F90A4BF167C0F1789733B1332C1506F5DB202E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleCancel_mA7DEADFD81B4F8F31B8CDB78CFFECDD34BAB13A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnCancel_mD8D8B058324CC165A7467C7D123CE5BE4053CD49 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnComplete_m2A4BEBCD86DC469F4E43B42080B35CA1A7C89E52 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnFailed_m0E1623D1A8D4F163B5D5262793BAB76FA6414AD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSuccess_m740E02195BDBDF373241584EDCCB0537F70C9A62 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_DownloadProgress_m79E39329E70329B3558D11A57FAB13FF99EB229B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_DownloadProgress_mC14EFF32477E525FEAA841170E5DE506E0BDD4D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnDownloadProgressChange_m84468637A5190C443F297FD33D8FD992D9E5F264 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_UploadProgress_m50D60A790A0089459F512028FFF6B1B8F480C3C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_UploadProgress_m77A05D82D3C8D3B2D5850F3692E75F5D8FD0023B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnUploadProgressChange_m8449FE2CC8572F7B9B8024347596C714C0ADFF23 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_AppendLogData_m41741F795DEE8A71FCD09696C88E0303962BEA22 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Log_m4F6358377D188B02217EC33CB0A8C6B074EAA4A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Options_mBB35D08F9771FBDE259DAE8CE6DACBACEE0BAB45 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_LogW_m234FBE33E21E8449EB420A7ADB2B70418CB182A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m205095A8419ED2412803C7C10034639E6C44646E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnSend_m6D0ADC6F9C0796FDE46BF5C37748214F4210427F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetResultsWithMessage_mFD2C98BA1CB59E6FB2A98F619C2ECBA2F82FD93D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m78646C1CA9AF9688B106B1A3D65FA55556CFB7F4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Results_mDCC3356053910CA58D28060979B709A645CF1B64 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m158D3ED4F14E380199FE37372760F42508E02F25 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_IVoiceRequestResults_get_Message_m25FC16EC19AEE6AA0EB0341C85F7E3526B5124D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnFailed_mD3B0A85E2186DA8B329C51907C2098E2EF9CA457 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_m24C2ED056895482E0104E53C216AE7205A0C6FFC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnSuccess_mE125E4129309D13F6DE13E2CCB45BAC83516DFD2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnCancel_m7B6D7E400A0004A83AD5962B9C99DA5EDA224BB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnComplete_m77651DB7AE3FB5C4A6518475B1ABAA6065A12946 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTUnityEvent_t9034BC3B79C7203C9A18F3DF1F4330B7A142D7F2_mB4C99EE4C66C07677B83C741C4AA01A3888DB747 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t338D642FF7E83E8D91D0DF9C52313369B6871DE5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentExtensions_GetCopyData_TisT_t338D642FF7E83E8D91D0DF9C52313369B6871DE5_m3ED0DF4F462E27F53BE9B900CC1DC5D5F64A3FD8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentExtensions_GetCopyData_TisT_t0B9FBEB5AA23E4478FA850B50960A7EAE480C179_mC5CDEF2C94695CD0E8E0114A73B7A2B46990C85E },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t9AA95CB17EB86AEB33BD85874BA3DDCF8B27F61B },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TAttribute_t2F66D2DAC4FF41F0FC86A48D0D86317DB2908970 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_SequenceEqual_TisTSource_tA54AA55DA29CF2A555F0530909635800CBBAA1C9_m96CC7E236FB47FD4D34FD05BE979772B030F764D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ThreadPerformer_1_t4510B15F100F8E3EF4AC6CE9D76DD9FE674788B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1__ctor_mA71DE540C5AE15F2D2C079FE6B35C7D9F94F891E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_set_IsRunning_m2343870A4A276C3A3B1259B14FF361ED3A4CAC0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_WaitForCompletion_mAD9CFB763B383290AD7648BCCBB5D268E64A7CE2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_Work_m1DC2519BCA5EB0D3DF52D346075793EF82315B05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tBE286A5318281FC7BE8CDE7C7A9A7470F95AD157 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_mE2D1C3B7435C065E9DE075B8DE7AB09092C9173C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CWaitForCompletionU3Ed__13_tC015CF9A147C42EFDC0BD40C5980D18CB8376F17 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CWaitForCompletionU3Ed__13__ctor_mFE549F36F2E2B79992435BEE3F187A71CEDDAD2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_get_IsRunning_mCA85D8A2562A6AEEEC027164131304B5A035ED8A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_get_IsRunning_mCBF188654377B945EA94969C06876722AD75C457 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_IsTimedOut_mAF59E532D0AD7372ECDDC7C7D7826047800F0880 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t9E9085DE4E81A280D53621B3EF8493328946ECB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m2F06EFF5811750B1E7C11465D8BDDE5A12D35342 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_Quit_m35858F0D64C34F867CE0DCB219FA8A1FD7A8898F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1_t7688B30C8AC611B344E37AA42F52793CC8991559 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1__ctor_m5BEB1E558855307F480F6A4D41396F7E29C86085 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1_U3CRequestJsonU3Eb__0_m6F303760DBD6B2CB7C6D7409979D7D7DEB28800B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_tF8CEB55298D5577E603812B7BCBEE49F65826BCF_mAAD3751EEB8F3D6AB559C2A8D2A2FAA20EC3D9C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_tD192F7A37471F391EA4DB015551FC74D708D25D4_m4E0BDF2C23E81A3ADF8FF84244460527F4916F42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPost_TisTData_t24510CD93B495916F41F20EB00A14CBF1225B1DD_m3F9B53EF04C7761DB1907030BC65701CDDE474E7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_tA056E2895FE434A3237A21B79EC013C4D6165238_m5FC58D5E0D3EE1C43A2CA2C865E53873D6DB6806 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPut_TisTData_t32F0992844F30426D724B883E8B2C3189C1F5211_m19F4592848696C88506DFC505300E2DA12C29BF4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_1_1_t833DD9DA7A6E6DFCD49513BE74EA4D713B6A3C03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_1_1__ctor_m32D2066A781E42F120A4404B78C25FEC1BE8C92F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestCompleteDelegate_1_tAB9C7E1A6972DA0A5656CAD780F6D481A45B2A48 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestCompleteDelegate_1_Invoke_mA00B22E3A426D84BB0A1C44B4C75299842554A63 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_1_1_U3CRequestJsonU3Eb__1_m3731DE0ED0AB2ED541B36B0BAF435FBF66E63977 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_tBF8063655F2344055645A6E16A36ADF9695371E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2__ctor_m12CACAE16504E09DA9611E9F16C109EB883D9EBA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObjectAsync_TisTData_tF8AFE19AF7BFB7B59E9DA94A13EC999F6CBC628A_m962FD2C7CBD18369E49E69E4F9F9E708A786A1EA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestCompleteDelegate_1_tB7D5A752426EA47D367F9CFEBA76A46DD2EB164B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestCompleteDelegate_1_Invoke_mC4E05C140116D3B1CDF29A9C59AFB9F5D88BBB42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonGet_TisTData_tA944A9C1F734E923D856104D30556303DB0E478F_m382EDA78A7F95090171DBF90C1B5D28BBD6F5C33 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPost_TisTData_t991AC5981C41822ECB27AAE3906A14B39316F372_mB6C2897FD236FEAECA79BD76FE76F13CF050DE7E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPut_TisTData_t61731C59A9D4EB353B69EF18EA12C5CD54DAD28B_m51F5918C79EBB470F66D9A17541AAEFF38CC51F3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m8446056EA2DE7FA08CBAE5450924C5ACBFBD4B5A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WitResponseNode_Cast_TisT_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_mCB665F44B26A12C1BFADE07B38387A3CF15DB231 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m0D2491EE7549BA8B4CF7594236D9BAB615945DC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_m3B78092878D414DAAB1493BFD9E8A63503994452 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m84CB662CC9C87417F628A5CF06E3C220AC41BD3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mFE5A57DA3AF156373825C42345019029FC8D1F7C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_tD05EA25715FEB89D9E9660503F304EDCE6991070 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mF3934F777459C5ACA908FC3F5AF0B145F3BADA86 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_tD022FDFD2690BE9EACEDD992A72F468269952E75 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_tD022FDFD2690BE9EACEDD992A72F468269952E75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__0_m113E2B8A7F7C25183989C4C6283CF07F5C51568A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__1_m77F41BC5DA263DBE690EF0840FC9855F24117C90 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_t0BA82C05CEE30A53384BD48EFA7E1EC86062CD74 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_mD5FA355E47725141C8217438226EA002C522639A },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t5E8F9837D64287D8013D2185AD9D6D09DE7C105F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t5E8F9837D64287D8013D2185AD9D6D09DE7C105F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__0_m6ED27422883A2106A72F204F7EB171DC8804F43A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__1_m35EFF82E7203467724D76229C455BC21F0A6B13F },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t82C02511840A769C5650784888479EE38490B76C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t82C02511840A769C5650784888479EE38490B76C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t82C02511840A769C5650784888479EE38490B76C_m10E80302CBD9F5809CEDADE8B31C2ED81F6C81B8 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t458519F0A39E21E4A25A9FA3C70615CA8ED8B74C_m880DDCD7BA307C2D1DE2E016D7C7BB5D5916C993 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t9562AF57D28C420DAA9778B4642E65C52D6CB1C5_mC5225B555A92C3050CB3F4B43363337397BDE5B6 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t419198AC2C6EE3061F8C1D8B8EC60FE6A6B23020 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t419198AC2C6EE3061F8C1D8B8EC60FE6A6B23020 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPEU5BU5D_t7C59DAB3088CE54DAD8111076D7AB163F4148BC0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPEU5BU5D_t7C59DAB3088CE54DAD8111076D7AB163F4148BC0 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_ITEM_TYPE_tB6B7EA0000780C45F91B2672CD1AA83AE367FD04 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPE_tB6B7EA0000780C45F91B2672CD1AA83AE367FD04 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_SerializeToken_TisFROM_TYPE_t4478E79EEAD6ACD28D00116BE1D75CF60A3E83C6_m0DE8A57F0F7D91E2A244F0DCD354EC78B03E8340 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_FROM_TYPE_tBC3425F00057CE01345212759C86DEAE2B8089EA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FROM_TYPE_tBC3425F00057CE01345212759C86DEAE2B8089EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tFAFAD028A21C8AC6113128B6072F114AD3F49092_mDDA1346219EA8440F20F5F7B366C70771127FF03 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t09D1FBAA199EE3A5C3D05F8EE2938218D0B7F3EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m4E232944FF87A89CA8A23DFD63EDD5C8CEB45706 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t7B18BDEA13918DE234C07526B55E8EC61FF01DA4_mF27117FF8C28CA08F027738EF0B756E579230252 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t5134859EA1D179A65306CC08560420CB76382E60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m4CEBA72C411996B24E317BC10A43D633A91AFE10 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WitResponseNode_Cast_TisT_t433BE44C793E00A0BE12BF38A035B538AF82195D_m73AEE2DA09907B081A6C7E3E9313A6B2528CDED4 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule;
const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule = 
{
	"Meta.WitAi.Lib.dll",
	753,
	s_methodPointers,
	8,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	41,
	s_rgctxIndices,
	240,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
