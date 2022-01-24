#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`2<UnityEngine.GameObject,UnityEngine.AnimationClip[]>
struct Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>
struct Dictionary_2_t7E72723E871E970AACB2F86E2AD3964890A84059;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD;
// System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>
struct Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Nullable`1<System.Int32>>
struct KeyCollection_t413D823BD6AA0528E2AF27F6BA984512989408D1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Nullable`1<System.Int32>>
struct ValueCollection_tABC57DD9A33DFA99C62E9BBB33646A1FFC45740B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Nullable`1<System.Int32>>[]
struct EntryU5BU5D_t5BDAAD0D21BAEDA75910D61D1478759DCC3EA292;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// Siccity.GLTFUtility.AnimationSettings
struct AnimationSettings_tFC83BE89FE49ED98C456FA4F20904F58851846E7;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// BlendShapeIndex
struct BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// FacialController
struct FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Siccity.GLTFUtility.ImportSettings
struct ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920;
// JsonFileReader
struct JsonFileReader_tE13DAE83F49BC3C3CE12052975A4C54DCE997E2E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectImporter
struct ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C;
// OffscreenRendering
struct OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E;
// PositionRelavie
struct PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// RotationController
struct RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD;
// RotationRelative
struct RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScaleRelative
struct ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B;
// Siccity.GLTFUtility.ShaderSettings
struct ShaderSettings_tD13640438380E6ECF852A21E924B0BFC05BD6DE9;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// SpaceInfoRelative
struct SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TiltsionController
struct TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TransformRelative
struct TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// OffscreenRendering/<CaptureAndSaveFrames>d__3
struct U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0278FD43FF658F79A56F7B28B871675E46269E14;
IL2CPP_EXTERN_C String_t* _stringLiteral03DA96C27F8210B40D9286C2B4D7A118A4E8DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral078A4A7E34415361245309C97D0ADCE3D825A562;
IL2CPP_EXTERN_C String_t* _stringLiteral0A00F799A11A608246C47D85960440381E50E23D;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCEA01FAFF6A589DC11B5D02C64823305BE852F;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1EAC9005AC0B616FD8A495C98401243B2EEF32;
IL2CPP_EXTERN_C String_t* _stringLiteral15262E227BC119B75AF56F5706ADEBE6CB0BE88D;
IL2CPP_EXTERN_C String_t* _stringLiteral168A539F8FF732517533495474D96E19A03C8DEA;
IL2CPP_EXTERN_C String_t* _stringLiteral1F06AFB888ACE577DEC5374CD354DE25EA4AD1DF;
IL2CPP_EXTERN_C String_t* _stringLiteral21CB924F956F553EECFFED9041E81CF02E202DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral220E277E5C8FE04A7158E0EDB962D45086DE2C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral26A6F02448E08195101337F3B4CCCEB32EF9CE82;
IL2CPP_EXTERN_C String_t* _stringLiteral28E809022A2E2EDC0C14875C7529F5C90C6C828C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E12D65AE9828E5B7B85ED0C95535DBF1FABCD5A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7CBDD6F026BA63AEFCD54B76007348DA6A7FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral3558CF85C1F7EF7266959FF248C6F4E1FB795481;
IL2CPP_EXTERN_C String_t* _stringLiteral381E9649B4B6C89F5DCDCE0C0C971DF94ACCDBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5CA3D8BF840A9B8C713DB1328B72634ADCABC3;
IL2CPP_EXTERN_C String_t* _stringLiteral3DE7CEFAFA9D3ECE5442534D0AC13F8943BEB64F;
IL2CPP_EXTERN_C String_t* _stringLiteral41E584D82A6B88900C877C95BE260AE925B7E364;
IL2CPP_EXTERN_C String_t* _stringLiteral459006F089F9F8A5501297C702D001329727407D;
IL2CPP_EXTERN_C String_t* _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
IL2CPP_EXTERN_C String_t* _stringLiteral48EC734E1FD4D83D67808C2B564F0A4B93C987BA;
IL2CPP_EXTERN_C String_t* _stringLiteral4C05BA8D43A37910A297B6C87A35FCD2DC33D6B4;
IL2CPP_EXTERN_C String_t* _stringLiteral4D141CDC2FD9A0F3D1A151417429846E2ECE1171;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD1CD3D92CBF33D1B007D579A8E0ABE593044BB;
IL2CPP_EXTERN_C String_t* _stringLiteral50DB9443A4E1D01048DBE9C1DAEADAC5297B3108;
IL2CPP_EXTERN_C String_t* _stringLiteral51B956D3881F0E11A3278E51EB53B248539417A0;
IL2CPP_EXTERN_C String_t* _stringLiteral5E17C9549D7F53084714E5FD50DD86BC022B02FA;
IL2CPP_EXTERN_C String_t* _stringLiteral6624BAB35881AF66663620D9389F7EE080F15606;
IL2CPP_EXTERN_C String_t* _stringLiteral68D94E57DAB5FEFC1338969F1C23CE1464F80B87;
IL2CPP_EXTERN_C String_t* _stringLiteral6C7617FAC3B131E82D9701EABF0393599FECE33B;
IL2CPP_EXTERN_C String_t* _stringLiteral759C771BB3293190CA7B8A440565A0697FDC6E51;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2158E36CF9917B1B195BE13433AB9726406C06;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5102D04C1053C96BD4159EDF7FD42AF6C487F4;
IL2CPP_EXTERN_C String_t* _stringLiteral80E00B998BB7F094F2EDCC3861D5BEC34CF03773;
IL2CPP_EXTERN_C String_t* _stringLiteral8889AE9F5EA5CCB781608FB7652FAAC21DFBB482;
IL2CPP_EXTERN_C String_t* _stringLiteral88E4C8AEB4B4F7E4AA670EDF4AB5E6EA40A37E97;
IL2CPP_EXTERN_C String_t* _stringLiteral897F28070FE991FACA2A898324CF2FA525FCD2E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD1C92CA5E5AA27BFAB7F3CF4809C93B1CAC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral8D140BE54ABD0EF914FD0C2FB5ACB5A8697D979B;
IL2CPP_EXTERN_C String_t* _stringLiteral925FA4A25E7CDF1954FB32EBED53FC700EA2FE77;
IL2CPP_EXTERN_C String_t* _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1;
IL2CPP_EXTERN_C String_t* _stringLiteral98CE47A58F80FFC6BB865E5DB5F7CC2D38AF36BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2393D98D280BE03833F619698257256814EFAD;
IL2CPP_EXTERN_C String_t* _stringLiteralA24BB30A383092F0FC28FB8781D92E571E2A9C5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3FA152116D5719EB960AB500EACF6E48E214CE7;
IL2CPP_EXTERN_C String_t* _stringLiteralC15EA1537025AD95792564BE71BB7189ADF6F9A1;
IL2CPP_EXTERN_C String_t* _stringLiteralC2539F8CE1B9E8D97698C8E748DE078849D224B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC486E57F53D65D9AE8E00AF67588EACCA4939AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1EE1E1046B6FCED0C54773AC5B05F8B2ED0190;
IL2CPP_EXTERN_C String_t* _stringLiteralCD4815602C595BA27D00E172599D32543263AC09;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A67D020C15D2048716FD55FE37CFF4B4A6FCAC;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF2F2AC0280CE8BBD18AB308B86B5C53014ADBF;
IL2CPP_EXTERN_C String_t* _stringLiteralE03A664F605218E61D55F5B7D3F8F97A79373BF9;
IL2CPP_EXTERN_C String_t* _stringLiteralEE55484AE0140BBA0AF0F0013C978657F4BCA6A6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7BE52FF6D6DC227D7FF00213FF63EBE1AD3ED7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3DDA482A60E58600B20C066E81A0BC09019B7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C936677D96BA2D9A12DAC2C98038B3F1A5A1C9;
IL2CPP_EXTERN_C String_t* _stringLiteralF6F4603E2200E8BD22CE068DD8600808FB866B04;
IL2CPP_EXTERN_C String_t* _stringLiteralF9038B8BEA6C06EAF4CFCE8FC6E46B7EE762FE44;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4462977FCF45E8F5669DBE90BB8077143DD749;
IL2CPP_EXTERN_C String_t* _stringLiteralFFB3C902C0BEC3F5D254EA270EF61878EADBBFAA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m97BBAF6471237F787240B894A9EF5CCADE1728A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5CDD42879B659D8C20B144D5C9E4BD8205A81352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5E666E2AF383FC9395BEBDECD60E625C7DD887FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonFileReader_LoadJson_TisBlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0_m572A29C790147A9270819C32314DFF0B5E73363A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonFileReader_LoadJson_TisTransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B_m3E434BABCDA209DFC8073D780355D86971F767D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectImporter_onLoadComplete_m783D2DFFD71A13A11A6020334AE41D2274649FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5BBB0D883482314DA4DCC48E60DE032A02B28DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisRotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD_m64012E8FBF311CBDBA23C6D9815EF7130BBB7384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744_m6BF0BE48390382A96B2A8337F9CFFD59CAD067ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaptureAndSaveFramesU3Ed__3_System_Collections_IEnumerator_Reset_mD710407EC322F67396C4EE0BA65E86C0143CD8BD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>
struct  Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5BDAAD0D21BAEDA75910D61D1478759DCC3EA292* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t413D823BD6AA0528E2AF27F6BA984512989408D1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tABC57DD9A33DFA99C62E9BBB33646A1FFC45740B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___entries_1)); }
	inline EntryU5BU5D_t5BDAAD0D21BAEDA75910D61D1478759DCC3EA292* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5BDAAD0D21BAEDA75910D61D1478759DCC3EA292** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5BDAAD0D21BAEDA75910D61D1478759DCC3EA292* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___keys_7)); }
	inline KeyCollection_t413D823BD6AA0528E2AF27F6BA984512989408D1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t413D823BD6AA0528E2AF27F6BA984512989408D1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t413D823BD6AA0528E2AF27F6BA984512989408D1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ___values_8)); }
	inline ValueCollection_tABC57DD9A33DFA99C62E9BBB33646A1FFC45740B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tABC57DD9A33DFA99C62E9BBB33646A1FFC45740B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tABC57DD9A33DFA99C62E9BBB33646A1FFC45740B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___entries_1)); }
	inline EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___keys_7)); }
	inline KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___values_8)); }
	inline ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Extensions
struct  Extensions_t38CCC2747E91433B4CD9579C6D26C73E85BA499A  : public RuntimeObject
{
public:

public:
};


// Siccity.GLTFUtility.ImportSettings
struct  ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920  : public RuntimeObject
{
public:
	// System.Boolean Siccity.GLTFUtility.ImportSettings::materials
	bool ___materials_0;
	// Siccity.GLTFUtility.ShaderSettings Siccity.GLTFUtility.ImportSettings::shaderOverrides
	ShaderSettings_tD13640438380E6ECF852A21E924B0BFC05BD6DE9 * ___shaderOverrides_1;
	// Siccity.GLTFUtility.AnimationSettings Siccity.GLTFUtility.ImportSettings::animationSettings
	AnimationSettings_tFC83BE89FE49ED98C456FA4F20904F58851846E7 * ___animationSettings_2;
	// System.Single Siccity.GLTFUtility.ImportSettings::hardAngle
	float ___hardAngle_3;
	// System.Single Siccity.GLTFUtility.ImportSettings::angleError
	float ___angleError_4;
	// System.Single Siccity.GLTFUtility.ImportSettings::areaError
	float ___areaError_5;
	// System.Single Siccity.GLTFUtility.ImportSettings::packMargin
	float ___packMargin_6;

public:
	inline static int32_t get_offset_of_materials_0() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___materials_0)); }
	inline bool get_materials_0() const { return ___materials_0; }
	inline bool* get_address_of_materials_0() { return &___materials_0; }
	inline void set_materials_0(bool value)
	{
		___materials_0 = value;
	}

	inline static int32_t get_offset_of_shaderOverrides_1() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___shaderOverrides_1)); }
	inline ShaderSettings_tD13640438380E6ECF852A21E924B0BFC05BD6DE9 * get_shaderOverrides_1() const { return ___shaderOverrides_1; }
	inline ShaderSettings_tD13640438380E6ECF852A21E924B0BFC05BD6DE9 ** get_address_of_shaderOverrides_1() { return &___shaderOverrides_1; }
	inline void set_shaderOverrides_1(ShaderSettings_tD13640438380E6ECF852A21E924B0BFC05BD6DE9 * value)
	{
		___shaderOverrides_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderOverrides_1), (void*)value);
	}

	inline static int32_t get_offset_of_animationSettings_2() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___animationSettings_2)); }
	inline AnimationSettings_tFC83BE89FE49ED98C456FA4F20904F58851846E7 * get_animationSettings_2() const { return ___animationSettings_2; }
	inline AnimationSettings_tFC83BE89FE49ED98C456FA4F20904F58851846E7 ** get_address_of_animationSettings_2() { return &___animationSettings_2; }
	inline void set_animationSettings_2(AnimationSettings_tFC83BE89FE49ED98C456FA4F20904F58851846E7 * value)
	{
		___animationSettings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationSettings_2), (void*)value);
	}

	inline static int32_t get_offset_of_hardAngle_3() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___hardAngle_3)); }
	inline float get_hardAngle_3() const { return ___hardAngle_3; }
	inline float* get_address_of_hardAngle_3() { return &___hardAngle_3; }
	inline void set_hardAngle_3(float value)
	{
		___hardAngle_3 = value;
	}

	inline static int32_t get_offset_of_angleError_4() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___angleError_4)); }
	inline float get_angleError_4() const { return ___angleError_4; }
	inline float* get_address_of_angleError_4() { return &___angleError_4; }
	inline void set_angleError_4(float value)
	{
		___angleError_4 = value;
	}

	inline static int32_t get_offset_of_areaError_5() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___areaError_5)); }
	inline float get_areaError_5() const { return ___areaError_5; }
	inline float* get_address_of_areaError_5() { return &___areaError_5; }
	inline void set_areaError_5(float value)
	{
		___areaError_5 = value;
	}

	inline static int32_t get_offset_of_packMargin_6() { return static_cast<int32_t>(offsetof(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920, ___packMargin_6)); }
	inline float get_packMargin_6() const { return ___packMargin_6; }
	inline float* get_address_of_packMargin_6() { return &___packMargin_6; }
	inline void set_packMargin_6(float value)
	{
		___packMargin_6 = value;
	}
};


// JsonFileReader
struct  JsonFileReader_tE13DAE83F49BC3C3CE12052975A4C54DCE997E2E  : public RuntimeObject
{
public:

public:
};


// NativeAPI
struct  NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
};


// System.IO.Path
struct  Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921  : public RuntimeObject
{
public:

public:
};

struct Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsUnix_9;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidPathChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectorySeparatorStr_4), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathSeparatorChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}

	inline static int32_t get_offset_of_trimEndCharsWindows_8() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsWindows_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsWindows_8() const { return ___trimEndCharsWindows_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsWindows_8() { return &___trimEndCharsWindows_8; }
	inline void set_trimEndCharsWindows_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsWindows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsWindows_8), (void*)value);
	}

	inline static int32_t get_offset_of_trimEndCharsUnix_9() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsUnix_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsUnix_9() const { return ___trimEndCharsUnix_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsUnix_9() { return &___trimEndCharsUnix_9; }
	inline void set_trimEndCharsUnix_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsUnix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsUnix_9), (void*)value);
	}
};


// SpaceInfoRelative
struct  SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18  : public RuntimeObject
{
public:
	// System.Single SpaceInfoRelative::x
	float ___x_0;
	// System.Single SpaceInfoRelative::y
	float ___y_1;
	// System.Single SpaceInfoRelative::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// TransformRelative
struct  TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B  : public RuntimeObject
{
public:
	// PositionRelavie TransformRelative::position
	PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * ___position_0;
	// RotationRelative TransformRelative::rotation
	RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * ___rotation_1;
	// ScaleRelative TransformRelative::scale
	ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * ___scale_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B, ___position_0)); }
	inline PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * get_position_0() const { return ___position_0; }
	inline PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B ** get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * value)
	{
		___position_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_0), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B, ___rotation_1)); }
	inline RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * get_rotation_1() const { return ___rotation_1; }
	inline RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 ** get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * value)
	{
		___rotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotation_1), (void*)value);
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B, ___scale_2)); }
	inline ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * get_scale_2() const { return ___scale_2; }
	inline ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B ** get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * value)
	{
		___scale_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scale_2), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// OffscreenRendering/<CaptureAndSaveFrames>d__3
struct  U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC  : public RuntimeObject
{
public:
	// System.Int32 OffscreenRendering/<CaptureAndSaveFrames>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OffscreenRendering/<CaptureAndSaveFrames>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OffscreenRendering OffscreenRendering/<CaptureAndSaveFrames>d__3::<>4__this
	OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * ___U3CU3E4__this_2;
	// UnityEngine.Texture2D OffscreenRendering/<CaptureAndSaveFrames>d__3::<offscreenTexture>5__2
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CoffscreenTextureU3E5__2_3;
	// UnityEngine.AsyncOperation OffscreenRendering/<CaptureAndSaveFrames>d__3::<op>5__3
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CopU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC, ___U3CU3E4__this_2)); }
	inline OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoffscreenTextureU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC, ___U3CoffscreenTextureU3E5__2_3)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CoffscreenTextureU3E5__2_3() const { return ___U3CoffscreenTextureU3E5__2_3; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CoffscreenTextureU3E5__2_3() { return &___U3CoffscreenTextureU3E5__2_3; }
	inline void set_U3CoffscreenTextureU3E5__2_3(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CoffscreenTextureU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoffscreenTextureU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC, ___U3CopU3E5__3_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CopU3E5__3_4() const { return ___U3CopU3E5__3_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CopU3E5__3_4() { return &___U3CopU3E5__3_4; }
	inline void set_U3CopU3E5__3_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CopU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopU3E5__3_4), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// PositionRelavie
struct  PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B  : public SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18
{
public:

public:
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// RotationRelative
struct  RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287  : public SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18
{
public:

public:
};


// ScaleRelative
struct  ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B  : public SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// BlendShapeIndex
struct  BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Int32> BlendShapeIndex::browDown_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browDown_L_0;
	// System.Nullable`1<System.Int32> BlendShapeIndex::browDown_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browDown_R_1;
	// System.Nullable`1<System.Int32> BlendShapeIndex::browInnerUp_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browInnerUp_L_2;
	// System.Nullable`1<System.Int32> BlendShapeIndex::browInnerUp_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browInnerUp_R_3;
	// System.Nullable`1<System.Int32> BlendShapeIndex::browOuterUp_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browOuterUp_L_4;
	// System.Nullable`1<System.Int32> BlendShapeIndex::browOuterUp_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___browOuterUp_R_5;
	// System.Nullable`1<System.Int32> BlendShapeIndex::cheekPuff
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___cheekPuff_6;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeBlink_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeBlink_L_7;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeBlink_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeBlink_R_8;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookDown_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookDown_L_9;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookDown_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookDown_R_10;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookIn_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookIn_L_11;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookIn_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookIn_R_12;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookOut_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookOut_L_13;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookOut_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookOut_R_14;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookUp_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookUp_L_15;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeLookUp_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeLookUp_R_16;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeSquint_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeSquint_L_17;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeSquint_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeSquint_R_18;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeWide_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeWide_L_19;
	// System.Nullable`1<System.Int32> BlendShapeIndex::eyeWide_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___eyeWide_R_20;
	// System.Nullable`1<System.Int32> BlendShapeIndex::jawLeft
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___jawLeft_21;
	// System.Nullable`1<System.Int32> BlendShapeIndex::jawOpen
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___jawOpen_22;
	// System.Nullable`1<System.Int32> BlendShapeIndex::jawRight
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___jawRight_23;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthFrown_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthFrown_L_24;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthFrown_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthFrown_R_25;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthFunnel
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthFunnel_26;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthLeft
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthLeft_27;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthLowerDown_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthLowerDown_L_28;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthLowerDown_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthLowerDown_R_29;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthPucker
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthPucker_30;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthRight
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthRight_31;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthRollLower
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthRollLower_32;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthRollUpper
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthRollUpper_33;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthShrugUpper
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthShrugUpper_34;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthSmile_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthSmile_L_35;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthSmile_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthSmile_R_36;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthUpperUp_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthUpperUp_L_37;
	// System.Nullable`1<System.Int32> BlendShapeIndex::mouthUpperUp_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mouthUpperUp_R_38;
	// System.Nullable`1<System.Int32> BlendShapeIndex::noseSneer_L
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___noseSneer_L_39;
	// System.Nullable`1<System.Int32> BlendShapeIndex::noseSneer_R
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___noseSneer_R_40;
	// System.Nullable`1<System.Int32> BlendShapeIndex::tongueOutpublic
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___tongueOutpublic_41;

