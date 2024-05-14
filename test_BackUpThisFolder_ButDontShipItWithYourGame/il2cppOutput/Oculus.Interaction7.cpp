﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67;
// Oculus.Interaction.Input.DataModifier`1<System.Object>
struct DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>
struct Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC;
// Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>
struct EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct IDataSource_1_t63E4660329CACFB22DE9833CC56BC5227752B69E;
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct IEnumerable_1_t707E12E13C09DEBB279C4EB57A0E44CC8E0D270D;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose>
struct IEnumerator_1_t5CBE96AF6D34AD77B69C46BFC2D221735CFAC144;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEqualityComparer_1_tE953DD2D8AA81AA1147A9C45DA2ADDB9E0CFBD0E;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct IEqualityComparer_1_tFBD47128D24074681A7802544503ECCB0FC21B37;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct IReadOnlyDictionary_2_t974FAB679A90DFBA1287706BF12713BB420FDF19;
// System.Collections.Generic.IReadOnlyList`1<System.Int32>
struct IReadOnlyList_1_t941CE4E7615A3504595F7091E7217D4645DF7633;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>
struct IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyCollection_tAA2D2BA9C9EC519509C84716111088A39079C699;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF;
// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>
struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct ValueCollection_t8245A2F9711C7D7C8657AC5713035AD9E3F24A2D;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>[]
struct EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>[]
struct EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>[]
struct EntryU5BU5D_t9FA84F26AA1A802D386693BEA83D81468D355CE3;
// System.Collections.Generic.HashSet`1/Slot<Oculus.Interaction.Body.Input.BodyJointId>[]
struct SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig[]
struct JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData[]
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69;
// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456;
// Oculus.Interaction.Body.BodyDebugGizmos
struct BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612;
// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState
struct BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
struct BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData
struct BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9;
// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.Body.Input.IBody
struct IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01;
// Oculus.Interaction.Body.PoseDetection.IBodyPose
struct IBodyPose_t2BA886A75367D7351AACFE310468790C66930097;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Oculus.Interaction.Body.Input.ISkeletonMapping
struct ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.PolylineRenderer
struct PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig
struct JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9FA84F26AA1A802D386693BEA83D81468D355CE3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAA2D2BA9C9EC519509C84716111088A39079C699* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8245A2F9711C7D7C8657AC5713035AD9E3F24A2D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<UnityEngine.Pose>
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4  : public RuntimeObject
{
};

struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields
{
	// T[] System.EmptyArray`1::Value
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___Value_0;
};

// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>
struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Oculus.Interaction.Body.Input.Constants
struct Constants_t6B524980617E2621568CC57EDDE006CAC3DF9797  : public RuntimeObject
{
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649  : public RuntimeObject
{
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::_poses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____poses_0;
};

struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields
{
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::<Empty>k__BackingField
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CEmptyU3Ek__BackingField_1;
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

// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84  : public RuntimeObject
{
};

struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields
{
	// Oculus.Interaction.Body.Input.Body/<>c Oculus.Interaction.Body.Input.Body/<>c::<>9
	U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.Input.Body/<>c::<>9__23_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__23_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825  : public RuntimeObject
{
};

struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<>9
	U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<>9__18_0
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___U3CU3E9__18_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig
struct JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373  : public RuntimeObject
{
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::Joint
	int32_t ___Joint_0;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::MaxDelta
	float ___MaxDelta_1;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::Width
	float ___Width_2;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90  : public RuntimeObject
{
};

struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9
	U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9__17_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__17_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C  : public RuntimeObject
{
	// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Joints
	EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* ___Joints_0;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::JointToParent
	Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* ___JointToParent_1;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9  : public RuntimeObject
{
};

struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9
	U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9__24_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__24_0_1;
};

// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC  : public HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC
{
};

// System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>
struct Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ____current_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState
struct BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B 
{
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::Delta
	float ___Delta_0;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::MaxDelta
	float ___MaxDelta_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
	__StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 ___6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_36;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456  : public RuntimeObject
{
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonMapping>k__BackingField
	RuntimeObject* ___U3CSkeletonMappingU3Ek__BackingField_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::<Root>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CRootU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::<RootScale>k__BackingField
	float ___U3CRootScaleU3Ek__BackingField_2;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_3;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::<JointPoses>k__BackingField
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CJointPosesU3Ek__BackingField_5;
	// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};

// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::<LocalDataVersion>k__BackingField
	int32_t ___U3CLocalDataVersionU3Ek__BackingField_1;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_originalPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____originalPoses_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRoot
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____posesFromRoot_3;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_localPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____localPoses_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_worldPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____worldPoses_5;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRootCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____posesFromRootCollection_6;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_worldPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____worldPosesCollection_7;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_localPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____localPosesCollection_8;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyJointsFromRoot
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyJointsFromRoot_9;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyLocalJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyLocalJoints_10;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyWorldJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyWorldJoints_11;
	// UnityEngine.Matrix4x4 Oculus.Interaction.Body.Input.BodyJointsCache::_scale
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____scale_12;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_rootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____rootPose_13;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_worldRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____worldRoot_14;
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyJointsCache::_mapping
	RuntimeObject* ____mapping_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
struct JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE 
{
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::JointId
	int32_t ___JointId_0;
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::ParentId
	int32_t ___ParentId_1;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::PoseFromRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PoseFromRoot_2;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::LocalPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___LocalPose_3;
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CU3E2__current_1;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap1
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CU3E7__wrap1_3;
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData
struct BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Action Oculus.Interaction.Body.PoseDetection.BodyPoseData::WhenBodyPoseUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_jointData
	List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* ____jointData_5;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_posesFromRoot
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____posesFromRoot_6;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_localPoses
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____localPoses_7;
	// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping Oculus.Interaction.Body.PoseDetection.BodyPoseData::_mapping
	Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* ____mapping_8;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState
struct BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_poseA
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____poseA_4;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::PoseA
	RuntimeObject* ___PoseA_5;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_poseB
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____poseB_6;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::PoseB
	RuntimeObject* ___PoseB_7;
	// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_configs
	List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* ____configs_8;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_minTimeInState
	float ____minTimeInState_9;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_featureStates
	Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* ____featureStates_10;
	// System.Func`1<System.Single> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_timeProvider
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ____timeProvider_11;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_isActive
	bool ____isActive_12;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_internalActive
	bool ____internalActive_13;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_lastStateChangeTime
	float ____lastStateChangeTime_14;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
struct BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_bodyPoseComparer
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ____bodyPoseComparer_4;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_bodyPose
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose_5;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::BodyPose
	RuntimeObject* ___BodyPose_6;
	// UnityEngine.Transform Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____root_7;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_radius
	float ____radius_8;
};

// Oculus.Interaction.DebugGizmos
struct DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Vector4> Oculus.Interaction.DebugGizmos::_points
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____points_4;
	// System.Collections.Generic.List`1<UnityEngine.Color> Oculus.Interaction.DebugGizmos::_colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ____colors_5;
	// System.Int32 Oculus.Interaction.DebugGizmos::_index
	int32_t ____index_6;
	// System.Boolean Oculus.Interaction.DebugGizmos::_addedSegmentSinceLastUpdate
	bool ____addedSegmentSinceLastUpdate_7;
	// Oculus.Interaction.PolylineRenderer Oculus.Interaction.DebugGizmos::_polylineRenderer
	PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* ____polylineRenderer_9;
};

struct DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields
{
	// Oculus.Interaction.DebugGizmos Oculus.Interaction.DebugGizmos::_root
	DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027* ____root_8;
	// System.Boolean Oculus.Interaction.DebugGizmos::_renderSinglePass
	bool ____renderSinglePass_10;
	// UnityEngine.Color Oculus.Interaction.DebugGizmos::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_11;
	// System.Single Oculus.Interaction.DebugGizmos::LineWidth
	float ___LineWidth_12;
	// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3> Oculus.Interaction.DebugGizmos::CUBE_POINTS
	RuntimeObject* ___CUBE_POINTS_13;
	// System.Collections.Generic.IReadOnlyList`1<System.Int32> Oculus.Interaction.DebugGizmos::CUBE_SEGMENTS
	RuntimeObject* ___CUBE_SEGMENTS_14;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody::WhenBodyPoseUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated_4;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.PoseFromBody::_body
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body_5;
	// Oculus.Interaction.Body.Input.IBody Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body
	RuntimeObject* ___Body_6;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_autoUpdate
	bool ____autoUpdate_7;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_started
	bool ____started_8;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesLocal
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesLocal_9;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesFromRoot
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesFromRoot_10;
};

// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::_visibility
	int32_t ____visibility_4;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_jointColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____jointColor_5;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_boneColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____boneColor_6;
	// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::_radius
	float ____radius_7;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67  : public DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A
{
	// UnityEngine.Object Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____iModifyDataFromSourceMono_11;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_12;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_13;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____thisDataAsset_15;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____currentDataAsset_16;
};

struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_StaticFields
{
	// TData Oculus.Interaction.Input.DataModifier`1::<InvalidAsset>k__BackingField
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___U3CInvalidAssetU3Ek__BackingField_14;
};

// Oculus.Interaction.Body.BodyDebugGizmos
struct BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	// UnityEngine.Object Oculus.Interaction.Body.BodyDebugGizmos::_body
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body_8;
	// Oculus.Interaction.Body.Input.IBody Oculus.Interaction.Body.BodyDebugGizmos::Body
	RuntimeObject* ___Body_9;
	// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::_space
	int32_t ____space_10;
	// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::_started
	bool ____started_11;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::_bodyPose
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose_8;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::BodyPose
	RuntimeObject* ___BodyPose_9;
};

// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69  : public DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67
{
	// UnityEngine.Transform Oculus.Interaction.Body.Input.Body::_trackingSpace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackingSpace_17;
	// System.Action Oculus.Interaction.Body.Input.Body::WhenBodyUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyUpdated_18;
	// Oculus.Interaction.Body.Input.BodyJointsCache Oculus.Interaction.Body.Input.Body::_jointPosesCache
	BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* ____jointPosesCache_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
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
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData[]
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157  : public RuntimeArray
{
	ALIGN_FIELD (8) JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE m_Items[1];

	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m22FE567DBD77800285853031169093F3A31871CA_gshared (Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE* __this, RuntimeObject* ___key0, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D1FF7874DF003A3F770CC7592B6C6B802D58DF3_gshared (Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m2F15233A7A19B52616B7E5602933D6D54804A8C8_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_gshared (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m4F8BBB0C65C72E41F10A7F83E2963B71A631153C_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_gshared (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared (EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<System.Object>::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.DataSource`1<System.Object>::get_Started()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared (DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_gshared_inline (const RuntimeMethod* method) ;

// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::get_Visibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::get_HasNegativeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::get_Space()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::Dispose()
inline void Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::get_Current()
inline int32_t Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline)(__this, method);
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.BodyDebugGizmos::GetModifiedDrawFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::Draw(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___joint0, int32_t ___visibility1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::MoveNext()
inline bool Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8 (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___body0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawAxis(UnityEngine.Pose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawAxis_mBFE3448E0F3A727C97C29E2A65A453C9C4F60A76 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, float ___size1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawPoint(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawPoint_mA26DF258D15E5D439E7996F0256254290B71244C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawLine_mAF7FC1F21E494A92F556EF1E2728D0DF06698224 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::GetEnumerator()
inline Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6 (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::Dispose()
inline void Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287 (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::get_Current()
inline JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_inline (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	return ((  JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::GetJointDelta(Oculus.Interaction.Body.Input.BodyJointId,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, int32_t ___joint0, float* ___delta1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0 (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* __this, float ___delta0, float ___maxDelta1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* __this, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___key0, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B, const RuntimeMethod*))Dictionary_2_set_Item_m22FE567DBD77800285853031169093F3A31871CA_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::MoveNext()
inline bool Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97 (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseA(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___poseA0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseB(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___poseB0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectJoints(System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___configs0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::.ctor()
inline void List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924 (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5 (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::Add(T)
inline void List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_inline (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::.ctor()
inline void Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94 (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*, const RuntimeMethod*))Dictionary_2__ctor_m6D1FF7874DF003A3F770CC7592B6C6B802D58DF3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_FeatureStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Key()
inline JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_inline (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5* __this, const RuntimeMethod* method)
{
	return ((  JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* (*) (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Value()
inline BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_inline (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5* __this, const RuntimeMethod* method)
{
	return ((  BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B (*) (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5*, const RuntimeMethod*))KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05_inline (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___bodyPoseComparer0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectRootTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310_inline (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*))Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Clear()
inline void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Add(T)
inline void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE, const RuntimeMethod*))List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline)(__this, ___item0, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::Clear()
inline void Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Clear()
inline void HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1 (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC*, const RuntimeMethod*))HashSet_1_Clear_m2F15233A7A19B52616B7E5602933D6D54804A8C8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::Clear()
inline void Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9 (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, const RuntimeMethod*))Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Item(System.Int32)
inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2 (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, int32_t, const RuntimeMethod*))List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Add(T)
inline bool HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC*, int32_t, const RuntimeMethod*))HashSet_1_Add_m4F8BBB0C65C72E41F10A7F83E2963B71A631153C_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Count()
inline int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::.ctor()
inline void List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8 (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::.ctor()
inline void Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13 (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*, const RuntimeMethod*))EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, const RuntimeMethod*))Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::GetData()
inline BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, int32_t ___dataVersion1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingSpace2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::MarkInputDataRequiresUpdate()
inline void DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_Started()
inline bool DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>::.ctor()
inline void DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873 (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67* __this, const RuntimeMethod* method)
{
	((  void (*) (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67*, const RuntimeMethod*))DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___poses0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Postmultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
inline PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_inline (const RuntimeMethod* method)
{
	return ((  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* (*) (const RuntimeMethod*))Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_gshared_inline)(method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// get => _space;
		int32_t L_0 = __this->____space_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::set_Space(Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_set_Space_mF2B6F33A4DCF82A12A3F6DAC8BFDC7E8BF64EC1E (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _space = value;
		int32_t L_0 = ___value0;
		__this->____space_10 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_Awake_mAE73A708AFEE94545D8AFA8B7C041B3166BC5311 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Body = _body as IBody;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____body_8;
		__this->___Body_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_Start_mF39A79DBDFBEABED535FF3DE500F6FB8475640CD (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_11);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_11);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_OnEnable_m7B17698906660BCE314AF7DB0AA57D76177A823F (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated += HandleBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void Oculus.Interaction.Body.Input.IBody::add_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_OnDisable_m59DFD1FBA0D5B2C4F33DB571B118351151E885F2 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated -= HandleBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11 /* System.Void Oculus.Interaction.Body.Input.IBody::remove_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDebugGizmos_TryGetWorldJointPose_m08F7CC30AC08679573C19049FA5E9C15BB9805D7 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___jointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// switch (_space)
		int32_t L_0 = __this->____space_10;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}

IL_000e:
	{
		// result = Body.GetJointPose(jointId, out pose);
		RuntimeObject* L_3 = __this->___Body_9;
		int32_t L_4 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___pose1;
		NullCheck(L_3);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(6 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		V_0 = L_6;
		// break;
		goto IL_005f;
	}

IL_001e:
	{
		// result = Body.GetJointPoseFromRoot(jointId, out pose);
		RuntimeObject* L_7 = __this->___Body_9;
		int32_t L_8 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___pose1;
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		V_0 = L_10;
		// pose.position = transform.TransformPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = ___pose1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_12, L_14, NULL);
		L_11->___position_0 = L_15;
		// pose.rotation = transform.rotation * pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_19 = ___pose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = L_19->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_18, L_20, NULL);
		L_16->___rotation_1 = L_21;
	}

IL_005f:
	{
		// return result;
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDebugGizmos_TryGetParentJointId_m1260500555798A81BD96A4C684F54D9ECBF9C105 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___jointId0, int32_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Body.SkeletonMapping.TryGetParentJointId(jointId, out parent);
		RuntimeObject* L_0 = __this->___Body_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___jointId0;
		int32_t* L_3 = ___parent1;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.BodyDebugGizmos::GetModifiedDrawFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// VisibilityFlags modifiedFlags = Visibility;
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		// if (HasNegativeScale && Space == CoordSpace.Local)
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2;
		L_2 = BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// modifiedFlags &= ~VisibilityFlags.Axes;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3&((int32_t)-3)));
	}

IL_001d:
	{
		// return modifiedFlags;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::HandleBodyUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
		RuntimeObject* L_0 = __this->___Body_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0018_1:
			{
				// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				// Draw(joint, GetModifiedDrawFlags());
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_002d_1:
			{
				// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectAllBodyJointDebugGizmos(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectAllBodyJointDebugGizmos_mFF82811312D5FB7E32A76755860821261C372B85 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	{
		// InjectBody(body);
		RuntimeObject* L_0 = ___body0;
		BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _body = body as UnityEngine.Object;
		RuntimeObject* L_0 = ___body0;
		__this->____body_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Body = body;
		RuntimeObject* L_1 = ___body0;
		__this->___Body_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos__ctor_mF5E0CF99E61C76D8BECE249EFC0AA4CE4E6E7EE7 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
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
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_Radius_m74F118994FCFDD598E57F66DC698AA08E6E0CC5F (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_Radius_m992D15B1DFD97E20914F1B5CD873A4E7368A72E1 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _radius = value;
		float L_0 = ___value0;
		__this->____radius_7 = L_0;
		return;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _visibility;
		int32_t L_0 = __this->____visibility_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_Visibility(Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_Visibility_mA95D5C677A97EC69F9E4B19BDEF4D405764D6269 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _visibility = value;
		int32_t L_0 = ___value0;
		__this->____visibility_4 = L_0;
		return;
	}
}
// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::get_JointColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonDebugGizmos_get_JointColor_mAB5B3DFA86DFE5237791E011FD05918FAF289DE8 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _jointColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____jointColor_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_JointColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_JointColor_m36E4CAD8B5B36A54D7739D47B004A91993E79BD7 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set => _jointColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->____jointColor_5 = L_0;
		return;
	}
}
// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::get_BoneColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonDebugGizmos_get_BoneColor_m5CBEEDC079BD2E0E0A18570B816F84565AE15ADE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _boneColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____boneColor_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_BoneColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_BoneColor_m3356C6155C51129E3E92F81BA598A926404EB97A (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set => _boneColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->____boneColor_6 = L_0;
		return;
	}
}
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// private float LineWidth => _radius / 2f;
		float L_0 = __this->____radius_7;
		return ((float)(L_0/(2.0f)));
	}
}
// System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::get_HasNegativeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// protected bool HasNegativeScale => transform.lossyScale.x < 0 ||
		//                                    transform.lossyScale.y < 0 ||
		//                                    transform.lossyScale.z < 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		float L_2 = L_1.___x_2;
		if ((((float)L_2) < ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		float L_5 = L_4.___y_3;
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_6, NULL);
		float L_8 = L_7.___z_4;
		return (bool)((((float)L_8) < ((float)(0.0f)))? 1 : 0);
	}

IL_0046:
	{
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::Draw(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___joint0, int32_t ___visibility1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (TryGetWorldJointPose(joint, out Pose pose))
		int32_t L_0 = ___joint0;
		bool L_1;
		L_1 = VirtualFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, __this, L_0, (&V_0));
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// if (visibility.HasFlag(VisibilityFlags.Axes))
		int32_t L_2 = ___visibility1;
		int32_t L_3 = L_2;
		int32_t L_4 = 2;
		bool L_5 = il2cpp_codegen_enum_has_flag((int32_t)L_3, (int32_t)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// DebugGizmos.LineWidth = LineWidth;
		float L_6;
		L_6 = SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_6;
		// DebugGizmos.DrawAxis(pose, _radius);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		float L_8 = __this->____radius_7;
		DebugGizmos_DrawAxis_mBFE3448E0F3A727C97C29E2A65A453C9C4F60A76(L_7, L_8, NULL);
	}

IL_0038:
	{
		// if (visibility.HasFlag(VisibilityFlags.Joints))
		int32_t L_9 = ___visibility1;
		int32_t L_10 = L_9;
		int32_t L_11 = 1;
		bool L_12 = il2cpp_codegen_enum_has_flag((int32_t)L_10, (int32_t)L_11);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		// DebugGizmos.Color = _jointColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->____jointColor_5;
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_13;
		// DebugGizmos.LineWidth = _radius;
		float L_14 = __this->____radius_7;
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_14;
		// DebugGizmos.DrawPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		DebugGizmos_DrawPoint_mA26DF258D15E5D439E7996F0256254290B71244C(L_16, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_006d:
	{
		// if (visibility.HasFlag(VisibilityFlags.Bones) &&
		//     TryGetParentJointId(joint, out BodyJointId parent) &&
		//     TryGetWorldJointPose(parent, out Pose parentPose))
		int32_t L_17 = ___visibility1;
		int32_t L_18 = L_17;
		int32_t L_19 = 4;
		bool L_20 = il2cpp_codegen_enum_has_flag((int32_t)L_18, (int32_t)L_19);
		if (!L_20)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_21 = ___joint0;
		bool L_22;
		L_22 = VirtualFuncInvoker2< bool, int32_t, int32_t* >::Invoke(5 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, __this, L_21, (&V_1));
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_23 = V_1;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, __this, L_23, (&V_2));
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		// DebugGizmos.Color = _boneColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->____boneColor_6;
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_25;
		// DebugGizmos.LineWidth = LineWidth;
		float L_26;
		L_26 = SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B(__this, NULL);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_26;
		// DebugGizmos.DrawLine(pose.position, parentPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		DebugGizmos_DrawLine_mAF7FC1F21E494A92F556EF1E2728D0DF06698224(L_28, L_30, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// private VisibilityFlags _visibility =
		//     VisibilityFlags.Axes | VisibilityFlags.Joints;
		__this->____visibility_4 = 3;
		// private Color _jointColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->____jointColor_5 = L_0;
		// private Color _boneColor = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline(NULL);
		__this->____boneColor_6 = L_1;
		// private float _radius = 0.02f;
		__this->____radius_7 = (0.0199999996f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_MinTimeInState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyPoseComparerActiveState_get_MinTimeInState_m5325E973BEA5F7EDDD18A7AD52C696165BB26FBD (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// get => _minTimeInState;
		float L_0 = __this->____minTimeInState_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::set_MinTimeInState(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_set_MinTimeInState_m51B84C0A1C74D6094BF5C640BF4C9F853941E4E5 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _minTimeInState = value;
		float L_0 = ___value0;
		__this->____minTimeInState_9 = L_0;
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_FeatureStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// _featureStates;
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_0 = __this->____featureStates_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_Awake_m630283E2FA306784DE340BFE9799454A7BE6A7AA (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* G_B2_0 = NULL;
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* G_B2_1 = NULL;
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* G_B1_0 = NULL;
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* G_B1_1 = NULL;
	{
		// PoseA = _poseA as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____poseA_4;
		__this->___PoseA_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseA_5), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// PoseB = _poseB as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____poseB_6;
		__this->___PoseB_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseB_7), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// _timeProvider = () => Time.time;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = ((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* L_4 = ((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_5 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var), NULL);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_6 = L_5;
		((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0042:
	{
		NullCheck(G_B2_1);
		G_B2_1->____timeProvider_11 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____timeProvider_11), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_Start_mE57F641CEBB81026DCBFA04103B9D9F9910F659F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_get_Active_mB49EFC3B54335C43D131958A0575CC253DB8FF3B (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* V_3 = NULL;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	float G_B7_0 = 0.0f;
	int32_t G_B10_0 = 0;
	{
		// if (!isActiveAndEnabled)
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// bool wasActive = _internalActive;
		bool L_1 = __this->____internalActive_13;
		V_0 = L_1;
		// _internalActive = true;
		__this->____internalActive_13 = (bool)1;
		// foreach (var config in _configs)
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_2 = __this->____configs_8;
		NullCheck(L_2);
		Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD L_3;
		L_3 = List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6(L_2, List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287((&V_2), Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_0026_1:
			{
				// foreach (var config in _configs)
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_4;
				L_4 = Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_inline((&V_2), Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var);
				V_3 = L_4;
				// float maxDelta = wasActive ?
				//                  config.MaxDelta + config.Width / 2f :
				//                  config.MaxDelta - config.Width / 2f;
				bool L_5 = V_0;
				if (L_5)
				{
					goto IL_0046_1;
				}
			}
			{
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_6 = V_3;
				NullCheck(L_6);
				float L_7 = L_6->___MaxDelta_1;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_8 = V_3;
				NullCheck(L_8);
				float L_9 = L_8->___Width_2;
				G_B7_0 = ((float)il2cpp_codegen_subtract(L_7, ((float)(L_9/(2.0f)))));
				goto IL_0059_1;
			}

IL_0046_1:
			{
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_10 = V_3;
				NullCheck(L_10);
				float L_11 = L_10->___MaxDelta_1;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_12 = V_3;
				NullCheck(L_12);
				float L_13 = L_12->___Width_2;
				G_B7_0 = ((float)il2cpp_codegen_add(L_11, ((float)(L_13/(2.0f)))));
			}

IL_0059_1:
			{
				V_4 = G_B7_0;
				// bool withinDelta = GetJointDelta(config.Joint, out float delta) &&
				//                    Mathf.Abs(delta) <= maxDelta;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_14 = V_3;
				NullCheck(L_14);
				int32_t L_15 = L_14->___Joint_0;
				bool L_16;
				L_16 = BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F(__this, L_15, (&V_6), NULL);
				if (!L_16)
				{
					goto IL_007b_1;
				}
			}
			{
				float L_17 = V_6;
				float L_18;
				L_18 = fabsf(L_17);
				float L_19 = V_4;
				G_B10_0 = ((((int32_t)((!(((float)L_18) <= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_007c_1;
			}

IL_007b_1:
			{
				G_B10_0 = 0;
			}

IL_007c_1:
			{
				V_5 = (bool)G_B10_0;
				// _featureStates[config] = new BodyPoseComparerFeatureState(delta, maxDelta);
				Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_20 = __this->____featureStates_10;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_21 = V_3;
				float L_22 = V_6;
				float L_23 = V_4;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_24;
				memset((&L_24), 0, sizeof(L_24));
				BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0((&L_24), L_22, L_23, /*hidden argument*/NULL);
				NullCheck(L_20);
				Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE(L_20, L_21, L_24, Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var);
				// _internalActive &= withinDelta;
				bool L_25 = __this->____internalActive_13;
				bool L_26 = V_5;
				__this->____internalActive_13 = (bool)((int32_t)((int32_t)L_25&(int32_t)L_26));
			}

IL_00a2_1:
			{
				// foreach (var config in _configs)
				bool L_27;
				L_27 = Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97((&V_2), Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// float time = _timeProvider();
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_28 = __this->____timeProvider_11;
		NullCheck(L_28);
		float L_29;
		L_29 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_28, NULL);
		V_1 = L_29;
		// if (wasActive != _internalActive)
		bool L_30 = V_0;
		bool L_31 = __this->____internalActive_13;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_00da;
		}
	}
	{
		// _lastStateChangeTime = time;
		float L_32 = V_1;
		__this->____lastStateChangeTime_14 = L_32;
	}

IL_00da:
	{
		// if (time - _lastStateChangeTime >= _minTimeInState)
		float L_33 = V_1;
		float L_34 = __this->____lastStateChangeTime_14;
		float L_35 = __this->____minTimeInState_9;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_33, L_34))) >= ((float)L_35))))
		{
			goto IL_00f6;
		}
	}
	{
		// _isActive = _internalActive;
		bool L_36 = __this->____internalActive_13;
		__this->____isActive_12 = L_36;
	}

IL_00f6:
	{
		// return _isActive;
		bool L_37 = __this->____isActive_12;
		return L_37;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::GetJointDelta(Oculus.Interaction.Body.Input.BodyJointId,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, int32_t ___joint0, float* ___delta1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!PoseA.GetJointPoseLocal(joint, out Pose localA) ||
		//     !PoseB.GetJointPoseLocal(joint, out Pose localB))
		RuntimeObject* L_0 = __this->___PoseA_5;
		int32_t L_1 = ___joint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3 = __this->___PoseB_7;
		int32_t L_4 = ___joint0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		// delta = 0;
		float* L_6 = ___delta1;
		*((float*)L_6) = (float)(0.0f);
		// return false;
		return (bool)0;
	}

IL_0029:
	{
		// delta = Quaternion.Angle(localA.rotation, localB.rotation);
		float* L_7 = ___delta1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10.___rotation_1;
		float L_12;
		L_12 = Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline(L_9, L_11, NULL);
		*((float*)L_7) = (float)L_12;
		// return true;
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectAllBodyPoseComparerActiveState(Oculus.Interaction.Body.PoseDetection.IBodyPose,Oculus.Interaction.Body.PoseDetection.IBodyPose,System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectAllBodyPoseComparerActiveState_m4B819C90B11ECB844367E6B85FF5A1D350E4744F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___poseA0, RuntimeObject* ___poseB1, RuntimeObject* ___configs2, const RuntimeMethod* method) 
{
	{
		// InjectPoseA(poseA);
		RuntimeObject* L_0 = ___poseA0;
		BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0(__this, L_0, NULL);
		// InjectPoseB(poseB);
		RuntimeObject* L_1 = ___poseB1;
		BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421(__this, L_1, NULL);
		// InjectJoints(configs);
		RuntimeObject* L_2 = ___configs2;
		BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseA(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___poseA0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poseA = poseA as UnityEngine.Object;
		RuntimeObject* L_0 = ___poseA0;
		__this->____poseA_4 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poseA_4), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// PoseA = poseA;
		RuntimeObject* L_1 = ___poseA0;
		__this->___PoseA_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseA_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseB(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___poseB0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poseB = poseB as UnityEngine.Object;
		RuntimeObject* L_0 = ___poseB0;
		__this->____poseB_6 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poseB_6), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// PoseB = poseB;
		RuntimeObject* L_1 = ___poseB0;
		__this->___PoseB_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseB_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectJoints(System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___configs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _configs = new List<JointComparerConfig>(configs);
		RuntimeObject* L_0 = ___configs0;
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_1 = (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*)il2cpp_codegen_object_new(List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C(L_1, L_0, List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var);
		__this->____configs_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configs_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectOptionalTimeProvider(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectOptionalTimeProvider_m290845DB15F7884CF874A3573BCA6627A24DCA5E (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___timeProvider0, const RuntimeMethod* method) 
{
	{
		// _timeProvider = timeProvider;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___timeProvider0;
		__this->____timeProvider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timeProvider_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState__ctor_mDEF64F4E87ECD9A3B4E4A30A2348659B7E22E7D8 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointComparerConfig> _configs =
		//     new List<JointComparerConfig>()
		//     {
		//         new JointComparerConfig()
		//     };
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_0 = (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*)il2cpp_codegen_object_new(List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924(L_0, List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var);
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_1 = L_0;
		JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_2 = (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*)il2cpp_codegen_object_new(JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_inline(L_1, L_2, List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var);
		__this->____configs_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configs_8), (void*)L_1);
		// private float _minTimeInState = 0.05f;
		__this->____minTimeInState_9 = (0.0500000007f);
		// private Dictionary<JointComparerConfig, BodyPoseComparerFeatureState> _featureStates =
		//     new Dictionary<JointComparerConfig, BodyPoseComparerFeatureState>();
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_3 = (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*)il2cpp_codegen_object_new(Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94(L_3, Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var);
		__this->____featureStates_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____featureStates_10), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0 (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* __this, float ___delta0, float ___maxDelta1, const RuntimeMethod* method) 
{
	{
		// Delta = delta;
		float L_0 = ___delta0;
		__this->___Delta_0 = L_0;
		// MaxDelta = maxDelta;
		float L_1 = ___maxDelta1;
		__this->___MaxDelta_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0_AdjustorThunk (RuntimeObject* __this, float ___delta0, float ___maxDelta1, const RuntimeMethod* method)
{
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B*>(__this + _offset);
	BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0(_thisAdjusted, ___delta0, ___maxDelta1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5 (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* __this, const RuntimeMethod* method) 
{
	{
		// public BodyJointId Joint = BodyJointId.Body_Head;
		__this->___Joint_0 = 7;
		// public float MaxDelta = 30f;
		__this->___MaxDelta_1 = (30.0f);
		// public float Width = 4f;
		__this->___Width_2 = (4.0f);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m94128F81E958E7A49AB4C1B99DED365EDEC08295 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* L_0 = (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825*)il2cpp_codegen_object_new(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994(L_0, NULL);
		((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<Awake>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) 
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
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
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyPoseComparerActiveStateDebugVisual_get_Radius_mE96AAA8959E46907639FAE8B6B943183FE212E0D (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_set_Radius_m0BC5DE886751BB3588E860FDE7A517F1DCB8B302 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _radius = value;
		float L_0 = ___value0;
		__this->____radius_8 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Awake_m21FF3FFD790D3FB40A9593D292FD30F9F9105EA9 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BodyPose = _bodyPose as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose_5;
		__this->___BodyPose_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Start_m89F599F394330A84412BECE574074CE6036CF28A (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Update_mF56F44D2DFEA25BD653A0B3BB2EB47CFDA080615 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// DrawJointSpheres();
		BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// var featureStates = _bodyPoseComparer.FeatureStates;
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = __this->____bodyPoseComparer_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline(L_0, NULL);
		// foreach (var kvp in featureStates)
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>>::GetEnumerator() */, IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_00e0;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_00e0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ca_1;
			}

IL_0016_1:
			{
				// foreach (var kvp in featureStates)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>>::get_Current() */, IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// BodyJointId joint = kvp.Key.Joint;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_7;
				L_7 = KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_inline((&V_1), KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var);
				NullCheck(L_7);
				int32_t L_8 = L_7->___Joint_0;
				V_2 = L_8;
				// var state = kvp.Value;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_9;
				L_9 = KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_inline((&V_1), KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var);
				V_3 = L_9;
				// if (BodyPose.GetJointPoseFromRoot(joint, out Pose pose))
				RuntimeObject* L_10 = __this->___BodyPose_6;
				int32_t L_11 = V_2;
				NullCheck(L_10);
				bool L_12;
				L_12 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_10, L_11, (&V_4));
				if (!L_12)
				{
					goto IL_00ca_1;
				}
			}
			{
				// Vector3 jointPos = _root.TransformPoint(pose.position);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____root_7;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_13, L_15, NULL);
				// if (state.Delta <= state.MaxDelta)
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_17 = V_3;
				float L_18 = L_17.___Delta_0;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_19 = V_3;
				float L_20 = L_19.___MaxDelta_1;
				G_B4_0 = L_16;
				if ((!(((float)L_18) <= ((float)L_20))))
				{
					G_B5_0 = L_16;
					goto IL_006e_1;
				}
			}
			{
				// color = Color.green;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
				L_21 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
				V_5 = L_21;
				G_B8_0 = G_B4_0;
				goto IL_00ac_1;
			}

IL_006e_1:
			{
				// else if (state.MaxDelta > 0)
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_22 = V_3;
				float L_23 = L_22.___MaxDelta_1;
				G_B6_0 = G_B5_0;
				if ((!(((float)L_23) > ((float)(0.0f)))))
				{
					G_B7_0 = G_B5_0;
					goto IL_00a5_1;
				}
			}
			{
				// float amt = (state.Delta / state.MaxDelta) / 2f;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_24 = V_3;
				float L_25 = L_24.___Delta_0;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_26 = V_3;
				float L_27 = L_26.___MaxDelta_1;
				V_6 = ((float)(((float)(L_25/L_27))/(2.0f)));
				// color = Color.Lerp(Color.yellow, Color.red, amt);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
				L_28 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
				L_29 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
				float L_30 = V_6;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
				L_31 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_28, L_29, L_30, NULL);
				V_5 = L_31;
				G_B8_0 = G_B6_0;
				goto IL_00ac_1;
			}

IL_00a5_1:
			{
				// color = Color.red;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
				L_32 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
				V_5 = L_32;
				G_B8_0 = G_B7_0;
			}

IL_00ac_1:
			{
				// DebugGizmos.LineWidth = _radius / 2f;
				float L_33 = __this->____radius_8;
				il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
				((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = ((float)(L_33/(2.0f)));
				// DebugGizmos.Color = color;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_5;
				((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_34;
				// DebugGizmos.DrawPoint(jointPos);
				DebugGizmos_DrawPoint_mA26DF258D15E5D439E7996F0256254290B71244C(G_B8_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
			}

IL_00ca_1:
			{
				// foreach (var kvp in featureStates)
				RuntimeObject* L_35 = V_0;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_00e1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectAllBodyPoseComparerActiveStateDebugVisual(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState,Oculus.Interaction.Body.PoseDetection.IBodyPose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectAllBodyPoseComparerActiveStateDebugVisual_m3540146F7CF19EF7B77D70615F7C058EB8A341A2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___bodyPoseComparer0, RuntimeObject* ___bodyPose1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root2, const RuntimeMethod* method) 
{
	{
		// InjectBodyPoseComparer(bodyPoseComparer);
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = ___bodyPoseComparer0;
		BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05_inline(__this, L_0, NULL);
		// InjectBodyPose(bodyPose);
		RuntimeObject* L_1 = ___bodyPose1;
		BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126(__this, L_1, NULL);
		// InjectRootTransform(root);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___root2;
		BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectRootTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, const RuntimeMethod* method) 
{
	{
		// _root = root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___root0;
		__this->____root_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___bodyPoseComparer0, const RuntimeMethod* method) 
{
	{
		// _bodyPoseComparer = bodyPoseComparer;
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = ___bodyPoseComparer0;
		__this->____bodyPoseComparer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPoseComparer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bodyPose = bodyPose as UnityEngine.Object;
		RuntimeObject* L_0 = ___bodyPose0;
		__this->____bodyPose_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// BodyPose = bodyPose;
		RuntimeObject* L_1 = ___bodyPose0;
		__this->___BodyPose_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual__ctor_m15EC812AB97DC5AFBB5C3951554B8700E0971FFE (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// private float _radius = 0.1f;
		__this->____radius_8 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::add_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_add_WhenBodyPoseUpdated_m0DC252413B8BF339AFBC7D46B5787F31CAC5CCAE (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::remove_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_remove_WhenBodyPoseUpdated_m08A78BA38F7304118E101A0DD98E2A3729E3689A (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseData_GetJointPoseFromRoot_mC3AB50A49D0923CA9F6B266539FC14BB2E175003 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _posesFromRoot.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____posesFromRoot_6;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseData_GetJointPoseLocal_m2792FB6CCE49CAE44F2B5EFD2090FF1DCD083972 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _localPoses.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____localPoses_7;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.BodyPoseData::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseData_get_SkeletonMapping_mD5EEABD236A654C492431BBD661302B08A3D6373 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping => _mapping;
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_0 = __this->____mapping_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::SetBodyPose(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_SetBodyPose_m309AE5565051D6DD420707F2D302F80AA49F8A9D (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// _jointData.Clear();
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_0 = __this->____jointData_5;
		NullCheck(L_0);
		List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_inline(L_0, List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var);
		// foreach (var joint in body.SkeletonMapping.Joints)
		RuntimeObject* L_1 = ___body0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_4;
		L_4 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_001e_1:
			{
				// foreach (var joint in body.SkeletonMapping.Joints)
				int32_t L_5;
				L_5 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_5;
				// if (body.GetJointPoseLocal(joint, out Pose local) &&
				//     body.GetJointPoseFromRoot(joint, out Pose fromRoot) &&
				//     body.SkeletonMapping.TryGetParentJointId(joint, out BodyJointId parent))
				RuntimeObject* L_6 = ___body0;
				int32_t L_7 = V_1;
				NullCheck(L_6);
				bool L_8;
				L_8 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_6, L_7, (&V_2));
				if (!L_8)
				{
					goto IL_0082_1;
				}
			}
			{
				RuntimeObject* L_9 = ___body0;
				int32_t L_10 = V_1;
				NullCheck(L_9);
				bool L_11;
				L_11 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_9, L_10, (&V_3));
				if (!L_11)
				{
					goto IL_0082_1;
				}
			}
			{
				RuntimeObject* L_12 = ___body0;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_12);
				int32_t L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_13, L_14, (&V_4));
				if (!L_15)
				{
					goto IL_0082_1;
				}
			}
			{
				// _jointData.Add(new JointData()
				// {
				//     JointId = joint,
				//     ParentId = parent,
				//     PoseFromRoot = fromRoot,
				//     LocalPose = local,
				// });
				List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_16 = __this->____jointData_5;
				il2cpp_codegen_initobj((&V_5), sizeof(JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE));
				int32_t L_17 = V_1;
				(&V_5)->___JointId_0 = L_17;
				int32_t L_18 = V_4;
				(&V_5)->___ParentId_1 = L_18;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_3;
				(&V_5)->___PoseFromRoot_2 = L_19;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_2;
				(&V_5)->___LocalPose_3 = L_20;
				JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_21 = V_5;
				NullCheck(L_16);
				List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_inline(L_16, L_21, List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var);
			}

IL_0082_1:
			{
				// foreach (var joint in body.SkeletonMapping.Joints)
				bool L_22;
				L_22 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// Rebuild();
		BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD(__this, NULL);
		// WhenBodyPoseUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = __this->___WhenBodyPoseUpdated_4;
		NullCheck(L_23);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_23, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_OnBeforeSerialize_m8D9D14F4662BCA3C182681B89588B2669007C879 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_OnAfterDeserialize_mEAFCF5E9DFA60FEE55A312156293D3FFE6406AAB (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// Rebuild();
		BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _localPoses.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____localPoses_7;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _posesFromRoot.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____posesFromRoot_6;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _mapping.Joints.Clear();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_2 = __this->____mapping_8;
		NullCheck(L_2);
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_3 = L_2->___Joints_0;
		NullCheck(L_3);
		HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1(L_3, HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var);
		// _mapping.JointToParent.Clear();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_4 = __this->____mapping_8;
		NullCheck(L_4);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_5 = L_4->___JointToParent_1;
		NullCheck(L_5);
		Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9(L_5, Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var);
		// for (int i = 0; i < _jointData.Count; ++i)
		V_0 = 0;
		goto IL_00ef;
	}

IL_003d:
	{
		// _localPoses[_jointData[i].JointId] =
		//     _jointData[i].LocalPose;
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_6 = __this->____localPoses_7;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_7 = __this->____jointData_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_9;
		L_9 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_7, L_8, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_10 = L_9.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_11 = __this->____jointData_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_13;
		L_13 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_11, L_12, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = L_13.___LocalPose_3;
		NullCheck(L_6);
		Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_6, L_10, L_14, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		// _posesFromRoot[_jointData[i].JointId] =
		//     _jointData[i].PoseFromRoot;
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_15 = __this->____posesFromRoot_6;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_16 = __this->____jointData_5;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_18;
		L_18 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_16, L_17, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_19 = L_18.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_20 = __this->____jointData_5;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_22;
		L_22 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_20, L_21, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = L_22.___PoseFromRoot_2;
		NullCheck(L_15);
		Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_15, L_19, L_23, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		// _mapping.Joints.Add(
		//     _jointData[i].JointId);
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_24 = __this->____mapping_8;
		NullCheck(L_24);
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_25 = L_24->___Joints_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_26 = __this->____jointData_5;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_28;
		L_28 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_26, L_27, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_29 = L_28.___JointId_0;
		NullCheck(L_25);
		bool L_30;
		L_30 = HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB(L_25, L_29, HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var);
		// _mapping.JointToParent.Add(
		//     _jointData[i].JointId, _jointData[i].ParentId);
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_31 = __this->____mapping_8;
		NullCheck(L_31);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_32 = L_31->___JointToParent_1;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_33 = __this->____jointData_5;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_35;
		L_35 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_33, L_34, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_36 = L_35.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_37 = __this->____jointData_5;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_39;
		L_39 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_37, L_38, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_40 = L_39.___ParentId_1;
		NullCheck(L_32);
		Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A(L_32, L_36, L_40, Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var);
		// for (int i = 0; i < _jointData.Count; ++i)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00ef:
	{
		// for (int i = 0; i < _jointData.Count; ++i)
		int32_t L_42 = V_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_43 = __this->____jointData_5;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_inline(L_43, List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData__ctor_mD69C2DCC785A53A4B47DF3F53F4DD0048278F848 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* G_B1_1 = NULL;
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_2 = ((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated_4), (void*)G_B2_0);
		// private List<JointData> _jointData = new List<JointData>();
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_5 = (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*)il2cpp_codegen_object_new(List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8(L_5, List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var);
		__this->____jointData_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointData_5), (void*)L_5);
		// private Dictionary<BodyJointId, Pose> _posesFromRoot =
		//     new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_6 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_6, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____posesFromRoot_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot_6), (void*)L_6);
		// private Dictionary<BodyJointId, Pose> _localPoses =
		//     new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_7 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_7, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____localPoses_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses_7), (void*)L_7);
		// private Mapping _mapping = new Mapping();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_8 = (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C*)il2cpp_codegen_object_new(Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE(L_8, NULL);
		__this->____mapping_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping_8), (void*)L_8);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints_m2D30235FE8177893DC93393BE1CD674AC641ECB8 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerableHashSet<BodyJointId> ISkeletonMapping.Joints => Joints;
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = __this->___Joints_0;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId_m4C6551B1C27A94C4AE64BDC310387CE39A549518 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, int32_t ___jointId0, int32_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JointToParent.TryGetValue(jointId, out parent);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_0 = __this->___JointToParent_1;
		int32_t L_1 = ___jointId0;
		int32_t* L_2 = ___parent1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC(L_0, L_1, L_2, Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EnumerableHashSet<BodyJointId> Joints =
		//     new EnumerableHashSet<BodyJointId>();
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*)il2cpp_codegen_object_new(EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13(L_0, EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		__this->___Joints_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Joints_0), (void*)L_0);
		// public Dictionary<BodyJointId, BodyJointId> JointToParent =
		//     new Dictionary<BodyJointId, BodyJointId>();
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_1 = (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*)il2cpp_codegen_object_new(Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB(L_1, Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		__this->___JointToParent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JointToParent_1), (void*)L_1);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m010F8DBEBE60BEA768D9F255A03C72CAEA54FC4F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_0 = (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90*)il2cpp_codegen_object_new(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719(L_0, NULL);
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<.ctor>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Awake_m1F2FAE9E28854672B894612994E02E5C0C645E2C (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BodyPose = _bodyPose as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose_8;
		__this->___BodyPose_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Start_mA0FE7E685A0C2BE1BCCD57C9D34E116AE7AEA685 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Update_m2648C2A6347BF946016DF0D357E2B9F82DB66A1B (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0018_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				// Draw(joint, GetVisibilityFlags());
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_002d_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// VisibilityFlags modifiedFlags = Visibility;
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		// if (HasNegativeScale)
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// modifiedFlags &= ~VisibilityFlags.Axes;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2&((int32_t)-3)));
	}

IL_0014:
	{
		// return modifiedFlags;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetWorldJointPose_m118B15E71FE7391486DCB4F9CECA70F2A3BA85CC (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___jointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BodyPose.GetJointPoseFromRoot(jointId, out pose))
		RuntimeObject* L_0 = __this->___BodyPose_9;
		int32_t L_1 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// pose.position = transform.TransformPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___pose1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_7, NULL);
		L_4->___position_0 = L_8;
		// pose.rotation = transform.rotation * pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___pose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_11, L_13, NULL);
		L_9->___rotation_1 = L_14;
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetParentJointId_m000322E4F958E7B722297A6C965DCA3634D09512 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___jointId0, int32_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BodyPose.SkeletonMapping.TryGetParentJointId(jointId, out parent);
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___jointId0;
		int32_t* L_3 = ___parent1;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectAllBodyJointDebugGizmos(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectAllBodyJointDebugGizmos_mBF057DE9337123DAE98C5C615AB60F71ED3B141A (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) 
{
	{
		// InjectBodyPose(bodyPose);
		RuntimeObject* L_0 = ___bodyPose0;
		BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bodyPose = bodyPose as UnityEngine.Object;
		RuntimeObject* L_0 = ___bodyPose0;
		__this->____bodyPose_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// BodyPose = bodyPose;
		RuntimeObject* L_1 = ___bodyPose0;
		__this->___BodyPose_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos__ctor_m90242A1FA4DC5DDF6AC92D02BB2D37978A393FE8 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::add_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_add_WhenBodyPoseUpdated_m4F367E0747FC9D30C136610A4D21A3C2E97ED764 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::remove_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_remove_WhenBodyPoseUpdated_m878542A32B4026D1013A456977681CDC5DDBF995 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_get_AutoUpdate_m1B19BF70341673621096BEECA9C3284C8E1A6BAC (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// get => _autoUpdate;
		bool L_0 = __this->____autoUpdate_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::set_AutoUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_set_AutoUpdate_m281E0DF37FCE1DAB2B973B90684B83FD345F0A5E (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => _autoUpdate = value;
		bool L_0 = ___value0;
		__this->____autoUpdate_7 = L_0;
		return;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseFromBody_get_SkeletonMapping_m79DFFF5AD444C8C2AC87E9629128631A4871D8FD (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => Body.SkeletonMapping;
		RuntimeObject* L_0 = __this->___Body_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseLocal_m237F69CDB94CFE83C54A20DB0F9F6F7A5A96D68C (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseFromRoot_mC6AE256BAA70695B7A8C89A0FC2B12139A208088 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesFromRoot.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesFromRoot_10;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Awake_m3C62CA5606E08599B6148463371FD03F9C9D7BE2 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_0, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesLocal_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesLocal_9), (void*)L_0);
		// _jointPosesFromRoot = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_1, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesFromRoot_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesFromRoot_10), (void*)L_1);
		// Body = _body as IBody;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->____body_5;
		__this->___Body_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Start_m18CD67AB3AF54313EB3C7EFBDBF98B25015DA023 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_8);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_8);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnEnable_mC35E282A150221780C957F4A691D12A8FDA8F525 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated += Body_WhenBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void Oculus.Interaction.Body.Input.IBody::add_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnDisable_mBB57DDE21523E881429E79588EB573CD071D0D59 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated -= Body_WhenBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11 /* System.Void Oculus.Interaction.Body.Input.IBody::remove_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body_WhenBodyUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// if (_autoUpdate)
		bool L_0 = __this->____autoUpdate_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdatePose();
		PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _jointPosesLocal.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _jointPosesFromRoot.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____jointPosesFromRoot_10;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// foreach (var joint in Body.SkeletonMapping.Joints)
		RuntimeObject* L_2 = __this->___Body_6;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_5;
		L_5 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_002e_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_6;
				// if (Body.GetJointPoseLocal(joint,
				//     out Pose localPose))
				RuntimeObject* L_7 = __this->___Body_6;
				int32_t L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_7, L_8, (&V_2));
				if (!L_9)
				{
					goto IL_0053_1;
				}
			}
			{
				// _jointPosesLocal[joint] = localPose;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_10 = __this->____jointPosesLocal_9;
				int32_t L_11 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_2;
				NullCheck(L_10);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_10, L_11, L_12, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0053_1:
			{
				// if (Body.GetJointPoseFromRoot(joint,
				//     out Pose poseFromRoot))
				RuntimeObject* L_13 = __this->___Body_6;
				int32_t L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_13, L_14, (&V_3));
				if (!L_15)
				{
					goto IL_0070_1;
				}
			}
			{
				// _jointPosesFromRoot[joint] = poseFromRoot;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_16 = __this->____jointPosesFromRoot_10;
				int32_t L_17 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_3;
				NullCheck(L_16);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_16, L_17, L_18, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0070_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				bool L_19;
				L_19 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// WhenBodyPoseUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = __this->___WhenBodyPoseUpdated_4;
		NullCheck(L_20);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_20, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectAllPoseFromBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectAllPoseFromBody_m04B85AF80EBF8B7C2F19387F83AAA769393967A3 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	{
		// InjectBody(body);
		RuntimeObject* L_0 = ___body0;
		PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _body = body as UnityEngine.Object;
		RuntimeObject* L_0 = ___body0;
		__this->____body_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Body = body;
		RuntimeObject* L_1 = ___body0;
		__this->___Body_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody__ctor_m93DB6B0461C2AFF46BE0CC634AD6F2B5955C1AC0 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B1_1 = NULL;
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_2 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated_4), (void*)G_B2_0);
		// private bool _autoUpdate = true;
		__this->____autoUpdate_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD9CA29DFD985ACC5F87C7DB5F8DB03DA9643563D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_0 = (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9*)il2cpp_codegen_object_new(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E(L_0, NULL);
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<.ctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsConnected_m4BBC7B62898B592847FEDC68045AC3F6C63A51FF (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsConnected => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsHighConfidence_m0BFF1FFD4774604FAF7ADA1497C0949207D5BEBC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsHighConfidence => GetData().IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single Oculus.Interaction.Body.Input.Body::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Body_get_Scale_mADAE445C0468C2BB6930BCBBDC9810416233D8A6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Scale => GetData().RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => GetData().SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsTrackedDataValid => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::add_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_add_WhenBodyUpdated_m4B022B818252F0A0BBFAFB945DC2A6727EF899DC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::remove_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_remove_WhenBodyUpdated_mA9C5D98323F3666D16A3752C34226F26B42B3F18 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPose_mC4219B1E7D4EF11E74EE7258170353DF43C6AB20 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseLocal_mE9642BCCA92EC6B2529B3F589A4A274F4F436735 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetLocalJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseFromRoot_m69D84B629E83600E081F1345E40C0E791DBB763A (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetJointPoseFromRoot(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetRootPose_m6C75EDBF0A1C9D10433029997E26279B13604A35 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid)
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldRootPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___pose0;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_4 = __this->____jointPosesCache_19;
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline(L_4, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_3 = L_5;
		// return true;
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointPosesCache == null)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _jointPosesCache = new BodyJointsCache();
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_1 = (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)il2cpp_codegen_object_new(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705(L_1, NULL);
		__this->____jointPosesCache_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesCache_19), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointPosesCache != null
		//     && CurrentDataVersion != _jointPosesCache.LocalDataVersion)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = __this->____jointPosesCache_19;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		// _jointPosesCache.Update(GetData(), CurrentDataVersion, _trackingSpace);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_4 = __this->____jointPosesCache_19;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_5;
		L_5 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____trackingSpace_17;
		NullCheck(L_4);
		BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8(L_4, L_5, L_6, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::Apply(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_Apply_m2265B8B3A62FE368E5A43B6001BACD7769B647C6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_MarkInputDataRequiresUpdate_m023BCD6AFEBC1A05252A6493085BDCF029492C01 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.MarkInputDataRequiresUpdate();
		DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC(__this, DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		// if (Started)
		bool L_0;
		L_0 = DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline(__this, DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// InitializeJointPosesCache();
		Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1(__this, NULL);
		// WhenBodyUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___WhenBodyUpdated_18;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body__ctor_m5939597A61F910B26A9F5F008F58BC849B3B9B0D (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B1_1 = NULL;
	{
		// public event Action WhenBodyUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_2 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyUpdated_18 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyUpdated_18), (void*)G_B2_0);
		il2cpp_codegen_runtime_class_init_inline(DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873(__this, DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m02A156C216139D4132691D0A9F2A106EBF347415 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_0 = (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84*)il2cpp_codegen_object_new(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40(L_0, NULL);
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::<.ctor>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyUpdated = delegate { };
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
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___value0;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_JointPoses(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_JointPoses_m3BD13A56F9DD4E6EC6803871CD0D04F60F434FED (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___value0;
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::CopyFrom(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_CopyFrom_m7E93AB9DB6DA8D6E02D3D45C12B2125A4854C854 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___source0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// SkeletonMapping = source.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0 = ___source0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline(__this, L_1, NULL);
		// Root = source.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_2 = ___source0;
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_2, NULL);
		BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline(__this, L_3, NULL);
		// RootScale = source.RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_4 = ___source0;
		NullCheck(L_4);
		float L_5;
		L_5 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_4, NULL);
		BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline(__this, L_5, NULL);
		// IsDataValid = source.IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6 = ___source0;
		NullCheck(L_6);
		bool L_7;
		L_7 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_6, NULL);
		BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline(__this, L_7, NULL);
		// IsDataHighConfidence = source.IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_8 = ___source0;
		NullCheck(L_8);
		bool L_9;
		L_9 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_8, NULL);
		BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline(__this, L_9, NULL);
		// SkeletonChangedCount = source.SkeletonChangedCount;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline(L_10, NULL);
		BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline(__this, L_11, NULL);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		V_0 = 0;
		goto IL_0068;
	}

IL_004c:
	{
		// JointPoses[i] = source.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12;
		L_12 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(__this, NULL);
		int32_t L_13 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___source0;
		NullCheck(L_14);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_15;
		L_15 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_18);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0068:
	{
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_20 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_21 = ___source0;
		NullCheck(L_21);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22;
		L_22 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_21, NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset__ctor_mF8B6BB967E907A5ACA382FE386F6DD3C87A4E262 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose Root { get; set; } = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		// public float RootScale { get; set; } = 1f;
		__this->___U3CRootScaleU3Ek__BackingField_2 = (1.0f);
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_1);
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
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int LocalDataVersion { get; private set; } = -1;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = (-1);
		// private Pose[] _originalPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____originalPoses_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalPoses_2), (void*)L_0);
		// private Pose[] _posesFromRoot = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____posesFromRoot_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot_3), (void*)L_1);
		// private Pose[] _localPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____localPoses_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses_4), (void*)L_2);
		// private Pose[] _worldPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____worldPoses_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPoses_5), (void*)L_3);
		// public BodyJointsCache()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalDataVersion = -1;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, (-1), NULL);
		// _dirtyJointsFromRoot = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyJointsFromRoot_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyJointsFromRoot_9), (void*)L_4);
		// _dirtyLocalJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyLocalJoints_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyLocalJoints_10), (void*)L_5);
		// _dirtyWorldJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyWorldJoints_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyWorldJoints_11), (void*)L_6);
		// _localPosesCollection = new ReadOnlyBodyJointPoses(_localPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____localPoses_4;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_8 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_8, L_7, NULL);
		__this->____localPosesCollection_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPosesCollection_8), (void*)L_8);
		// _worldPosesCollection = new ReadOnlyBodyJointPoses(_worldPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____worldPoses_5;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_10 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_10, L_9, NULL);
		__this->____worldPosesCollection_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPosesCollection_7), (void*)L_10);
		// _posesFromRootCollection = new ReadOnlyBodyJointPoses(_posesFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____posesFromRoot_3;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_12 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_12, L_11, NULL);
		__this->____posesFromRootCollection_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRootCollection_6), (void*)L_12);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, int32_t ___dataVersion1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingSpace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// LocalDataVersion = dataVersion;
		int32_t L_0 = ___dataVersion1;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, L_0, NULL);
		// _mapping = data.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_1 = ___data0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_1, NULL);
		__this->____mapping_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping_15), (void*)L_2);
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		V_0 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		// _dirtyJointsFromRoot[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____dirtyJointsFromRoot_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(-1)));
		// _dirtyLocalJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____dirtyLocalJoints_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((int64_t)(-1)));
		// _dirtyWorldJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____dirtyWorldJoints_11;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)((int64_t)(-1)));
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)2)))
		{
			goto IL_0017;
		}
	}
	{
		// if (!data.IsDataValid)
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_11 = ___data0;
		NullCheck(L_11);
		bool L_12;
		L_12 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// _scale = Matrix4x4.Scale(Vector3.one * data.RootScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___data0;
		NullCheck(L_14);
		float L_15;
		L_15 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_15, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_16, NULL);
		__this->____scale_12 = L_17;
		// _rootPose = data.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_18 = ___data0;
		NullCheck(L_18);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_18, NULL);
		__this->____rootPose_13 = L_19;
		// _worldRoot = _rootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = __this->____rootPose_13;
		__this->____worldRoot_14 = L_20;
		// if (trackingSpace != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___trackingSpace2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		// _scale *= Matrix4x4.Scale(trackingSpace.lossyScale);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = __this->____scale_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___trackingSpace2;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_24, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_25, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27;
		L_27 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_23, L_26, NULL);
		__this->____scale_12 = L_27;
		// _worldRoot.position = trackingSpace.TransformPoint(_rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ___trackingSpace2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30->___position_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_29, L_31, NULL);
		L_28->___position_0 = L_32;
		// _worldRoot.rotation = trackingSpace.rotation * _rootPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ___trackingSpace2;
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = L_36->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_35, L_37, NULL);
		L_33->___rotation_1 = L_38;
	}

IL_00db:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		V_1 = 0;
		goto IL_00fb;
	}

IL_00df:
	{
		// _originalPoses[i] = data.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_39 = __this->____originalPoses_2;
		int32_t L_40 = V_1;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_41 = ___data0;
		NullCheck(L_41);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_42;
		L_42 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_41, NULL);
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_45);
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00fb:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)70))))
		{
			goto IL_00df;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllLocalPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllLocalPoses_mC8BF8BA0AA0FD490D6EA91BAD6B21C759C027EB3 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___localJointPoses0, const RuntimeMethod* method) 
{
	{
		// UpdateAllLocalPoses();
		BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B(__this, NULL);
		// localJointPoses = _localPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___localJointPoses0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____localPosesCollection_8;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _localPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____localPosesCollection_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllPosesFromRoot(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllPosesFromRoot_m2D463DB2AABCEC580600448646B5BA9CE482337C (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___posesFromRoot0, const RuntimeMethod* method) 
{
	{
		// UpdateAllPosesFromRoot();
		BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102(__this, NULL);
		// posesFromRoot = _posesFromRootCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___posesFromRoot0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____posesFromRootCollection_6;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _posesFromRootCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____posesFromRootCollection_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllWorldPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllWorldPoses_mE6DF5987E80578B0B228ECA3119BE6F23DFFB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___worldJointPoses0, const RuntimeMethod* method) 
{
	{
		// UpdateAllWorldPoses();
		BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4(__this, NULL);
		// worldJointPoses = _worldPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___worldJointPoses0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____worldPosesCollection_7;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _worldPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____worldPosesCollection_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateLocalJointPose(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_0, NULL);
		// return _localPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____localPoses_4;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateJointPoseFromRoot(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_0, NULL);
		// return _posesFromRoot[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____posesFromRoot_3;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateWorldJointPose(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_0, NULL);
		// return _worldPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____worldPoses_5;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// return _worldRoot;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot_14;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!CheckJointDirty(jointId, _dirtyJointsFromRoot))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyJointsFromRoot_9;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = __this->____originalPoses_2;
		int32_t L_4 = ___jointId0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// Vector3 posFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     (originalPose.position - _rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_8, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_9, L_14, NULL);
		V_1 = L_15;
		// Quaternion rotFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_17, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = L_19.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_18, L_20, NULL);
		V_2 = L_21;
		// _posesFromRoot[(int)jointId] = new Pose(posFromRoot, rotFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22 = __this->____posesFromRoot_3;
		int32_t L_23 = ___jointId0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_26), L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_26);
		// SetJointClean(jointId, _dirtyJointsFromRoot);
		int32_t L_27 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = __this->____dirtyJointsFromRoot_9;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!CheckJointDirty(jointId, _dirtyLocalJoints))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyLocalJoints_10;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (_mapping.TryGetParentJointId(jointId, out BodyJointId parentId) &&
		//     parentId >= BodyJointId.Body_Root)
		RuntimeObject* L_3 = __this->____mapping_15;
		int32_t L_4 = ___jointId0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3, L_4, (&V_0));
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____originalPoses_2;
		int32_t L_8 = ___jointId0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// Pose parentPose = _originalPoses[(int)parentId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____originalPoses_2;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// Vector3 localPos = Quaternion.Inverse(parentPose.rotation) *
		//     (originalPose.position - parentPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_16, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_17, L_22, NULL);
		V_3 = L_23;
		// Quaternion localRot = Quaternion.Inverse(parentPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_25, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = L_27.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_26, L_28, NULL);
		V_4 = L_29;
		// _localPoses[(int)jointId] = new Pose(localPos, localRot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_30 = __this->____localPoses_4;
		int32_t L_31 = ___jointId0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_34), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_34);
		goto IL_009f;
	}

IL_008e:
	{
		// _localPoses[(int)jointId] = Pose.identity;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_35 = __this->____localPoses_4;
		int32_t L_36 = ___jointId0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_37;
		L_37 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_37);
	}

IL_009f:
	{
		// SetJointClean(jointId, _dirtyLocalJoints);
		int32_t L_38 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = __this->____dirtyLocalJoints_10;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_38, L_39, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!CheckJointDirty(jointId, _dirtyWorldJoints))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyWorldJoints_11;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Pose fromRoot = GetJointPoseFromRoot(jointId);
		int32_t L_3 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(__this, L_3, NULL);
		V_0 = L_4;
		// fromRoot.position = _scale * fromRoot.position;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->____scale_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_7, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_5, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_9, NULL);
		(&V_0)->___position_0 = L_10;
		// fromRoot.Postmultiply(GetWorldRootPose());
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline(__this, NULL);
		V_1 = L_11;
		PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9((&V_0), (&V_1), NULL);
		// _worldPoses[(int)jointId] = fromRoot;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12 = __this->____worldPoses_5;
		int32_t L_13 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_14);
		// SetJointClean(jointId, _dirtyWorldJoints);
		int32_t L_15 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->____dirtyWorldJoints_11;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateWorldJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateLocalJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateJointPoseFromRoot(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___jointId0;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___jointId0;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// return (dirtyFlags[outerIdx] & (1UL << innerIdx)) != 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___dirtyFlags1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint64_t)((int64_t)(L_5&((int64_t)(((int64_t)1)<<((int32_t)(L_6&((int32_t)63)))))))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___jointId0;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___jointId0;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// dirtyFlags[outerIdx] = dirtyFlags[outerIdx] & ~(1UL << innerIdx);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___dirtyFlags1;
		int32_t L_3 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___dirtyFlags1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)((int64_t)(L_7&((~((int64_t)(((int64_t)1)<<((int32_t)(L_8&((int32_t)63))))))))));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___poses0, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyBodyJointPoses(Pose[] poses)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _poses = poses;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___poses0;
		__this->____poses_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poses_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_0 = (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_System_Collections_IEnumerable_GetEnumerator_m0EBABD29DA3CD384530ED6DC2CD883D13E986305 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C(__this, NULL);
		return L_0;
	}
}
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ReadOnlyBodyJointPoses_get_Empty_mFAFDDC7488AA4F653D9F05E0117F58404479788E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		il2cpp_codegen_runtime_class_init_inline(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_0 = ((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		// public int Count => _poses.Length;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReadOnlyBodyJointPoses_get_Item_m1857F5403B3763E108D7D958CE17B2F949B95162 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public Pose this[int index] => _poses[index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute) Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ReadOnlyBodyJointPoses_get_Item_m437A4A40FA462414921D9CA23037598632978256 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public ref readonly Pose this[BodyJointId index] => ref _poses[(int)index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		return ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__cctor_m1DA4145AFEE3F3AA72E56D3D8C9943F93EF52F88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0;
		L_0 = Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_inline(Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_RuntimeMethod_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_1, L_0, NULL);
		((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1), (void*)L_1);
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
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m96830FE6B1A2DDA8A03FB83E2A6CECA5193DCBA8 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_mCF94D045336F511597C930CDBBAE6A45AEC3690D (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* V_1 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var pose in _poses)
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_4 = V_1;
		NullCheck(L_4);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = L_4->____poses_0;
		__this->___U3CU3E7__wrap1_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_5);
		__this->___U3CU3E7__wrap2_4 = 0;
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_6 = __this->___U3CU3E7__wrap1_3;
		int32_t L_7 = __this->___U3CU3E7__wrap2_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_2;
		__this->___U3CU3E2__current_1 = L_10;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_11 = __this->___U3CU3E7__wrap2_4;
		__this->___U3CU3E7__wrap2_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_006a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->___U3CU3E7__wrap2_4;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		__this->___U3CU3E7__wrap1_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m871B6725F46060A97986220B07EB4087A70D351E (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m3C0250A8B7B7020A3C2032A868FA5D0AA07E8602 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		RuntimeObject* L_2 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _visibility;
		int32_t L_0 = __this->____visibility_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// get => _space;
		int32_t L_0 = __this->____space_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// _featureStates;
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_0 = __this->____featureStates_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05_inline (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___bodyPoseComparer0, const RuntimeMethod* method) 
{
	{
		// _bodyPoseComparer = bodyPoseComparer;
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = ___bodyPoseComparer0;
		__this->____bodyPoseComparer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPoseComparer_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310_inline (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, const RuntimeMethod* method) 
{
	{
		// _root = root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___root0;
		__this->____root_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_7), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// return _worldRoot;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___value0;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) 
{
	{
		BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_0 = (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_3 = (JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___item0, const RuntimeMethod* method) 
{
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_1 = (JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_6 = V_0;
		int32_t L_7 = V_1;
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE)L_8);
		return;
	}

IL_0034:
	{
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_9 = ___item0;
		((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) 
{
	{
		// public bool Started => _started;
		bool L_0 = (bool)__this->____started_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EB424C8BFED607594366D8B56B9E05D6A52D386_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ((EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
