#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { &p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3*, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, &p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};

// System.Action`1<Unity.WebRTC.RTCStatsReport>
struct Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E;
// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback>
struct Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3;
// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCStats>
struct Dictionary_2_t88D75784F0AAA9D4004B273F35E693EAF8FC3EF8;
// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack>
struct HashSet_1_t760682EF2616B098599332862590C1607FFFAE42;
// System.Collections.Generic.ICollection`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ICollection_1_t8E3814FB2524FE9B6CB8AA37F25750B817964F34;
// System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
// System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IReadOnlyList`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct IReadOnlyList_1_t15588057AC9BCEEBD1DD4C534E459E408DB3125B;
// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest>
struct List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct Tables_tA006B024DE3BFCC6D1A1D1629952991C4FDD0CB2;
// System.Tuple`2<System.Action,System.Single>
struct Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B;
// System.Tuple`2<UnityEngine.Object,System.Single>
struct Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A;
// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>
struct WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB;
// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>
struct WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>[]
struct KeyValuePair_2U5BU5D_t675B15393F60D1C169569E9BBC189685520E9392;
// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>[]
struct WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4;
// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// Unity.WebRTC.Context
struct Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6;
// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390;
// Unity.WebRTC.DelegateCreateGetStats
struct DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68;
// Unity.WebRTC.DelegateCreateSDFailure
struct DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665;
// Unity.WebRTC.DelegateCreateSDSuccess
struct DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7;
// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D;
// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61;
// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6;
// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899;
// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F;
// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740;
// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3;
// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699;
// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7;
// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B;
// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64;
// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945;
// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE;
// Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure
struct DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813;
// Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess
struct DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A;
// Unity.WebRTC.DelegateOnConnectionStateChange
struct DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698;
// Unity.WebRTC.DelegateOnDataChannel
struct DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8;
// Unity.WebRTC.DelegateOnIceCandidate
struct DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D;
// Unity.WebRTC.DelegateOnIceConnectionChange
struct DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2;
// Unity.WebRTC.DelegateOnIceGatheringStateChange
struct DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4;
// Unity.WebRTC.DelegateOnNegotiationNeeded
struct DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202;
// Unity.WebRTC.DelegateOnTrack
struct DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF;
// Unity.WebRTC.DelegateSetSessionDescFailure
struct DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E;
// Unity.WebRTC.DelegateSetSessionDescSuccess
struct DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F;
// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A;
// Unity.WebRTC.ExecutableUnitySynchronizationContext
struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.WebRTC.OnVideoReceived
struct OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF;
// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;
// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;
// Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B;
// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2;
// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;
// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C;
// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49;
// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF;
// Unity.WebRTC.RTCStatsReport
struct RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448;
// Unity.WebRTC.RTCStatsReportAsyncOperation
struct RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// Unity.WebRTC.UnityVideoRenderer
struct UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C;
// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B;
// Unity.WebRTC.VideoTrackSource
struct VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Unity.WebRTC.WeakReferenceTable
struct WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370;
// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2;
// Unity.WebRTC.WebRTC/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759;
// Unity.WebRTC.WebRTC/<Update>d__5
struct U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E;
// Unity.WebRTC.WebRTC/CallbackObject
struct CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B;
IL2CPP_EXTERN_C String_t* _stringLiteral18B652F0589F856CA252329BFBB3783A857E7442;
IL2CPP_EXTERN_C String_t* _stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EBDF4678FD2BE65475A94ABED34948037A94C0B;
IL2CPP_EXTERN_C String_t* _stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0;
IL2CPP_EXTERN_C String_t* _stringLiteral68C2F698C8AF279878725F92A0810B517004C294;
IL2CPP_EXTERN_C String_t* _stringLiteral85D634311AED4DCFE4023F6211B3F7CAC4410846;
IL2CPP_EXTERN_C String_t* _stringLiteralA28091DB9A11A94195F9CE19C1402CB23C180F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB234F4AD020EED4223D4599EA2FC01F662FC03B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mECE59E4F607962112CAE1F260C4AB20AF7C9972F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m2E6B4AEFB0AC33E56FD215BE996071521DF98FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_0_m6D59BF81A48959DB17A0C68BEBDBB41F003EF6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_1_mE2F4B771BCCD23450A2797A2DE6240FAE19B653C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6EA2EDFAB823C240F84111EA46E05252D9B29E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m153DCFB19C92A8DD8A0EC38F7226AC75E7FB4F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA160457F0DDD1410134A99E8E3F84D1F0DDBC1FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m817B7865DCFE3DD80E39C4D336268CD816B5E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CDelayActionU3Eb__0_mF176313DB00DBEDF84F292F6A1F4A3D7A299A20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateU3Ed__5_System_Collections_IEnumerator_Reset_mBF261BCF55F5D8899AD426FD99BDCC4CE1839F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DelayAction_m2F8A179ED0A41F6A7ECFB7968F0E901509D595BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DestroyImmediate_m4C802E78C4F23E24431B8C43C9EDA4DC757F9A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DestroyOnMainThread_m26CF0DC2FEA03FA4C5ED3D590D87515610FDFB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_Destroy_mD48E94F06D7946E57A4EFA39EAD2D636CBEBFFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_Initialize_mB3A0EFE556D4A9F2DFC3814CEECCD9FAA7E05354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_SendOrPostCallback_m51822EFA3667964CDD79E266413427158C45D3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_ValidateGraphicsFormat_mA1D6357360C2CDDD0C3A8CF7B74D4D416D3415DB_RuntimeMethod_var;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tA006B024DE3BFCC6D1A1D1629952991C4FDD0CB2* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t675B15393F60D1C169569E9BBC189685520E9392* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Tuple`2<System.Action,System.Single>
struct Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	float ___m_Item2_1;
};

// System.Tuple`2<UnityEngine.Object,System.Single>
struct Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	float ___m_Item2_1;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// Unity.WebRTC.NativeMethods
struct NativeMethods_tA36545FA30A0BAFE4574DE60BF7A1E37DD49078B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.WebRTC.VideoDecoderMethods
struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F  : public RuntimeObject
{
};

struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoDecoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// Unity.WebRTC.VideoEncoderMethods
struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC  : public RuntimeObject
{
};

struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoEncoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// Unity.WebRTC.WeakReferenceExtension
struct WeakReferenceExtension_tBE43363F011865A4B721E446AE89B321E2BB799A  : public RuntimeObject
{
};

// Unity.WebRTC.WeakReferenceTable
struct WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370  : public RuntimeObject
{
	// System.Collections.Hashtable Unity.WebRTC.WeakReferenceTable::m_table
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___m_table_0;
};

// Unity.WebRTC.WebRTC
struct WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228  : public RuntimeObject
{
};