public:
	inline static int32_t get_offset_of_browDown_L_0() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browDown_L_0)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browDown_L_0() const { return ___browDown_L_0; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browDown_L_0() { return &___browDown_L_0; }
	inline void set_browDown_L_0(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browDown_L_0 = value;
	}

	inline static int32_t get_offset_of_browDown_R_1() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browDown_R_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browDown_R_1() const { return ___browDown_R_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browDown_R_1() { return &___browDown_R_1; }
	inline void set_browDown_R_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browDown_R_1 = value;
	}

	inline static int32_t get_offset_of_browInnerUp_L_2() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browInnerUp_L_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browInnerUp_L_2() const { return ___browInnerUp_L_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browInnerUp_L_2() { return &___browInnerUp_L_2; }
	inline void set_browInnerUp_L_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browInnerUp_L_2 = value;
	}

	inline static int32_t get_offset_of_browInnerUp_R_3() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browInnerUp_R_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browInnerUp_R_3() const { return ___browInnerUp_R_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browInnerUp_R_3() { return &___browInnerUp_R_3; }
	inline void set_browInnerUp_R_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browInnerUp_R_3 = value;
	}

	inline static int32_t get_offset_of_browOuterUp_L_4() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browOuterUp_L_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browOuterUp_L_4() const { return ___browOuterUp_L_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browOuterUp_L_4() { return &___browOuterUp_L_4; }
	inline void set_browOuterUp_L_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browOuterUp_L_4 = value;
	}

	inline static int32_t get_offset_of_browOuterUp_R_5() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___browOuterUp_R_5)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_browOuterUp_R_5() const { return ___browOuterUp_R_5; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_browOuterUp_R_5() { return &___browOuterUp_R_5; }
	inline void set_browOuterUp_R_5(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___browOuterUp_R_5 = value;
	}

	inline static int32_t get_offset_of_cheekPuff_6() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___cheekPuff_6)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_cheekPuff_6() const { return ___cheekPuff_6; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_cheekPuff_6() { return &___cheekPuff_6; }
	inline void set_cheekPuff_6(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___cheekPuff_6 = value;
	}

	inline static int32_t get_offset_of_eyeBlink_L_7() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeBlink_L_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeBlink_L_7() const { return ___eyeBlink_L_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeBlink_L_7() { return &___eyeBlink_L_7; }
	inline void set_eyeBlink_L_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeBlink_L_7 = value;
	}

	inline static int32_t get_offset_of_eyeBlink_R_8() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeBlink_R_8)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeBlink_R_8() const { return ___eyeBlink_R_8; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeBlink_R_8() { return &___eyeBlink_R_8; }
	inline void set_eyeBlink_R_8(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeBlink_R_8 = value;
	}

	inline static int32_t get_offset_of_eyeLookDown_L_9() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookDown_L_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookDown_L_9() const { return ___eyeLookDown_L_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookDown_L_9() { return &___eyeLookDown_L_9; }
	inline void set_eyeLookDown_L_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookDown_L_9 = value;
	}

	inline static int32_t get_offset_of_eyeLookDown_R_10() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookDown_R_10)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookDown_R_10() const { return ___eyeLookDown_R_10; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookDown_R_10() { return &___eyeLookDown_R_10; }
	inline void set_eyeLookDown_R_10(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookDown_R_10 = value;
	}

	inline static int32_t get_offset_of_eyeLookIn_L_11() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookIn_L_11)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookIn_L_11() const { return ___eyeLookIn_L_11; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookIn_L_11() { return &___eyeLookIn_L_11; }
	inline void set_eyeLookIn_L_11(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookIn_L_11 = value;
	}

	inline static int32_t get_offset_of_eyeLookIn_R_12() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookIn_R_12)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookIn_R_12() const { return ___eyeLookIn_R_12; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookIn_R_12() { return &___eyeLookIn_R_12; }
	inline void set_eyeLookIn_R_12(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookIn_R_12 = value;
	}

	inline static int32_t get_offset_of_eyeLookOut_L_13() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookOut_L_13)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookOut_L_13() const { return ___eyeLookOut_L_13; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookOut_L_13() { return &___eyeLookOut_L_13; }
	inline void set_eyeLookOut_L_13(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookOut_L_13 = value;
	}

	inline static int32_t get_offset_of_eyeLookOut_R_14() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookOut_R_14)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookOut_R_14() const { return ___eyeLookOut_R_14; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookOut_R_14() { return &___eyeLookOut_R_14; }
	inline void set_eyeLookOut_R_14(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookOut_R_14 = value;
	}

	inline static int32_t get_offset_of_eyeLookUp_L_15() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookUp_L_15)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookUp_L_15() const { return ___eyeLookUp_L_15; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookUp_L_15() { return &___eyeLookUp_L_15; }
	inline void set_eyeLookUp_L_15(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookUp_L_15 = value;
	}

	inline static int32_t get_offset_of_eyeLookUp_R_16() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeLookUp_R_16)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeLookUp_R_16() const { return ___eyeLookUp_R_16; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeLookUp_R_16() { return &___eyeLookUp_R_16; }
	inline void set_eyeLookUp_R_16(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeLookUp_R_16 = value;
	}

	inline static int32_t get_offset_of_eyeSquint_L_17() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeSquint_L_17)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeSquint_L_17() const { return ___eyeSquint_L_17; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeSquint_L_17() { return &___eyeSquint_L_17; }
	inline void set_eyeSquint_L_17(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeSquint_L_17 = value;
	}

	inline static int32_t get_offset_of_eyeSquint_R_18() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeSquint_R_18)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeSquint_R_18() const { return ___eyeSquint_R_18; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeSquint_R_18() { return &___eyeSquint_R_18; }
	inline void set_eyeSquint_R_18(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeSquint_R_18 = value;
	}

	inline static int32_t get_offset_of_eyeWide_L_19() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeWide_L_19)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeWide_L_19() const { return ___eyeWide_L_19; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeWide_L_19() { return &___eyeWide_L_19; }
	inline void set_eyeWide_L_19(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeWide_L_19 = value;
	}

	inline static int32_t get_offset_of_eyeWide_R_20() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___eyeWide_R_20)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_eyeWide_R_20() const { return ___eyeWide_R_20; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_eyeWide_R_20() { return &___eyeWide_R_20; }
	inline void set_eyeWide_R_20(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___eyeWide_R_20 = value;
	}

	inline static int32_t get_offset_of_jawLeft_21() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___jawLeft_21)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_jawLeft_21() const { return ___jawLeft_21; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_jawLeft_21() { return &___jawLeft_21; }
	inline void set_jawLeft_21(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___jawLeft_21 = value;
	}

	inline static int32_t get_offset_of_jawOpen_22() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___jawOpen_22)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_jawOpen_22() const { return ___jawOpen_22; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_jawOpen_22() { return &___jawOpen_22; }
	inline void set_jawOpen_22(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___jawOpen_22 = value;
	}

	inline static int32_t get_offset_of_jawRight_23() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___jawRight_23)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_jawRight_23() const { return ___jawRight_23; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_jawRight_23() { return &___jawRight_23; }
	inline void set_jawRight_23(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___jawRight_23 = value;
	}

	inline static int32_t get_offset_of_mouthFrown_L_24() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthFrown_L_24)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthFrown_L_24() const { return ___mouthFrown_L_24; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthFrown_L_24() { return &___mouthFrown_L_24; }
	inline void set_mouthFrown_L_24(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthFrown_L_24 = value;
	}

	inline static int32_t get_offset_of_mouthFrown_R_25() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthFrown_R_25)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthFrown_R_25() const { return ___mouthFrown_R_25; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthFrown_R_25() { return &___mouthFrown_R_25; }
	inline void set_mouthFrown_R_25(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthFrown_R_25 = value;
	}

	inline static int32_t get_offset_of_mouthFunnel_26() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthFunnel_26)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthFunnel_26() const { return ___mouthFunnel_26; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthFunnel_26() { return &___mouthFunnel_26; }
	inline void set_mouthFunnel_26(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthFunnel_26 = value;
	}

	inline static int32_t get_offset_of_mouthLeft_27() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthLeft_27)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthLeft_27() const { return ___mouthLeft_27; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthLeft_27() { return &___mouthLeft_27; }
	inline void set_mouthLeft_27(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthLeft_27 = value;
	}

	inline static int32_t get_offset_of_mouthLowerDown_L_28() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthLowerDown_L_28)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthLowerDown_L_28() const { return ___mouthLowerDown_L_28; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthLowerDown_L_28() { return &___mouthLowerDown_L_28; }
	inline void set_mouthLowerDown_L_28(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthLowerDown_L_28 = value;
	}

	inline static int32_t get_offset_of_mouthLowerDown_R_29() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthLowerDown_R_29)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthLowerDown_R_29() const { return ___mouthLowerDown_R_29; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthLowerDown_R_29() { return &___mouthLowerDown_R_29; }
	inline void set_mouthLowerDown_R_29(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthLowerDown_R_29 = value;
	}

	inline static int32_t get_offset_of_mouthPucker_30() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthPucker_30)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthPucker_30() const { return ___mouthPucker_30; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthPucker_30() { return &___mouthPucker_30; }
	inline void set_mouthPucker_30(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthPucker_30 = value;
	}

	inline static int32_t get_offset_of_mouthRight_31() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthRight_31)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthRight_31() const { return ___mouthRight_31; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthRight_31() { return &___mouthRight_31; }
	inline void set_mouthRight_31(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthRight_31 = value;
	}

	inline static int32_t get_offset_of_mouthRollLower_32() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthRollLower_32)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthRollLower_32() const { return ___mouthRollLower_32; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthRollLower_32() { return &___mouthRollLower_32; }
	inline void set_mouthRollLower_32(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthRollLower_32 = value;
	}

	inline static int32_t get_offset_of_mouthRollUpper_33() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthRollUpper_33)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthRollUpper_33() const { return ___mouthRollUpper_33; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthRollUpper_33() { return &___mouthRollUpper_33; }
	inline void set_mouthRollUpper_33(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthRollUpper_33 = value;
	}

	inline static int32_t get_offset_of_mouthShrugUpper_34() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthShrugUpper_34)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthShrugUpper_34() const { return ___mouthShrugUpper_34; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthShrugUpper_34() { return &___mouthShrugUpper_34; }
	inline void set_mouthShrugUpper_34(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthShrugUpper_34 = value;
	}

	inline static int32_t get_offset_of_mouthSmile_L_35() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthSmile_L_35)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthSmile_L_35() const { return ___mouthSmile_L_35; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthSmile_L_35() { return &___mouthSmile_L_35; }
	inline void set_mouthSmile_L_35(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthSmile_L_35 = value;
	}

	inline static int32_t get_offset_of_mouthSmile_R_36() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthSmile_R_36)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthSmile_R_36() const { return ___mouthSmile_R_36; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthSmile_R_36() { return &___mouthSmile_R_36; }
	inline void set_mouthSmile_R_36(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthSmile_R_36 = value;
	}

	inline static int32_t get_offset_of_mouthUpperUp_L_37() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthUpperUp_L_37)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthUpperUp_L_37() const { return ___mouthUpperUp_L_37; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthUpperUp_L_37() { return &___mouthUpperUp_L_37; }
	inline void set_mouthUpperUp_L_37(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthUpperUp_L_37 = value;
	}

	inline static int32_t get_offset_of_mouthUpperUp_R_38() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___mouthUpperUp_R_38)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mouthUpperUp_R_38() const { return ___mouthUpperUp_R_38; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mouthUpperUp_R_38() { return &___mouthUpperUp_R_38; }
	inline void set_mouthUpperUp_R_38(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mouthUpperUp_R_38 = value;
	}

	inline static int32_t get_offset_of_noseSneer_L_39() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___noseSneer_L_39)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_noseSneer_L_39() const { return ___noseSneer_L_39; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_noseSneer_L_39() { return &___noseSneer_L_39; }
	inline void set_noseSneer_L_39(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___noseSneer_L_39 = value;
	}

	inline static int32_t get_offset_of_noseSneer_R_40() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___noseSneer_R_40)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_noseSneer_R_40() const { return ___noseSneer_R_40; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_noseSneer_R_40() { return &___noseSneer_R_40; }
	inline void set_noseSneer_R_40(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___noseSneer_R_40 = value;
	}

	inline static int32_t get_offset_of_tongueOutpublic_41() { return static_cast<int32_t>(offsetof(BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0, ___tongueOutpublic_41)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_tongueOutpublic_41() const { return ___tongueOutpublic_41; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_tongueOutpublic_41() { return &___tongueOutpublic_41; }
	inline void set_tongueOutpublic_41(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___tongueOutpublic_41 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Motion
struct  Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Single>
struct  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.GameObject,UnityEngine.AnimationClip[]>
struct  Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AnimationClip
struct  AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct  SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// FacialController
struct  FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SkinnedMeshRenderer FacialController::skinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___skinnedMeshRenderer_4;
	// RotationController FacialController::rotationController
	RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * ___rotationController_5;
	// TiltsionController FacialController::tiltsionController
	TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * ___tiltsionController_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>> FacialController::blendShapeDirectory
	Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * ___blendShapeDirectory_7;

public:
	inline static int32_t get_offset_of_skinnedMeshRenderer_4() { return static_cast<int32_t>(offsetof(FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF, ___skinnedMeshRenderer_4)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_skinnedMeshRenderer_4() const { return ___skinnedMeshRenderer_4; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_skinnedMeshRenderer_4() { return &___skinnedMeshRenderer_4; }
	inline void set_skinnedMeshRenderer_4(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___skinnedMeshRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skinnedMeshRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_rotationController_5() { return static_cast<int32_t>(offsetof(FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF, ___rotationController_5)); }
	inline RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * get_rotationController_5() const { return ___rotationController_5; }
	inline RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD ** get_address_of_rotationController_5() { return &___rotationController_5; }
	inline void set_rotationController_5(RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * value)
	{
		___rotationController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationController_5), (void*)value);
	}

	inline static int32_t get_offset_of_tiltsionController_6() { return static_cast<int32_t>(offsetof(FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF, ___tiltsionController_6)); }
	inline TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * get_tiltsionController_6() const { return ___tiltsionController_6; }
	inline TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 ** get_address_of_tiltsionController_6() { return &___tiltsionController_6; }
	inline void set_tiltsionController_6(TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * value)
	{
		___tiltsionController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiltsionController_6), (void*)value);
	}

	inline static int32_t get_offset_of_blendShapeDirectory_7() { return static_cast<int32_t>(offsetof(FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF, ___blendShapeDirectory_7)); }
	inline Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * get_blendShapeDirectory_7() const { return ___blendShapeDirectory_7; }
	inline Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E ** get_address_of_blendShapeDirectory_7() { return &___blendShapeDirectory_7; }
	inline void set_blendShapeDirectory_7(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * value)
	{
		___blendShapeDirectory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendShapeDirectory_7), (void*)value);
	}
};


// ObjectImporter
struct  ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ObjectImporter::Multithreaded
	bool ___Multithreaded_4;
	// System.Int32 ObjectImporter::MaximumLod
	int32_t ___MaximumLod_5;
	// System.String ObjectImporter::repoPath
	String_t* ___repoPath_6;
	// System.String ObjectImporter::originPatn
	String_t* ___originPatn_7;
	// UnityEngine.GameObject ObjectImporter::rootHead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rootHead_8;

public:
	inline static int32_t get_offset_of_Multithreaded_4() { return static_cast<int32_t>(offsetof(ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C, ___Multithreaded_4)); }
	inline bool get_Multithreaded_4() const { return ___Multithreaded_4; }
	inline bool* get_address_of_Multithreaded_4() { return &___Multithreaded_4; }
	inline void set_Multithreaded_4(bool value)
	{
		___Multithreaded_4 = value;
	}

	inline static int32_t get_offset_of_MaximumLod_5() { return static_cast<int32_t>(offsetof(ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C, ___MaximumLod_5)); }
	inline int32_t get_MaximumLod_5() const { return ___MaximumLod_5; }
	inline int32_t* get_address_of_MaximumLod_5() { return &___MaximumLod_5; }
	inline void set_MaximumLod_5(int32_t value)
	{
		___MaximumLod_5 = value;
	}

	inline static int32_t get_offset_of_repoPath_6() { return static_cast<int32_t>(offsetof(ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C, ___repoPath_6)); }
	inline String_t* get_repoPath_6() const { return ___repoPath_6; }
	inline String_t** get_address_of_repoPath_6() { return &___repoPath_6; }
	inline void set_repoPath_6(String_t* value)
	{
		___repoPath_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___repoPath_6), (void*)value);
	}

	inline static int32_t get_offset_of_originPatn_7() { return static_cast<int32_t>(offsetof(ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C, ___originPatn_7)); }
	inline String_t* get_originPatn_7() const { return ___originPatn_7; }
	inline String_t** get_address_of_originPatn_7() { return &___originPatn_7; }
	inline void set_originPatn_7(String_t* value)
	{
		___originPatn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originPatn_7), (void*)value);
	}

	inline static int32_t get_offset_of_rootHead_8() { return static_cast<int32_t>(offsetof(ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C, ___rootHead_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rootHead_8() const { return ___rootHead_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rootHead_8() { return &___rootHead_8; }
	inline void set_rootHead_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rootHead_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootHead_8), (void*)value);
	}
};


// OffscreenRendering
struct  OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 OffscreenRendering::ScreenshotsPerSecond
	int32_t ___ScreenshotsPerSecond_4;
	// UnityEngine.Camera OffscreenRendering::OffscreenCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___OffscreenCamera_5;

public:
	inline static int32_t get_offset_of_ScreenshotsPerSecond_4() { return static_cast<int32_t>(offsetof(OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E, ___ScreenshotsPerSecond_4)); }
	inline int32_t get_ScreenshotsPerSecond_4() const { return ___ScreenshotsPerSecond_4; }
	inline int32_t* get_address_of_ScreenshotsPerSecond_4() { return &___ScreenshotsPerSecond_4; }
	inline void set_ScreenshotsPerSecond_4(int32_t value)
	{
		___ScreenshotsPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_OffscreenCamera_5() { return static_cast<int32_t>(offsetof(OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E, ___OffscreenCamera_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_OffscreenCamera_5() const { return ___OffscreenCamera_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_OffscreenCamera_5() { return &___OffscreenCamera_5; }
	inline void set_OffscreenCamera_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___OffscreenCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OffscreenCamera_5), (void*)value);
	}
};


// RotationController
struct  RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 RotationController::vector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector_4;

public:
	inline static int32_t get_offset_of_vector_4() { return static_cast<int32_t>(offsetof(RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD, ___vector_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vector_4() const { return ___vector_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vector_4() { return &___vector_4; }
	inline void set_vector_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vector_4 = value;
	}
};


// TiltsionController
struct  TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 TiltsionController::vector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector_4;

public:
	inline static int32_t get_offset_of_vector_4() { return static_cast<int32_t>(offsetof(TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744, ___vector_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vector_4() const { return ___vector_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vector_4() { return &___vector_4; }
	inline void set_vector_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * m_Items[1];

public:
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFC4C49F4926D252A355C16F0C76E6D71CAE0FFB9_gshared (Dictionary_2_t7E72723E871E970AACB2F86E2AD3964890A84059 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m07B5760C3232BDBF970DB31869522BA7EA2204AF_gshared (Dictionary_2_t7E72723E871E970AACB2F86E2AD3964890A84059 * __this, RuntimeObject * ___key0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  Dictionary_2_get_Item_mC79B5616B4961BFFAF0EF147517F453EFE7FBA70_gshared (Dictionary_2_t7E72723E871E970AACB2F86E2AD3964890A84059 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_mDA1DF0A63C6EBE16AAB34B08523B52D408EF3790_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// T JsonFileReader::LoadJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonFileReader_LoadJson_TisRuntimeObject_mD4CBFFA86A89C41CCB90BD3C7F32B289ADEEFFB0_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m5CDD42879B659D8C20B144D5C9E4BD8205A81352 (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E *, const RuntimeMethod*))Dictionary_2__ctor_mFC4C49F4926D252A355C16F0C76E6D71CAE0FFB9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680 (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * __this, String_t* ___key0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E *, String_t*, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , const RuntimeMethod*))Dictionary_2_set_Item_m07B5760C3232BDBF970DB31869522BA7EA2204AF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void FacialController::initController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_initController_m851365DDC956B1AB0FCAA11F9EB7461ABA3B8929 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<RotationController>()
inline RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * Object_FindObjectOfType_TisRotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD_m64012E8FBF311CBDBA23C6D9815EF7130BBB7384 (const RuntimeMethod* method)
{
	return ((  RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<TiltsionController>()
inline TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * Object_FindObjectOfType_TisTiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744_m6BF0BE48390382A96B2A8337F9CFFD59CAD067ED (const RuntimeMethod* method)
{
	return ((  TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>::get_Item(!0)
inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462 (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  (*) (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mC79B5616B4961BFFAF0EF147517F453EFE7FBA70_gshared)(__this, ___key0, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *, const RuntimeMethod*))Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *, String_t*, float, const RuntimeMethod*))Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(!0)
inline float Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mDA1DF0A63C6EBE16AAB34B08523B52D408EF3790_gshared)(__this, ___key0, method);
}
// System.Void RotationController::Execute(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_Execute_m2663386062A3E14B2EF7E40644F3C77CCD880B6A (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, float ___rotationX0, float ___rotationY1, const RuntimeMethod* method);
// System.Void TiltsionController::Execute(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController_Execute_m8D4606F424AF8C1575C8C1D5FE4EF203F826C792 (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, float ___rotationZ0, const RuntimeMethod* method);
// System.Void RotationController::ResetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_ResetTransform_m95D63A9DF2DFB5D4455655B7D12AC035B01D6C67 (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7 (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void ObjectImporter::execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_execute_mF333ADB4CC19DD8E91E41D8D1EA1A52C9D3E2033 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// System.Void ObjectImporter::destroyOldObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_destroyOldObject_m2AC850924AB04B50ACB519DBD3546EDF45D72745 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// System.Void Siccity.GLTFUtility.ImportSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportSettings__ctor_mEDBEA61B134664E6D182074AD238AE16D46D6BE6 (ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 * __this, const RuntimeMethod* method);
// System.String ObjectImporter::get_modelPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_modelPath_m7EB2F7E6633EB3CC334427A55AEDD33A63A6E083 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.GameObject,UnityEngine.AnimationClip[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m97BBAF6471237F787240B894A9EF5CCADE1728A0 (Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Siccity.GLTFUtility.Importer::ImportGLTFAsync(System.String,Siccity.GLTFUtility.ImportSettings,System.Action`2<UnityEngine.GameObject,UnityEngine.AnimationClip[]>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Importer_ImportGLTFAsync_mAE86C9D12A7F08E8F001B3BCF717A1043D60028F (String_t* ___filepath0, ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 * ___importSettings1, Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE * ___onFinished2, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onProgress3, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectImporter::get_headObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_headObject_m980BF4A8CA03F1523E36ED9E187D585C70ED077C (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectImporter::get_rootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_rootObject_mAFBDAB9337128AABE6C1BD60AA1094430EEC3EC1 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// System.String ObjectImporter::get_transformPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_transformPath_m5348BD48DB4B1DD96ACDD66E29A07CD1018511CF (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// T JsonFileReader::LoadJson<TransformRelative>(System.String)
inline TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * JsonFileReader_LoadJson_TisTransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B_m3E434BABCDA209DFC8073D780355D86971F767D6 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * (*) (String_t*, const RuntimeMethod*))JsonFileReader_LoadJson_TisRuntimeObject_mD4CBFFA86A89C41CCB90BD3C7F32B289ADEEFFB0_gshared)(___path0, method);
}
// System.String ObjectImporter::get_shapeKeyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_shapeKeyPath_m445473F189E16DF5D7A5CBD26E1FB7330FD4FF8C (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// T JsonFileReader::LoadJson<BlendShapeIndex>(System.String)
inline BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * JsonFileReader_LoadJson_TisBlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0_m572A29C790147A9270819C32314DFF0B5E73363A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * (*) (String_t*, const RuntimeMethod*))JsonFileReader_LoadJson_TisRuntimeObject_mD4CBFFA86A89C41CCB90BD3C7F32B289ADEEFFB0_gshared)(___path0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>> BlendShapeIndex::ExportDiectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * BlendShapeIndex_ExportDiectory_mA1E7856F809987B02A3E341EC9DB76AA1D6EC4F9 (BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectImporter::get_skeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_skeleton_mB9E61803274E25C833EB79BE2368448DD92B2F1A (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<FacialController>()
inline FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * GameObject_AddComponent_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5E666E2AF383FC9395BEBDECD60E625C7DD887FD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<FacialController>()
inline FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * Object_FindObjectOfType_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5BBB0D883482314DA4DCC48E60DE032A02B28DC0 (const RuntimeMethod* method)
{
	return ((  FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void FacialController::Initialize(System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_Initialize_m180DD15C87EE85A110A8914A4A1EC532013740F7 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * ___blendShapeDirectory0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void ObjectImporter::LoadModel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_LoadModel_m84197B42623E75C3A0CD1CD30B13C357B16F6732 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void OffscreenRendering/<CaptureAndSaveFrames>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureAndSaveFramesU3Ed__3__ctor_m330F195DA777474FF0883C0AA4215F68CF773687 (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9 (const RuntimeMethod* method);
// System.Void System.GC::WaitForPendingFinalizers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_WaitForPendingFinalizers_m294758E9315CCF04B051CED57527CFA7BB65CAD6 (const RuntimeMethod* method);
// System.Void SpaceInfoRelative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpaceInfoRelative__ctor_mBDF53E82EAB51F21AFD65A23FC80CBD0660037E4 (SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70 (const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_m7D61B2296A172A4C4636D325CAE5757D60170B6F (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.Void NativeAPI::sendMessageToMobileApp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_sendMessageToMobileApp_mDCBC0FC6DB773BB5D92EB785FA55D6198D7D227F (int64_t ___textTureId0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlendShapeIndex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendShapeIndex__ctor_m84A4BCF5F7AA1A3CCD24976ECB96DD9BC7EB4091 (BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * __this, const RuntimeMethod* method)
{
	{
		// public BlendShapeIndex() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public BlendShapeIndex() { }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>> BlendShapeIndex::ExportDiectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * BlendShapeIndex_ExportDiectory_mA1E7856F809987B02A3E341EC9DB76AA1D6EC4F9 (BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5CDD42879B659D8C20B144D5C9E4BD8205A81352_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0278FD43FF658F79A56F7B28B871675E46269E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03DA96C27F8210B40D9286C2B4D7A118A4E8DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1EAC9005AC0B616FD8A495C98401243B2EEF32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F06AFB888ACE577DEC5374CD354DE25EA4AD1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CB924F956F553EECFFED9041E81CF02E202DB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral220E277E5C8FE04A7158E0EDB962D45086DE2C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E809022A2E2EDC0C14875C7529F5C90C6C828C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7CBDD6F026BA63AEFCD54B76007348DA6A7FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3558CF85C1F7EF7266959FF248C6F4E1FB795481);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5CA3D8BF840A9B8C713DB1328B72634ADCABC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DE7CEFAFA9D3ECE5442534D0AC13F8943BEB64F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459006F089F9F8A5501297C702D001329727407D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48EC734E1FD4D83D67808C2B564F0A4B93C987BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C05BA8D43A37910A297B6C87A35FCD2DC33D6B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D141CDC2FD9A0F3D1A151417429846E2ECE1171);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD1CD3D92CBF33D1B007D579A8E0ABE593044BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DB9443A4E1D01048DBE9C1DAEADAC5297B3108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B956D3881F0E11A3278E51EB53B248539417A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E17C9549D7F53084714E5FD50DD86BC022B02FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C7617FAC3B131E82D9701EABF0393599FECE33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759C771BB3293190CA7B8A440565A0697FDC6E51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5102D04C1053C96BD4159EDF7FD42AF6C487F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E00B998BB7F094F2EDCC3861D5BEC34CF03773);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8889AE9F5EA5CCB781608FB7652FAAC21DFBB482);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88E4C8AEB4B4F7E4AA670EDF4AB5E6EA40A37E97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral897F28070FE991FACA2A898324CF2FA525FCD2E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CD1C92CA5E5AA27BFAB7F3CF4809C93B1CAC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D140BE54ABD0EF914FD0C2FB5ACB5A8697D979B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925FA4A25E7CDF1954FB32EBED53FC700EA2FE77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98CE47A58F80FFC6BB865E5DB5F7CC2D38AF36BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA24BB30A383092F0FC28FB8781D92E571E2A9C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3FA152116D5719EB960AB500EACF6E48E214CE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD1EE1E1046B6FCED0C54773AC5B05F8B2ED0190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD4815602C595BA27D00E172599D32543263AC09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A67D020C15D2048716FD55FE37CFF4B4A6FCAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE03A664F605218E61D55F5B7D3F8F97A79373BF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7BE52FF6D6DC227D7FF00213FF63EBE1AD3ED7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3DDA482A60E58600B20C066E81A0BC09019B7B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C936677D96BA2D9A12DAC2C98038B3F1A5A1C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6F4603E2200E8BD22CE068DD8600808FB866B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9038B8BEA6C06EAF4CFCE8FC6E46B7EE762FE44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFB3C902C0BEC3F5D254EA270EF61878EADBBFAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<string, int?> directory = new Dictionary<string, int?>();
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_0 = (Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E *)il2cpp_codegen_object_new(Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5CDD42879B659D8C20B144D5C9E4BD8205A81352(L_0, /*hidden argument*/Dictionary_2__ctor_m5CDD42879B659D8C20B144D5C9E4BD8205A81352_RuntimeMethod_var);
		// directory["browDown_L"] = browDown_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_1 = L_0;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_2 = __this->get_browDown_L_0();
		NullCheck(L_1);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_1, _stringLiteralA24BB30A383092F0FC28FB8781D92E571E2A9C5E, L_2, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["browDown_R"] = browDown_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_3 = L_1;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4 = __this->get_browDown_R_1();
		NullCheck(L_3);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_3, _stringLiteral5E17C9549D7F53084714E5FD50DD86BC022B02FA, L_4, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["browInnerUp_L"] = browInnerUp_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_5 = L_3;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_6 = __this->get_browInnerUp_L_2();
		NullCheck(L_5);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_5, _stringLiteral8D140BE54ABD0EF914FD0C2FB5ACB5A8697D979B, L_6, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["browInnerUp_R"] = browInnerUp_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_7 = L_5;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_8 = __this->get_browInnerUp_R_3();
		NullCheck(L_7);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_7, _stringLiteral3DE7CEFAFA9D3ECE5442534D0AC13F8943BEB64F, L_8, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["browOuterUp_L"] = browOuterUp_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_9 = L_7;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_10 = __this->get_browOuterUp_L_4();
		NullCheck(L_9);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_9, _stringLiteral48EC734E1FD4D83D67808C2B564F0A4B93C987BA, L_10, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["browOuterUp_R"] = browOuterUp_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_11 = L_9;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12 = __this->get_browOuterUp_R_5();
		NullCheck(L_11);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_11, _stringLiteral50DB9443A4E1D01048DBE9C1DAEADAC5297B3108, L_12, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["cheekPuff"] = cheekPuff;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_13 = L_11;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_14 = __this->get_cheekPuff_6();
		NullCheck(L_13);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_13, _stringLiteral897F28070FE991FACA2A898324CF2FA525FCD2E5, L_14, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeBlink_L"] = eyeBlink_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_15 = L_13;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_16 = __this->get_eyeBlink_L_7();
		NullCheck(L_15);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_15, _stringLiteralEE7BE52FF6D6DC227D7FF00213FF63EBE1AD3ED7, L_16, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeBlink_R"] = eyeBlink_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_17 = L_15;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_18 = __this->get_eyeBlink_R_8();
		NullCheck(L_17);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_17, _stringLiteralD8A67D020C15D2048716FD55FE37CFF4B4A6FCAC, L_18, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookDown_L"] = eyeLookDown_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_19 = L_17;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20 = __this->get_eyeLookDown_L_9();
		NullCheck(L_19);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_19, _stringLiteral6C7617FAC3B131E82D9701EABF0393599FECE33B, L_20, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookDown_R"] = eyeLookDown_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_21 = L_19;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_22 = __this->get_eyeLookDown_R_10();
		NullCheck(L_21);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_21, _stringLiteral51B956D3881F0E11A3278E51EB53B248539417A0, L_22, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookIn_L"] = eyeLookIn_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_23 = L_21;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24 = __this->get_eyeLookIn_L_11();
		NullCheck(L_23);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_23, _stringLiteral7D5102D04C1053C96BD4159EDF7FD42AF6C487F4, L_24, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookIn_R"] = eyeLookIn_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_25 = L_23;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_26 = __this->get_eyeLookIn_R_12();
		NullCheck(L_25);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_25, _stringLiteral2F7CBDD6F026BA63AEFCD54B76007348DA6A7FC4, L_26, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookOut_L"] = eyeLookOut_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_27 = L_25;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28 = __this->get_eyeLookOut_L_13();
		NullCheck(L_27);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_27, _stringLiteral1F06AFB888ACE577DEC5374CD354DE25EA4AD1DF, L_28, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookOut_R"] = eyeLookOut_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_29 = L_27;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_30 = __this->get_eyeLookOut_R_14();
		NullCheck(L_29);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_29, _stringLiteral21CB924F956F553EECFFED9041E81CF02E202DB9, L_30, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookUp_L"] = eyeLookUp_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_31 = L_29;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_32 = __this->get_eyeLookUp_L_15();
		NullCheck(L_31);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_31, _stringLiteralE03A664F605218E61D55F5B7D3F8F97A79373BF9, L_32, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeLookUp_R"] = eyeLookUp_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_33 = L_31;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_34 = __this->get_eyeLookUp_R_16();
		NullCheck(L_33);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_33, _stringLiteral3558CF85C1F7EF7266959FF248C6F4E1FB795481, L_34, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeSquint_L"] = eyeSquint_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_35 = L_33;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_36 = __this->get_eyeSquint_L_17();
		NullCheck(L_35);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_35, _stringLiteral4D141CDC2FD9A0F3D1A151417429846E2ECE1171, L_36, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeSquint_R"] = eyeSquint_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_37 = L_35;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_38 = __this->get_eyeSquint_R_18();
		NullCheck(L_37);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_37, _stringLiteral759C771BB3293190CA7B8A440565A0697FDC6E51, L_38, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeWide_L"] = eyeWide_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_39 = L_37;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_40 = __this->get_eyeWide_L_19();
		NullCheck(L_39);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_39, _stringLiteral3B5CA3D8BF840A9B8C713DB1328B72634ADCABC3, L_40, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["eyeWide_R"] = eyeWide_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_41 = L_39;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_42 = __this->get_eyeWide_R_20();
		NullCheck(L_41);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_41, _stringLiteral80E00B998BB7F094F2EDCC3861D5BEC34CF03773, L_42, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["jawLeft"] = jawLeft;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_43 = L_41;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_44 = __this->get_jawLeft_21();
		NullCheck(L_43);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_43, _stringLiteral4DD1CD3D92CBF33D1B007D579A8E0ABE593044BB, L_44, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["jawOpen"] = jawOpen;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_45 = L_43;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_46 = __this->get_jawOpen_22();
		NullCheck(L_45);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_45, _stringLiteral0278FD43FF658F79A56F7B28B871675E46269E14, L_46, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["jawRight"] = jawRight;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_47 = L_45;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_48 = __this->get_jawRight_23();
		NullCheck(L_47);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_47, _stringLiteral8889AE9F5EA5CCB781608FB7652FAAC21DFBB482, L_48, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthFrown_L"] = mouthFrown_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_49 = L_47;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_50 = __this->get_mouthFrown_L_24();
		NullCheck(L_49);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_49, _stringLiteralFFB3C902C0BEC3F5D254EA270EF61878EADBBFAA, L_50, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthFrown_R"] = mouthFrown_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_51 = L_49;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_52 = __this->get_mouthFrown_R_25();
		NullCheck(L_51);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_51, _stringLiteral98CE47A58F80FFC6BB865E5DB5F7CC2D38AF36BF, L_52, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthFunnel"] = mouthFunnel;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_53 = L_51;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_54 = __this->get_mouthFunnel_26();
		NullCheck(L_53);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_53, _stringLiteral88E4C8AEB4B4F7E4AA670EDF4AB5E6EA40A37E97, L_54, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthLeft"] = mouthLeft;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_55 = L_53;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_56 = __this->get_mouthLeft_27();
		NullCheck(L_55);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_55, _stringLiteral8CD1C92CA5E5AA27BFAB7F3CF4809C93B1CAC9D0, L_56, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthLowerDown_L"] = mouthLowerDown_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_57 = L_55;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_58 = __this->get_mouthLowerDown_L_28();
		NullCheck(L_57);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_57, _stringLiteralF4C936677D96BA2D9A12DAC2C98038B3F1A5A1C9, L_58, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthLowerDown_R"] = mouthLowerDown_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_59 = L_57;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_60 = __this->get_mouthLowerDown_R_29();
		NullCheck(L_59);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_59, _stringLiteralCD1EE1E1046B6FCED0C54773AC5B05F8B2ED0190, L_60, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthPucker"] = mouthPucker;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_61 = L_59;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_62 = __this->get_mouthPucker_30();
		NullCheck(L_61);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_61, _stringLiteralF3DDA482A60E58600B20C066E81A0BC09019B7B7, L_62, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthRight"] = mouthRight;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_63 = L_61;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_64 = __this->get_mouthRight_31();
		NullCheck(L_63);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_63, _stringLiteralF9038B8BEA6C06EAF4CFCE8FC6E46B7EE762FE44, L_64, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthRollLower"] = mouthRollLower;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_65 = L_63;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_66 = __this->get_mouthRollLower_32();
		NullCheck(L_65);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_65, _stringLiteral28E809022A2E2EDC0C14875C7529F5C90C6C828C, L_66, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthRollUpper"] = mouthRollUpper;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_67 = L_65;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_68 = __this->get_mouthRollUpper_33();
		NullCheck(L_67);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_67, _stringLiteral459006F089F9F8A5501297C702D001329727407D, L_68, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthShrugUpper"] = mouthShrugUpper;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_69 = L_67;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_70 = __this->get_mouthShrugUpper_34();
		NullCheck(L_69);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_69, _stringLiteral220E277E5C8FE04A7158E0EDB962D45086DE2C8B, L_70, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthSmile_L"] = mouthSmile_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_71 = L_69;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_72 = __this->get_mouthSmile_L_35();
		NullCheck(L_71);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_71, _stringLiteral4C05BA8D43A37910A297B6C87A35FCD2DC33D6B4, L_72, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthSmile_R"] = mouthSmile_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_73 = L_71;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_74 = __this->get_mouthSmile_R_36();
		NullCheck(L_73);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_73, _stringLiteralF6F4603E2200E8BD22CE068DD8600808FB866B04, L_74, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthUpperUp_L"] = mouthUpperUp_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_75 = L_73;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_76 = __this->get_mouthUpperUp_L_37();
		NullCheck(L_75);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_75, _stringLiteralA3FA152116D5719EB960AB500EACF6E48E214CE7, L_76, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["mouthUpperUp_R"] = mouthUpperUp_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_77 = L_75;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_78 = __this->get_mouthUpperUp_R_38();
		NullCheck(L_77);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_77, _stringLiteralCD4815602C595BA27D00E172599D32543263AC09, L_78, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["noseSneer_L"] = noseSneer_L;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_79 = L_77;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_80 = __this->get_noseSneer_L_39();
		NullCheck(L_79);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_79, _stringLiteral0D1EAC9005AC0B616FD8A495C98401243B2EEF32, L_80, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["noseSneer_R"] = noseSneer_R;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_81 = L_79;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_82 = __this->get_noseSneer_R_40();
		NullCheck(L_81);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_81, _stringLiteral03DA96C27F8210B40D9286C2B4D7A118A4E8DF54, L_82, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// directory["tongueOutpublic"] = tongueOutpublic;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_83 = L_81;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_84 = __this->get_tongueOutpublic_41();
		NullCheck(L_83);
		Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680(L_83, _stringLiteral925FA4A25E7CDF1954FB32EBED53FC700EA2FE77, L_84, /*hidden argument*/Dictionary_2_set_Item_mB9917CFA88D341898FDED27507F2966D63F08680_RuntimeMethod_var);
		// return directory;
		return L_83;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FacialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_Awake_mD0404C61948FA635692B73106EF17E948536B4A0 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method)
{
	{
		// initController();
		FacialController_initController_m851365DDC956B1AB0FCAA11F9EB7461ABA3B8929(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FacialController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_Start_m13C39B963688F6C62B6EB55278915AE348068841 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E12D65AE9828E5B7B85ED0C95535DBF1FABCD5A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// print("GraphicsDeviceType: " + SystemInfo.graphicsDeviceType);
		int32_t L_0;
		L_0 = SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02(/*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject * L_1 = Box(GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_0 = *(int32_t*)UnBox(L_1);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2E12D65AE9828E5B7B85ED0C95535DBF1FABCD5A, L_2, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FacialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_Update_mC8BF1224EA39BD683712B9CBA42C8B90143E8154 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FacialController::initController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_initController_m851365DDC956B1AB0FCAA11F9EB7461ABA3B8929 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisRotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD_m64012E8FBF311CBDBA23C6D9815EF7130BBB7384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744_m6BF0BE48390382A96B2A8337F9CFFD59CAD067ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotationController = FindObjectOfType<RotationController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * L_0;
		L_0 = Object_FindObjectOfType_TisRotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD_m64012E8FBF311CBDBA23C6D9815EF7130BBB7384(/*hidden argument*/Object_FindObjectOfType_TisRotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD_m64012E8FBF311CBDBA23C6D9815EF7130BBB7384_RuntimeMethod_var);
		__this->set_rotationController_5(L_0);
		// tiltsionController = FindObjectOfType<TiltsionController>();
		TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * L_1;
		L_1 = Object_FindObjectOfType_TisTiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744_m6BF0BE48390382A96B2A8337F9CFFD59CAD067ED(/*hidden argument*/Object_FindObjectOfType_TisTiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744_m6BF0BE48390382A96B2A8337F9CFFD59CAD067ED_RuntimeMethod_var);
		__this->set_tiltsionController_6(L_1);
		// skinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_2;
		L_2 = Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3(__this, /*hidden argument*/Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var);
		__this->set_skinnedMeshRenderer_4(L_2);
		// }
		return;
	}
}
// System.Void FacialController::SetBlendShapeWeight(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_SetBlendShapeWeight_m3CCC2669D1D868B79E5E9AD544ACE361DCE73E82 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// String[] strlist = message.Split('-');
			String_t* L_0 = ___message0;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
			NullCheck(L_2);
			(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			NullCheck(L_0);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
			L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
			// String blendShapeName = strlist[0];
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
			NullCheck(L_4);
			int32_t L_5 = 0;
			String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_0 = L_6;
			// float blendShapeWeight = float.Parse(strlist[1]);
			NullCheck(L_4);
			int32_t L_7 = 1;
			String_t* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			float L_9;
			L_9 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			// if (blendShapeDirectory[blendShapeName] != null)
			Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_10 = __this->get_blendShapeDirectory_7();
			String_t* L_11 = V_0;
			NullCheck(L_10);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12;
			L_12 = Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462_RuntimeMethod_var);
			V_2 = L_12;
			bool L_13;
			L_13 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_0055;
			}
		}

IL_0033:
		{
			// int blendShapeIndex = blendShapeDirectory[blendShapeName] ?? 0;
			Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_14 = __this->get_blendShapeDirectory_7();
			String_t* L_15 = V_0;
			NullCheck(L_14);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_16;
			L_16 = Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mA90933A4FCCD946B0BA931960F25DC779C4AE462_RuntimeMethod_var);
			V_2 = L_16;
			int32_t L_17;
			L_17 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			V_3 = L_17;
			// skinnedMeshRenderer.SetBlendShapeWeight(blendShapeIndex, blendShapeWeight);
			SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_18 = __this->get_skinnedMeshRenderer_4();
			int32_t L_19 = V_3;
			float L_20 = V_1;
			NullCheck(L_18);
			SkinnedMeshRenderer_SetBlendShapeWeight_mF546F3567C5039C217AD1E32157B992B4124B5FD(L_18, L_19, L_20, /*hidden argument*/NULL);
		}

IL_0055:
		{
			// }
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0057;
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.Object)
		// catch {
		// }
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		// }
		return;
	}
}
// System.Void FacialController::RotateObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_RotateObject_mEE5DFC296208180FD2007EEAC1A58463492FDFA2 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168A539F8FF732517533495474D96E19A03C8DEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A6F02448E08195101337F3B4CCCEB32EF9CE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41E584D82A6B88900C877C95BE260AE925B7E364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15EA1537025AD95792564BE71BB7189ADF6F9A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2539F8CE1B9E8D97698C8E748DE078849D224B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE55484AE0140BBA0AF0F0013C978657F4BCA6A6);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_10 = NULL;
	int32_t V_11 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_12 = NULL;
	{
		// var rotationProperties = new Dictionary<string, float>();
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_0 = (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *)il2cpp_codegen_object_new(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B(L_0, /*hidden argument*/Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var);
		V_0 = L_0;
		// String[] strlist = message.Split('|');
		String_t* L_1 = ___message0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_1, L_3, /*hidden argument*/NULL);
		// foreach (String element in strlist)
		V_10 = L_4;
		V_11 = 0;
		goto IL_004e;
	}

IL_001e:
	{
		// foreach (String element in strlist)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_10;
		int32_t L_6 = V_11;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// String[] strlistValue = element.Split('-');
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		NullCheck(L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
		L_11 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_8, L_10, /*hidden argument*/NULL);
		V_12 = L_11;
		// rotationProperties[strlistValue[0]] = float.Parse(strlistValue[1]);
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_12 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_12;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_12;
		NullCheck(L_16);
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		float L_19;
		L_19 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_18, /*hidden argument*/NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A(L_12, L_15, L_19, /*hidden argument*/Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var);
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004e:
	{
		// foreach (String element in strlist)
		int32_t L_21 = V_11;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_10;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// float headUp = rotationProperties["headUp"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_23 = V_0;
		NullCheck(L_23);
		float L_24;
		L_24 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_23, _stringLiteral168A539F8FF732517533495474D96E19A03C8DEA, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_1 = L_24;
		// float headDown = rotationProperties["headDown"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_25 = V_0;
		NullCheck(L_25);
		float L_26;
		L_26 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_25, _stringLiteralC2539F8CE1B9E8D97698C8E748DE078849D224B5, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_2 = L_26;
		// float headLeft = rotationProperties["headLeft"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_27 = V_0;
		NullCheck(L_27);
		float L_28;
		L_28 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_27, _stringLiteralC15EA1537025AD95792564BE71BB7189ADF6F9A1, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_3 = L_28;
		// float headRight = rotationProperties["headRight"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_29 = V_0;
		NullCheck(L_29);
		float L_30;
		L_30 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_29, _stringLiteral26A6F02448E08195101337F3B4CCCEB32EF9CE82, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_4 = L_30;
		// float headRollLeft = rotationProperties["headRollLeft"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_31 = V_0;
		NullCheck(L_31);
		float L_32;
		L_32 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_31, _stringLiteralEE55484AE0140BBA0AF0F0013C978657F4BCA6A6, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_5 = L_32;
		// float headRollRight = rotationProperties["headRollRight"];
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_33 = V_0;
		NullCheck(L_33);
		float L_34;
		L_34 = Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA(L_33, _stringLiteral41E584D82A6B88900C877C95BE260AE925B7E364, /*hidden argument*/Dictionary_2_get_Item_m52698ECD982A716A6B15A96025569F610F6809EA_RuntimeMethod_var);
		V_6 = L_34;
		// float rotationX = headDown;
		float L_35 = V_2;
		V_7 = L_35;
		// float rotationY = headRight;
		float L_36 = V_4;
		V_8 = L_36;
		// float rotationZ = headRollLeft;
		float L_37 = V_5;
		V_9 = L_37;
		// if (headUp > headDown)
		float L_38 = V_1;
		float L_39 = V_2;
		if ((!(((float)L_38) > ((float)L_39))))
		{
			goto IL_00b4;
		}
	}
	{
		// rotationX = -headUp;
		float L_40 = V_1;
		V_7 = ((-L_40));
	}

IL_00b4:
	{
		// if (headLeft > headRight)
		float L_41 = V_3;
		float L_42 = V_4;
		if ((!(((float)L_41) > ((float)L_42))))
		{
			goto IL_00bd;
		}
	}
	{
		// rotationY = -headLeft;
		float L_43 = V_3;
		V_8 = ((-L_43));
	}

IL_00bd:
	{
		// if (headRollRight > headRollLeft)
		float L_44 = V_6;
		float L_45 = V_5;
		if ((!(((float)L_44) > ((float)L_45))))
		{
			goto IL_00c8;
		}
	}
	{
		// rotationZ = -headRollRight;
		float L_46 = V_6;
		V_9 = ((-L_46));
	}

IL_00c8:
	{
		// rotationController.Execute(rotationX, rotationY);
		RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * L_47 = __this->get_rotationController_5();
		float L_48 = V_7;
		float L_49 = V_8;
		NullCheck(L_47);
		RotationController_Execute_m2663386062A3E14B2EF7E40644F3C77CCD880B6A(L_47, L_48, L_49, /*hidden argument*/NULL);
		// tiltsionController.Execute(rotationZ);
		TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * L_50 = __this->get_tiltsionController_6();
		float L_51 = V_9;
		NullCheck(L_50);
		TiltsionController_Execute_m8D4606F424AF8C1575C8C1D5FE4EF203F826C792(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FacialController::Initialize(System.Collections.Generic.Dictionary`2<System.String,System.Nullable`1<System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController_Initialize_m180DD15C87EE85A110A8914A4A1EC532013740F7 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * ___blendShapeDirectory0, const RuntimeMethod* method)
{
	{
		// this.blendShapeDirectory = blendShapeDirectory;
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_0 = ___blendShapeDirectory0;
		__this->set_blendShapeDirectory_7(L_0);
		// rotationController.ResetTransform();
		RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * L_1 = __this->get_rotationController_5();
		NullCheck(L_1);
		RotationController_ResetTransform_m95D63A9DF2DFB5D4455655B7D12AC035B01D6C67(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FacialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacialController__ctor_mDD540DB6183599775FCF63E349BB1BA9ADBE1879 (FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JsonFileReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFileReader__ctor_mA083002D6C570E40405E5BF0C1246C17A956136C (JsonFileReader_tE13DAE83F49BC3C3CE12052975A4C54DCE997E2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeAPI::sendMessageToMobileApp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_sendMessageToMobileApp_mDCBC0FC6DB773BB5D92EB785FA55D6198D7D227F (int64_t ___textTureId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D94E57DAB5FEFC1338969F1C23CE1464F80B87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF2F2AC0280CE8BBD18AB308B86B5C53014ADBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4462977FCF45E8F5669DBE90BB8077143DD749);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Console.WriteLine("C# log: " + textTureId);
		String_t* L_0;
		L_0 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___textTureId0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFD4462977FCF45E8F5669DBE90BB8077143DD749, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(L_1, /*hidden argument*/NULL);
		// using (var pluginClass = new AndroidJavaClass("com.unity3d.player.NativeCallProxy"))
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteralDDF2F2AC0280CE8BBD18AB308B86B5C53014ADBF, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// pluginClass.CallStatic("receiveTexttureId", textTureId);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_3 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int64_t L_6 = ___textTureId0;
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_3, _stringLiteral68D94E57DAB5FEFC1338969F1C23CE1464F80B87, L_5, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x47, FINALLY_003d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_9 = V_0;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ObjectImporter::get_modelPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_modelPath_m7EB2F7E6633EB3CC334427A55AEDD33A63A6E083 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2393D98D280BE03833F619698257256814EFAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return repoPath + "model.gltf"; }
		String_t* L_0 = __this->get_repoPath_6();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral9D2393D98D280BE03833F619698257256814EFAD, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ObjectImporter::get_transformPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_transformPath_m5348BD48DB4B1DD96ACDD66E29A07CD1018511CF (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D2158E36CF9917B1B195BE13433AB9726406C06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return repoPath + "transform.json"; }
		String_t* L_0 = __this->get_repoPath_6();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral7D2158E36CF9917B1B195BE13433AB9726406C06, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ObjectImporter::get_shapeKeyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectImporter_get_shapeKeyPath_m445473F189E16DF5D7A5CBD26E1FB7330FD4FF8C (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A00F799A11A608246C47D85960440381E50E23D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return repoPath + "blend_shape_indexs.json"; }
		String_t* L_0 = __this->get_repoPath_6();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral0A00F799A11A608246C47D85960440381E50E23D, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ObjectImporter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_Awake_m4AF93DD4A65410F697DFA29B2A23549AAEA8566F (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	{
		// repoPath = originPatn;
		String_t* L_0 = __this->get_originPatn_7();
		__this->set_repoPath_6(L_0);
		// }
		return;
	}
}
// System.Void ObjectImporter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_Start_mAC36E7A1D9E92123922883AC5685610EB02CFDD2 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	{
		// execute();
		ObjectImporter_execute_mF333ADB4CC19DD8E91E41D8D1EA1A52C9D3E2033(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectImporter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_Update_m4D3C2CDD6AF0045A1560719D518EEC991C13E8E1 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ObjectImporter::LoadModel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_LoadModel_m84197B42623E75C3A0CD1CD30B13C357B16F6732 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078A4A7E34415361245309C97D0ADCE3D825A562);
		s_Il2CppMethodInitialized = true;
	}
	{
		// repoPath = path;
		String_t* L_0 = ___path0;
		__this->set_repoPath_6(L_0);
		// print("C# LoadModel: " + path);
		String_t* L_1 = ___path0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral078A4A7E34415361245309C97D0ADCE3D825A562, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// execute();
		ObjectImporter_execute_mF333ADB4CC19DD8E91E41D8D1EA1A52C9D3E2033(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectImporter::LoadOriginModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_LoadOriginModel_m451CE36F989F8037EC3EDB7A2D30C0489E5EB0F4 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	{
		// repoPath = originPatn;
		String_t* L_0 = __this->get_originPatn_7();
		__this->set_repoPath_6(L_0);
		// execute();
		ObjectImporter_execute_mF333ADB4CC19DD8E91E41D8D1EA1A52C9D3E2033(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectImporter::execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_execute_mF333ADB4CC19DD8E91E41D8D1EA1A52C9D3E2033 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m97BBAF6471237F787240B894A9EF5CCADE1728A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectImporter_onLoadComplete_m783D2DFFD71A13A11A6020334AE41D2274649FF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Exception_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// destroyOldObject();
		ObjectImporter_destroyOldObject_m2AC850924AB04B50ACB519DBD3546EDF45D72745(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// var setting = new ImportSettings();
		ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 * L_0 = (ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 *)il2cpp_codegen_object_new(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920_il2cpp_TypeInfo_var);
		ImportSettings__ctor_mEDBEA61B134664E6D182074AD238AE16D46D6BE6(L_0, /*hidden argument*/NULL);
		// Importer.ImportGLTFAsync(modelPath, new ImportSettings(), onLoadComplete);
		String_t* L_1;
		L_1 = ObjectImporter_get_modelPath_m7EB2F7E6633EB3CC334427A55AEDD33A63A6E083(__this, /*hidden argument*/NULL);
		ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 * L_2 = (ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920 *)il2cpp_codegen_object_new(ImportSettings_tACD17541B9D06B67BAA0EECF1BFBEF10186D8920_il2cpp_TypeInfo_var);
		ImportSettings__ctor_mEDBEA61B134664E6D182074AD238AE16D46D6BE6(L_2, /*hidden argument*/NULL);
		Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE * L_3 = (Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE *)il2cpp_codegen_object_new(Action_2_t29382DD3DD97E01DED0661E7EC358797146EA1BE_il2cpp_TypeInfo_var);
		Action_2__ctor_m97BBAF6471237F787240B894A9EF5CCADE1728A0(L_3, __this, (intptr_t)((intptr_t)ObjectImporter_onLoadComplete_m783D2DFFD71A13A11A6020334AE41D2274649FF0_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m97BBAF6471237F787240B894A9EF5CCADE1728A0_RuntimeMethod_var);
		Importer_ImportGLTFAsync_mAE86C9D12A7F08E8F001B3BCF717A1043D60028F(L_1, L_2, L_3, (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)NULL, /*hidden argument*/NULL);
		// } catch (Exception e)
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		{
			// } catch (Exception e)
			V_0 = ((Exception_t *)__exception_local);
			// print("C# import fail: " + e);
			Exception_t * L_4 = V_0;
			Exception_t * L_5 = L_4;
			G_B3_0 = L_5;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC486E57F53D65D9AE8E00AF67588EACCA4939AE0));
			if (L_5)
			{
				G_B4_0 = L_5;
				G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC486E57F53D65D9AE8E00AF67588EACCA4939AE0));
				goto IL_0039;
			}
		}

IL_0035:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_1;
			goto IL_003e;
		}

IL_0039:
		{
			NullCheck(G_B4_0);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
			G_B5_0 = L_6;
			G_B5_1 = G_B4_1;
		}

IL_003e:
		{
			String_t* L_7;
			L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_7, /*hidden argument*/NULL);
			// }
			goto IL_004a;
		}
	} // end catch (depth: 1)

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ObjectImporter::destroyOldObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_destroyOldObject_m2AC850924AB04B50ACB519DBD3546EDF45D72745 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// DestroyImmediate(headObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = ObjectImporter_get_headObject_m980BF4A8CA03F1523E36ED9E187D585C70ED077C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_0, /*hidden argument*/NULL);
		// } catch
		goto IL_0010;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000d;
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Object)
		// } catch
		// }
		goto IL_0010;
	} // end catch (depth: 1)

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		// DestroyImmediate(rootHead);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_rootHead_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_1, /*hidden argument*/NULL);
		// }
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Object)
		// catch
		// }
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		// DestroyImmediate(rootObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectImporter_get_rootObject_mAFBDAB9337128AABE6C1BD60AA1094430EEC3EC1(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
		// }
		goto IL_0032;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Object)
		// catch
		// }
		goto IL_0032;
	} // end catch (depth: 1)

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ObjectImporter::onLoadComplete(UnityEngine.GameObject,UnityEngine.AnimationClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_onLoadComplete_m783D2DFFD71A13A11A6020334AE41D2274649FF0 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arg10, AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* ___arg21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5E666E2AF383FC9395BEBDECD60E625C7DD887FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFileReader_LoadJson_TisBlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0_m572A29C790147A9270819C32314DFF0B5E73363A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFileReader_LoadJson_TisTransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B_m3E434BABCDA209DFC8073D780355D86971F767D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5BBB0D883482314DA4DCC48E60DE032A02B28DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * V_0 = NULL;
	Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * G_B5_0 = NULL;
	FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * G_B4_0 = NULL;
	{
		// TransformRelative transform = JsonFileReader.LoadJson<TransformRelative>(transformPath);
		String_t* L_0;
		L_0 = ObjectImporter_get_transformPath_m5348BD48DB4B1DD96ACDD66E29A07CD1018511CF(__this, /*hidden argument*/NULL);
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_1;
		L_1 = JsonFileReader_LoadJson_TisTransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B_m3E434BABCDA209DFC8073D780355D86971F767D6(L_0, /*hidden argument*/JsonFileReader_LoadJson_TisTransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B_m3E434BABCDA209DFC8073D780355D86971F767D6_RuntimeMethod_var);
		V_0 = L_1;
		// BlendShapeIndex blendShapeIndex = JsonFileReader.LoadJson<BlendShapeIndex>(shapeKeyPath);
		String_t* L_2;
		L_2 = ObjectImporter_get_shapeKeyPath_m445473F189E16DF5D7A5CBD26E1FB7330FD4FF8C(__this, /*hidden argument*/NULL);
		BlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0 * L_3;
		L_3 = JsonFileReader_LoadJson_TisBlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0_m572A29C790147A9270819C32314DFF0B5E73363A(L_2, /*hidden argument*/JsonFileReader_LoadJson_TisBlendShapeIndex_t1BE117BF9A2A5DAB12AF92D035E936C1ADCE6BF0_m572A29C790147A9270819C32314DFF0B5E73363A_RuntimeMethod_var);
		// Dictionary<string, int?> blendShapeDirectory = blendShapeIndex.ExportDiectory();
		NullCheck(L_3);
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_4;
		L_4 = BlendShapeIndex_ExportDiectory_mA1E7856F809987B02A3E341EC9DB76AA1D6EC4F9(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// GameObject _skeleton = skeleton;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectImporter_get_skeleton_mB9E61803274E25C833EB79BE2368448DD92B2F1A(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		// rootHead = arg1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___arg10;
		__this->set_rootHead_8(L_6);
		// _skeleton.transform.eulerAngles = new Vector3(
		//      transform.rotation.x,
		//      transform.rotation.y,
		//      transform.rotation.z
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_9 = V_0;
		NullCheck(L_9);
		RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * L_10 = L_9->get_rotation_1();
		NullCheck(L_10);
		float L_11 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_10)->get_x_0();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_12 = V_0;
		NullCheck(L_12);
		RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * L_13 = L_12->get_rotation_1();
		NullCheck(L_13);
		float L_14 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_13)->get_y_1();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_15 = V_0;
		NullCheck(L_15);
		RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * L_16 = L_15->get_rotation_1();
		NullCheck(L_16);
		float L_17 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_16)->get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_11, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_8, L_18, /*hidden argument*/NULL);
		// _skeleton.transform.localPosition = new Vector3(
		//        transform.position.x,
		//        transform.position.y,
		//        transform.position.z
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_21 = V_0;
		NullCheck(L_21);
		PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * L_22 = L_21->get_position_0();
		NullCheck(L_22);
		float L_23 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_22)->get_x_0();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_24 = V_0;
		NullCheck(L_24);
		PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * L_25 = L_24->get_position_0();
		NullCheck(L_25);
		float L_26 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_25)->get_y_1();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_27 = V_0;
		NullCheck(L_27);
		PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * L_28 = L_27->get_position_0();
		NullCheck(L_28);
		float L_29 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_28)->get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_30), L_23, L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_20, L_30, /*hidden argument*/NULL);
		// _skeleton.transform.localScale = new Vector3(
		//       transform.scale.x,
		//       transform.scale.y,
		//       transform.scale.z
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_33 = V_0;
		NullCheck(L_33);
		ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * L_34 = L_33->get_scale_2();
		NullCheck(L_34);
		float L_35 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_34)->get_x_0();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_36 = V_0;
		NullCheck(L_36);
		ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * L_37 = L_36->get_scale_2();
		NullCheck(L_37);
		float L_38 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_37)->get_y_1();
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_39 = V_0;
		NullCheck(L_39);
		ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * L_40 = L_39->get_scale_2();
		NullCheck(L_40);
		float L_41 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_40)->get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), L_35, L_38, L_41, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_32, L_42, /*hidden argument*/NULL);
		// rootHead.transform.parent = _skeleton.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_rootHead_8();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = V_2;
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_44, L_46, /*hidden argument*/NULL);
		// headObject?.AddComponent<FacialController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = ObjectImporter_get_headObject_m980BF4A8CA03F1523E36ED9E187D585C70ED077C(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = L_47;
		G_B1_0 = L_48;
		if (L_48)
		{
			G_B2_0 = L_48;
			goto IL_00e0;
		}
	}
	{
		goto IL_00e6;
	}