struct WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields
{
	// Unity.WebRTC.Context Unity.WebRTC.WebRTC::s_context
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* ___s_context_1;
	// System.Threading.SynchronizationContext Unity.WebRTC.WebRTC::s_syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___s_syncContext_2;
	// System.Boolean Unity.WebRTC.WebRTC::s_limitTextureSize
	bool ___s_limitTextureSize_3;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759  : public RuntimeObject
{
	// System.Single Unity.WebRTC.WebRTC/<>c__DisplayClass22_0::delay
	float ___delay_0;
	// System.Action Unity.WebRTC.WebRTC/<>c__DisplayClass22_0::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// Unity.WebRTC.WebRTC/<Update>d__5
struct U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E  : public RuntimeObject
{
	// System.Int32 Unity.WebRTC.WebRTC/<Update>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.WebRTC.WebRTC/<Update>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.WaitForEndOfFrame Unity.WebRTC.WebRTC/<Update>d__5::<instruction>5__1
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CinstructionU3E5__1_2;
	// UnityEngine.RenderTexture Unity.WebRTC.WebRTC/<Update>d__5::<tempTextureActive>5__2
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CtempTextureActiveU3E5__2_3;
	// System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>> Unity.WebRTC.WebRTC/<Update>d__5::<>s__3
	RuntimeObject* ___U3CU3Es__3_4;
	// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack> Unity.WebRTC.WebRTC/<Update>d__5::<reference>5__4
	WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* ___U3CreferenceU3E5__4_5;
	// Unity.WebRTC.VideoStreamTrack Unity.WebRTC.WebRTC/<Update>d__5::<track>5__5
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* ___U3CtrackU3E5__5_6;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy>
struct Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy>
struct Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 
{
	// System.String Unity.WebRTC.CandidateInternal::candidate
	String_t* ___candidate_0;
	// Unity.WebRTC.RTCIceComponent Unity.WebRTC.CandidateInternal::component
	int32_t ___component_1;
	// System.String Unity.WebRTC.CandidateInternal::foundation
	String_t* ___foundation_2;
	// System.String Unity.WebRTC.CandidateInternal::ip
	String_t* ___ip_3;
	// System.UInt16 Unity.WebRTC.CandidateInternal::port
	uint16_t ___port_4;
	// System.UInt32 Unity.WebRTC.CandidateInternal::priority
	uint32_t ___priority_5;
	// System.String Unity.WebRTC.CandidateInternal::address
	String_t* ___address_6;
	// System.String Unity.WebRTC.CandidateInternal::protocol
	String_t* ___protocol_7;
	// System.String Unity.WebRTC.CandidateInternal::relatedAddress
	String_t* ___relatedAddress_8;
	// System.UInt16 Unity.WebRTC.CandidateInternal::relatedPort
	uint16_t ___relatedPort_9;
	// System.String Unity.WebRTC.CandidateInternal::tcpType
	String_t* ___tcpType_10;
	// System.String Unity.WebRTC.CandidateInternal::type
	String_t* ___type_11;
	// System.String Unity.WebRTC.CandidateInternal::usernameFragment
	String_t* ___usernameFragment_12;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};
// Native definition for COM marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_com
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.WebRTC.ExecutableUnitySynchronizationContext
struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D  : public SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0
{
	// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest> Unity.WebRTC.ExecutableUnitySynchronizationContext::m_AsyncWorkQueue
	List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF* ___m_AsyncWorkQueue_3;
	// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest> Unity.WebRTC.ExecutableUnitySynchronizationContext::m_CurrentFrameWork
	List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF* ___m_CurrentFrameWork_4;
	// System.Int32 Unity.WebRTC.ExecutableUnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_5;
	// System.Int32 Unity.WebRTC.ExecutableUnitySynchronizationContext::m_TrackedCount
	int32_t ___m_TrackedCount_6;
};

struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_StaticFields
{
	// System.Threading.SynchronizationContext Unity.WebRTC.ExecutableUnitySynchronizationContext::s_MainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___s_MainThreadContext_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// Unity.WebRTC.OptionalBool
struct OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 
{
	// System.Boolean Unity.WebRTC.OptionalBool::hasValue
	bool ___hasValue_0;
	// System.Boolean Unity.WebRTC.OptionalBool::value
	bool ___value_1;
};

// Unity.WebRTC.OptionalInt
struct OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 
{
	// System.Boolean Unity.WebRTC.OptionalInt::hasValue
	bool ___hasValue_0;
	// System.Int32 Unity.WebRTC.OptionalInt::value
	int32_t ___value_1;
};

// Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E 
{
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.RTCError::errorType
	int32_t ___errorType_0;
	// System.String Unity.WebRTC.RTCError::message
	String_t* ___message_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke
{
	int32_t ___errorType_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com
{
	int32_t ___errorType_0;
	Il2CppChar* ___message_1;
};

// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B 
{
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::candidate
	String_t* ___candidate_0;
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::sdpMid
	String_t* ___sdpMid_1;
	// System.Int32 Unity.WebRTC.RTCIceCandidateInitInternal::sdpMLineIndex
	int32_t ___sdpMLineIndex_2;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_com
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};

// Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B 
{
	// System.String Unity.WebRTC.RTCIceServer::credential
	String_t* ___credential_0;
	// Unity.WebRTC.RTCIceCredentialType Unity.WebRTC.RTCIceServer::credentialType
	int32_t ___credentialType_1;
	// System.String[] Unity.WebRTC.RTCIceServer::urls
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls_2;
	// System.String Unity.WebRTC.RTCIceServer::username
	String_t* ___username_3;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke
{
	char* ___credential_0;
	int32_t ___credentialType_1;
	char** ___urls_2;
	char* ___username_3;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com
{
	Il2CppChar* ___credential_0;
	int32_t ___credentialType_1;
	Il2CppChar** ___urls_2;
	Il2CppChar* ___username_3;
};

// Unity.WebRTC.RTCOfferAnswerOptions
struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F 
{
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::iceRestart
	bool ___iceRestart_1;
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::voiceActivityDetection
	bool ___voiceActivityDetection_2;
};

struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_StaticFields
{
	// Unity.WebRTC.RTCOfferAnswerOptions Unity.WebRTC.RTCOfferAnswerOptions::Default
	RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F ___Default_0;
};

// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 
{
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.RTCSessionDescription::type
	int32_t ___type_0;
	// System.String Unity.WebRTC.RTCSessionDescription::sdp
	String_t* ___sdp_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___sdp_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com
{
	int32_t ___type_0;
	char* ___sdp_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// Unity.WebRTC.MarshallingArray`1<System.IntPtr>
struct MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal>
struct MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::<Error>k__BackingField
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___U3CErrorU3Ek__BackingField_0;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_1;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_2;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Unity.WebRTC.Context
struct Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.Context::self
	intptr_t ___self_0;
	// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.Context::table
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* ___table_1;
	// System.Int32 Unity.WebRTC.Context::id
	int32_t ___id_2;
	// System.Boolean Unity.WebRTC.Context::disposed
	bool ___disposed_3;
	// System.IntPtr Unity.WebRTC.Context::renderFunction
	intptr_t ___renderFunction_4;
	// System.IntPtr Unity.WebRTC.Context::releaseBuffersFunction
	intptr_t ___releaseBuffersFunction_5;
	// System.IntPtr Unity.WebRTC.Context::textureUpdateFunction
	intptr_t ___textureUpdateFunction_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 
{
	// Unity.WebRTC.RTCIceServer[] Unity.WebRTC.RTCConfiguration::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_0;
	// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy> Unity.WebRTC.RTCConfiguration::iceTransportPolicy
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy> Unity.WebRTC.RTCConfiguration::bundlePolicy
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	// System.Nullable`1<System.Int32> Unity.WebRTC.RTCConfiguration::iceCandidatePoolSize
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	// System.Nullable`1<System.Boolean> Unity.WebRTC.RTCConfiguration::enableDtlsSrtp
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};

// Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 
{
	// Unity.WebRTC.RTCIceServer[] Unity.WebRTC.RTCConfigurationInternal::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_0;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::iceTransportPolicy
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::bundlePolicy
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::iceCandidatePoolSize
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCConfigurationInternal::enableDtlsSrtp
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke* ___iceServers_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com* ___iceServers_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};

// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF 
{
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::ordered
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmitTime
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmits
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	// System.String Unity.WebRTC.RTCDataChannelInitInternal::protocol
	String_t* ___protocol_3;
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::negotiated
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::id
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_com
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};

// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCPeerConnection::self
	intptr_t ___self_0;
	// Unity.WebRTC.RTCSessionDescriptionAsyncOperation Unity.WebRTC.RTCPeerConnection::m_opSessionDesc
	RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* ___m_opSessionDesc_1;
	// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack> Unity.WebRTC.RTCPeerConnection::cacheTracks
	HashSet_1_t760682EF2616B098599332862590C1607FFFAE42* ___cacheTracks_2;
	// System.Boolean Unity.WebRTC.RTCPeerConnection::disposed
	bool ___disposed_3;
	// Unity.WebRTC.DelegateOnIceConnectionChange Unity.WebRTC.RTCPeerConnection::<OnIceConnectionChange>k__BackingField
	DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2* ___U3COnIceConnectionChangeU3Ek__BackingField_4;
	// Unity.WebRTC.DelegateOnConnectionStateChange Unity.WebRTC.RTCPeerConnection::<OnConnectionStateChange>k__BackingField
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___U3COnConnectionStateChangeU3Ek__BackingField_5;
	// Unity.WebRTC.DelegateOnIceGatheringStateChange Unity.WebRTC.RTCPeerConnection::<OnIceGatheringStateChange>k__BackingField
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___U3COnIceGatheringStateChangeU3Ek__BackingField_6;
	// Unity.WebRTC.DelegateOnIceCandidate Unity.WebRTC.RTCPeerConnection::<OnIceCandidate>k__BackingField
	DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* ___U3COnIceCandidateU3Ek__BackingField_7;
	// Unity.WebRTC.DelegateOnDataChannel Unity.WebRTC.RTCPeerConnection::<OnDataChannel>k__BackingField
	DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8* ___U3COnDataChannelU3Ek__BackingField_8;
	// Unity.WebRTC.DelegateOnNegotiationNeeded Unity.WebRTC.RTCPeerConnection::<OnNegotiationNeeded>k__BackingField
	DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202* ___U3COnNegotiationNeededU3Ek__BackingField_9;
	// Unity.WebRTC.DelegateOnTrack Unity.WebRTC.RTCPeerConnection::<OnTrack>k__BackingField
	DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* ___U3COnTrackU3Ek__BackingField_10;
	// Unity.WebRTC.DelegateSetSessionDescSuccess Unity.WebRTC.RTCPeerConnection::<OnSetSessionDescriptionSuccess>k__BackingField
	DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* ___U3COnSetSessionDescriptionSuccessU3Ek__BackingField_11;
	// Unity.WebRTC.DelegateSetSessionDescFailure Unity.WebRTC.RTCPeerConnection::<OnSetSessionDescriptionFailure>k__BackingField
	DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* ___U3COnSetSessionDescriptionFailureU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback> Unity.WebRTC.RTCPeerConnection::dictCollectStatsCallback
	Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3* ___dictCollectStatsCallback_13;
};

// Unity.WebRTC.RTCStatsReport
struct RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCStatsReport::self
	intptr_t ___self_0;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCStats> Unity.WebRTC.RTCStatsReport::m_dictStats
	Dictionary_2_t88D75784F0AAA9D4004B273F35E693EAF8FC3EF8* ___m_dictStats_1;
	// System.Boolean Unity.WebRTC.RTCStatsReport::disposed
	bool ___disposed_2;
};

// Unity.WebRTC.RefCountedObject
struct RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RefCountedObject::self
	intptr_t ___self_0;
	// System.Boolean Unity.WebRTC.RefCountedObject::disposed
	bool ___disposed_1;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Unity.WebRTC.UnityVideoRenderer
struct UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.UnityVideoRenderer::self
	intptr_t ___self_0;
	// Unity.WebRTC.VideoStreamTrack Unity.WebRTC.UnityVideoRenderer::track
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* ___track_1;
	// System.Boolean Unity.WebRTC.UnityVideoRenderer::disposed
	bool ___disposed_2;
	// UnityEngine.Texture Unity.WebRTC.UnityVideoRenderer::<Texture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CTextureU3Ek__BackingField_3;
};

// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::ptrRenderer
	intptr_t ___ptrRenderer_0;
	// System.Int32 Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::width
	int32_t ___width_1;
	// System.Int32 Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::height
	int32_t ___height_2;
};

// Unity.WebRTC.WebRTC/CallbackObject
struct CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/CallbackObject::ptr
	intptr_t ___ptr_0;
	// System.Action Unity.WebRTC.WebRTC/CallbackObject::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>
struct WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>
struct WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.WebRTC.RTCRtpTransceiverInitInternal
struct RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558 
{
	// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.RTCRtpTransceiverInitInternal::direction
	int32_t ___direction_0;
	// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal> Unity.WebRTC.RTCRtpTransceiverInitInternal::sendEncodings
	MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 ___sendEncodings_1;
	// Unity.WebRTC.MarshallingArray`1<System.IntPtr> Unity.WebRTC.RTCRtpTransceiverInitInternal::streams
	MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 ___streams_2;
};

// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
	// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::<Desc>k__BackingField
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___U3CDescU3Ek__BackingField_3;
};

// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
};

// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`1<Unity.WebRTC.RTCStatsReport> Unity.WebRTC.RTCStatsCollectorCallback::onStatsDelivered
	Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* ___onStatsDelivered_6;
};

// Unity.WebRTC.RTCStatsReportAsyncOperation
struct RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
	// Unity.WebRTC.RTCStatsReport Unity.WebRTC.RTCStatsReportAsyncOperation::<Value>k__BackingField
	RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___U3CValueU3Ek__BackingField_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<Unity.WebRTC.RTCStatsReport>
struct Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCreateGetStats
struct DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCreateSDFailure
struct DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCreateSDSuccess
struct DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure
struct DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess
struct DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateSetSessionDescFailure
struct DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateSetSessionDescSuccess
struct DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B  : public MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6
{
	// Unity.WebRTC.UnityVideoRenderer Unity.WebRTC.VideoStreamTrack::m_renderer
	UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* ___m_renderer_3;
	// Unity.WebRTC.VideoTrackSource Unity.WebRTC.VideoStreamTrack::m_source
	VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772* ___m_source_4;
	// Unity.WebRTC.OnVideoReceived Unity.WebRTC.VideoStreamTrack::OnVideoReceived
	OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* ___OnVideoReceived_5;
};

struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>> Unity.WebRTC.VideoStreamTrack::s_tracks
	ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* ___s_tracks_2;
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5  : public RuntimeArray
{
	ALIGN_FIELD (8) RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B m_Items[1];

	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};

IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalInt_AsEnum_TisIl2CppFullySharedGenericStruct_m7C9F46D49A6A63E9176CB340D8C4BC4D3DA7D5DA_gshared (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* il2cppRetVal, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisIl2CppFullySharedGenericStruct_m4B09813E16C75FBD5BCC2CC473CF27A1642BA233_gshared (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___a0, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE9AF76CD5498601EB67AAC29E56FB8DC552EA368_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item21, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Tuple`2<T1,T2>,T1&,T2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TupleExtensions_Deconstruct_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEA93DC011DE34C34B8DE5C4A1116A3B1170EDE53_gshared (/*System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* ___value0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___item11, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___item22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m4AFBB5710869A753B5E89CDC1D269CA302F99FD9_gshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.WebRTC::get_Table()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* WebRTC_get_Table_mEB652589846A92D4E1B015E7E96FDD7B8EE9FEAF (const RuntimeMethod* method) ;
// System.Object Unity.WebRTC.WeakReferenceTable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.UnityVideoRenderer::OnVideoFrameResizeInternal(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVideoRenderer_OnVideoFrameResizeInternal_mFD8DAB07859B9B14BFDA580DB0E6C4EBB76A66A9 (UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Object Unity.WebRTC.WeakReferenceExtension::NullOrValue(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceExtension_NullOrValue_m1F22C29F6CEA3E5690BAD7BD46486AE2534919DB (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___reference0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.WebRTC.RTCStatsReport>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE563E2DC69E24CDE51F52FD67CF0B2A09EC2DE9B (Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::set_Value(Unity.WebRTC.RTCStatsReport)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateSetSessionDescSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetSessionDescSuccess__ctor_m5965FA50E70135C7DD693F55D799ADAC06B00093 (DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnSetSessionDescriptionSuccess(Unity.WebRTC.DelegateSetSessionDescSuccess)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnSetSessionDescriptionSuccess_mB770DEF6A71D821BF851C0103B56CD9720FFA1C4_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateSetSessionDescFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetSessionDescFailure__ctor_m97D709800B10D037CA679D2AB962E5660C23639F (DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnSetSessionDescriptionFailure(Unity.WebRTC.DelegateSetSessionDescFailure)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnSetSessionDescriptionFailure_m4B5407D5CD3B4ABE4EA4061351CC4A43549A965F_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::set_Error(Unity.WebRTC.RTCError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<Unity.WebRTC.RTCIceTransportPolicy>()
inline Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, const RuntimeMethod* method)
{
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 il2cppRetVal;
	((  void (*) (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))OptionalInt_AsEnum_TisIl2CppFullySharedGenericStruct_m7C9F46D49A6A63E9176CB340D8C4BC4D3DA7D5DA_gshared)((OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*)__this, (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<Unity.WebRTC.RTCBundlePolicy>()
inline Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07 (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, const RuntimeMethod* method)
{
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 il2cppRetVal;
	((  void (*) (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))OptionalInt_AsEnum_TisIl2CppFullySharedGenericStruct_m7C9F46D49A6A63E9176CB340D8C4BC4D3DA7D5DA_gshared)((OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*)__this, (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Nullable`1<System.Int32> Unity.WebRTC.OptionalInt::op_Implicit(Unity.WebRTC.OptionalInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 OptionalInt_op_Implicit_m0F601B18AF8604E1E68880B4E821860F91EB7426 (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___a0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Unity.WebRTC.OptionalBool::op_Implicit(Unity.WebRTC.OptionalBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OptionalBool_op_Implicit_m44247211DEC3207C64CA0169F8B19D605E8ED031 (OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___a0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCConfiguration::.ctor(Unity.WebRTC.RTCConfigurationInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___v0, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<Unity.WebRTC.RTCIceTransportPolicy>(System.Nullable`1<T>)
inline OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m2E6B4AEFB0AC33E56FD215BE996071521DF98FC0 (Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___a0, const RuntimeMethod* method)
{
	return ((  OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 (*) (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339, const RuntimeMethod*))OptionalInt_FromEnum_TisIl2CppFullySharedGenericStruct_m4B09813E16C75FBD5BCC2CC473CF27A1642BA233_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339)&___a0, method);
}
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<Unity.WebRTC.RTCBundlePolicy>(System.Nullable`1<T>)
inline OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mECE59E4F607962112CAE1F260C4AB20AF7C9972F (Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___a0, const RuntimeMethod* method)
{
	return ((  OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 (*) (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339, const RuntimeMethod*))OptionalInt_FromEnum_TisIl2CppFullySharedGenericStruct_m4B09813E16C75FBD5BCC2CC473CF27A1642BA233_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339)&___a0, method);
}
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::op_Implicit(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_op_Implicit_m28C800312AF13CBEE8C560093B70DF5781A3A834 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___a0, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalBool Unity.WebRTC.OptionalBool::op_Implicit(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 OptionalBool_op_Implicit_mAFB1300B345B1F1A534613B56D70B3BAADF9A098 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___a0, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCConfigurationInternal Unity.WebRTC.RTCConfiguration::Cast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateDebugLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::RegisterDebugLog(Unity.WebRTC.DelegateDebugLog,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_RegisterDebugLog_mAC3EE524F35A6FF139BDA4026585263BADAEA384 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* ___func0, bool ___enableNativeLog1, int32_t ___nativeLoggingSeverity2, const RuntimeMethod* method) ;
// Unity.WebRTC.Context Unity.WebRTC.Context::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* Context_Create_m2DDBDD2E864C46F2B1D85FF3A09C5E5354066840 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::SetCurrentContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetCurrentContext_m292844D0DA496B574EC7CB2D426E1125C5B709F9 (intptr_t ___context0, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A (const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.ExecutableUnitySynchronizationContext::.ctor(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutableUnitySynchronizationContext__ctor_mF06438C745A18C6488B00F77924CB58397F3FBCB (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* __this, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___context0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<Update>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__5__ctor_mD43A4F505D66AF9E34C241910113253C559C57FB (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.ExecutableUnitySynchronizationContext::ExecutePendingTasks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecutableUnitySynchronizationContext_ExecutePendingTasks_mD3D99C61F54F1E7BDE1A9D2F3E9F866F30CB5467 (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* __this, int64_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.Context::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_Dispose_mF3D351BD72BBBB0D85DC2CC9FFC5C4DD341A1289 (Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.WebRTC::NvEncSupportedPlatdorm(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_NvEncSupportedPlatdorm_mDFBA92F494EEB45FC6CCB33259996D1976BDA578 (int32_t ___platform0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat Unity.WebRTC.WebRTC::GetSupportedGraphicsFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03 (int32_t ___format0, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetTextureFormat_m5B706FC6EBF200DACF75D9F07FD9DB3A3E74AC4C (int32_t ___format0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<UnityEngine.Object,System.Single>(T1,T2)
inline Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m817B7865DCFE3DD80E39C4D336268CD816B5E582 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item10, float ___item21, const RuntimeMethod* method)
{
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* il2cppRetVal = ((  Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE9AF76CD5498601EB67AAC29E56FB8DC552EA368_gshared)((Il2CppFullySharedGenericAny)___item10, (Il2CppFullySharedGenericAny)&___item21, method);
	return (Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A*)il2cppRetVal;
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Action,System.Single>(T1,T2)
inline Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA160457F0DDD1410134A99E8E3F84D1F0DDBC1FE (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item10, float ___item21, const RuntimeMethod* method)
{
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* il2cppRetVal = ((  Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE9AF76CD5498601EB67AAC29E56FB8DC552EA368_gshared)((Il2CppFullySharedGenericAny)___item10, (Il2CppFullySharedGenericAny)&___item21, method);
	return (Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B*)il2cppRetVal;
}
// System.Void Unity.WebRTC.WebRTC/CallbackObject::.ctor(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3 (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* __this, intptr_t ___ptr0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.WeakReferenceTable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<UnityEngine.Object,System.Single>(System.Tuple`2<T1,T2>,T1&,T2&)
inline void TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m153DCFB19C92A8DD8A0EC38F7226AC75E7FB4F4E (Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* ___value0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___item11, float* ___item22, const RuntimeMethod* method)
{
	((  void (*) (/*System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))TupleExtensions_Deconstruct_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEA93DC011DE34C34B8DE5C4A1116A3B1170EDE53_gshared)((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)___value0, (Il2CppFullySharedGenericAny*)___item11, (Il2CppFullySharedGenericAny*)___item22, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m45CB0361F4B2940D59F1B5567A844FBB35B2101F (U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* __this, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<System.Action,System.Single>(System.Tuple`2<T1,T2>,T1&,T2&)
inline void TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6EA2EDFAB823C240F84111EA46E05252D9B29E6F (Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* ___value0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___item11, float* ___item22, const RuntimeMethod* method)
{
	((  void (*) (/*System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))TupleExtensions_Deconstruct_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEA93DC011DE34C34B8DE5C4A1116A3B1170EDE53_gshared)((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)___value0, (Il2CppFullySharedGenericAny*)___item11, (Il2CppFullySharedGenericAny*)___item22, method);
}
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m71B28F18E224DDB44B711DB3D23B1226AA7547AC (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>::.ctor()
inline void List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.ICollection Unity.WebRTC.WeakReferenceTable::get_CopiedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>::.ctor(T)
inline void WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348 (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* __this, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB*, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___target0, method);
}
// System.Void System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>::Add(T)
inline void List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_inline (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* __this, WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392 (ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m4AFBB5710869A753B5E89CDC1D269CA302F99FD9_gshared)((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*)__this, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Boolean System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8 (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* __this, VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*, VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___target0, method);
}
// System.Void Unity.WebRTC.VideoStreamTrack::UpdateSendTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack_UpdateSendTexture_m61BA118B3E588ED03B37032E03CDC284584ABC0F (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.VideoStreamTrack::UpdateReceiveTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack_UpdateReceiveTexture_m94AA8A04CEB096F5D0C8A97A30536E04C5385F1C (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCStatsCollectorCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132 (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventAndData(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___callback0, int32_t ___eventID1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginCustomTextureUpdateV2(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___callback0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___targetTexture1, uint32_t ___userData2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RegisterDebugLog(Il2CppMethodPointer, uint8_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDestroy(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnectionWithConfig(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeletePeerConnection(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRestartIce(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetConfiguration(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateDataChannel(intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteDataChannel(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextStopMediaStreamTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextGetStatsList(intptr_t, intptr_t, uint64_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteStatsReport(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextAddRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetConfiguration(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionCreateOffer(intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionCreateAnswer(intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterCallbackCreateSD(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterCallbackCollectStats(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnSetSessionDescSuccess(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnSetSessionDescFailure(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceConnectionChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterConnectionStateChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceGatheringChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnIceCandidate(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetLocalDescription(intptr_t, intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetLocalDescriptionWithoutDescription(intptr_t, intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetRemoteDescription(intptr_t, intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionGetStats(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSenderGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetSenderCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetReceiverCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionReceiverGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionAddTrack(intptr_t, intptr_t, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithType(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithInit(intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithTypeAndInit(intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionAddIceCandidate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CreateIceCandidate(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DeleteIceCandidate(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL IceCandidateGetCandidate(intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IceCandidateGetSdpLineIndex(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdpMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetReceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetSenders(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetTransceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceConditionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSignalingState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceGatheringState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnDataChannel(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRenegotiationNeeded(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRemoveTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL TransceiverGetCurrentDirection(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverStop(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverGetDirection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetDirection(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetCodecPreferences(intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetReceiver(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetSender(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL SenderGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SenderGetParameters(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SenderSetParameters(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL SenderReplaceTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetStreams(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetLabel(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetProtocol(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmits(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmitTime(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetOrdered(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL DataChannelGetBufferedAmount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetNegotiated(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSend(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSendBinary(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnMessage(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnOpen(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnClose(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateMediaStream(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextUnRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSink(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteAudioTrackSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackAddSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackSinkProcessAudio(intptr_t, float*, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamAddTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetVideoTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetAudioTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnAddTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnRemoveTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetKind(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamTrackGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamTrackGetEnabled(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamTrackSetEnabled(intptr_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL CreateVideoRenderer(intptr_t, Il2CppMethodPointer, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL GetVideoRendererId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DeleteVideoRenderer(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackAddOrUpdateSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetCurrentContext(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetRenderEventFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetReleaseBuffersFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetUpdateTextureFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioSourceProcessLocalAudio(intptr_t, intptr_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetJson(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsGetTimestamp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetMembers(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetName(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberIsDefined(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberGetBool(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL StatsMemberGetUnsignedInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsMemberGetLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL StatsMemberGetUnsignedLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C double DEFAULT_CALL StatsMemberGetDouble(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetString(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetBoolArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetDoubleArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetStringArray(intptr_t, uint64_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m86F262D0E4401D88322FB044F0BEDD8677EDBDFD (U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::<OnVideoFrameResize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3COnVideoFrameResizeU3Eb__0_m46A707B142A7A706FB3C62980C272A6360B41032 (U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (WebRTC.Table[ptrRenderer] is UnityVideoRenderer renderer)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_0;
		L_0 = WebRTC_get_Table_mEB652589846A92D4E1B015E7E96FDD7B8EE9FEAF(NULL);
		intptr_t L_1 = __this->___ptrRenderer_0;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_0, L_3, NULL);
		V_0 = ((UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C*)IsInstClass((RuntimeObject*)L_4, UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var));
		UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// renderer.OnVideoFrameResizeInternal(width, height);
		UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* L_7 = V_0;
		int32_t L_8 = __this->___width_1;
		int32_t L_9 = __this->___height_2;
		NullCheck(L_7);
		UnityVideoRenderer_OnVideoFrameResizeInternal_mFD8DAB07859B9B14BFDA580DB0E6C4EBB76A66A9(L_7, L_8, L_9, NULL);
	}

IL_0039:
	{
		// });
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
// System.Object Unity.WebRTC.WeakReferenceExtension::NullOrValue(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceExtension_NullOrValue_m1F22C29F6CEA3E5690BAD7BD46486AE2534919DB (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___reference0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// return reference.IsAlive ? reference.Target : null;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = ___reference0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_0);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_0012;
	}

IL_000c:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = ___reference0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_2);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
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
// System.Void Unity.WebRTC.WeakReferenceTable::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Add_mB5ACAF4D38DF254FA79ED0754F555836D1A42F2C (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_table.Add(key, new WeakReference(value));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___key0;
		RuntimeObject* L_2 = ___value1;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_3, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Remove_mC6B05133FA6FEBDFBFB19D29DE3D1DCB4FE5CA7A (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// m_table.Remove(key);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(29 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_0, L_1);
		// }
		return;
	}
}
// System.Object Unity.WebRTC.WeakReferenceTable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// WeakReference reference = m_table[key] as WeakReference;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_2, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
		// return reference.NullOrValue();
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = WeakReferenceExtension_NullOrValue_m1F22C29F6CEA3E5690BAD7BD46486AE2534919DB(L_3, NULL);
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// System.Collections.ICollection Unity.WebRTC.WeakReferenceTable::get_CopiedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var array = new object[m_table.Count];
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// int i = 0;
		V_1 = 0;
		// foreach (var value in m_table.Values)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->___m_table_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(28 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_5;
					if (!L_7)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_8 = V_5;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0028_1:
			{
				// foreach (var value in m_table.Values)
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_3 = L_10;
				// var reference = value as WeakReference;
				RuntimeObject* L_11 = V_3;
				V_4 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_11, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
				// array[i] = reference.NullOrValue();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
				int32_t L_13 = V_1;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_4;
				RuntimeObject* L_15;
				L_15 = WeakReferenceExtension_NullOrValue_m1F22C29F6CEA3E5690BAD7BD46486AE2534919DB(L_14, NULL);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_15);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_15);
				// i++;
				int32_t L_16 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0047_1:
			{
				// foreach (var value in m_table.Values)
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// return array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		V_6 = (RuntimeObject*)L_19;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		RuntimeObject* L_20 = V_6;
		return L_20;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Clear_m80522C8CA06BF8EB66787518A9E716B3F750D115 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	{
		// m_table.Clear();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void System.Collections.Hashtable::Clear() */, L_0);
		// }
		return;
	}
}
// System.Boolean Unity.WebRTC.WeakReferenceTable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return m_table.ContainsKey(key);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(19 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.WebRTC.WeakReferenceTable::TryGetValue(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_TryGetValue_m86712ACC628475D32755BBDE8C9611990B4B04D9 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// value = null;
		RuntimeObject** L_0 = ___value1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (!m_table.ContainsKey(key))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->___m_table_0;
		RuntimeObject* L_2 = ___key0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(19 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_1, L_2);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_001b:
	{
		// value = this[key];
		RuntimeObject** L_5 = ___value1;
		RuntimeObject* L_6 = ___key0;
		RuntimeObject* L_7;
		L_7 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(__this, L_6, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		// return true;
		V_1 = (bool)1;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable__ctor_m25ECF2CACC1CFE254ED9B7B1BA9D8396DC4321C3 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable m_table = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->___m_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_table_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = __this->___U3CErrorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_Error(Unity.WebRTC.RTCError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___value0, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CErrorU3Ek__BackingField_0))->___message_1), (void*)NULL);
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = __this->___U3CIsErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsErrorU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsDoneU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_keepWaiting_mD0FB396CD0D44F4D9D4F940558080E418F5C8A4C (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0015;
	}

IL_0010:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// IsDone = true;
		AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// Unity.WebRTC.RTCStatsReport Unity.WebRTC.RTCStatsReportAsyncOperation::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* RTCStatsReportAsyncOperation_get_Value_m44FB14690ABC8E18FA3690AACCB0CC72D9706094 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = __this->___U3CValueU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::set_Value(Unity.WebRTC.RTCStatsReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___value0, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::.ctor(Unity.WebRTC.RTCStatsCollectorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation__ctor_m0D5C8D10A06A72ADF519C1543E5226D6F974FFB6 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RTCStatsReportAsyncOperation(RTCStatsCollectorCallback callback)
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
		// callback.onStatsDelivered = OnStatsDelivered;
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_0 = ___callback0;
		Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* L_1 = (Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C*)il2cpp_codegen_object_new(Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mE563E2DC69E24CDE51F52FD67CF0B2A09EC2DE9B(L_1, __this, (intptr_t)((void*)RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onStatsDelivered_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onStatsDelivered_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::OnStatsDelivered(Unity.WebRTC.RTCStatsReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___report0, const RuntimeMethod* method) 
{
	{
		// Value = report;
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___report0;
		RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline(__this, L_0, NULL);
		// IsError = false;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)0, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// }
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
// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::get_Desc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 RTCSessionDescriptionAsyncOperation_get_Desc_m6B2EF7D9EF0737D24C05B0D40BA83E6746FA1F04 (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = __this->___U3CDescU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::set_Desc(Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation_set_Desc_m63FD708E5421DB16773B1A3A216834550C0F4F54 (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___value0, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = ___value0;
		__this->___U3CDescU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDescU3Ek__BackingField_3))->___sdp_1), (void*)NULL);
		return;
	}
}
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation__ctor_mC9D032CFC12433BA93B2947477BE54FD8249DC4D (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
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
// System.Void Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation::.ctor(Unity.WebRTC.RTCPeerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSetSessionDescriptionAsyncOperation__ctor_mC3608F372E1C9C43B4EC91BEA12F150B824B2A68 (RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* __this, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* ___connection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_0_m6D59BF81A48959DB17A0C68BEBDBB41F003EF6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_1_mE2F4B771BCCD23450A2797A2DE6240FAE19B653C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RTCSetSessionDescriptionAsyncOperation(RTCPeerConnection connection)
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
		// connection.OnSetSessionDescriptionSuccess = () =>
		// {
		//     IsError = false;
		//     this.Done();
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_0 = ___connection0;
		DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* L_1 = (DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F*)il2cpp_codegen_object_new(DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DelegateSetSessionDescSuccess__ctor_m5965FA50E70135C7DD693F55D799ADAC06B00093(L_1, __this, (intptr_t)((void*)RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_0_m6D59BF81A48959DB17A0C68BEBDBB41F003EF6B6_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		RTCPeerConnection_set_OnSetSessionDescriptionSuccess_mB770DEF6A71D821BF851C0103B56CD9720FFA1C4_inline(L_0, L_1, NULL);
		// connection.OnSetSessionDescriptionFailure = (error) =>
		// {
		//     IsError = true;
		//     Error = error;
		//     this.Done();
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_2 = ___connection0;
		DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* L_3 = (DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E*)il2cpp_codegen_object_new(DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DelegateSetSessionDescFailure__ctor_m97D709800B10D037CA679D2AB962E5660C23639F(L_3, __this, (intptr_t)((void*)RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_1_mE2F4B771BCCD23450A2797A2DE6240FAE19B653C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RTCPeerConnection_set_OnSetSessionDescriptionFailure_m4B5407D5CD3B4ABE4EA4061351CC4A43549A965F_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation::<.ctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_0_m6D59BF81A48959DB17A0C68BEBDBB41F003EF6B6 (RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* __this, const RuntimeMethod* method) 
{
	{
		// IsError = false;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)0, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// };
		return;
	}
}
// System.Void Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation::<.ctor>b__0_1(Unity.WebRTC.RTCError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSetSessionDescriptionAsyncOperation_U3C_ctorU3Eb__0_1_mE2F4B771BCCD23450A2797A2DE6240FAE19B653C (RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___error0, const RuntimeMethod* method) 
{
	{
		// IsError = true;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)1, NULL);
		// Error = error;
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = ___error0;
		AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline(__this, L_0, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// };
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
// Conversion methods for marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled)
{
	marshaled.___errorType_0 = unmarshaled.___errorType_0;
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.___message_1);
}
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke_back(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled)
{
	int32_t unmarshalederrorType_temp_0 = 0;
	unmarshalederrorType_temp_0 = marshaled.___errorType_0;
	unmarshaled.___errorType_0 = unmarshalederrorType_temp_0;
	unmarshaled.___message_1 = il2cpp_codegen_marshal_string_result(marshaled.___message_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke_cleanup(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled)
{
	marshaled.___errorType_0 = unmarshaled.___errorType_0;
	marshaled.___message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___message_1);
}
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com_back(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled)
{
	int32_t unmarshalederrorType_temp_0 = 0;
	unmarshalederrorType_temp_0 = marshaled.___errorType_0;
	unmarshaled.___errorType_0 = unmarshalederrorType_temp_0;
	unmarshaled.___message_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___message_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com_cleanup(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___sdp_1 = il2cpp_codegen_marshal_string(unmarshaled.___sdp_1);
}
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___sdp_1 = il2cpp_codegen_marshal_string_result(marshaled.___sdp_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdp_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___sdp_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sdp_1);
	marshaled.___sdp_1 = NULL;
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___sdp_1 = il2cpp_codegen_marshal_string(unmarshaled.___sdp_1);
}
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___sdp_1 = il2cpp_codegen_marshal_string_result(marshaled.___sdp_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdp_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___sdp_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sdp_1);
	marshaled.___sdp_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.RTCOfferAnswerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCOfferAnswerOptions__cctor_m2076CF28E5BCCA73018BD3308A5C05120CB84B4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static RTCOfferAnswerOptions Default =
		//     new RTCOfferAnswerOptions { iceRestart = false, voiceActivityDetection = true };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F));
		(&V_0)->___iceRestart_1 = (bool)0;
		(&V_0)->___voiceActivityDetection_2 = (bool)1;
		RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F L_0 = V_0;
		((RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_StaticFields*)il2cpp_codegen_static_fields_for(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var))->___Default_0 = L_0;
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
// Conversion methods for marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke_back(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke_cleanup(RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com_back(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com_cleanup(RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled)
{
}
// System.Void Unity.WebRTC.RTCConfiguration::.ctor(Unity.WebRTC.RTCConfigurationInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iceServers = v.iceServers;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_0 = ___v0;
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_1 = L_0->___iceServers_0;
		__this->___iceServers_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iceServers_0), (void*)L_1);
		// iceTransportPolicy = v.iceTransportPolicy.AsEnum<RTCIceTransportPolicy>();
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_2 = ___v0;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* L_3 = (&L_2->___iceTransportPolicy_1);
		Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 L_4;
		L_4 = OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D(L_3, OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var);
		__this->___iceTransportPolicy_1 = L_4;
		// bundlePolicy = v.bundlePolicy.AsEnum<RTCBundlePolicy>();
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_5 = ___v0;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* L_6 = (&L_5->___bundlePolicy_2);
		Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 L_7;
		L_7 = OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07(L_6, OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var);
		__this->___bundlePolicy_2 = L_7;
		// iceCandidatePoolSize = v.iceCandidatePoolSize;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_8 = ___v0;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_9 = L_8->___iceCandidatePoolSize_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		L_10 = OptionalInt_op_Implicit_m0F601B18AF8604E1E68880B4E821860F91EB7426(L_9, NULL);
		__this->___iceCandidatePoolSize_3 = L_10;
		// enableDtlsSrtp = v.enableDtlsSrtp;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_11 = ___v0;
		OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 L_12 = L_11->___enableDtlsSrtp_4;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_13;
		L_13 = OptionalBool_op_Implicit_m44247211DEC3207C64CA0169F8B19D605E8ED031(L_12, NULL);
		__this->___enableDtlsSrtp_4 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253_AdjustorThunk (RuntimeObject* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___v0, const RuntimeMethod* method)
{
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839*>(__this + _offset);
	RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253(_thisAdjusted, ___v0, method);
}
// Unity.WebRTC.RTCConfigurationInternal Unity.WebRTC.RTCConfiguration::Cast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mECE59E4F607962112CAE1F260C4AB20AF7C9972F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m2E6B4AEFB0AC33E56FD215BE996071521DF98FC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RTCConfigurationInternal instance = new RTCConfigurationInternal
		// {
		//     iceServers = this.iceServers,
		//     iceTransportPolicy = OptionalInt.FromEnum(this.iceTransportPolicy),
		//     bundlePolicy = OptionalInt.FromEnum(this.bundlePolicy),
		//     iceCandidatePoolSize = this.iceCandidatePoolSize,
		//     enableDtlsSrtp = this.enableDtlsSrtp
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27));
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_0 = __this->___iceServers_0;
		(&V_1)->___iceServers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___iceServers_0), (void*)L_0);
		Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 L_1 = __this->___iceTransportPolicy_1;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_2;
		L_2 = OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m2E6B4AEFB0AC33E56FD215BE996071521DF98FC0(L_1, OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m2E6B4AEFB0AC33E56FD215BE996071521DF98FC0_RuntimeMethod_var);
		(&V_1)->___iceTransportPolicy_1 = L_2;
		Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 L_3 = __this->___bundlePolicy_2;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_4;
		L_4 = OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mECE59E4F607962112CAE1F260C4AB20AF7C9972F(L_3, OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mECE59E4F607962112CAE1F260C4AB20AF7C9972F_RuntimeMethod_var);
		(&V_1)->___bundlePolicy_2 = L_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = __this->___iceCandidatePoolSize_3;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_6;
		L_6 = OptionalInt_op_Implicit_m28C800312AF13CBEE8C560093B70DF5781A3A834(L_5, NULL);
		(&V_1)->___iceCandidatePoolSize_3 = L_6;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_7 = __this->___enableDtlsSrtp_4;
		OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 L_8;
		L_8 = OptionalBool_op_Implicit_mAFB1300B345B1F1A534613B56D70B3BAADF9A098(L_7, NULL);
		(&V_1)->___enableDtlsSrtp_4 = L_8;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_9 = V_1;
		V_0 = L_9;
		// return instance;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_10 = V_0;
		V_2 = L_10;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839*>(__this + _offset);
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 _returnValue;
	_returnValue = RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke_back(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke_cleanup(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com_back(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com_cleanup(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0(char* ___str0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___str0' to managed representation
	String_t* ____str0_unmarshaled = NULL;
	____str0_unmarshaled = il2cpp_codegen_marshal_string_result(___str0);

	// Managed method invocation
	WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0(____str0_unmarshaled, NULL);

}
// System.Void Unity.WebRTC.WebRTC::Initialize(System.Boolean,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Initialize_mB3A0EFE556D4A9F2DFC3814CEECCD9FAA7E05354 (bool ___limitTextureSize0, bool ___enableNativeLog1, int32_t ___nativeLoggingSeverity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (s_context != null)
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = (bool)((!(((RuntimeObject*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new InvalidOperationException("Already initialized WebRTC.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85D634311AED4DCFE4023F6211B3F7CAC4410846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_Initialize_mB3A0EFE556D4A9F2DFC3814CEECCD9FAA7E05354_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (Application.platform == RuntimePlatform.WindowsEditor ||
		//     Application.platform == RuntimePlatform.WindowsPlayer ||
		//     Application.platform == RuntimePlatform.OSXEditor ||
		//     Application.platform == RuntimePlatform.OSXPlayer)
		int32_t L_3;
		L_3 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4;
		L_4 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5;
		L_5 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_6;
		L_6 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = 1;
	}

IL_003a:
	{
		V_1 = (bool)G_B7_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0096;
		}
	}
	{
		// if (SystemInfo.graphicsDeviceType == GraphicsDeviceType.OpenGLCore ||
		//     SystemInfo.graphicsDeviceType == GraphicsDeviceType.OpenGLES2 ||
		//     SystemInfo.graphicsDeviceType == GraphicsDeviceType.OpenGLES3)
		int32_t L_8;
		L_8 = SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1(NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)17))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9;
		L_9 = SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1(NULL);
		if ((((int32_t)L_9) == ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10;
		L_10 = SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1(NULL);
		G_B12_0 = ((((int32_t)L_10) == ((int32_t)((int32_t)11)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B12_0 = 1;
	}

IL_005c:
	{
		V_2 = (bool)G_B12_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		// Debug.LogError($"Not Support OpenGL API on {Application.platform}.");
		int32_t L_12;
		L_12 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB234F4AD020EED4223D4599EA2FC01F662FC03B8)), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_15, NULL);
		// throw new NotSupportedException($"Not Support OpenGL API on {Application.platform} in Unity WebRTC.");
		int32_t L_16;
		L_16 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B652F0589F856CA252329BFBB3783A857E7442)), L_18, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_20 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_Initialize_mB3A0EFE556D4A9F2DFC3814CEECCD9FAA7E05354_RuntimeMethod_var)));
	}

IL_0095:
	{
	}

IL_0096:
	{
		// NativeMethods.RegisterDebugLog(DebugLog, enableNativeLog, nativeLoggingSeverity);
		DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* L_21 = (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*)il2cpp_codegen_object_new(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D(L_21, NULL, (intptr_t)((void*)WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0_RuntimeMethod_var), NULL);
		bool L_22 = ___enableNativeLog1;
		int32_t L_23 = ___nativeLoggingSeverity2;
		NativeMethods_RegisterDebugLog_mAC3EE524F35A6FF139BDA4026585263BADAEA384(L_21, L_22, L_23, NULL);
		// s_context = Context.Create();
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_24;
		L_24 = Context_Create_m2DDBDD2E864C46F2B1D85FF3A09C5E5354066840(0, NULL);
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1), (void*)L_24);
		// NativeMethods.SetCurrentContext(s_context.self);
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_25 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_25);
		intptr_t L_26 = L_25->___self_0;
		NativeMethods_SetCurrentContext_m292844D0DA496B574EC7CB2D426E1125C5B709F9(L_26, NULL);
		// s_syncContext = new ExecutableUnitySynchronizationContext(SynchronizationContext.Current);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_27;
		L_27 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_28 = (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)il2cpp_codegen_object_new(ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ExecutableUnitySynchronizationContext__ctor_mF06438C745A18C6488B00F77924CB58397F3FBCB(L_28, L_27, NULL);
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2), (void*)L_28);
		// s_limitTextureSize = limitTextureSize;
		bool L_29 = ___limitTextureSize0;
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_limitTextureSize_3 = L_29;
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.WebRTC.WebRTC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_Update_m37E093D0931F75F1ACB8C4DA15CCD02A524F51D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* L_0 = (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E*)il2cpp_codegen_object_new(U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateU3Ed__5__ctor_mD43A4F505D66AF9E34C241910113253C559C57FB(L_0, 0, NULL);
		return L_0;
	}
}
// System.Boolean Unity.WebRTC.WebRTC::ExecutePendingTasks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_ExecutePendingTasks_m35558903850B5C12594F5A0BB70C6100623B86A6 (int32_t ___millisecondTimeout0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (s_syncContext is ExecutableUnitySynchronizationContext executableContext)
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		V_0 = ((ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)IsInstClass((RuntimeObject*)L_0, ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var));
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return executableContext.ExecutePendingTasks(millisecondTimeout);
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_3 = V_0;
		int32_t L_4 = ___millisecondTimeout0;
		NullCheck(L_3);
		bool L_5;
		L_5 = ExecutableUnitySynchronizationContext_ExecutePendingTasks_mD3D99C61F54F1E7BDE1A9D2F3E9F866F30CB5467(L_3, ((int64_t)L_4), NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0020:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Unity.WebRTC.WebRTC::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Dispose_mDA1199D14C4FC8E727BFA137F4BCFCFB97E98B79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (s_context != null)
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = (bool)((!(((RuntimeObject*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// s_context.Dispose();
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_2 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_2);
		Context_Dispose_mF3D351BD72BBBB0D85DC2CC9FFC5C4DD341A1289(L_2, NULL);
		// s_context = null;
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1 = (Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1), (void*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)NULL);
	}

IL_0020:
	{
		// s_syncContext = null;
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2 = (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2), (void*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL);
		// NativeMethods.RegisterDebugLog(null, false, NativeLoggingSeverity.Info);
		NativeMethods_RegisterDebugLog_mAC3EE524F35A6FF139BDA4026585263BADAEA384((DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*)NULL, (bool)0, 1, NULL);
		// }
		return;
	}
}
// Unity.WebRTC.RTCError Unity.WebRTC.WebRTC::ValidateTextureSize(System.Int32,System.Int32,UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E WebRTC_ValidateTextureSize_m89DC734104ED2CB3225541649475DC3CC9695E5F (int32_t ___width0, int32_t ___height1, int32_t ___platform2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!s_limitTextureSize)
		bool L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_limitTextureSize_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return new RTCError { errorType = RTCErrorType.None };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 0;
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_2 = V_1;
		V_2 = L_2;
		goto IL_0195;
	}

IL_0025:
	{
		// if (width * height > maxPixelCount)
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, L_4))) > ((int32_t)((int32_t)8294400)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message = $"Texture pixel count is invalid. " +
		//               $"width:{width} x height:{height} is over 4k pixel count ({maxPixelCount})."
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_6 = ___width0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = ___height1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12 = ((int32_t)8294400);
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C, L_8, L_11, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A, L_14, NULL);
		(&V_1)->___message_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_15);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_16 = V_1;
		V_2 = L_16;
		goto IL_0195;
	}

IL_007c:
	{
		// if (NvEncSupportedPlatdorm(platform))
		int32_t L_17 = ___platform2;
		bool L_18;
		L_18 = WebRTC_NvEncSupportedPlatdorm_mDFBA92F494EEB45FC6CCB33259996D1976BDA578(L_17, NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0128;
		}
	}
	{
		// if (width < minWidth || maxWidth < width ||
		//     height < minHeight || maxHeight < height)
		int32_t L_20 = ___width0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)145))))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_21 = ___width0;
		if ((((int32_t)((int32_t)4096)) < ((int32_t)L_21)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_22 = ___height1;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)49))))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_23 = ___height1;
		G_B10_0 = ((((int32_t)((int32_t)4096)) < ((int32_t)L_23))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B10_0 = 1;
	}

IL_00ac:
	{
		V_5 = (bool)G_B10_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0127;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message = $"Texture size is invalid. " +
		//               $"minWidth:{minWidth}, maxWidth:{maxWidth} " +
		//               $"minHeight:{minHeight}, maxHeight:{maxHeight} " +
		//               $"current size width:{width} height:{height}"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_25 = ((int32_t)145);
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		int32_t L_27 = ((int32_t)4096);
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D, L_26, L_28, NULL);
		int32_t L_30 = ((int32_t)49);
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		int32_t L_32 = ((int32_t)4096);
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B, L_31, L_33, NULL);
		int32_t L_35 = ___width0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_36);
		int32_t L_38 = ___height1;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		String_t* L_41;
		L_41 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2, L_37, L_40, NULL);
		String_t* L_42;
		L_42 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0, L_29, L_34, L_41, NULL);
		(&V_1)->___message_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_42);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_43 = V_1;
		V_2 = L_43;
		goto IL_0195;
	}

IL_0127:
	{
	}

IL_0128:
	{
		// if (platform == RuntimePlatform.Android)
		int32_t L_44 = ___platform2;
		V_6 = (bool)((((int32_t)L_44) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_0181;
		}
	}
	{
		// if (width < minimumTextureSize || height < minimumTextureSize)
		int32_t L_46 = ___width0;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)114))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_47 = ___height1;
		G_B17_0 = ((((int32_t)L_47) < ((int32_t)((int32_t)114)))? 1 : 0);
		goto IL_0141;
	}

IL_0140:
	{
		G_B17_0 = 1;
	}

IL_0141:
	{
		V_7 = (bool)G_B17_0;
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0180;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message =
		//         $"Texture size need {minimumTextureSize}, current size width:{width} height:{height}"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_49 = ((int32_t)114);
		RuntimeObject* L_50 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_49);
		int32_t L_51 = ___width0;
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_52);
		int32_t L_54 = ___height1;
		int32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7, L_50, L_53, L_56, NULL);
		(&V_1)->___message_1 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_57);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_58 = V_1;
		V_2 = L_58;
		goto IL_0195;
	}

IL_0180:
	{
	}

IL_0181:
	{
		// return new RTCError { errorType = RTCErrorType.None };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 0;
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_59 = V_1;
		V_2 = L_59;
		goto IL_0195;
	}