IL_00e0:
	{
		NullCheck(G_B2_0);
		FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * L_49;
		L_49 = GameObject_AddComponent_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5E666E2AF383FC9395BEBDECD60E625C7DD887FD(G_B2_0, /*hidden argument*/GameObject_AddComponent_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5E666E2AF383FC9395BEBDECD60E625C7DD887FD_RuntimeMethod_var);
	}

IL_00e6:
	{
		// var facialController = FindObjectOfType<FacialController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * L_50;
		L_50 = Object_FindObjectOfType_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5BBB0D883482314DA4DCC48E60DE032A02B28DC0(/*hidden argument*/Object_FindObjectOfType_TisFacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF_m5BBB0D883482314DA4DCC48E60DE032A02B28DC0_RuntimeMethod_var);
		// facialController?.Initialize(blendShapeDirectory);
		FacialController_tFDC5CABA5A55C6E852089C762A7C69E314888BCF * L_51 = L_50;
		G_B4_0 = L_51;
		if (L_51)
		{
			G_B5_0 = L_51;
			goto IL_00f1;
		}
	}
	{
		goto IL_00f7;
	}

IL_00f1:
	{
		Dictionary_2_t16A965122DC9BD6608FB71B38D1A7E1BD0F8295E * L_52 = V_1;
		NullCheck(G_B5_0);
		FacialController_Initialize_m180DD15C87EE85A110A8914A4A1EC532013740F7(G_B5_0, L_52, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// rootHead.transform.eulerAngles = new Vector3(
		//      0,
		//      transform.rotation.y,
		//      0
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_rootHead_8();
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * L_55 = V_0;
		NullCheck(L_55);
		RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * L_56 = L_55->get_rotation_1();
		NullCheck(L_56);
		float L_57 = ((SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 *)L_56)->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), (0.0f), L_57, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_54, L_58, /*hidden argument*/NULL);
		// rootHead.transform.localPosition = new Vector3(
		//        0,
		//        0,
		//        0
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_rootHead_8();
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_61), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_60, L_61, /*hidden argument*/NULL);
		// rootHead.transform.localScale = new Vector3(
		//       1,
		//       1,
		//       1
		// );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_rootHead_8();
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_64), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_63, L_64, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectImporter::get_rootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_rootObject_mAFBDAB9337128AABE6C1BD60AA1094430EEC3EC1 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GameObject.Find("Root"); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GameObject ObjectImporter::get_headObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_headObject_m980BF4A8CA03F1523E36ED9E187D585C70ED077C (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GameObject.Find("head"); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral461EE177B772C8076E2D62C04952F00C85951024, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GameObject ObjectImporter::get_skeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectImporter_get_skeleton_mB9E61803274E25C833EB79BE2368448DD92B2F1A (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381E9649B4B6C89F5DCDCE0C0C971DF94ACCDBA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GameObject.Find("Skeleton"); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral381E9649B4B6C89F5DCDCE0C0C971DF94ACCDBA1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void ObjectImporter::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter_OnGUI_mD822DDA1023D62B9B4D90C0387F724DF392F9499 (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15262E227BC119B75AF56F5706ADEBE6CB0BE88D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6624BAB35881AF66663620D9389F7EE080F15606);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.skin.button.fontSize = 20;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_1, ((int32_t)20), /*hidden argument*/NULL);
		// if (GUI.Button(new Rect(10, 80, 180, 60), "Change object"))
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (10.0f), (80.0f), (180.0f), (60.0f), /*hidden argument*/NULL);
		bool L_3;
		L_3 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_2, _stringLiteral6624BAB35881AF66663620D9389F7EE080F15606, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// LoadModel("/Users/hacnguyen/Desktop/axs/assets/sloth/");
		ObjectImporter_LoadModel_m84197B42623E75C3A0CD1CD30B13C357B16F6732(__this, _stringLiteral15262E227BC119B75AF56F5706ADEBE6CB0BE88D, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ObjectImporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectImporter__ctor_m39656B1B4456AF28F370668F61E2D864EE8E9FEA (ObjectImporter_t8D53E2DCE5715D5EDF7D5D6CFDD7D04431DA565C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// public bool Multithreaded = true;
		__this->set_Multithreaded_4((bool)1);
		// public int MaximumLod = 300;
		__this->set_MaximumLod_5(((int32_t)300));
		// private string originPatn = Application.streamingAssetsPath + Path.DirectorySeparatorChar;
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		V_0 = L_1;
		String_t* L_2;
		L_2 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_2, /*hidden argument*/NULL);
		__this->set_originPatn_7(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OffscreenRendering::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffscreenRendering_Start_m30C946A78183DE64A7BBBD36538E837998768564 (OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator OffscreenRendering::CaptureAndSaveFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OffscreenRendering_CaptureAndSaveFrames_mAA9830ED4AC61598F7E0E6C9F71DD8540C0ED655 (OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * L_0 = (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC *)il2cpp_codegen_object_new(U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC_il2cpp_TypeInfo_var);
		U3CCaptureAndSaveFramesU3Ed__3__ctor_m330F195DA777474FF0883C0AA4215F68CF773687(L_0, 0, /*hidden argument*/NULL);
		U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OffscreenRendering::StartCapturing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffscreenRendering_StartCapturing_m022E3E1D0B2B9923C1506523A6334B2C8194750E (OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCEA01FAFF6A589DC11B5D02C64823305BE852F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(message);
		String_t* L_0 = ___message0;
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_0, /*hidden argument*/NULL);
		// StartCoroutine("CaptureAndSaveFrames");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral0CCEA01FAFF6A589DC11B5D02C64823305BE852F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffscreenRendering::StopCapturing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffscreenRendering_StopCapturing_m8100726514A2B1CF42A9A6795B9AE0631F6E64C2 (OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCEA01FAFF6A589DC11B5D02C64823305BE852F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(message);
		String_t* L_0 = ___message0;
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_0, /*hidden argument*/NULL);
		// StopCoroutine("CaptureAndSaveFrames");
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(__this, _stringLiteral0CCEA01FAFF6A589DC11B5D02C64823305BE852F, /*hidden argument*/NULL);
		// GC.Collect();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9(/*hidden argument*/NULL);
		// GC.WaitForPendingFinalizers();
		GC_WaitForPendingFinalizers_m294758E9315CCF04B051CED57527CFA7BB65CAD6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffscreenRendering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffscreenRendering__ctor_m4440D208437DCE0EE233A7F66F0C5AB593083D0F (OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * __this, const RuntimeMethod* method)
{
	{
		// public int ScreenshotsPerSecond = 60;
		__this->set_ScreenshotsPerSecond_4(((int32_t)60));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PositionRelavie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelavie__ctor_m93184982C0A89AC90ABBAAFBB7A219D745BCC6CA (PositionRelavie_t2B947E8F6428E6169E108D5D16EA9AB35370A58B * __this, const RuntimeMethod* method)
{
	{
		SpaceInfoRelative__ctor_mBDF53E82EAB51F21AFD65A23FC80CBD0660037E4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_Start_m7EA5FA1987AAA3F931BEBF67076AC60B3810A2A8 (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RotationController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_Awake_m3E62BEA61F73E39ECB61097A67A801CDD90AAAED (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method)
{
	{
		// vector = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		__this->set_vector_4(L_1);
		// }
		return;
	}
}
// System.Void RotationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_Update_m5C5600220A6E9DCAC2DD5FFE7514C8137E412A57 (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RotationController::ResetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_ResetTransform_m95D63A9DF2DFB5D4455655B7D12AC035B01D6C67 (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method)
{
	{
		// vector = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		__this->set_vector_4(L_1);
		// }
		return;
	}
}
// System.Void RotationController::Execute(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController_Execute_m2663386062A3E14B2EF7E40644F3C77CCD880B6A (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, float ___rotationX0, float ___rotationY1, const RuntimeMethod* method)
{
	{
		// transform.eulerAngles = new Vector3(
		//         vector.x + rotationX,
		//         vector.y + rotationY,
		//         vector.z
		//  );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_vector_4();
		float L_2 = L_1->get_x_2();
		float L_3 = ___rotationX0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_vector_4();
		float L_5 = L_4->get_y_3();
		float L_6 = ___rotationY1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_vector_4();
		float L_8 = L_7->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), L_8, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RotationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationController__ctor_m308A1D3C941CF92589D32FB639F6448F09D84BBC (RotationController_tE99D3CDC13FDE6C8C1DA2050650BF23DD3318DFD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotationRelative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationRelative__ctor_m885792D8254DCC640A9BD7373E3C8762FF79C28B (RotationRelative_t94CD690FCE7F3BE8123FE77ED49E87D11FECB287 * __this, const RuntimeMethod* method)
{
	{
		SpaceInfoRelative__ctor_mBDF53E82EAB51F21AFD65A23FC80CBD0660037E4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScaleRelative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleRelative__ctor_m17F00E3FB4317326B673CB8CBAEEFD3584B0D9DB (ScaleRelative_tC52F2CEBAB45C471FE78A093DE4830EC730A176B * __this, const RuntimeMethod* method)
{
	{
		SpaceInfoRelative__ctor_mBDF53E82EAB51F21AFD65A23FC80CBD0660037E4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpaceInfoRelative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpaceInfoRelative__ctor_mBDF53E82EAB51F21AFD65A23FC80CBD0660037E4 (SpaceInfoRelative_t939C4E57FB38D1D926575DB401368CBF49E17A18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltsionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController_Start_mB977795EC5DC4D32BA182AB84971F3212A279FF8 (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TiltsionController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController_Awake_mCFDBF17A56B2CAF29BDD041BEDC20B3F311E30C2 (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TiltsionController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController_Update_m0DCCEB006A0E11967692435B9C64B7AE02AF98E3 (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TiltsionController::Execute(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController_Execute_m8D4606F424AF8C1575C8C1D5FE4EF203F826C792 (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, float ___rotationZ0, const RuntimeMethod* method)
{
	{
		// transform.eulerAngles = new Vector3(
		//        vector.x,
		//        vector.y,
		//        vector.z + rotationZ
		// );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_vector_4();
		float L_2 = L_1->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_vector_4();
		float L_4 = L_3->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_vector_4();
		float L_6 = L_5->get_z_4();
		float L_7 = ___rotationZ0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_2, L_4, ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TiltsionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltsionController__ctor_m2B66DCC28D1D57A1A3C88F6456F33BE311EB9DCE (TiltsionController_t89C38A92DB158F35184CC0ED53E3F55CAFC0D744 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TransformRelative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRelative__ctor_m1C15BF6316515ABEB0EB72F8F0763A05DA086FF4 (TransformRelative_t913C2FE573C4CEE354BD62BD5DCEF453E918EA5B * __this, const RuntimeMethod* method)
{
	{
		// public TransformRelative() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public TransformRelative() { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OffscreenRendering/<CaptureAndSaveFrames>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureAndSaveFramesU3Ed__3__ctor_m330F195DA777474FF0883C0AA4215F68CF773687 (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OffscreenRendering/<CaptureAndSaveFrames>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureAndSaveFramesU3Ed__3_System_IDisposable_Dispose_m12710EB9D828F4E8CD65F910067A438F44CF114D (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OffscreenRendering/<CaptureAndSaveFrames>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaptureAndSaveFramesU3Ed__3_MoveNext_mE485F6589B2CA8EA139B305F6CF6BE3C13DF3088 (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0106;
			}
			case 3:
			{
				goto IL_0158;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_002d:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
		// RenderTexture currentRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		// RenderTexture.active = OffscreenCamera.targetTexture;
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_5 = V_1;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5->get_OffscreenCamera_5();
		NullCheck(L_6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
		L_7 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_6, /*hidden argument*/NULL);
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_7, /*hidden argument*/NULL);
		// OffscreenCamera.Render();
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_8 = V_1;
		NullCheck(L_8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = L_8->get_OffscreenCamera_5();
		NullCheck(L_9);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_9, /*hidden argument*/NULL);
		// var offscreenTexture = new Texture2D(OffscreenCamera.targetTexture.width, OffscreenCamera.targetTexture.height, TextureFormat.RGB24, false);
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_10 = V_1;
		NullCheck(L_10);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = L_10->get_OffscreenCamera_5();
		NullCheck(L_11);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12;
		L_12 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_14 = V_1;
		NullCheck(L_14);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = L_14->get_OffscreenCamera_5();
		NullCheck(L_15);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16;
		L_16 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_18, L_13, L_17, 3, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CoffscreenTextureU3E5__2_3(L_18);
		// offscreenTexture.ReadPixels(new Rect(0, 0, OffscreenCamera.targetTexture.width, OffscreenCamera.targetTexture.height), 0, 0, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = __this->get_U3CoffscreenTextureU3E5__2_3();
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_20 = V_1;
		NullCheck(L_20);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = L_20->get_OffscreenCamera_5();
		NullCheck(L_21);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22;
		L_22 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_24 = V_1;
		NullCheck(L_24);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = L_24->get_OffscreenCamera_5();
		NullCheck(L_25);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_26;
		L_26 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_28), (0.0f), (0.0f), ((float)((float)L_23)), ((float)((float)L_27)), /*hidden argument*/NULL);
		NullCheck(L_19);
		Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_19, L_28, 0, 0, (bool)0, /*hidden argument*/NULL);
		// offscreenTexture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = __this->get_U3CoffscreenTextureU3E5__2_3();
		NullCheck(L_29);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_29, /*hidden argument*/NULL);
		// RenderTexture.active = currentRT;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_4, /*hidden argument*/NULL);
		// AsyncOperation op = Resources.UnloadUnusedAssets();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_30;
		L_30 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
		__this->set_U3CopU3E5__3_4(L_30);
		goto IL_010d;
	}

IL_00f1:
	{
		// while (!op.isDone) yield return 0;
		int32_t L_31 = 0;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0106:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_010d:
	{
		// while (!op.isDone) yield return 0;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_33 = __this->get_U3CopU3E5__3_4();
		NullCheck(L_33);
		bool L_34;
		L_34 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}
	{
		// GC.Collect();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9(/*hidden argument*/NULL);
		// IntPtr pointer = offscreenTexture.GetNativeTexturePtr();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = __this->get_U3CoffscreenTextureU3E5__2_3();
		NullCheck(L_35);
		intptr_t L_36;
		L_36 = Texture_GetNativeTexturePtr_m7D61B2296A172A4C4636D325CAE5757D60170B6F(L_35, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_36;
		// NativeAPI.sendMessageToMobileApp(pointer.ToInt64());
		int64_t L_37;
		L_37 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_2), /*hidden argument*/NULL);
		NativeAPI_sendMessageToMobileApp_mDCBC0FC6DB773BB5D92EB785FA55D6198D7D227F(L_37, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.0f / ScreenshotsPerSecond);
		OffscreenRendering_t367C9784626B5ED01AC55D3C93BD403E3B0BEB5E * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_ScreenshotsPerSecond_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_40 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_40, ((float)((float)(1.0f)/(float)((float)((float)L_39)))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0158:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		__this->set_U3CoffscreenTextureU3E5__2_3((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
		__this->set_U3CopU3E5__3_4((AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)NULL);
		// while (true)
		goto IL_002d;
	}
}
// System.Object OffscreenRendering/<CaptureAndSaveFrames>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaptureAndSaveFramesU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m23700973E666B2CA82D3851E8D3287D11889645A (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OffscreenRendering/<CaptureAndSaveFrames>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureAndSaveFramesU3Ed__3_System_Collections_IEnumerator_Reset_mD710407EC322F67396C4EE0BA65E86C0143CD8BD (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCaptureAndSaveFramesU3Ed__3_System_Collections_IEnumerator_Reset_mD710407EC322F67396C4EE0BA65E86C0143CD8BD_RuntimeMethod_var)));
	}
}
// System.Object OffscreenRendering/<CaptureAndSaveFrames>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaptureAndSaveFramesU3Ed__3_System_Collections_IEnumerator_get_Current_m35A5DEE83D4AD82C5868A33B79C4B318D50AE0CB (U3CCaptureAndSaveFramesU3Ed__3_tC7D05054874949AA19D61C9277446CA50CE2E1BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