IL_0195:
	{
		// }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_60 = V_2;
		return L_60;
	}
}
// System.Void Unity.WebRTC.WebRTC::ValidateGraphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_ValidateGraphicsFormat_mA1D6357360C2CDDD0C3A8CF7B74D4D416D3415DB (int32_t ___format0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((int)format == LegacyARGB32_sRGB || (int)format == LegacyARGB32_UNorm)
		int32_t L_0 = ___format0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)87))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___format0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)88)))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_0015:
	{
		// GraphicsFormat supportedFormat = GetSupportedGraphicsFormat(SystemInfo.graphicsDeviceType);
		int32_t L_3;
		L_3 = SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1(NULL);
		int32_t L_4;
		L_4 = WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E(L_3, NULL);
		V_0 = L_4;
		// if (format != supportedFormat)
		int32_t L_5 = ___format0;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// throw new ArgumentException(
		//     $"This graphics format {format} is not supported for streaming, please use supportedFormat: {supportedFormat}");
		int32_t L_8 = ___format0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var)), &L_9);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C2F698C8AF279878725F92A0810B517004C294)), L_10, L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_ValidateGraphicsFormat_mA1D6357360C2CDDD0C3A8CF7B74D4D416D3415DB_RuntimeMethod_var)));
	}

IL_0048:
	{
		// }
		return;
	}
}
// UnityEngine.RenderTextureFormat Unity.WebRTC.WebRTC::GetSupportedRenderTextureFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedRenderTextureFormat_mD869259A4139FE47F4F8B8747C2AFE305EC75A97 (int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var graphicsFormat = GetSupportedGraphicsFormat(type);
		int32_t L_0 = ___type0;
		int32_t L_1;
		L_1 = WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E(L_0, NULL);
		V_0 = L_1;
		// return GraphicsFormatUtility.GetRenderTextureFormat(graphicsFormat);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03(L_2, NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat Unity.WebRTC.WebRTC::GetSupportedGraphicsFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E (int32_t ___type0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// switch (type)
		int32_t L_2 = ___type0;
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)8)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)11))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)16))))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_004c:
	{
		// return GraphicsFormat.B8G8R8A8_SRGB;
		V_3 = ((int32_t)57);
		goto IL_00c9;
	}

IL_0051:
	{
		// return GraphicsFormat.R8G8B8A8_SRGB;
		V_3 = 4;
		goto IL_00c9;
	}

IL_0055:
	{
		// return GraphicsFormat.B8G8R8A8_SRGB;
		V_3 = ((int32_t)57);
		goto IL_00c9;
	}

IL_005a:
	{
		goto IL_00b3;
	}

IL_005d:
	{
		// switch (type)
		int32_t L_9 = ___type0;
		V_5 = L_9;
		int32_t L_10 = V_5;
		V_4 = L_10;
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) > ((int32_t)8)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_0071;
	}

IL_0071:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)8)))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00b2;
	}

IL_0078:
	{
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_0080;
	}

IL_0080:
	{
		int32_t L_15 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, ((int32_t)16))))
		{
			case 0:
			{
				goto IL_00ad;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00b2;
			}
			case 4:
			{
				goto IL_00b2;
			}
			case 5:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_00a4:
	{
		// return GraphicsFormat.B8G8R8A8_UNorm;
		V_3 = ((int32_t)59);
		goto IL_00c9;
	}

IL_00a9:
	{
		// return GraphicsFormat.R8G8B8A8_UNorm;
		V_3 = 8;
		goto IL_00c9;
	}

IL_00ad:
	{
		// return GraphicsFormat.B8G8R8A8_UNorm;
		V_3 = ((int32_t)59);
		goto IL_00c9;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		// throw new ArgumentException($"Graphics device type {type} not supported");
		int32_t L_16 = ___type0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EBDF4678FD2BE65475A94ABED34948037A94C0B)), L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E_RuntimeMethod_var)));
	}

IL_00c9:
	{
		// }
		int32_t L_21 = V_3;
		return L_21;
	}
}
// UnityEngine.TextureFormat Unity.WebRTC.WebRTC::GetSupportedTextureFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedTextureFormat_mDC023FA391C2D3E98412B1E432F06C827A0029D4 (int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var graphicsFormat = GetSupportedGraphicsFormat(type);
		int32_t L_0 = ___type0;
		int32_t L_1;
		L_1 = WebRTC_GetSupportedGraphicsFormat_m55EF4B6F6E30D9A51B6D243A5F82F5943B4DCA6E(L_0, NULL);
		V_0 = L_1;
		// return GraphicsFormatUtility.GetTextureFormat(graphicsFormat);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GraphicsFormatUtility_GetTextureFormat_m5B706FC6EBF200DACF75D9F07FD9DB3A3E74AC4C(L_2, NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Unity.WebRTC.WebRTC::NvEncSupportedPlatdorm(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_NvEncSupportedPlatdorm_mDFBA92F494EEB45FC6CCB33259996D1976BDA578 (int32_t ___platform0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (platform)
		int32_t L_0 = ___platform0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)7)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)7)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_0023:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_002b;
	}

IL_0027:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Unity.WebRTC.WebRTC::DestroyOnMainThread(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DestroyOnMainThread_m26CF0DC2FEA03FA4C5ED3D590D87515610FDFB04 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m817B7865DCFE3DD80E39C4D336268CD816B5E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DestroyImmediate_m4C802E78C4F23E24431B8C43C9EDA4DC757F9A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_Destroy_mD48E94F06D7946E57A4EFA39EAD2D636CBEBFFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (delay < 0f)
		float L_0 = ___delay1;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// throw new ArgumentException($"The delay value is smaller than zero. delay:{delay}");
		float L_2 = ___delay1;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA28091DB9A11A94195F9CE19C1402CB23C180F34)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_DestroyOnMainThread_m26CF0DC2FEA03FA4C5ED3D590D87515610FDFB04_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (Mathf.Approximately(delay, 0f))
		float L_7 = ___delay1;
		bool L_8;
		L_8 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_7, (0.0f), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// s_syncContext.Post(DestroyImmediate, obj);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_10 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_11 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_11, NULL, (intptr_t)((void*)WebRTC_DestroyImmediate_m4C802E78C4F23E24431B8C43C9EDA4DC757F9A36_RuntimeMethod_var), NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_12 = ___obj0;
		NullCheck(L_10);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_10, L_11, L_12);
		goto IL_006a;
	}

IL_004c:
	{
		// s_syncContext.Post(Destroy, Tuple.Create(obj, delay));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_14 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_14, NULL, (intptr_t)((void*)WebRTC_Destroy_mD48E94F06D7946E57A4EFA39EAD2D636CBEBFFC2_RuntimeMethod_var), NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15 = ___obj0;
		float L_16 = ___delay1;
		Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* L_17;
		L_17 = Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m817B7865DCFE3DD80E39C4D336268CD816B5E582(L_15, L_16, Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m817B7865DCFE3DD80E39C4D336268CD816B5E582_RuntimeMethod_var);
		NullCheck(L_13);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_13, L_14, L_17);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DelayActionOnMainThread(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DelayActionOnMainThread_mC39D0B8B2D359B9C9511CA60ABC28B0D5B59477D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, float ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA160457F0DDD1410134A99E8E3F84D1F0DDBC1FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DelayAction_m2F8A179ED0A41F6A7ECFB7968F0E901509D595BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_syncContext.Post(DelayAction, Tuple.Create(callback, delay));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, NULL, (intptr_t)((void*)WebRTC_DelayAction_m2F8A179ED0A41F6A7ECFB7968F0E901509D595BA_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___callback0;
		float L_3 = ___delay1;
		Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* L_4;
		L_4 = Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA160457F0DDD1410134A99E8E3F84D1F0DDBC1FE(L_2, L_3, Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA160457F0DDD1410134A99E8E3F84D1F0DDBC1FE_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, L_4);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::Sync(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Sync_m323D637D23486A6EECD313DB72E3AED9777B444C (intptr_t ___ptr0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_SendOrPostCallback_m51822EFA3667964CDD79E266413427158C45D3F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_syncContext.Post(SendOrPostCallback, new CallbackObject(ptr, callback));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, NULL, (intptr_t)((void*)WebRTC_SendOrPostCallback_m51822EFA3667964CDD79E266413427158C45D3F4_RuntimeMethod_var), NULL);
		intptr_t L_2 = ___ptr0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___callback1;
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_4 = (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47*)il2cpp_codegen_object_new(CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3(L_4, L_2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, L_4);
		// }
		return;
	}
}
// System.String Unity.WebRTC.WebRTC::GetModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRTC_GetModuleName_mBF2779137F398400A430D7A43A2EAC20BEE7E611 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return System.IO.Path.GetFileName(Lib);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(_stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.WebRTC.WebRTC::SendOrPostCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_SendOrPostCallback_m51822EFA3667964CDD79E266413427158C45D3F4 (RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var obj = state as CallbackObject;
		RuntimeObject* L_0 = ___state0;
		V_0 = ((CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47*)IsInstClass((RuntimeObject*)L_0, CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var));
		// if (s_context == null || !Table.ContainsKey(obj.ptr))
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2;
		L_2 = WebRTC_get_Table_mEB652589846A92D4E1B015E7E96FDD7B8EE9FEAF(NULL);
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___ptr_0;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		bool L_7;
		L_7 = WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337(L_2, L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		goto IL_003d;
	}

IL_0031:
	{
		// obj.callback();
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_9 = V_0;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = L_9->___callback_1;
		NullCheck(L_10);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_10, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DestroyImmediate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DestroyImmediate_m4C802E78C4F23E24431B8C43C9EDA4DC757F9A36 (RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		// var obj = state as UnityEngine.Object;
		RuntimeObject* L_0 = ___state0;
		V_0 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		// UnityEngine.Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::Destroy(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Destroy_mD48E94F06D7946E57A4EFA39EAD2D636CBEBFFC2 (RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m153DCFB19C92A8DD8A0EC38F7226AC75E7FB4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_2 = NULL;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// (UnityEngine.Object obj, float delay) = state as Tuple<UnityEngine.Object, float>;
		RuntimeObject* L_0 = ___state0;
		TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m153DCFB19C92A8DD8A0EC38F7226AC75E7FB4F4E(((Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A*)IsInstClass((RuntimeObject*)L_0, Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var)), (&V_2), (&V_3), TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m153DCFB19C92A8DD8A0EC38F7226AC75E7FB4F4E_RuntimeMethod_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_2;
		V_0 = L_1;
		float L_2 = V_3;
		V_1 = L_2;
		// if (!Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// UnityEngine.Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_5, NULL);
		// return;
		goto IL_0035;
	}

IL_002d:
	{
		// UnityEngine.Object.Destroy(obj, delay);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = V_0;
		float L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DelayAction(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DelayAction_m2F8A179ED0A41F6A7ECFB7968F0E901509D595BA (RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6EA2EDFAB823C240F84111EA46E05252D9B29E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CDelayActionU3Eb__0_mF176313DB00DBEDF84F292F6A1F4A3D7A299A20C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	float V_2 = 0.0f;
	{
		U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* L_0 = (U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass22_0__ctor_m45CB0361F4B2940D59F1B5567A844FBB35B2101F(L_0, NULL);
		V_0 = L_0;
		// (Action callback, float delay) = state as Tuple<Action, float>;
		RuntimeObject* L_1 = ___state0;
		TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6EA2EDFAB823C240F84111EA46E05252D9B29E6F(((Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B*)IsInstClass((RuntimeObject*)L_1, Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var)), (&V_1), (&V_2), TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6EA2EDFAB823C240F84111EA46E05252D9B29E6F_RuntimeMethod_var);
		U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* L_2 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		NullCheck(L_2);
		L_2->___callback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_1), (void*)L_3);
		U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* L_4 = V_0;
		float L_5 = V_2;
		NullCheck(L_4);
		L_4->___delay_0 = L_5;
		// ThreadPool.QueueUserWorkItem(_ =>
		// {
		//     int milliseconds = (int)(delay * 1000f);
		//     Thread.Sleep(milliseconds);
		//     callback();
		// });
		U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* L_6 = V_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_7 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CDelayActionU3Eb__0_mF176313DB00DBEDF84F292F6A1F4A3D7A299A20C_RuntimeMethod_var), NULL);
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_m71B28F18E224DDB44B711DB3D23B1226AA7547AC(L_7, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DebugLog_m5ED8AD20E3EFD8C74DA9A375D87000C10EB5B2B0 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(str);
		String_t* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// }
		return;
	}
}
// Unity.WebRTC.Context Unity.WebRTC.WebRTC::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* WebRTC_get_Context_m6D00B75AE78D88A85D4366C36374228D6430F581 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* V_0 = NULL;
	{
		// internal static Context Context { get { return s_context; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// internal static Context Context { get { return s_context; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = V_0;
		return L_1;
	}
}
// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.WebRTC::get_Table()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* WebRTC_get_Table_mEB652589846A92D4E1B015E7E96FDD7B8EE9FEAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* V_0 = NULL;
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* G_B2_0 = NULL;
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* G_B1_0 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B3_0 = NULL;
	{
		// internal static WeakReferenceTable Table { get { return s_context?.table; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2 = G_B2_0->___table_1;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// internal static WeakReferenceTable Table { get { return s_context?.table; } }
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>> Unity.WebRTC.WebRTC::get_PeerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_get_PeerList_m1A5690B123FEC097799DC5F778F0A7B265E80099 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B2_0 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// var list = new List<WeakReference<RTCPeerConnection>>();
		List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_0 = (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887*)il2cpp_codegen_object_new(List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD(L_0, List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var);
		V_0 = L_0;
		// var values = Table?.CopiedValues;
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_1;
		L_1 = WebRTC_get_Table_mEB652589846A92D4E1B015E7E96FDD7B8EE9FEAF(NULL);
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		V_1 = G_B3_0;
		// if (values != null)
		RuntimeObject* L_4 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (var value in values)
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_3;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_7;
					if (!L_9)
					{
						goto IL_0078;
					}
				}
				{
					RuntimeObject* L_10 = V_7;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0078:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005a_1;
			}

IL_002c_1:
			{
				// foreach (var value in values)
				RuntimeObject* L_11 = V_3;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				V_4 = L_12;
				// if (value is RTCPeerConnection peer)
				RuntimeObject* L_13 = V_4;
				V_5 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_13, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
				RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_14 = V_5;
				V_6 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_15 = V_6;
				if (!L_15)
				{
					goto IL_0059_1;
				}
			}
			{
				// list.Add(new WeakReference<RTCPeerConnection>(peer));
				List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_16 = V_0;
				RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_17 = V_5;
				WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* L_18 = (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB*)il2cpp_codegen_object_new(WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348(L_18, L_17, WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var);
				NullCheck(L_16);
				List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_inline(L_16, L_18, List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var);
			}

IL_0059_1:
			{
			}

IL_005a_1:
			{
				// foreach (var value in values)
				RuntimeObject* L_19 = V_3;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// return list;
		List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_21 = V_0;
		V_8 = L_21;
		goto IL_0083;
	}

IL_007e:
	{
		// return null;
		V_8 = (RuntimeObject*)NULL;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		RuntimeObject* L_22 = V_8;
		return L_22;
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
// System.Void Unity.WebRTC.WebRTC/CallbackObject::.ctor(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3 (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* __this, intptr_t ___ptr0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) 
{
	{
		// public CallbackObject(IntPtr ptr, Action callback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.ptr = ptr;
		intptr_t L_0 = ___ptr0;
		__this->___ptr_0 = L_0;
		// this.callback = callback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___callback1;
		__this->___callback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_1), (void*)L_1);
		// }
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
// System.Void Unity.WebRTC.WebRTC/<Update>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__5__ctor_mD43A4F505D66AF9E34C241910113253C559C57FB (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<Update>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__5_System_IDisposable_Dispose_m8D40C21DE0172EC9903EF5B25E3FEF0F4B0E66BE (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unity.WebRTC.WebRTC/<Update>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateU3Ed__5_MoveNext_m97CCA9D8CCA0FED9E86867A314E9F5BDA8A252DD (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0046;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var instruction = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CinstructionU3E5__1_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstructionU3E5__1_2), (void*)L_3);
		goto IL_010b;
	}

IL_0030:
	{
		// yield return instruction;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = __this->___U3CinstructionU3E5__1_2;
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var tempTextureActive = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		__this->___U3CtempTextureActiveU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtempTextureActiveU3E5__2_3), (void*)L_5);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// foreach (var reference in VideoStreamTrack.s_tracks.Values)
		il2cpp_codegen_runtime_class_init_inline(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* L_6 = ((VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_StaticFields*)il2cpp_codegen_static_fields_for(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var))->___s_tracks_2;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392(L_6, ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::GetEnumerator() */, IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var, L_7);
		__this->___U3CU3Es__3_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_4), (void*)L_8);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00da:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = __this->___U3CU3Es__3_4;
					if (!L_9)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_10 = __this->___U3CU3Es__3_4;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00ee:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cb_1;
			}

IL_0078_1:
			{
				// foreach (var reference in VideoStreamTrack.s_tracks.Values)
				RuntimeObject* L_11 = __this->___U3CU3Es__3_4;
				NullCheck(L_11);
				WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* L_12;
				L_12 = InterfaceFuncInvoker0< WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::get_Current() */, IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var, L_11);
				__this->___U3CreferenceU3E5__4_5 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreferenceU3E5__4_5), (void*)L_12);
				// if (!reference.TryGetTarget(out var track))
				WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* L_13 = __this->___U3CreferenceU3E5__4_5;
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B** L_14 = (&__this->___U3CtrackU3E5__5_6);
				NullCheck(L_13);
				bool L_15;
				L_15 = WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8(L_13, L_14, WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var);
				V_1 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
				bool L_16 = V_1;
				if (!L_16)
				{
					goto IL_00a4_1;
				}
			}
			{
				// continue;
				goto IL_00cb_1;
			}

IL_00a4_1:
			{
				// track.UpdateSendTexture();
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_17 = __this->___U3CtrackU3E5__5_6;
				NullCheck(L_17);
				VideoStreamTrack_UpdateSendTexture_m61BA118B3E588ED03B37032E03CDC284584ABC0F(L_17, NULL);
				// track.UpdateReceiveTexture();
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_18 = __this->___U3CtrackU3E5__5_6;
				NullCheck(L_18);
				VideoStreamTrack_UpdateReceiveTexture_m94AA8A04CEB096F5D0C8A97A30536E04C5385F1C(L_18, NULL);
				__this->___U3CtrackU3E5__5_6 = (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackU3E5__5_6), (void*)(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)NULL);
				__this->___U3CreferenceU3E5__4_5 = (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreferenceU3E5__4_5), (void*)(WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*)NULL);
			}

IL_00cb_1:
			{
				// foreach (var reference in VideoStreamTrack.s_tracks.Values)
				RuntimeObject* L_19 = __this->___U3CU3Es__3_4;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0078_1;
				}
			}
			{
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		__this->___U3CU3Es__3_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_4), (void*)(RuntimeObject*)NULL);
		// RenderTexture.active = tempTextureActive;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = __this->___U3CtempTextureActiveU3E5__2_3;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_21, NULL);
		__this->___U3CtempTextureActiveU3E5__2_3 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtempTextureActiveU3E5__2_3), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_010b:
	{
		// while (true)
		V_2 = (bool)1;
		goto IL_0030;
	}
}
// System.Object Unity.WebRTC.WebRTC/<Update>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8870F2DBA889360033886D4543419303619052B (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.WebRTC.WebRTC/<Update>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__5_System_Collections_IEnumerator_Reset_mBF261BCF55F5D8899AD426FD99BDCC4CE1839F33 (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateU3Ed__5_System_Collections_IEnumerator_Reset_mBF261BCF55F5D8899AD426FD99BDCC4CE1839F33_RuntimeMethod_var)));
	}
}
// System.Object Unity.WebRTC.WebRTC/<Update>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateU3Ed__5_System_Collections_IEnumerator_get_Current_m15388475029FAC0B9C082F792ECE7DF35FD2FFD6 (U3CUpdateU3Ed__5_t16ABE4E75348DD4BB16FF4EC124D34279B52238E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m45CB0361F4B2940D59F1B5567A844FBB35B2101F (U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass22_0::<DelayAction>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CDelayActionU3Eb__0_mF176313DB00DBEDF84F292F6A1F4A3D7A299A20C (U3CU3Ec__DisplayClass22_0_t03E5E0C9E995217581178A3D78701019563CB759* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int milliseconds = (int)(delay * 1000f);
		float L_0 = __this->___delay_0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, (1000.0f))));
		// Thread.Sleep(milliseconds);
		int32_t L_1 = V_0;
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(L_1, NULL);
		// callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___callback_1;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		// });
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
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Multicast(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* currentDelegate = reinterpret_cast<DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Open(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___str0, method);
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStaticInvoker(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___str0);
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_ClosedStaticInvoker(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___str0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___str0' to native representation
	char* ____str0_marshaled = NULL;
	____str0_marshaled = il2cpp_codegen_marshal_string(___str0);

	// Native function invocation
	il2cppPInvokeFunc(____str0_marshaled);

	// Marshaling cleanup of parameter '___str0' native representation
	il2cpp_codegen_marshal_free(____str0_marshaled);
	____str0_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateDebugLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Multicast;
}
// System.Void Unity.WebRTC.DelegateDebugLog::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateDebugLog::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateDebugLog_BeginInvoke_m0BEF86638EAD4352D3E86118BE21D2ED3F16B8B8 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___str0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___str0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateDebugLog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog_EndInvoke_m9004F6C4BCA465E60CBBE1BE874215981E2B45E7 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_Multicast(DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* currentDelegate = reinterpret_cast<DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___type1, ___sdp2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_Open(DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___type1, ___sdp2, method);
}
void DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_OpenStaticInvoker(DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___type1, ___sdp2);
}
void DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_ClosedStaticInvoker(DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___type1, ___sdp2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4 (DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___sdp2' to native representation
	char* ____sdp2_marshaled = NULL;
	____sdp2_marshaled = il2cpp_codegen_marshal_string(___sdp2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___type1, ____sdp2_marshaled);

	// Marshaling cleanup of parameter '___sdp2' native representation
	il2cpp_codegen_marshal_free(____sdp2_marshaled);
	____sdp2_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateCreateSDSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDSuccess__ctor_m075F1E1CFBD7EE5D1A297AE99E3C6CC2EBB047F1 (DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B_Multicast;
}
// System.Void Unity.WebRTC.DelegateCreateSDSuccess::Invoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDSuccess_Invoke_mD8EB6769D36960D8A02F2AA8FBC232D048836C1B (DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___type1, ___sdp2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCreateSDSuccess::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCreateSDSuccess_BeginInvoke_m4343FFCC26804D8EC57DD076AEF9FDB8F3E914EC (DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___sdp2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateCreateSDSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDSuccess_EndInvoke_m34A292E541B9728069A32FE5B0F916987DA65D78 (DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Multicast(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* currentDelegate = reinterpret_cast<DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___ptrCallback1, ___reportPtr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Open(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___ptrCallback1, ___reportPtr2, method);
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStaticInvoker(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___ptrCallback1, ___reportPtr2);
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_ClosedStaticInvoker(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___ptrCallback1, ___reportPtr2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___ptrCallback1, ___reportPtr2);

}
// System.Void Unity.WebRTC.DelegateCollectStats::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats__ctor_mDBC2DECA89282C655DE7B6D6E79D4BA29DE87177 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Multicast;
}
// System.Void Unity.WebRTC.DelegateCollectStats::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___ptrCallback1, ___reportPtr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCollectStats::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCollectStats_BeginInvoke_m3498B489BA931A0ECDE4CACB5917FB61E40049EC (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___ptr0, intptr_t ___ptrCallback1, intptr_t ___reportPtr2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptrCallback1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___reportPtr2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateCollectStats::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats_EndInvoke_m8B16194C073E0EC3C52780F9CFA73BD96630750C (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Multicast(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* currentDelegate = reinterpret_cast<DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___type1, ___sdp2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Open(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___type1, ___sdp2, method);
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStaticInvoker(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___type1, ___sdp2);
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_ClosedStaticInvoker(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___type1, ___sdp2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___sdp2' to native representation
	char* ____sdp2_marshaled = NULL;
	____sdp2_marshaled = il2cpp_codegen_marshal_string(___sdp2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___type1, ____sdp2_marshaled);

	// Marshaling cleanup of parameter '___sdp2' native representation
	il2cpp_codegen_marshal_free(____sdp2_marshaled);
	____sdp2_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateCreateGetStats::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats__ctor_m38151F7A7B6933121DCBCC2B556E321D01CF8296 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Multicast;
}
// System.Void Unity.WebRTC.DelegateCreateGetStats::Invoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___type1, ___sdp2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCreateGetStats::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCreateGetStats_BeginInvoke_mF7D60D6DBEB4C5F40B3A6E084FD53842FEBF615A (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___sdp2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___sdp2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateCreateGetStats::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats_EndInvoke_mC0DCE8C2AAF91AD4DCB657D79BF1C0BE7F2E7544 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_Multicast(DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* currentDelegate = reinterpret_cast<DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___type1, ___message2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_Open(DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___type1, ___message2, method);
}
void DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_OpenStaticInvoker(DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___type1, ___message2);
}
void DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_ClosedStaticInvoker(DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___type1, ___message2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665 (DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message2' to native representation
	char* ____message2_marshaled = NULL;
	____message2_marshaled = il2cpp_codegen_marshal_string(___message2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___type1, ____message2_marshaled);

	// Marshaling cleanup of parameter '___message2' native representation
	il2cpp_codegen_marshal_free(____message2_marshaled);
	____message2_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateCreateSDFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDFailure__ctor_mA0BAFBAAB041FD6E7A457567648B9AF9D8EF2FCF (DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02_Multicast;
}
// System.Void Unity.WebRTC.DelegateCreateSDFailure::Invoke(System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDFailure_Invoke_m43F18DB59EAA45A6493414B6FD3636E8F72BCB02 (DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___type1, ___message2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCreateSDFailure::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCErrorType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCreateSDFailure_BeginInvoke_m5B228DE7421D65CAFF1D417DAF7672D3AEF1535A (DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___message2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateCreateSDFailure::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateSDFailure_EndInvoke_m69D790C76C7899D2C7E54DB9EF3532E0BD567ABD (DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_Multicast(DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* currentDelegate = reinterpret_cast<DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_Open(DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_OpenStaticInvoker(DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_ClosedStaticInvoker(DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A (DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescSuccess__ctor_m835DEF149440751B9753837718E68FC2C2950E97 (DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescSuccess_Invoke_mC6F345DA579B8A6AB2840359258FB303BD31976D (DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativePeerConnectionSetSessionDescSuccess_BeginInvoke_mEE1619317BA603DCAC8CFE26363DA9AE73360B58 (DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescSuccess_EndInvoke_mE2A2B92532F00FCEB670EC3112EF41C5CDE286CA (DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_Multicast(DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* currentDelegate = reinterpret_cast<DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___type1, ___message2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_Open(DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___type1, ___message2, method);
}
void DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_OpenStaticInvoker(DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___type1, ___message2);
}
void DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_ClosedStaticInvoker(DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___type1, ___message2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813 (DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message2' to native representation
	char* ____message2_marshaled = NULL;
	____message2_marshaled = il2cpp_codegen_marshal_string(___message2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___type1, ____message2_marshaled);

	// Marshaling cleanup of parameter '___message2' native representation
	il2cpp_codegen_marshal_free(____message2_marshaled);
	____message2_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescFailure__ctor_mE63723452068CDDA1D5769D460BEA68D430D967E (DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure::Invoke(System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescFailure_Invoke_m78CEEA081762B1E7F3E2B30AD887BECECCFB005D (DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___type1, ___message2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCErrorType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativePeerConnectionSetSessionDescFailure_BeginInvoke_mB72327385F05E8137E64965045FFA2885081E8C9 (DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, intptr_t ___ptr0, int32_t ___type1, String_t* ___message2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___message2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativePeerConnectionSetSessionDescFailure_EndInvoke_mC5DBA805A20D066F656EC4B1856DB7AD2541CE0E (DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Multicast(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* currentDelegate = reinterpret_cast<DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Open(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___state1, method);
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStaticInvoker(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___state1);
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_ClosedStaticInvoker(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___state1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___state1);

}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange__ctor_m4BCD380FB7CD510E9BC8DDBBE234BCACAD834CA9 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::Invoke(System.IntPtr,Unity.WebRTC.RTCIceConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceConnectionChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCIceConnectionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceConnectionChange_BeginInvoke_m3093AE097CFFDBC5C50B8262418E7FD54D501D98 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___ptr0, int32_t ___state1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var, &___state1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange_EndInvoke_m1707EE30A372576228EBAFE64879342558F6582E (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Multicast(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* currentDelegate = reinterpret_cast<DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Open(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___state1, method);
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStaticInvoker(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___state1);
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_ClosedStaticInvoker(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___state1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___state1);

}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange__ctor_m9FEB31A2F7F71CD627A1A64003953FD3BDE79506 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::Invoke(System.IntPtr,Unity.WebRTC.RTCPeerConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnConnectionStateChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCPeerConnectionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnConnectionStateChange_BeginInvoke_m370631963F1D92CE4D65D5F4E0BF0FCE686263E2 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___ptr0, int32_t ___state1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var, &___state1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange_EndInvoke_m1EA677778BEB100A404B98862454B0996DAC4627 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Multicast(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* currentDelegate = reinterpret_cast<DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Open(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___state1, method);
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStaticInvoker(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___state1);
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_ClosedStaticInvoker(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___state1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___state1);

}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange__ctor_m4C7C7171F6553D9FC1DA61BCCD93E2270AD2ACB5 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::Invoke(System.IntPtr,Unity.WebRTC.RTCIceGatheringState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___state1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceGatheringChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCIceGatheringState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceGatheringChange_BeginInvoke_m1208A52A49905F471626858E553DE65D174C4B24 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___ptr0, int32_t ___state1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var, &___state1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange_EndInvoke_m4FC65047BC634A94CC5C4218B14E982EA82C61B7 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Multicast(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* currentDelegate = reinterpret_cast<DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___candidate1, ___sdpMid2, ___sdpMlineIndex3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Open(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___candidate1, ___sdpMid2, ___sdpMlineIndex3, method);
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStaticInvoker(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___candidate1, ___sdpMid2, ___sdpMlineIndex3);
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_ClosedStaticInvoker(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___candidate1, ___sdpMid2, ___sdpMlineIndex3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___candidate1' to native representation
	char* ____candidate1_marshaled = NULL;
	____candidate1_marshaled = il2cpp_codegen_marshal_string(___candidate1);

	// Marshaling of parameter '___sdpMid2' to native representation
	char* ____sdpMid2_marshaled = NULL;
	____sdpMid2_marshaled = il2cpp_codegen_marshal_string(___sdpMid2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____candidate1_marshaled, ____sdpMid2_marshaled, ___sdpMlineIndex3);

	// Marshaling cleanup of parameter '___candidate1' native representation
	il2cpp_codegen_marshal_free(____candidate1_marshaled);
	____candidate1_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdpMid2' native representation
	il2cpp_codegen_marshal_free(____sdpMid2_marshaled);
	____sdpMid2_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate__ctor_m269222E55BD7C4FDD020E986E2912B0420AC6B1D (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::Invoke(System.IntPtr,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___candidate1, ___sdpMid2, ___sdpMlineIndex3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceCandidate::BeginInvoke(System.IntPtr,System.String,System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceCandidate_BeginInvoke_m684B25CE9D00D4FDFEE02FBB62F72AEEAD1E0FD2 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___ptr0, String_t* ___candidate1, String_t* ___sdpMid2, int32_t ___sdpMlineIndex3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___candidate1;
	__d_args[2] = ___sdpMid2;
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___sdpMlineIndex3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate_EndInvoke_mF81E0F16326ACF4A752533DE747C489CCC84C5C6 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Multicast(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* currentDelegate = reinterpret_cast<DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Open(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStaticInvoker(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_ClosedStaticInvoker(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded__ctor_m41621F2D43ED3C0C7659CF88CF81714B31DC7EBA (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnNegotiationNeeded::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnNegotiationNeeded_BeginInvoke_m4B4857974956C23CD99D10749602A0F2858F5CE0 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded_EndInvoke_m11BF492D3E66C8CAB4E4A975989A6F7F7EB7D649 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* currentDelegate = reinterpret_cast<DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___transceiver1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Open(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___transceiver1, method);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___transceiver1);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___transceiver1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___transceiver1);

}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack__ctor_m47056A97B0871B742ACD347F208DC32B36E126CA (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___transceiver1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnTrack_BeginInvoke_m03FFFA749E53FE4B0AC7C2ABDD04D7710EB7E70E (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___transceiver1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_EndInvoke_m3DBD36F1B6129EA3A909B67BA1A5376411C02917 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* currentDelegate = reinterpret_cast<DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___receiver1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Open(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___receiver1, method);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___receiver1);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___receiver1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___receiver1);

}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack__ctor_mB9FB6CB542C1021447637E9E67746D887A409BD4 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___receiver1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnRemoveTrack_BeginInvoke_m86C23C0AF07E5D014D0560848892B6029EE2CBBE (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___receiver1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_EndInvoke_m3ECC8E1A88E0920B7601029D7BC76B2E52122E37 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* currentDelegate = reinterpret_cast<DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___ptrChannel1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Open(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___ptrChannel1, method);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___ptrChannel1);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___ptrChannel1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___ptrChannel1);

}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel__ctor_mD85099C816FD19FB8DA33753EABF229DBCA51810 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___ptrChannel1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnDataChannel::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnDataChannel_BeginInvoke_m5B4DC70AF82BB0D344DCBF7DEFEAA091CFBE6A44 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptrChannel1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_EndInvoke_m9181E12C8F9CB50F830187DBC3F9B291986B51F1 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* currentDelegate = reinterpret_cast<DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___bytes1, ___size2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Open(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___bytes1, ___size2, method);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___bytes1, ___size2);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___bytes1, ___size2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint8_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____bytes1_marshaled, ___size2);

}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage__ctor_mDC0BA1638683D1CA50A9FAD1C9916A19D5F0A7AC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::Invoke(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___bytes1, ___size2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnMessage::BeginInvoke(System.IntPtr,System.Byte[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnMessage_BeginInvoke_mE6487A51993B6513FDE655B3930FF8C3BF85F153 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___bytes1;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___size2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_EndInvoke_mBD5677736D5EA005695111DD753E2FF44D3C383D (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* currentDelegate = reinterpret_cast<DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Open(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen__ctor_m7FDEC8A2FE403BE1133D2D773EE76EAD28C57A4C (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnOpen::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnOpen_BeginInvoke_mF41873E277FE3E588DB41597233E6CEA5F6F20A2 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_EndInvoke_m197CE104CFAF0D1692FAC0F461C578BEC03F4422 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* currentDelegate = reinterpret_cast<DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Open(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativeOnClose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose__ctor_mE1825C6D5DE868080605690C54D134109DD1444A (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnClose::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnClose_BeginInvoke_mA2CB1C2949154940B0F12721494E65C4F67DA865 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_EndInvoke_m479500EAB9405B5ACC05B13151B10350EF17DB99 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Open(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___stream0, ___track1);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___stream0, ___track1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___stream0, ___track1);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack__ctor_m00F884CE57B600F498C40417477A328CFE9EF823 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnAddTrack_BeginInvoke_mFFF7F04A85D0DB24AAB60347C103C1CEF6094CFA (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___stream0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___track1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_EndInvoke_m9BE48AC29DA2456202C740C38BBE3CFD633180C3 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Open(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___stream0, ___track1);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___stream0, ___track1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___stream0, ___track1);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack__ctor_mF8A24BB890D3035452460B7C7A9DEFF090708E80 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnRemoveTrack_BeginInvoke_m99D80682B8C44FA29B087FD5D7C68A6692F17AAA (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___stream0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___track1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_EndInvoke_m660A6B6D063DF8F15E96A09DD59A59B3ADBA6F6A (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* currentDelegate = reinterpret_cast<DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Open(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateAudioReceive::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive__ctor_m64A6738AB0AB1FB2588DC669D88055FA40E39D57 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast;
}
// System.Void Unity.WebRTC.DelegateAudioReceive::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateAudioReceive::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateAudioReceive_BeginInvoke_mE61859B36B68B0D0D7013F79F483A51BCB004797 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateAudioReceive::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_EndInvoke_mEF1DAA7DB38057E46D0EC0944458E35422223C7D (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* currentDelegate = reinterpret_cast<DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___renderer0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Open(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___renderer0, ___width1, ___height2, method);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___renderer0, ___width1, ___height2);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___renderer0, ___width1, ___height2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___renderer0, ___width1, ___height2);

}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize__ctor_m181F101B051F0F0A2EB76857BC48127BC2ED7727 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast;
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___renderer0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateVideoFrameResize::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateVideoFrameResize_BeginInvoke_m5AD454D0DFC4E713BF32E49A944D82CD6B39CAA0 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___renderer0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_EndInvoke_m54B644ED4C97A7C02EEA2D8F98F5154437F34013 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.NativeMethods::RegisterDebugLog(Unity.WebRTC.DelegateDebugLog,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_RegisterDebugLog_mAC3EE524F35A6FF139BDA4026585263BADAEA384 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* ___func0, bool ___enableNativeLog1, int32_t ___nativeLoggingSeverity2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, uint8_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 1 + 3 + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "RegisterDebugLog", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func0' to native representation
	Il2CppMethodPointer ____func0_marshaled = NULL;
	____func0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(RegisterDebugLog)(____func0_marshaled, static_cast<uint8_t>(___enableNativeLog1), ___nativeLoggingSeverity2);
	#else
	il2cppPInvokeFunc(____func0_marshaled, static_cast<uint8_t>(___enableNativeLog1), ___nativeLoggingSeverity2);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreate_m43EC05686D4D097EB1B9F30BE87BB567D91A99AA (int32_t ___uid0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreate)(___uid0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___uid0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDestroy_m1E20BE6FF25C0E1D4135B1623B3F7528913EE547 (int32_t ___uid0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDestroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDestroy)(___uid0);
	#else
	il2cppPInvokeFunc(___uid0);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnection_m02B2D45EED6BB843160D9FD8931F711CD79D8873 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnection)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnectionWithConfig(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnectionWithConfig_mBE578395E5FC8438DB916BB6EA88BCB155B42C72 (intptr_t ___ptr0, String_t* ___conf1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnectionWithConfig", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___conf1' to native representation
	char* ____conf1_marshaled = NULL;
	____conf1_marshaled = il2cpp_codegen_marshal_string(___conf1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnectionWithConfig)(___ptr0, ____conf1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____conf1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___conf1' native representation
	il2cpp_codegen_marshal_free(____conf1_marshaled);
	____conf1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeletePeerConnection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeletePeerConnection_m69C478FC3103E730662FF476D4BB9AAD5A608E15 (intptr_t ___ptr0, intptr_t ___ptrPeerConnection1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeletePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeletePeerConnection)(___ptr0, ___ptrPeerConnection1);
	#else
	il2cppPInvokeFunc(___ptr0, ___ptrPeerConnection1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionClose_m78914E177101FD92422DBC9A80B92C846F6BE84B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionClose)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRestartIce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRestartIce_mC77CF51F5B9D6666018EF95981C301D869106C3C (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRestartIce", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRestartIce)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetConfiguration(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetConfiguration_mFE7378424F98801B76938DBE0A3C3E18D8BA03F2 (intptr_t ___ptr0, String_t* ___conf1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___conf1' to native representation
	char* ____conf1_marshaled = NULL;
	____conf1_marshaled = il2cpp_codegen_marshal_string(___conf1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetConfiguration)(___ptr0, ____conf1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ____conf1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___conf1' native representation
	il2cpp_codegen_marshal_free(____conf1_marshaled);
	____conf1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateDataChannel(System.IntPtr,System.IntPtr,System.String,Unity.WebRTC.RTCDataChannelInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateDataChannel_m89D8AEEE72C4F7A8C7E3C0974209F8B38A55E7A6 (intptr_t ___ptr0, intptr_t ___ptrPeer1, String_t* ___label2, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF* ___options3, const RuntimeMethod* method) 
{


	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label2' to native representation
	char* ____label2_marshaled = NULL;
	____label2_marshaled = il2cpp_codegen_marshal_string(___label2);

	// Marshaling of parameter '___options3' to native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke* ____options3_marshaled = NULL;
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke ____options3_marshaled_dereferenced = {};
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(*___options3, ____options3_marshaled_dereferenced);
	____options3_marshaled = &____options3_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateDataChannel)(___ptr0, ___ptrPeer1, ____label2_marshaled, ____options3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ___ptrPeer1, ____label2_marshaled, ____options3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___label2' native representation
	il2cpp_codegen_marshal_free(____label2_marshaled);
	____label2_marshaled = NULL;

	// Marshaling of parameter '___options3' back from native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF _____options3_marshaled_unmarshaled_dereferenced;
	memset((&_____options3_marshaled_unmarshaled_dereferenced), 0, sizeof(_____options3_marshaled_unmarshaled_dereferenced));
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(*____options3_marshaled, _____options3_marshaled_unmarshaled_dereferenced);
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(*____options3_marshaled);
	*___options3 = _____options3_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___options3)->___protocol_3), (void*)NULL);

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteDataChannel(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteDataChannel_m9ADDDAA4A85A68ADB0C4517417F9B8C40BB68EEB (intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteDataChannel)(___ptr0, ___ptrChannel1);
	#else
	il2cppPInvokeFunc(___ptr0, ___ptrChannel1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSource_m65CA9D5F88C864931D55F14876FB89EF8EDBFBA6 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSource)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrackSource_m038E8887EFF042BEFB4CB566C9641A450537B387 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrackSource)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrack_mCDED3DA8595F20B561D99976625C6973CC3B26A8 (intptr_t ___ptr0, String_t* ___label1, intptr_t ___trackSource2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrack)(___ptr0, ____label1_marshaled, ___trackSource2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____label1_marshaled, ___trackSource2);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrack_m1962D11B3D942495900C04E4C9975304DBFA1225 (intptr_t ___ptr0, String_t* ___label1, intptr_t ___trackSource2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrack)(___ptr0, ____label1_marshaled, ___trackSource2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____label1_marshaled, ___trackSource2);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextStopMediaStreamTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextStopMediaStreamTrack_mD7354DC1334629C85C6C4D7C562FE185FAA5AB85 (intptr_t ___context0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextStopMediaStreamTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextStopMediaStreamTrack)(___context0, ___track1);
	#else
	il2cppPInvokeFunc(___context0, ___track1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextGetStatsList(System.IntPtr,System.IntPtr,System.UInt64&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextGetStatsList_m8E12F94E0BAAC12A9811616EC098BA18EF8AD923 (intptr_t ___context0, intptr_t ___report1, uint64_t* ___length2, intptr_t* ___types3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetStatsList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextGetStatsList)(___context0, ___report1, ___length2, ___types3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___report1, ___length2, ___types3);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteStatsReport(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteStatsReport_m2057236FE2435BDD3BDF429000B5E3ABABF25817 (intptr_t ___context0, intptr_t ___report1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteStatsReport", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteStatsReport)(___context0, ___report1);
	#else
	il2cppPInvokeFunc(___context0, ___report1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextAddRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextAddRefPtr_mD8A6BE76C08C600B9CF61D28876A384E013C618A (intptr_t ___context0, intptr_t ___ptr1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextAddRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextAddRefPtr)(___context0, ___ptr1);
	#else
	il2cppPInvokeFunc(___context0, ___ptr1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteRefPtr_m8587C1B3C47B459A2B61CEC564F95E5664C5ACDC (intptr_t ___context0, intptr_t ___ptr1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteRefPtr)(___context0, ___ptr1);
	#else
	il2cppPInvokeFunc(___context0, ___ptr1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetConfiguration(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetConfiguration_m513CBBE423434469D553170506828375906B2D6D (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetConfiguration)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionCreateOffer(System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionCreateOffer_m56A4B770BF5A70015F4C7A079C58C9E9CD6B2A3C (intptr_t ___ptr0, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___options1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateOffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionCreateOffer)(___ptr0, ___options1);
	#else
	il2cppPInvokeFunc(___ptr0, ___options1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionCreateAnswer(System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionCreateAnswer_mB4C37D44E0ADFC70FB5CBCEAFF8C13519A48649E (intptr_t ___ptr0, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___options1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateAnswer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionCreateAnswer)(___ptr0, ___options1);
	#else
	il2cppPInvokeFunc(___ptr0, ___options1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterCallbackCreateSD(System.IntPtr,Unity.WebRTC.DelegateCreateSDSuccess,Unity.WebRTC.DelegateCreateSDFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterCallbackCreateSD_m8487B7D1788396AA7953F7ED9166D1C97BC4F395 (intptr_t ___ptr0, DelegateCreateSDSuccess_tA02C286CD7FFE3127EECF3B3440D4BBB904B32D4* ___onSuccess1, DelegateCreateSDFailure_t7A5828E855431B681CA209E43B753CF56D631665* ___onFailure2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterCallbackCreateSD", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___onSuccess1' to native representation
	Il2CppMethodPointer ____onSuccess1_marshaled = NULL;
	____onSuccess1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onSuccess1));

	// Marshaling of parameter '___onFailure2' to native representation
	Il2CppMethodPointer ____onFailure2_marshaled = NULL;
	____onFailure2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onFailure2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterCallbackCreateSD)(___ptr0, ____onSuccess1_marshaled, ____onFailure2_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____onSuccess1_marshaled, ____onFailure2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterCallbackCollectStats(System.IntPtr,Unity.WebRTC.DelegateCollectStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterCallbackCollectStats_m32BB5332244A9C2575E3B66828A55CEE8DC5B4B8 (intptr_t ___ptr0, DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* ___onCollectStats1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterCallbackCollectStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___onCollectStats1' to native representation
	Il2CppMethodPointer ____onCollectStats1_marshaled = NULL;
	____onCollectStats1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onCollectStats1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterCallbackCollectStats)(___ptr0, ____onCollectStats1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____onCollectStats1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnSetSessionDescSuccess(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnSetSessionDescSuccess_m6D5394C64832C8B4D9E7DF7B87C708B9B31BE631 (intptr_t ___context0, intptr_t ___connection1, DelegateNativePeerConnectionSetSessionDescSuccess_t071FFF409A5160AE9E4DC8EB5BD84AD2B873281A* ___onSuccess2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnSetSessionDescSuccess", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___onSuccess2' to native representation
	Il2CppMethodPointer ____onSuccess2_marshaled = NULL;
	____onSuccess2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onSuccess2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnSetSessionDescSuccess)(___context0, ___connection1, ____onSuccess2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___connection1, ____onSuccess2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnSetSessionDescFailure(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativePeerConnectionSetSessionDescFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnSetSessionDescFailure_m65161592879FB5CB94A64DBA7FBB8F1157A4C0CC (intptr_t ___context0, intptr_t ___connection1, DelegateNativePeerConnectionSetSessionDescFailure_t4D987CC392258CA93A48E94EEF312842607A8813* ___onFailure2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnSetSessionDescFailure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___onFailure2' to native representation
	Il2CppMethodPointer ____onFailure2_marshaled = NULL;
	____onFailure2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onFailure2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnSetSessionDescFailure)(___context0, ___connection1, ____onFailure2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___connection1, ____onFailure2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceConnectionChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceConnectionChange_m6602E8CAA6CF7DC5A5D20CF4070C3F98AEFD978D (intptr_t ___ptr0, DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceConnectionChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceConnectionChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterConnectionStateChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnConnectionStateChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterConnectionStateChange_m52886344B7386E0682840EE15FFD1ED78BDB460A (intptr_t ___ptr0, DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterConnectionStateChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterConnectionStateChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceGatheringChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceGatheringChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceGatheringChange_m42AE07ED6204316F64431D7D2B1D300B1D251307 (intptr_t ___ptr0, DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceGatheringChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceGatheringChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnIceCandidate(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnIceCandidate_m7055974889204970E17B873CD70C47E3F2AF697B (intptr_t ___ptr0, DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnIceCandidate)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSessionDescription&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetLocalDescription_m20F12D3DECC9115A3BDD83B0C1FABDFBC3B37F56 (intptr_t ___context0, intptr_t ___ptr1, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc2, intptr_t* ___error3, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc2' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc2_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc2_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc2, ____desc2_marshaled_dereferenced);
	____desc2_marshaled = &____desc2_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescription)(___context0, ___ptr1, ____desc2_marshaled, ___error3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ____desc2_marshaled, ___error3);
	#endif

	// Marshaling of parameter '___desc2' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc2_marshaled_unmarshaled_dereferenced;
	memset((&_____desc2_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc2_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc2_marshaled, _____desc2_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc2_marshaled);
	*___desc2 = _____desc2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc2)->___sdp_1), (void*)NULL);

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescriptionWithoutDescription(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetLocalDescriptionWithoutDescription_mAFD511FBFB151B43E66B812FC454BA7009C6D687 (intptr_t ___context0, intptr_t ___ptr1, intptr_t* ___error2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescriptionWithoutDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescriptionWithoutDescription)(___context0, ___ptr1, ___error2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___error2);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetRemoteDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSessionDescription&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetRemoteDescription_mCD0093EFFE3B78976ED76527C6C9E6D76508F4B2 (intptr_t ___context0, intptr_t ___ptr1, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc2, intptr_t* ___error3, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc2' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc2_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc2_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc2, ____desc2_marshaled_dereferenced);
	____desc2_marshaled = &____desc2_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetRemoteDescription)(___context0, ___ptr1, ____desc2_marshaled, ___error3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ____desc2_marshaled, ___error3);
	#endif

	// Marshaling of parameter '___desc2' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc2_marshaled_unmarshaled_dereferenced;
	memset((&_____desc2_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc2_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc2_marshaled, _____desc2_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc2_marshaled);
	*___desc2 = _____desc2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc2)->___sdp_1), (void*)NULL);

	return returnValue;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionGetStats(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionGetStats_m6A2A11636E686D7D2BC80A3C2E99C04956C73C6C (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetStats)(___ptr0);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionSenderGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionSenderGetStats_m6FB4DB2CF82C904B86CB7B776C1220BDC5D9987B (intptr_t ___ptr0, intptr_t ___sender1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSenderGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSenderGetStats)(___ptr0, ___sender1);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ___sender1);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void Unity.WebRTC.NativeMethods::ContextGetSenderCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetSenderCapabilities_m6A5F26422226C5D99A08CDF60342195A96ADB01D (intptr_t ___context0, int32_t ___kind1, intptr_t* ___capabilities2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetSenderCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetSenderCapabilities)(___context0, ___kind1, ___capabilities2);
	#else
	il2cppPInvokeFunc(___context0, ___kind1, ___capabilities2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextGetReceiverCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetReceiverCapabilities_mAC14291B6418EFE71B641CBA1B667789559C0E69 (intptr_t ___context0, int32_t ___kind1, intptr_t* ___capabilities2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetReceiverCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetReceiverCapabilities)(___context0, ___kind1, ___capabilities2);
	#else
	il2cppPInvokeFunc(___context0, ___kind1, ___capabilities2);
	#endif

}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionReceiverGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionReceiverGetStats_m867C7248F4233F003331236B95D5C0FAFE745C42 (intptr_t ___sender0, intptr_t ___receiver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionReceiverGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionReceiverGetStats)(___sender0, ___receiver1);
	#else
	void* returnValue = il2cppPInvokeFunc(___sender0, ___receiver1);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetLocalDescription_m7B08BC29A5EE46970F68496A330D031092776755 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetRemoteDescription_m68B03F2E1C7EEB6DFE210B274BEE200E04E0EE48 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingLocalDescription_m501327F21E80C0E3D80C98F323A415DC913CBEED (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingRemoteDescription_mB075248E835F775683C04C1756ED5482BFA4996D (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentLocalDescription_mFE0643E709857AF5B3516D4C18D8C3DEF8587C36 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentRemoteDescription_m92DFE83F8566820CA76BB1A42C24EE1948C981E9 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionAddTrack(System.IntPtr,System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionAddTrack_m967223A6B82F47A6B5DAE7DDE469D36966CB0861 (intptr_t ___pc0, intptr_t ___track1, String_t* ___streamId2, intptr_t* ___sender3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___streamId2' to native representation
	char* ____streamId2_marshaled = NULL;
	____streamId2_marshaled = il2cpp_codegen_marshal_string(___streamId2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTrack)(___pc0, ___track1, ____streamId2_marshaled, ___sender3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pc0, ___track1, ____streamId2_marshaled, ___sender3);
	#endif

	// Marshaling cleanup of parameter '___streamId2' native representation
	il2cpp_codegen_marshal_free(____streamId2_marshaled);
	____streamId2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiver_mA21D4B4AFDEF1483517F742120ED35B3268D38C3 (intptr_t ___pc0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiver)(___pc0, ___track1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___track1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithType(System.IntPtr,Unity.WebRTC.TrackKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithType_m85F8C0550D5BDC65741B35A91D125180A5407DB6 (intptr_t ___pc0, int32_t ___kind1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithType)(___pc0, ___kind1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___kind1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithInit(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithInit_m7138FB2780FC09C9BFFB2131D12077CEE00A3979 (intptr_t ___pc0, intptr_t ___track1, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___init2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithInit)(___pc0, ___track1, ___init2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___track1, ___init2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithTypeAndInit(System.IntPtr,Unity.WebRTC.TrackKind,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithTypeAndInit_mFB9BD784B28C725B9389A38E198BE50C59AB97DB (intptr_t ___pc0, int32_t ___kind1, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___init2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithTypeAndInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithTypeAndInit)(___pc0, ___kind1, ___init2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___kind1, ___init2);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionRemoveTrack_m7716A1C77FE6B7E9650E61501FAD68FA9385168E (intptr_t ___pc0, intptr_t ___sender1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionRemoveTrack)(___pc0, ___sender1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pc0, ___sender1);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionAddIceCandidate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionAddIceCandidate_m326A21F79299B4ED8080540EAAA8C97C06C9EBFE (intptr_t ___ptr0, intptr_t ___candidate1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddIceCandidate)(___ptr0, ___candidate1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ___candidate1);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::CreateIceCandidate(Unity.WebRTC.RTCIceCandidateInitInternal&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_CreateIceCandidate_mEE2989C1D10BC0DBDD3CDF6923FDA57E5F17E08E (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B* ___options0, intptr_t* ___candidate1, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___options0' to native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke* ____options0_marshaled = NULL;
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke ____options0_marshaled_dereferenced = {};
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(*___options0, ____options0_marshaled_dereferenced);
	____options0_marshaled = &____options0_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CreateIceCandidate)(____options0_marshaled, ___candidate1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____options0_marshaled, ___candidate1);
	#endif

	// Marshaling of parameter '___options0' back from native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B _____options0_marshaled_unmarshaled_dereferenced;
	memset((&_____options0_marshaled_unmarshaled_dereferenced), 0, sizeof(_____options0_marshaled_unmarshaled_dereferenced));
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(*____options0_marshaled, _____options0_marshaled_unmarshaled_dereferenced);
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(*____options0_marshaled);
	*___options0 = _____options0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___sdpMid_1), (void*)NULL);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::DeleteIceCandidate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DeleteIceCandidate_m32A97F310CBEC09782C438A52462483E606ADE21 (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DeleteIceCandidate)(___candidate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::IceCandidateGetCandidate(System.IntPtr,Unity.WebRTC.CandidateInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_IceCandidateGetCandidate_m0FFAD4EFB39F04C9EFCFA98DDB6A92E935EBD5E7 (intptr_t ___candidate0, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5* ___dst1, const RuntimeMethod* method) 
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___dst1' to native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke ____dst1_empty = {};
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke* ____dst1_marshaled = &____dst1_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(IceCandidateGetCandidate)(___candidate0, ____dst1_marshaled);
	#else
	il2cppPInvokeFunc(___candidate0, ____dst1_marshaled);
	#endif

	// Marshaling of parameter '___dst1' back from native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 _____dst1_marshaled_unmarshaled_dereferenced;
	memset((&_____dst1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____dst1_marshaled_unmarshaled_dereferenced));
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(*____dst1_marshaled, _____dst1_marshaled_unmarshaled_dereferenced);
	*___dst1 = _____dst1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___foundation_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___ip_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___address_6), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___protocol_7), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___relatedAddress_8), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___tcpType_10), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___type_11), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___usernameFragment_12), (void*)NULL);
	#endif

	// Marshaling cleanup of parameter '___dst1' native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(*____dst1_marshaled);

}
// System.Int32 Unity.WebRTC.NativeMethods::IceCandidateGetSdpLineIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_IceCandidateGetSdpLineIndex_mD6257E3CB8E354D0009E2C083D2CC3D6B0D79F3E (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpLineIndex", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpLineIndex)(___candidate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	return returnValue;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdp_m2ACB2739E4B7866FD73FC5D3CDA2434B723BB176 (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdp)(___candidate0);
	#else
	char* returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdpMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdpMid_m3C4F0C3EA6FD797552E42CA647C29257AAD3B07A (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpMid)(___candidate0);
	#else
	char* returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCPeerConnectionState Unity.WebRTC.NativeMethods::PeerConnectionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionState_mE80AFA51863EE6E5E0BAD7BCA78DBB6D5D8BF0F1 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetReceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetReceivers_m84400CFAB152A1CD74143F25F71140C82358D184 (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetReceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetReceivers)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetSenders(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetSenders_m9E5853ADE40F7FE636DE636D1200D6BF807FBF20 (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetSenders", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetSenders)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetTransceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetTransceivers_mF251634A39A0705D3A2450B03D618C8B746A2F5F (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetTransceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetTransceivers)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceConnectionState Unity.WebRTC.NativeMethods::PeerConnectionIceConditionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceConditionState_m598168925C0C6753EF78AD1CBB03CB7A32C0AE38 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceConditionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceConditionState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCSignalingState Unity.WebRTC.NativeMethods::PeerConnectionSignalingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSignalingState_mC6330548D4824863FEA8F717FE7E359859033FFB (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSignalingState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSignalingState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceGatheringState Unity.WebRTC.NativeMethods::PeerConnectionIceGatheringState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceGatheringState_mB422172DA1BB1A2E02693E367DACC94FA4BD1055 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceGatheringState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceGatheringState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnDataChannel(System.IntPtr,Unity.WebRTC.DelegateNativeOnDataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnDataChannel_mA8BCB18A4F61619C0C70319323A2615B03239893 (intptr_t ___ptr0, DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnDataChannel)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRenegotiationNeeded(System.IntPtr,Unity.WebRTC.DelegateNativeOnNegotiationNeeded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRenegotiationNeeded_mD139047B9B23BEE9BDC94DD4CDDA7128E1080FC1 (intptr_t ___ptr0, DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRenegotiationNeeded", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRenegotiationNeeded)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnTrack_mFE003B5D4A0ED9684E9E86DAD7FD48647DF60BBB (intptr_t ___ptr0, DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnTrack)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRemoveTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRemoveTrack_mAF52D16ABBA36FA7D2EE85245853BBAD5E49F025 (intptr_t ___ptr0, DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRemoveTrack)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::TransceiverGetCurrentDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_TransceiverGetCurrentDirection_m96474A957106C40D55EBD2EB6E0D79F3C9198E21 (intptr_t ___transceiver0, int32_t* ___direction1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetCurrentDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetCurrentDirection)(___transceiver0, ___direction1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___transceiver0, ___direction1);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverStop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverStop_m14F1601EC59CB8063E6213FAEFCCB475BEB022B2 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverStop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverStop)(___transceiver0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetMid_m8F10BFEDC30E21A7820B70DD7CADD529509F8420 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetMid)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.NativeMethods::TransceiverGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverGetDirection_m6D1DCB09008D39389F47880726418500D39980B2 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetDirection)(___transceiver0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetDirection_mDF5D42E478A84BEACB948AF67406F8050E6AC191 (intptr_t ___transceiver0, int32_t ___direction1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetDirection)(___transceiver0, ___direction1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0, ___direction1);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetCodecPreferences(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetCodecPreferences_mB7BAE94C73575409171BFCCBB8B8853F2D6B7633 (intptr_t ___transceiver0, intptr_t ___capabilities1, int64_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetCodecPreferences", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetCodecPreferences)(___transceiver0, ___capabilities1, ___length2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0, ___capabilities1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetReceiver(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetReceiver_m75D8742DE9B47436FAB34898C5EC98C2E010B3DE (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetReceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetReceiver)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetSender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetSender_m21A8B83F993621B8A589B9768F470B82A96F2DE6 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetSender", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetSender)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::SenderGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_SenderGetTrack_mDD98206F3BEC016D13565256D05141B596215BA8 (intptr_t ___sender0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(SenderGetTrack)(___sender0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___sender0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::SenderGetParameters(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SenderGetParameters_mA3DB744CA5B41687500A2F8AAFF37357653229BD (intptr_t ___sender0, intptr_t* ___parameters1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SenderGetParameters)(___sender0, ___parameters1);
	#else
	il2cppPInvokeFunc(___sender0, ___parameters1);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::SenderSetParameters(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SenderSetParameters_m41DE86D22CAEEB6658433C3B859FEACB891F5A70 (intptr_t ___sender0, intptr_t ___parameters1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderSetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SenderSetParameters)(___sender0, ___parameters1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sender0, ___parameters1);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::SenderReplaceTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SenderReplaceTrack_mDE49C00352500E3FE95391A1075EF841A9D08322 (intptr_t ___sender0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderReplaceTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(SenderReplaceTrack)(___sender0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___sender0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetTrack_mA40194AD17F4BF97F04FD971E2BB410FBAD13E1B (intptr_t ___receiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetTrack)(___receiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___receiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetStreams(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetStreams_mB5AE86F865EC659DD5EADF6857D9C32EFC4C6C21 (intptr_t ___receiver0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetStreams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetStreams)(___receiver0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___receiver0, ___length1);
	#endif

	return returnValue;
}
// System.Int32 Unity.WebRTC.NativeMethods::DataChannelGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetID_m72B7912117FB3F389111DE092D9671FA546751BE (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetID)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetLabel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetLabel_m1C020C667F068A94DBA4A9A4470779FBF7DA269B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetLabel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetLabel)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetProtocol(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetProtocol_mE31B74B9A7C1437CEAF09FAAD80DE39E6B92A322 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetProtocol", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetProtocol)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmits(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmits_mE94290BCAD2DB29AAE79C5C75EF954C3C2336DE6 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmits", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmits)(___ptr0);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmitTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmitTime_m46DD860FA53A305E5B6C2B34FC26743770F4E963 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmitTime", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmitTime)(___ptr0);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetOrdered(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetOrdered_mA5D7B9A927A3A531A429EC1365FDF02839AAF751 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetOrdered", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetOrdered)(___ptr0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.UInt64 Unity.WebRTC.NativeMethods::DataChannelGetBufferedAmount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_DataChannelGetBufferedAmount_m40F8EAA2E9AAD12D41C5C503AA037FBD22FDE0D4 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetBufferedAmount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetBufferedAmount)(___ptr0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetNegotiated(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetNegotiated_mE410A8E115863B707F7E6BB3B35CA985843D46EA (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetNegotiated", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetNegotiated)(___ptr0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCDataChannelState Unity.WebRTC.NativeMethods::DataChannelGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetReadyState_m10E96CF2AD1F63F5B95ECB9B395F9C92DAA9AE2B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetReadyState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSend(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSend_m2A0620BFE9309416DF1269C350AC6F74A2D71570 (intptr_t ___ptr0, String_t* ___msg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSend", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSend)(___ptr0, ____msg1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____msg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendPtr(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendPtr_mF45A381BFD0AD6E50D35697E2F2989774149E4A7 (intptr_t ___ptr0, intptr_t ___dataPtr1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___ptr0, ___dataPtr1, ___size2);
	#else
	il2cppPInvokeFunc(___ptr0, ___dataPtr1, ___size2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendBinary(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendBinary_m13F9FD9B3BD879C03941BF3365B69E3C0E2F3FB8 (intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___ptr0, ____bytes1_marshaled, ___size2);
	#else
	il2cppPInvokeFunc(___ptr0, ____bytes1_marshaled, ___size2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelClose_m9B2B1F950D1CD3DB17DF51A85F8561C5A71FE228 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelClose)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnMessage(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnMessage_mE8DA0743D65FC94A3EE9E6EB9913D150E9F0A805 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnMessage)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnOpen(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnOpen)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnOpen_mAEA18EE883C8EFAF583A67217A60F3C168871533 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnOpen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnOpen)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnClose(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnClose_mE0472DCC8403D8B9D6C2722C7251C1F553B466F3 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnClose)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateMediaStream(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateMediaStream_m9AD8A5925B209D92DDABDD305BD64BA4F36524CE (intptr_t ___ctx0, String_t* ___label1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateMediaStream", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateMediaStream)(___ctx0, ____label1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ____label1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextRegisterMediaStreamObserver_mF6AF50B970CDBCD6A0EAB527633A866EA17F02DE (intptr_t ___ctx0, intptr_t ___stream1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextRegisterMediaStreamObserver)(___ctx0, ___stream1);
	#else
	il2cppPInvokeFunc(___ctx0, ___stream1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextUnRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextUnRegisterMediaStreamObserver_m750D0B8795202551FA423B45A878C3F2CA4957F3 (intptr_t ___ctx0, intptr_t ___stream1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextUnRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextUnRegisterMediaStreamObserver)(___ctx0, ___stream1);
	#else
	il2cppPInvokeFunc(___ctx0, ___stream1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSink(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSink_m1D0FF1A222183158EBCDE2980AD335A5B8F8D1A2 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSink)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteAudioTrackSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteAudioTrackSink_m40FBF67A19BE0ED93F18FF219B84CEC963AC294E (intptr_t ___context0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteAudioTrackSink)(___context0, ___sink1);
	#else
	il2cppPInvokeFunc(___context0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackAddSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackAddSink_m9FE8EC67053B32A20EFF07BFA1FA578A1629274E (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackAddSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackAddSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackRemoveSink_m23F52EC61B4577BF44E270E3F5A2547C102E83D5 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackRemoveSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackSinkProcessAudio(System.IntPtr,System.Single[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackSinkProcessAudio_m72F30615F068CFC19A1AC9BB584BB5A8C3CAEC7C (intptr_t ___sink0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___length2, int32_t ___channels3, int32_t ___sampleRate4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackSinkProcessAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___data1' to native representation
	float* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<float*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackSinkProcessAudio)(___sink0, ____data1_marshaled, ___length2, ___channels3, ___sampleRate4);
	#else
	il2cppPInvokeFunc(___sink0, ____data1_marshaled, ___length2, ___channels3, ___sampleRate4);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamAddTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamAddTrack_mB1E5DFFF94F21CE6DB68E67E09565FAB6E407300 (intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamAddTrack)(___stream0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___stream0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamRemoveTrack_m262736CB430FBB2EF3606E906550E2DC3274A335 (intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamRemoveTrack)(___stream0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___stream0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetVideoTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetVideoTracks_m6EE2758577BE2E507C1AB7750FFCC50A47B7C217 (intptr_t ___stream0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetVideoTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetVideoTracks)(___stream0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetAudioTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetAudioTracks_m4D0E1F871C18979A5A8DA00EE9D8DE090BAEE49B (intptr_t ___stream0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetAudioTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetAudioTracks)(___stream0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetID_m486F7F62D6C09D630D6D910993F6F892F1CCA78B (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetID)(___stream0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnAddTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnAddTrack_mACAAF6280B17E09DF6547053B0AF72A12B47D608 (intptr_t ___context0, intptr_t ___stream1, DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnAddTrack)(___context0, ___stream1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___stream1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnRemoveTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnRemoveTrack_m4DEB4A4784008216E9EAE2947B9FC3FDB7C65D24 (intptr_t ___context0, intptr_t ___stream1, DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnRemoveTrack)(___context0, ___stream1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___stream1, ____callback2_marshaled);
	#endif

}
// Unity.WebRTC.TrackKind Unity.WebRTC.NativeMethods::MediaStreamTrackGetKind(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetKind_m9D61ADCAC19B5F0718D298ADCAED8F5B316423D2 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetKind", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetKind)(___track0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// Unity.WebRTC.TrackState Unity.WebRTC.NativeMethods::MediaStreamTrackGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetReadyState_m2489BE3DDFC8FCD65D42E61D4EE5739E6C4226E1 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetReadyState)(___track0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamTrackGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamTrackGetID_mA2ABBA9CF8185CC0ACBA85914916B77C351750F4 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetID)(___track0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamTrackGetEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamTrackGetEnabled_m4803B9043572EFE29FD24794591F116310FA0F4B (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetEnabled)(___track0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamTrackSetEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamTrackSetEnabled_mE3239D74178E096E1800BB89EFA13082CC5803E5 (intptr_t ___track0, bool ___enabled1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackSetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamTrackSetEnabled)(___track0, static_cast<uint8_t>(___enabled1));
	#else
	il2cppPInvokeFunc(___track0, static_cast<uint8_t>(___enabled1));
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::CreateVideoRenderer(System.IntPtr,Unity.WebRTC.DelegateVideoFrameResize,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_CreateVideoRenderer_mA3E309064CA5DD595DB22B1DB5D7C5B3DBEB02B6 (intptr_t ___context0, DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* ___callback1, bool ___needFlip2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateVideoRenderer)(___context0, ____callback1_marshaled, static_cast<uint8_t>(___needFlip2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ____callback1_marshaled, static_cast<uint8_t>(___needFlip2));
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::GetVideoRendererId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_GetVideoRendererId_mBFE54C3FEB4A2AD34B84C999C6ED9FF73B92FAB1 (intptr_t ___sink0, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetVideoRendererId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(GetVideoRendererId)(___sink0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___sink0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DeleteVideoRenderer(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DeleteVideoRenderer_m0BA07A16FAED6D3EE98F8EF715062E6C268CB89B (intptr_t ___context0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DeleteVideoRenderer)(___context0, ___sink1);
	#else
	il2cppPInvokeFunc(___context0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackAddOrUpdateSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackAddOrUpdateSink_m19280CB5782A4C7B04C4B47C9390B4C89F97F9F5 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackAddOrUpdateSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackAddOrUpdateSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackRemoveSink_m3C0470727E2671CD4AD7B17ADFE935D7BB6269B7 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackRemoveSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetCurrentContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetCurrentContext_m292844D0DA496B574EC7CB2D426E1125C5B709F9 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetCurrentContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetCurrentContext)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::GetRenderEventFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetRenderEventFunc_mCFC213D4205280FB611881F61FBF8FD118CB6025 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetRenderEventFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetReleaseBuffersFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetReleaseBuffersFunc_m92CCC7FEA7696B119B3185CC1AB823CF65241A34 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetReleaseBuffersFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetReleaseBuffersFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetUpdateTextureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetUpdateTextureFunc_m8BE3E043A7FAA0B7D4951A690A39F49E8F406D4F (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetUpdateTextureFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetUpdateTextureFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::AudioSourceProcessLocalAudio(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioSourceProcessLocalAudio_mBD979CF36CCBD736D1BDD5F8273CCE67F8534C28 (intptr_t ___source0, intptr_t ___array1, int32_t ___sampleRate2, int32_t ___channels3, int32_t ___frames4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioSourceProcessLocalAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioSourceProcessLocalAudio)(___source0, ___array1, ___sampleRate2, ___channels3, ___frames4);
	#else
	il2cppPInvokeFunc(___source0, ___array1, ___sampleRate2, ___channels3, ___frames4);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetJson(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetJson_m53A16758F0E0752015CEDF61DC39FBD5B696A290 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetJson", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetJson)(___stats0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetId_mA52C67A6AB0E7C7C4616342A1BB832B3E56479C7 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetId)(___stats0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCStatsType Unity.WebRTC.NativeMethods::StatsGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsGetType_mF4C00318B335E494553CE4CD7023C0E06EC27885 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetType)(___stats0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsGetTimestamp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsGetTimestamp_mD205EA656CEA03A39C9BE65D3DE209497D52AD0A (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetTimestamp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetTimestamp)(___stats0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetMembers(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetMembers_m422162C864E7AFCC085924F0DDA5CF47E1B6AE21 (intptr_t ___stats0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetMembers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetMembers)(___stats0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetName_m7AD1AFB46ED1C56B6FC1B6071A16858CE9BC0967 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetName)(___member0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// Unity.WebRTC.StatsMemberType Unity.WebRTC.NativeMethods::StatsMemberGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetType_mCCAC8329A039667F65E2BAC61F6F38694AB81EF8 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetType)(___member0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberIsDefined(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberIsDefined_m3BD298DEF974BF4897DD36C1A8BDC0DC963F889B (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberIsDefined", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberIsDefined)(___member0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberGetBool(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberGetBool_m579E4F08A7814DCF29D64787A2B5900F06468DA6 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBool", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBool)(___member0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 Unity.WebRTC.NativeMethods::StatsMemberGetInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetInt_mD1EB1F71D41B0FA802FF0BDA5B6E79B26ED62DDB (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetInt)(___member0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_StatsMemberGetUnsignedInt_m98D49F10346F64A578F759CBA01CAD225F010F5C (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedInt)(___member0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsMemberGetLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsMemberGetLong_m95961DE38B9E6FB74979650DD0271002A55E9B61 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLong)(___member0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.UInt64 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_StatsMemberGetUnsignedLong_m7F235AD81C04498A113E72EFE27EC96F70266A8A (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLong)(___member0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Double Unity.WebRTC.NativeMethods::StatsMemberGetDouble(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_StatsMemberGetDouble_m16C7F83FBAC2272445B65DA0CACF5975410FF9D1 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDouble", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDouble)(___member0);
	#else
	double returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetString_m5CC4910C0C51903A9547E6AE04D2A82E52936E8F (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetString", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetString)(___member0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetBoolArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetBoolArray_m23757A1616E8FDC0BFA8EDB7C305B5222E94D8DF (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBoolArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBoolArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetIntArray_mB31350875CE82836597F1A40494DD4E6A1EE2616 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetIntArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedIntArray_mFEB37C69A11A3AF9830E4386D71184C89F760933 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedIntArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetLongArray_m93C016871F4CD82A3FDFC8467FFFB91EF74F97C1 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLongArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedLongArray_m0847907C32FD9C598C4C92D4187E646ED64F5217 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLongArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetDoubleArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetDoubleArray_mE54DA381AA8BB33954AEE204D4940B9394480664 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDoubleArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDoubleArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetStringArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetStringArray_m35DB4A2576A1C90A3B1893BBA553BC15874DEBB9 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetStringArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetStringArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.VideoEncoderMethods::Encode(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_Encode_m244F3F4E60162761A04420FEBB8B5FF0DF58F7E5 (intptr_t ___callback0, intptr_t ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, data);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		intptr_t L_2 = ___data1;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, L_2, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_3, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_4);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::ReleaseBuffers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_ReleaseBuffers_m2F7E32F03F3A620116D0C5A2749A4FC1AD37FC6A (intptr_t ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, (0), NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_2, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_3);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods__cctor_m3758E9F99FC41C8E662886221013CB4151E91558 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static CommandBuffer _command = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
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
// System.Void Unity.WebRTC.VideoDecoderMethods::UpdateRendererTexture(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods_UpdateRendererTexture_m3963BA138ADC17A022DBC4786E3825896DCBCB19 (intptr_t ___callback0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, uint32_t ___rendererId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginCustomTextureUpdateV2(callback, texture, rendererId);
		il2cpp_codegen_runtime_class_init_inline(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture1;
		uint32_t L_3 = ___rendererId2;
		NullCheck(L_0);
		CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601(L_0, L_1, L_2, L_3, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_4, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_5);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoDecoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods__cctor_m2CF1A35900CFF030E90EF697209B7CAFF2005855 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static UnityEngine.Rendering.CommandBuffer _command = new UnityEngine.Rendering.CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsDoneU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___value0, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsErrorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnSetSessionDescriptionSuccess_mB770DEF6A71D821BF851C0103B56CD9720FFA1C4_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* ___value0, const RuntimeMethod* method) 
{
	{
		// internal DelegateSetSessionDescSuccess OnSetSessionDescriptionSuccess { get; set; }
		DelegateSetSessionDescSuccess_t61452E075AB06DDEF8181EC590F7F7AC0FD6190F* L_0 = ___value0;
		__this->___U3COnSetSessionDescriptionSuccessU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnSetSessionDescriptionSuccessU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnSetSessionDescriptionFailure_m4B5407D5CD3B4ABE4EA4061351CC4A43549A965F_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal DelegateSetSessionDescFailure OnSetSessionDescriptionFailure { get; set; }
		DelegateSetSessionDescFailure_t7738884B5DFAE40510F3516CC03B36CAE719DA1E* L_0 = ___value0;
		__this->___U3COnSetSessionDescriptionFailureU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnSetSessionDescriptionFailureU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___value0, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CErrorU3Ek__BackingField_0))->___message_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
