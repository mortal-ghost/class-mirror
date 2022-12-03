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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>
struct Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,SimpleFileBrowser.ListItem>
struct KeyCollection_t412EAB331BF6153036F0DE79CFE6CBF2E41A8782;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Sprite>
struct KeyCollection_t138136109408FD98DBF627F9E05EA32CBF0D9893;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserItem>
struct List_1_t929BC16488C7AC287FAEA407865DE8BA730EF175;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserQuickLink>
struct List_1_t417643521992E3A9934A752A70E79B7192BE59ED;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry>
struct List_1_tF2EE881948D1CC1DED50B0660BFCA6B696CB0E6B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowser/Filter>
struct List_1_t4C78B0E6B07B236B63B2A1441F4B5FC7007FE916;
// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>
struct Stack_1_t01139167DF236CFA36D235423224804125B77FE8;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,SimpleFileBrowser.ListItem>
struct ValueCollection_tA096240B5CA73C9AEFCDCC5D2C84984CD098E8B9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Sprite>
struct ValueCollection_t64BF35FAA59E1267E091C891F36E42D7AE38CFE3;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,SimpleFileBrowser.ListItem>[]
struct EntryU5BU5D_tB453A68D03F3E1F6FC49CCF886B80ED81A444458;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Sprite>[]
struct EntryU5BU5D_t1B7F4FC29B23EAA2C5A6E9B695B79119DE17DCAE;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// SimpleFileBrowser.FileSystemEntry[]
struct FileSystemEntryU5BU5D_tC24F2466E60B1F19A351D56D73742A72A983B9A9;
// SimpleFileBrowser.FiletypeIcon[]
struct FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// SimpleFileBrowser.ListItem[]
struct ListItemU5BU5D_tD458EB080760EE002F03B1ADDA941EA24224B0D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// SimpleFileBrowser.FileBrowser/QuickLink[]
struct QuickLinkU5BU5D_tB2721212BB4E7A159372F669F3E29D2F93D2DA71;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// SimpleFileBrowser.FileBrowser
struct FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA;
// SimpleFileBrowser.FileBrowserAccessRestrictedPanel
struct FileBrowserAccessRestrictedPanel_tC1AAEBE26B66832BCAE1D39CD9DEBDBC5E351F9E;
// SimpleFileBrowser.FileBrowserContextMenu
struct FileBrowserContextMenu_t2DDF7D4CB23A81DDA461574CE6D995FF47732595;
// SimpleFileBrowser.FileBrowserCursorHandler
struct FileBrowserCursorHandler_t29A9A3B97002BBAF7D593824DD91E97A0FB71991;
// SimpleFileBrowser.FileBrowserFileOperationConfirmationPanel
struct FileBrowserFileOperationConfirmationPanel_t5CD4D338B0EC8C35641E278A0D7E5E6B79FE26F6;
// SimpleFileBrowser.FileBrowserItem
struct FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5;
// SimpleFileBrowser.FileBrowserMovement
struct FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5;
// SimpleFileBrowser.FileBrowserQuickLink
struct FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E;
// SimpleFileBrowser.FileBrowserRenamedItem
struct FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// SimpleFileBrowser.IListViewAdapter
struct IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// SimpleFileBrowser.ListItem
struct ListItem_tE112A367BDC021731139C4894491A00F05B295B3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SimpleFileBrowser.NonDrawingGraphic
struct NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// SimpleFileBrowser.OnItemClickedHandler
struct OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SimpleFileBrowser.RecycledListView
struct RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// SimpleFileBrowser.UISkin
struct UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// SimpleFileBrowser.FileBrowser/FileSystemEntryFilter
struct FileSystemEntryFilter_tC1DDD28AF24141B866705A2599D883C5071F69CE;
// SimpleFileBrowser.FileBrowser/Filter
struct Filter_t33B81718659A91E455B1B65C329FC191DC6792BB;
// SimpleFileBrowser.FileBrowser/OnCancel
struct OnCancel_tC31F32093ADD242D943EB71A30D9C3D1346D524B;
// SimpleFileBrowser.FileBrowser/OnSuccess
struct OnSuccess_t32CF52445E4194C128C27807A6E074DE777DC7CE;
// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted
struct OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t01139167DF236CFA36D235423224804125B77FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450;
IL2CPP_EXTERN_C String_t* _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50;
IL2CPP_EXTERN_C String_t* _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m6147BBE7935413D31B0CBE1C87D9D2974DCC0F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB0B8F6BEE382C9D20E9134C00BF2FC9855B5C852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2661B8E487FC9B4EA1F7DDA4F9BBD16CF8382B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCCD7FB384FB3C1D2BB8F3A4012E78C3CF4858AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB2DCCA7B2E62102234C13AF4F67181EAAA01069A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecycledListView_U3CStartU3Eb__10_0_mB8CB8298DCD1DFA739C0DD5C6394175D0C9D80EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m1A8D86259539819CABDEE147AA25878C8D8CBBF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mD7F8A283E616A398BD9D2A86E70C5BCCAF19418F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m42F344C90F5E9BB82CB1E431275C0B960AF2E6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m154AB2542CB144A59DEB67E3D1002F65CE8BA85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>
struct Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB453A68D03F3E1F6FC49CCF886B80ED81A444458* ____entries_1;
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
	KeyCollection_t412EAB331BF6153036F0DE79CFE6CBF2E41A8782* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA096240B5CA73C9AEFCDCC5D2C84984CD098E8B9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1B7F4FC29B23EAA2C5A6E9B695B79119DE17DCAE* ____entries_1;
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
	KeyCollection_t138136109408FD98DBF627F9E05EA32CBF0D9893* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64BF35FAA59E1267E091C891F36E42D7AE38CFE3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>
struct Stack_1_t01139167DF236CFA36D235423224804125B77FE8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ListItemU5BU5D_tD458EB080760EE002F03B1ADDA941EA24224B0D5* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 
{
	// System.String SimpleFileBrowser.FileSystemEntry::Path
	String_t* ___Path_0;
	// System.String SimpleFileBrowser.FileSystemEntry::Name
	String_t* ___Name_1;
	// System.String SimpleFileBrowser.FileSystemEntry::Extension
	String_t* ___Extension_2;
	// System.IO.FileAttributes SimpleFileBrowser.FileSystemEntry::Attributes
	int32_t ___Attributes_3;
};
// Native definition for P/Invoke marshalling of SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1_marshaled_pinvoke
{
	char* ___Path_0;
	char* ___Name_1;
	char* ___Extension_2;
	int32_t ___Attributes_3;
};
// Native definition for COM marshalling of SimpleFileBrowser.FileSystemEntry
struct FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1_marshaled_com
{
	Il2CppChar* ___Path_0;
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Extension_2;
	int32_t ___Attributes_3;
};

// SimpleFileBrowser.FiletypeIcon
struct FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD 
{
	// System.String SimpleFileBrowser.FiletypeIcon::extension
	String_t* ___extension_0;
	// UnityEngine.Sprite SimpleFileBrowser.FiletypeIcon::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
};
// Native definition for P/Invoke marshalling of SimpleFileBrowser.FiletypeIcon
struct FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_pinvoke
{
	char* ___extension_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
};
// Native definition for COM marshalling of SimpleFileBrowser.FiletypeIcon
struct FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_com
{
	Il2CppChar* ___extension_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_1;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SimpleFileBrowser.OnItemClickedHandler
struct OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SimpleFileBrowser.UISkin
struct UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 SimpleFileBrowser.UISkin::m_version
	int32_t ___m_version_4;
	// UnityEngine.Font SimpleFileBrowser.UISkin::m_font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_font_5;
	// System.Int32 SimpleFileBrowser.UISkin::m_fontSize
	int32_t ___m_fontSize_6;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_windowColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_windowColor_7;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_filesListColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_filesListColor_8;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_filesVerticalSeparatorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_filesVerticalSeparatorColor_9;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_titleBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_titleBackgroundColor_10;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_titleTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_titleTextColor_11;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_windowResizeGizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_windowResizeGizmoColor_12;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_headerButtonsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_headerButtonsColor_13;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_windowResizeGizmo
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_windowResizeGizmo_14;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_headerBackButton
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_headerBackButton_15;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_headerForwardButton
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_headerForwardButton_16;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_headerUpButton
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_headerUpButton_17;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_headerContextMenuButton
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_headerContextMenuButton_18;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldNormalBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldNormalBackgroundColor_19;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldInvalidBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldInvalidBackgroundColor_20;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldTextColor_21;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldPlaceholderTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldPlaceholderTextColor_22;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldSelectedTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldSelectedTextColor_23;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_inputFieldCaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_inputFieldCaretColor_24;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_inputFieldBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_inputFieldBackground_25;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_buttonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_buttonColor_26;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_buttonTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_buttonTextColor_27;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_buttonBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_buttonBackground_28;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_dropdownColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_dropdownColor_29;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_dropdownTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_dropdownTextColor_30;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_dropdownArrowColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_dropdownArrowColor_31;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_dropdownCheckmarkColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_dropdownCheckmarkColor_32;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_dropdownBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_dropdownBackground_33;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_dropdownArrow
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_dropdownArrow_34;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_dropdownCheckmark
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_dropdownCheckmark_35;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_toggleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_toggleColor_36;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_toggleTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_toggleTextColor_37;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_toggleCheckmarkColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_toggleCheckmarkColor_38;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_toggleBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_toggleBackground_39;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_toggleCheckmark
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_toggleCheckmark_40;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_scrollbarBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_scrollbarBackgroundColor_41;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_scrollbarColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_scrollbarColor_42;
	// System.Single SimpleFileBrowser.UISkin::m_fileHeight
	float ___m_fileHeight_43;
	// System.Single SimpleFileBrowser.UISkin::m_fileIconsPadding
	float ___m_fileIconsPadding_44;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileNormalBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileNormalBackgroundColor_45;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileAlternatingBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileAlternatingBackgroundColor_46;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileHoveredBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileHoveredBackgroundColor_47;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileSelectedBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileSelectedBackgroundColor_48;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileNormalTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileNormalTextColor_49;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_fileSelectedTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fileSelectedTextColor_50;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_folderIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_folderIcon_51;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_driveIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_driveIcon_52;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_defaultFileIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_defaultFileIcon_53;
	// SimpleFileBrowser.FiletypeIcon[] SimpleFileBrowser.UISkin::m_filetypeIcons
	FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* ___m_filetypeIcons_54;
	// System.Boolean SimpleFileBrowser.UISkin::initializedFiletypeIcons
	bool ___initializedFiletypeIcons_55;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite> SimpleFileBrowser.UISkin::filetypeToIcon
	Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* ___filetypeToIcon_56;
	// System.Boolean SimpleFileBrowser.UISkin::m_allIconExtensionsHaveSingleSuffix
	bool ___m_allIconExtensionsHaveSingleSuffix_57;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_fileMultiSelectionToggleOffIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_fileMultiSelectionToggleOffIcon_58;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_fileMultiSelectionToggleOnIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_fileMultiSelectionToggleOnIcon_59;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_contextMenuBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_contextMenuBackgroundColor_60;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_contextMenuTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_contextMenuTextColor_61;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_contextMenuSeparatorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_contextMenuSeparatorColor_62;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_popupPanelsBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_popupPanelsBackgroundColor_63;
	// UnityEngine.Color SimpleFileBrowser.UISkin::m_popupPanelsTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_popupPanelsTextColor_64;
	// UnityEngine.Sprite SimpleFileBrowser.UISkin::m_popupPanelsBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_popupPanelsBackground_65;
};

// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted
struct OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// SimpleFileBrowser.FileBrowser
struct FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleFileBrowser.UISkin SimpleFileBrowser.FileBrowser::m_skin
	UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* ___m_skin_9;
	// System.Int32 SimpleFileBrowser.FileBrowser::m_skinVersion
	int32_t ___m_skinVersion_10;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::m_skinPrevDriveIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_skinPrevDriveIcon_11;
	// UnityEngine.Sprite SimpleFileBrowser.FileBrowser::m_skinPrevFolderIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_skinPrevFolderIcon_12;
	// System.Int32 SimpleFileBrowser.FileBrowser::minWidth
	int32_t ___minWidth_24;
	// System.Int32 SimpleFileBrowser.FileBrowser::minHeight
	int32_t ___minHeight_25;
	// System.Single SimpleFileBrowser.FileBrowser::narrowScreenWidth
	float ___narrowScreenWidth_26;
	// System.Single SimpleFileBrowser.FileBrowser::quickLinksMaxWidthPercentage
	float ___quickLinksMaxWidthPercentage_27;
	// System.Boolean SimpleFileBrowser.FileBrowser::sortFilesByName
	bool ___sortFilesByName_28;
	// System.String[] SimpleFileBrowser.FileBrowser::excludedExtensions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___excludedExtensions_29;
	// SimpleFileBrowser.FileBrowser/QuickLink[] SimpleFileBrowser.FileBrowser::quickLinks
	QuickLinkU5BU5D_tB2721212BB4E7A159372F669F3E29D2F93D2DA71* ___quickLinks_30;
	// System.Collections.Generic.HashSet`1<System.String> SimpleFileBrowser.FileBrowser::excludedExtensionsSet
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___excludedExtensionsSet_32;
	// System.Boolean SimpleFileBrowser.FileBrowser::generateQuickLinksForDrives
	bool ___generateQuickLinksForDrives_33;
	// System.Boolean SimpleFileBrowser.FileBrowser::contextMenuShowDeleteButton
	bool ___contextMenuShowDeleteButton_34;
	// System.Boolean SimpleFileBrowser.FileBrowser::contextMenuShowRenameButton
	bool ___contextMenuShowRenameButton_35;
	// System.Boolean SimpleFileBrowser.FileBrowser::showResizeCursor
	bool ___showResizeCursor_36;
	// UnityEngine.GameObject SimpleFileBrowser.FileBrowser::VideoEffectCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___VideoEffectCanvas_37;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::fetchFileButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___fetchFileButton_38;
	// SimpleFileBrowser.FileBrowserMovement SimpleFileBrowser.FileBrowser::window
	FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* ___window_39;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::windowTR
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___windowTR_40;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::topViewNarrowScreen
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topViewNarrowScreen_41;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleView
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleView_42;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewOriginalPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewOriginalPosition_43;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewOriginalSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewOriginalSize_44;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewQuickLinks
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewQuickLinks_45;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowser::middleViewQuickLinksOriginalSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___middleViewQuickLinksOriginalSize_46;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewFiles
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewFiles_47;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::middleViewSeparator
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleViewSeparator_48;
	// SimpleFileBrowser.FileBrowserItem SimpleFileBrowser.FileBrowser::itemPrefab
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* ___itemPrefab_49;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserItem> SimpleFileBrowser.FileBrowser::allItems
	List_1_t929BC16488C7AC287FAEA407865DE8BA730EF175* ___allItems_50;
	// SimpleFileBrowser.FileBrowserQuickLink SimpleFileBrowser.FileBrowser::quickLinkPrefab
	FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E* ___quickLinkPrefab_51;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowserQuickLink> SimpleFileBrowser.FileBrowser::allQuickLinks
	List_1_t417643521992E3A9934A752A70E79B7192BE59ED* ___allQuickLinks_52;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_53;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::backButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backButton_54;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::forwardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___forwardButton_55;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::upButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___upButton_56;
	// UnityEngine.UI.Button SimpleFileBrowser.FileBrowser::moreOptionsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___moreOptionsButton_57;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::pathInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___pathInputField_58;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::pathInputFieldSlotTop
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___pathInputFieldSlotTop_59;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::pathInputFieldSlotBottom
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___pathInputFieldSlotBottom_60;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::searchInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___searchInputField_61;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::quickLinksContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___quickLinksContainer_62;
	// UnityEngine.UI.ScrollRect SimpleFileBrowser.FileBrowser::quickLinksScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___quickLinksScrollRect_63;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::filesContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___filesContainer_64;
	// UnityEngine.UI.ScrollRect SimpleFileBrowser.FileBrowser::filesScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___filesScrollRect_65;
	// SimpleFileBrowser.RecycledListView SimpleFileBrowser.FileBrowser::listView
	RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* ___listView_66;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowser::filenameInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___filenameInputField_67;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::filenameInputFieldOverlayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___filenameInputFieldOverlayText_68;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowser::filenameImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___filenameImage_69;
	// UnityEngine.UI.Dropdown SimpleFileBrowser.FileBrowser::filtersDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___filtersDropdown_70;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::filtersDropdownContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___filtersDropdownContainer_71;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::filterItemTemplate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___filterItemTemplate_72;
	// UnityEngine.UI.Toggle SimpleFileBrowser.FileBrowser::showHiddenFilesToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___showHiddenFilesToggle_73;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowser::submitButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___submitButtonText_74;
	// UnityEngine.UI.Button[] SimpleFileBrowser.FileBrowser::allButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___allButtons_75;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::moreOptionsContextMenuPosition
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moreOptionsContextMenuPosition_76;
	// SimpleFileBrowser.FileBrowserRenamedItem SimpleFileBrowser.FileBrowser::renameItem
	FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* ___renameItem_77;
	// SimpleFileBrowser.FileBrowserContextMenu SimpleFileBrowser.FileBrowser::contextMenu
	FileBrowserContextMenu_t2DDF7D4CB23A81DDA461574CE6D995FF47732595* ___contextMenu_78;
	// SimpleFileBrowser.FileBrowserFileOperationConfirmationPanel SimpleFileBrowser.FileBrowser::fileOperationConfirmationPanel
	FileBrowserFileOperationConfirmationPanel_t5CD4D338B0EC8C35641E278A0D7E5E6B79FE26F6* ___fileOperationConfirmationPanel_79;
	// SimpleFileBrowser.FileBrowserAccessRestrictedPanel SimpleFileBrowser.FileBrowser::accessRestrictedPanel
	FileBrowserAccessRestrictedPanel_tC1AAEBE26B66832BCAE1D39CD9DEBDBC5E351F9E* ___accessRestrictedPanel_80;
	// SimpleFileBrowser.FileBrowserCursorHandler SimpleFileBrowser.FileBrowser::resizeCursorHandler
	FileBrowserCursorHandler_t29A9A3B97002BBAF7D593824DD91E97A0FB71991* ___resizeCursorHandler_81;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowser::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_82;
	// UnityEngine.Canvas SimpleFileBrowser.FileBrowser::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_83;
	// System.IO.FileAttributes SimpleFileBrowser.FileBrowser::ignoredFileAttributes
	int32_t ___ignoredFileAttributes_84;
	// SimpleFileBrowser.FileSystemEntry[] SimpleFileBrowser.FileBrowser::allFileEntries
	FileSystemEntryU5BU5D_tC24F2466E60B1F19A351D56D73742A72A983B9A9* ___allFileEntries_85;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry> SimpleFileBrowser.FileBrowser::validFileEntries
	List_1_tF2EE881948D1CC1DED50B0660BFCA6B696CB0E6B* ___validFileEntries_86;
	// System.Collections.Generic.List`1<System.Int32> SimpleFileBrowser.FileBrowser::selectedFileEntries
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___selectedFileEntries_87;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::pendingFileEntrySelection
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pendingFileEntrySelection_88;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::submittedFileEntryPaths
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___submittedFileEntryPaths_89;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::submittedFolderPaths
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___submittedFolderPaths_90;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileSystemEntry> SimpleFileBrowser.FileBrowser::submittedFileEntriesToOverwrite
	List_1_tF2EE881948D1CC1DED50B0660BFCA6B696CB0E6B* ___submittedFileEntriesToOverwrite_91;
	// System.Int32 SimpleFileBrowser.FileBrowser::multiSelectionPivotFileEntry
	int32_t ___multiSelectionPivotFileEntry_92;
	// System.Text.StringBuilder SimpleFileBrowser.FileBrowser::multiSelectionFilenameBuilder
	StringBuilder_t* ___multiSelectionFilenameBuilder_93;
	// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowser/Filter> SimpleFileBrowser.FileBrowser::filters
	List_1_t4C78B0E6B07B236B63B2A1441F4B5FC7007FE916* ___filters_94;
	// SimpleFileBrowser.FileBrowser/Filter SimpleFileBrowser.FileBrowser::allFilesFilter
	Filter_t33B81718659A91E455B1B65C329FC191DC6792BB* ___allFilesFilter_95;
	// System.Boolean SimpleFileBrowser.FileBrowser::showAllFilesFilter
	bool ___showAllFilesFilter_96;
	// System.Boolean SimpleFileBrowser.FileBrowser::allFiltersHaveSingleSuffix
	bool ___allFiltersHaveSingleSuffix_97;
	// System.Boolean SimpleFileBrowser.FileBrowser::allExcludedExtensionsHaveSingleSuffix
	bool ___allExcludedExtensionsHaveSingleSuffix_98;
	// System.String SimpleFileBrowser.FileBrowser::defaultInitialPath
	String_t* ___defaultInitialPath_99;
	// System.Int32 SimpleFileBrowser.FileBrowser::currentPathIndex
	int32_t ___currentPathIndex_100;
	// System.Collections.Generic.List`1<System.String> SimpleFileBrowser.FileBrowser::pathsFollowed
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pathsFollowed_101;
	// System.Collections.Generic.HashSet`1<System.Char> SimpleFileBrowser.FileBrowser::invalidFilenameChars
	HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* ___invalidFilenameChars_102;
	// System.Single SimpleFileBrowser.FileBrowser::drivesNextRefreshTime
	float ___drivesNextRefreshTime_103;
	// System.String SimpleFileBrowser.FileBrowser::driveQuickLinks
	String_t* ___driveQuickLinks_104;
	// System.Int32 SimpleFileBrowser.FileBrowser::numberOfDriveQuickLinks
	int32_t ___numberOfDriveQuickLinks_105;
	// System.Boolean SimpleFileBrowser.FileBrowser::canvasDimensionsChanged
	bool ___canvasDimensionsChanged_106;
	// System.Globalization.CompareInfo SimpleFileBrowser.FileBrowser::textComparer
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___textComparer_107;
	// System.Globalization.CompareOptions SimpleFileBrowser.FileBrowser::textCompareOptions
	int32_t ___textCompareOptions_108;
	// UnityEngine.EventSystems.PointerEventData SimpleFileBrowser.FileBrowser::nullPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___nullPointerEventData_109;
	// System.String SimpleFileBrowser.FileBrowser::m_currentPath
	String_t* ___m_currentPath_110;
	// System.String SimpleFileBrowser.FileBrowser::m_searchString
	String_t* ___m_searchString_111;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_acceptNonExistingFilename
	bool ___m_acceptNonExistingFilename_112;
	// SimpleFileBrowser.FileBrowser/PickMode SimpleFileBrowser.FileBrowser::m_pickerMode
	int32_t ___m_pickerMode_113;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_allowMultiSelection
	bool ___m_allowMultiSelection_114;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_multiSelectionToggleSelectionMode
	bool ___m_multiSelectionToggleSelectionMode_115;
	// SimpleFileBrowser.FileBrowser/OnSuccess SimpleFileBrowser.FileBrowser::onSuccess
	OnSuccess_t32CF52445E4194C128C27807A6E074DE777DC7CE* ___onSuccess_116;
	// SimpleFileBrowser.FileBrowser/OnCancel SimpleFileBrowser.FileBrowser::onCancel
	OnCancel_tC31F32093ADD242D943EB71A30D9C3D1346D524B* ___onCancel_117;
};

struct FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_StaticFields
{
	// System.Boolean SimpleFileBrowser.FileBrowser::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;
	// System.Boolean SimpleFileBrowser.FileBrowser::<Success>k__BackingField
	bool ___U3CSuccessU3Ek__BackingField_7;
	// System.String[] SimpleFileBrowser.FileBrowser::<Result>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CResultU3Ek__BackingField_8;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_askPermissions
	bool ___m_askPermissions_13;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_singleClickMode
	bool ___m_singleClickMode_14;
	// SimpleFileBrowser.FileBrowser/FileSystemEntryFilter SimpleFileBrowser.FileBrowser::m_displayedEntriesFilter
	FileSystemEntryFilter_tC1DDD28AF24141B866705A2599D883C5071F69CE* ___m_displayedEntriesFilter_15;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_showFileOverwriteDialog
	bool ___m_showFileOverwriteDialog_16;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_checkWriteAccessToDestinationDirectory
	bool ___m_checkWriteAccessToDestinationDirectory_17;
	// System.Single SimpleFileBrowser.FileBrowser::m_drivesRefreshInterval
	float ___m_drivesRefreshInterval_18;
	// System.Boolean SimpleFileBrowser.FileBrowser::m_displayHiddenFilesToggle
	bool ___m_displayHiddenFilesToggle_19;
	// System.String SimpleFileBrowser.FileBrowser::m_allFilesFilterText
	String_t* ___m_allFilesFilterText_20;
	// System.String SimpleFileBrowser.FileBrowser::m_foldersFilterText
	String_t* ___m_foldersFilterText_21;
	// System.String SimpleFileBrowser.FileBrowser::m_pickFolderQuickLinkText
	String_t* ___m_pickFolderQuickLinkText_22;
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowser::m_instance
	FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* ___m_instance_23;
	// System.Boolean SimpleFileBrowser.FileBrowser::quickLinksInitialized
	bool ___quickLinksInitialized_31;
};

// SimpleFileBrowser.FileBrowserMovement
struct FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowserMovement::fileBrowser
	FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* ___fileBrowser_4;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserMovement::canvasTR
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvasTR_5;
	// UnityEngine.Camera SimpleFileBrowser.FileBrowserMovement::canvasCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___canvasCam_6;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserMovement::window
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___window_7;
	// SimpleFileBrowser.RecycledListView SimpleFileBrowser.FileBrowserMovement::listView
	RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* ___listView_8;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPos_9;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialAnchoredPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialAnchoredPos_10;
	// UnityEngine.Vector2 SimpleFileBrowser.FileBrowserMovement::initialSizeDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialSizeDelta_11;
};

// SimpleFileBrowser.FileBrowserRenamedItem
struct FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserRenamedItem::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_4;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserRenamedItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_5;
	// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowserRenamedItem::nameInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___nameInputField_6;
	// SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted SimpleFileBrowser.FileBrowserRenamedItem::onRenameCompleted
	OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* ___onRenameCompleted_7;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserRenamedItem::m_transform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_transform_8;
};

// SimpleFileBrowser.ListItem
struct ListItem_tE112A367BDC021731139C4894491A00F05B295B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Object SimpleFileBrowser.ListItem::<Tag>k__BackingField
	RuntimeObject* ___U3CTagU3Ek__BackingField_4;
	// System.Int32 SimpleFileBrowser.ListItem::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_5;
	// SimpleFileBrowser.IListViewAdapter SimpleFileBrowser.ListItem::adapter
	RuntimeObject* ___adapter_6;
};

// SimpleFileBrowser.RecycledListView
struct RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform SimpleFileBrowser.RecycledListView::viewportTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___viewportTransform_4;
	// UnityEngine.RectTransform SimpleFileBrowser.RecycledListView::contentTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___contentTransform_5;
	// System.Single SimpleFileBrowser.RecycledListView::itemHeight
	float ___itemHeight_6;
	// System.Single SimpleFileBrowser.RecycledListView::_1OverItemHeight
	float ____1OverItemHeight_7;
	// System.Single SimpleFileBrowser.RecycledListView::viewportHeight
	float ___viewportHeight_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem> SimpleFileBrowser.RecycledListView::items
	Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* ___items_9;
	// System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem> SimpleFileBrowser.RecycledListView::pooledItems
	Stack_1_t01139167DF236CFA36D235423224804125B77FE8* ___pooledItems_10;
	// SimpleFileBrowser.IListViewAdapter SimpleFileBrowser.RecycledListView::adapter
	RuntimeObject* ___adapter_11;
	// System.Int32 SimpleFileBrowser.RecycledListView::currentTopIndex
	int32_t ___currentTopIndex_12;
	// System.Int32 SimpleFileBrowser.RecycledListView::currentBottomIndex
	int32_t ___currentBottomIndex_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// SimpleFileBrowser.FileBrowserItem
struct FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5  : public ListItem_tE112A367BDC021731139C4894491A00F05B295B3
{
	// SimpleFileBrowser.FileBrowser SimpleFileBrowser.FileBrowserItem::fileBrowser
	FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* ___fileBrowser_9;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_10;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_11;
	// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::multiSelectionToggle
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___multiSelectionToggle_12;
	// UnityEngine.UI.Text SimpleFileBrowser.FileBrowserItem::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_13;
	// System.Boolean SimpleFileBrowser.FileBrowserItem::isSelected
	bool ___isSelected_14;
	// System.Boolean SimpleFileBrowser.FileBrowserItem::isHidden
	bool ___isHidden_15;
	// SimpleFileBrowser.UISkin SimpleFileBrowser.FileBrowserItem::skin
	UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* ___skin_16;
	// System.Single SimpleFileBrowser.FileBrowserItem::pressTime
	float ___pressTime_17;
	// System.Single SimpleFileBrowser.FileBrowserItem::prevClickTime
	float ___prevClickTime_18;
	// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserItem::m_transform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_transform_19;
	// System.Boolean SimpleFileBrowser.FileBrowserItem::<IsDirectory>k__BackingField
	bool ___U3CIsDirectoryU3Ek__BackingField_20;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// SimpleFileBrowser.FileBrowserQuickLink
struct FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E  : public FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5
{
	// System.String SimpleFileBrowser.FileBrowserQuickLink::m_targetPath
	String_t* ___m_targetPath_21;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// SimpleFileBrowser.NonDrawingGraphic
struct NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
};

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// SimpleFileBrowser.FiletypeIcon[]
struct FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5  : public RuntimeArray
{
	ALIGN_FIELD (8) FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD m_Items[1];

	inline FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___extension_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___icon_1), (void*)NULL);
		#endif
	}
	inline FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___extension_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___icon_1), (void*)NULL);
		#endif
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m5C333061E1285AC5B22F556173FBE157EF1A37B7_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::OnSkinRefreshed(SimpleFileBrowser.UISkin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnSkinRefreshed_m9ACDA69EDA9861AC47C8A27F02984C03291C1051 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* ___skin0, bool ___isInitialized1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::set_IsDirectory(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_mA1AD3AFE7B0E46210FE1289FE2D291046DEF66F7_inline (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::get_AllowMultiSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowser_get_AllowMultiSelection_m3CE75D1DD5A555180373AFE8E446D298F9CCB97C (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::OnItemHeld(SimpleFileBrowser.FileBrowserItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnItemHeld_m4616B0F779C71648811095E004E6852065EC8F70 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* ___item0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::OnItemSelected(SimpleFileBrowser.FileBrowserItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnItemSelected_m553F21D12D4F28911E2B04E2B5E14D434AE8B067 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* ___item0, bool ___isDoubleClick1, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowser::get_MultiSelectionToggleSelectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowser_get_MultiSelectionToggleSelectionMode_m0CC81C607E6309B5E0E706E5A8F74CF3E541A082 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileHoveredBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileHoveredBackgroundColor_mBBFA2C11C2DE553F634A40D8B2EFA414D8BED2C6 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// System.Int32 SimpleFileBrowser.ListItem::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListItem_get_Position_m49214519D4BBE5B0F33D6AAB4E3B8F49B580DEFD_inline (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileAlternatingBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileAlternatingBackgroundColor_m9C9A101FE901B7A8E530ED22A1AC3F603184B7EF (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileNormalBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileNormalBackgroundColor_mB3AB273132682E837F5BFFDFDB3AF207D4C84A8A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileSelectedBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileSelectedBackgroundColor_m3E275E244C9580296423FEB3C26DF2D30C44BF37 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileNormalTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileNormalTextColor_m858F74B10CCAF4618CA6E5C7167BAB80217D0A99 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileSelectedTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileSelectedTextColor_mC1E14053CCF0BD5E03EC173BB7188B4DD0795EB4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileBrowserItem::get_IsDirectory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowserItem_get_IsDirectory_mE2B9AE6ADA43DF5A8408EE693F2FDDD88D216D0F_inline (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) ;
// SimpleFileBrowser.FileBrowser/PickMode SimpleFileBrowser.FileBrowser::get_PickerMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileBrowser_get_PickerMode_m1E7F1A135BE57C9B4E56097009BC001E2CCDF616 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_FileMultiSelectionToggleOffIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_FileMultiSelectionToggleOffIcon_m03AB5F1FC3C182BBB9D891A48A74236D419AF857 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_FileMultiSelectionToggleOnIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_FileMultiSelectionToggleOnIcon_mD78F39CDD08F1D545BAB8F5206634F0D0FBE395C (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserItem::get_TransformComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FileBrowserItem_get_TransformComponent_m54A7F99BE536DE843DFD8C2308122A7BA77CFFD9 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) ;
// System.Single SimpleFileBrowser.UISkin::get_FileHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UISkin_get_FileHeight_m490761AA2FCD12C90DE5F023FC3353965867FDF8 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Text,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textColor1, const RuntimeMethod* method) ;
// System.Single SimpleFileBrowser.UISkin::get_FileIconsPadding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UISkin_get_FileIconsPadding_m3F6E9AB23B917C2804ECE55F73FF7ADD7591F0D5 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::SetSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetSelected_mD98A715E8753CAAC93243CE7E865BB3E981FE3BB (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___isSelected0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.ListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem__ctor_m0F2F59D6C18F974CC520A3E73153EA9C25AE2353 (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::EnsureWindowIsWithinBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_EnsureWindowIsWithinBounds_m6052BE3802013AF0A0F003D19C6A132E144F3EE6 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::OnWindowDimensionsChanged(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnWindowDimensionsChanged_mF3F9FE60AFAAD85235F6AF5E5F6E28530C397A0C (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::OnViewportDimensionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_OnViewportDimensionsChanged_mB6C2DC3A7A045804CA21594CADB070B00EA8C04B (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::SetFile(UnityEngine.Sprite,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFile_m01704B1D968B4F8DCFD399DC0D9FE8DC07A36DE5 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem__ctor_mFD76D8703595FF18AE3C0C30455FD2E877BC5DB8 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_get_alreadySelecting_m3DB9F620A5E2976EBF1362F95C05C12031BACCC4 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_inline (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.OnItemClickedHandler::Invoke(SimpleFileBrowser.ListItem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_inline (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void SimpleFileBrowser.RecycledListView::DestroyItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateList_mDB5B2A69EA3A9DD770D372547E3F183554B3EE4F (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemsInTheList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemsInTheList_m55C6ABE3F27C06D0AC7483627ED8D51FBAF83AF4 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, bool ___updateAllVisibleItems0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::CreateItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemContentsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemContentsBetweenIndices_mE71583AFA6393C6B6A2358F76927FB069438B7C9 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.RecycledListView::CreateItemAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemAtIndex_m0A47C8737153B21BFD8616E3DC9FC3E0FA678404 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::get_Count()
inline int32_t Stack_1_get_Count_m154AB2542CB144A59DEB67E3D1002F65CE8BA85D_inline (Stack_1_t01139167DF236CFA36D235423224804125B77FE8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, method);
}
// T System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::Pop()
inline ListItem_tE112A367BDC021731139C4894491A00F05B295B3* Stack_1_Pop_m1A8D86259539819CABDEE147AA25878C8D8CBBF8 (Stack_1_t01139167DF236CFA36D235423224804125B77FE8* __this, const RuntimeMethod* method)
{
	ListItem_tE112A367BDC021731139C4894491A00F05B295B3* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.ListItem::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_SetAdapter_m72EBAFC39C01195C647B1EC6E0A57D7D0B378D1E (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, RuntimeObject* ___listView0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB2DCCA7B2E62102234C13AF4F67181EAAA01069A (Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* __this, int32_t ___key0, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::get_Item(TKey)
inline ListItem_tE112A367BDC021731139C4894491A00F05B295B3* Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002 (Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* __this, int32_t ___key0, const RuntimeMethod* method)
{
	ListItem_tE112A367BDC021731139C4894491A00F05B295B3* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::Push(T)
inline void Stack_1_Push_mD7F8A283E616A398BD9D2A86E70C5BCCAF19418F (Stack_1_t01139167DF236CFA36D235423224804125B77FE8* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void SimpleFileBrowser.ListItem::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_set_Position_m8605AB6B00F33563B51063DAEE72D65110B2CBAD_inline (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,SimpleFileBrowser.ListItem>::.ctor()
inline void Dictionary_2__ctor_mCCD7FB384FB3C1D2BB8F3A4012E78C3CF4858AF0 (Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Stack`1<SimpleFileBrowser.ListItem>::.ctor()
inline void Stack_1__ctor_m42F344C90F5E9BB82CB1E431275C0B960AF2E6C6 (Stack_1_t01139167DF236CFA36D235423224804125B77FE8* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))Stack_1__ctor_m5C333061E1285AC5B22F556173FBE157EF1A37B7_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.UISkin::InitializeFiletypeIcons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_InitializeFiletypeIcons_mA6B13A4B8D906480ABED33D8C70959FB25F94143 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_selectionColor_m2B7800A90FCE0840800CC01EC2C17059634B015E (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_caretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_caretColor_mF9C606AA2F9F123CB6AD078DF616DE35061FF830 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Dropdown_get_template_m6714116D7DA3F457F184B004785B4F017D50987A (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Dropdown_get_captionText_m0A8DEACA15F0DDFEE339462E03DF511B87389EF4 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Dropdown_get_itemText_m8E98EB1B2B2F8D5C14F0D4A02E620E9240966681 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleFileBrowser.FileSystemEntry::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemEntry_get_IsDirectory_m5B6EAD6DAC01DC97FA18BF8C82FB57CD009F9E53 (FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB0B8F6BEE382C9D20E9134C00BF2FC9855B5C852 (Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* __this, String_t* ___key0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727 (Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* __this, String_t* ___key0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2661B8E487FC9B4EA1F7DDA4F9BBD16CF8382B09 (Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::Clear()
inline void Dictionary_2_Clear_m6147BBE7935413D31B0CBE1C87D9D2974DCC0F6D (Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Image SimpleFileBrowser.FileBrowserItem::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* FileBrowserItem_get_Icon_mA236A217FDF67ABF9C1650452ADD466428416208 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// public Image Icon { get { return icon; } }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Image Icon { get { return icon; } }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserItem::get_TransformComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FileBrowserItem_get_TransformComponent_m54A7F99BE536DE843DFD8C2308122A7BA77CFFD9 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	{
		// if( m_transform == null )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_transform_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_transform = (RectTransform) transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_transform_19 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_19), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
	}

IL_0022:
	{
		// return m_transform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___m_transform_19;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_1;
		return L_5;
	}
}
// System.String SimpleFileBrowser.FileBrowserItem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserItem_get_Name_mB4AB269ACE59C310314C422DE06883842C6B1A15 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Name { get { return nameText.text; } }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___nameText_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public string Name { get { return nameText.text; } }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleFileBrowser.FileBrowserItem::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserItem_get_IsDirectory_mE2B9AE6ADA43DF5A8408EE693F2FDDD88D216D0F (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = __this->___U3CIsDirectoryU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::set_IsDirectory(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_mA1AD3AFE7B0E46210FE1289FE2D291046DEF66F7 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsDirectoryU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetFileBrowser(SimpleFileBrowser.FileBrowser,SimpleFileBrowser.UISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFileBrowser_m113A09B2B5105907F7A0565AABD1208E96E1DD35 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* ___fileBrowser0, UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* ___skin1, const RuntimeMethod* method) 
{
	{
		// this.fileBrowser = fileBrowser;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0 = ___fileBrowser0;
		__this->___fileBrowser_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileBrowser_9), (void*)L_0);
		// OnSkinRefreshed( skin, false );
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_1 = ___skin1;
		FileBrowserItem_OnSkinRefreshed_m9ACDA69EDA9861AC47C8A27F02984C03291C1051(__this, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetFile(UnityEngine.Sprite,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetFile_m01704B1D968B4F8DCFD399DC0D9FE8DC07A36DE5 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, bool ___isDirectory2, const RuntimeMethod* method) 
{
	{
		// this.icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___icon0;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// nameText.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___nameText_13;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// IsDirectory = isDirectory;
		bool L_4 = ___isDirectory2;
		FileBrowserItem_set_IsDirectory_mA1AD3AFE7B0E46210FE1289FE2D291046DEF66F7_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_Update_m57C36405867A0ECD4291F78C6C0068A00C66C1E0 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if( fileBrowser.AllowMultiSelection && Time.realtimeSinceStartup - pressTime >= TOGGLE_MULTI_SELECTION_HOLD_TIME )
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0 = __this->___fileBrowser_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = FileBrowser_get_AllowMultiSelection_m3CE75D1DD5A555180373AFE8E446D298F9CCB97C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_3 = __this->___pressTime_17;
		G_B3_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) >= ((float)(0.5f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// pressTime = Mathf.Infinity;
		__this->___pressTime_17 = (std::numeric_limits<float>::infinity());
		// fileBrowser.OnItemHeld( this );
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_5 = __this->___fileBrowser_9;
		NullCheck(L_5);
		FileBrowser_OnItemHeld_m4616B0F779C71648811095E004E6852065EC8F70(L_5, __this, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerClick_mA105524535DA9304C54057B9FBEFC4DC607E4FEF (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if( Time.realtimeSinceStartup - prevClickTime < DOUBLE_CLICK_TIME )
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_1 = __this->___prevClickTime_18;
		V_0 = (bool)((((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)(0.5f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// prevClickTime = 0f;
		__this->___prevClickTime_18 = (0.0f);
		// fileBrowser.OnItemSelected( this, true );
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_3 = __this->___fileBrowser_9;
		NullCheck(L_3);
		FileBrowser_OnItemSelected_m553F21D12D4F28911E2B04E2B5E14D434AE8B067(L_3, __this, (bool)1, NULL);
		goto IL_0050;
	}

IL_0035:
	{
		// prevClickTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___prevClickTime_18 = L_4;
		// fileBrowser.OnItemSelected( this, false );
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_5 = __this->___fileBrowser_9;
		NullCheck(L_5);
		FileBrowser_OnItemSelected_m553F21D12D4F28911E2B04E2B5E14D434AE8B067(L_5, __this, (bool)0, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerDown_mE37EAEE7FDF98BB1F7A9B349D3B3072A6132EC63 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// pressTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___pressTime_17 = L_0;
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerUp_mD4DAF0E75338718E388E09FB38D79C3A6B3A9616 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if( pressTime != Mathf.Infinity )
		float L_0 = __this->___pressTime_17;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)(std::numeric_limits<float>::infinity())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// pressTime = Mathf.Infinity;
		__this->___pressTime_17 = (std::numeric_limits<float>::infinity());
		goto IL_003b;
	}

IL_0022:
	{
		// else if( fileBrowser.MultiSelectionToggleSelectionMode )
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_2 = __this->___fileBrowser_9;
		NullCheck(L_2);
		bool L_3;
		L_3 = FileBrowser_get_MultiSelectionToggleSelectionMode_m0CC81C607E6309B5E0E706E5A8F74CF3E541A082(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// eventData.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___eventData0;
		NullCheck(L_5);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_5, (bool)0, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerEnter_m6E522B31AA73A624A7E2C1E0C072A2B9B37B5810 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if( !isSelected )
		bool L_0 = __this->___isSelected_14;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// background.color = skin.FileHoveredBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_10;
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_3 = __this->___skin_16;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = UISkin_get_FileHoveredBackgroundColor_mBBFA2C11C2DE553F634A40D8B2EFA414D8BED2C6(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerExit_m53AA3FB9005B0A92FA62C66BA1EED14DE61E1982 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	{
		// if( !isSelected )
		bool L_0 = __this->___isSelected_14;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// background.color = ( Position % 2 ) == 0 ? skin.FileNormalBackgroundColor : skin.FileAlternatingBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_10;
		int32_t L_3;
		L_3 = ListItem_get_Position_m49214519D4BBE5B0F33D6AAB4E3B8F49B580DEFD_inline(__this, NULL);
		G_B2_0 = L_2;
		if (!((int32_t)(L_3%2)))
		{
			G_B3_0 = L_2;
			goto IL_002b;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_4 = __this->___skin_16;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = UISkin_get_FileAlternatingBackgroundColor_m9C9A101FE901B7A8E530ED22A1AC3F603184B7EF(L_4, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B2_0;
		goto IL_0036;
	}

IL_002b:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_6 = __this->___skin_16;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = UISkin_get_FileNormalBackgroundColor_mB3AB273132682E837F5BFFDFDB3AF207D4C84A8A(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0036:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetSelected_mD98A715E8753CAAC93243CE7E865BB3E981FE3BB (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___isSelected0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B23_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B22_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B24_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B24_1 = NULL;
	{
		// this.isSelected = isSelected;
		bool L_0 = ___isSelected0;
		__this->___isSelected_14 = L_0;
		// background.color = isSelected ? skin.FileSelectedBackgroundColor : ( ( Position % 2 ) == 0 ? skin.FileNormalBackgroundColor : skin.FileAlternatingBackgroundColor );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___background_10;
		bool L_2 = ___isSelected0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B5_0 = L_1;
			goto IL_0035;
		}
	}
	{
		int32_t L_3;
		L_3 = ListItem_get_Position_m49214519D4BBE5B0F33D6AAB4E3B8F49B580DEFD_inline(__this, NULL);
		G_B2_0 = G_B1_0;
		if (!((int32_t)(L_3%2)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0028;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_4 = __this->___skin_16;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = UISkin_get_FileAlternatingBackgroundColor_m9C9A101FE901B7A8E530ED22A1AC3F603184B7EF(L_4, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B2_0;
		goto IL_0033;
	}

IL_0028:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_6 = __this->___skin_16;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = UISkin_get_FileNormalBackgroundColor_mB3AB273132682E837F5BFFDFDB3AF207D4C84A8A(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		G_B6_1 = G_B4_1;
		goto IL_0040;
	}

IL_0035:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_8 = __this->___skin_16;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = UISkin_get_FileSelectedBackgroundColor_m3E275E244C9580296423FEB3C26DF2D30C44BF37(L_8, NULL);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_0040:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B6_1, G_B6_0);
		// nameText.color = isSelected ? skin.FileSelectedTextColor : skin.FileNormalTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___nameText_13;
		bool L_11 = ___isSelected0;
		G_B7_0 = L_10;
		if (L_11)
		{
			G_B8_0 = L_10;
			goto IL_005c;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_12 = __this->___skin_16;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = UISkin_get_FileNormalTextColor_m858F74B10CCAF4618CA6E5C7167BAB80217D0A99(L_12, NULL);
		G_B9_0 = L_13;
		G_B9_1 = G_B7_0;
		goto IL_0067;
	}

IL_005c:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_14 = __this->___skin_16;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = UISkin_get_FileSelectedTextColor_mC1E14053CCF0BD5E03EC173BB7188B4DD0795EB4(L_14, NULL);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_0;
	}

IL_0067:
	{
		NullCheck(G_B9_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B9_1, G_B9_0);
		// if( isHidden )
		bool L_16 = __this->___isHidden_15;
		V_0 = L_16;
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		// Color c = nameText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___nameText_13;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		V_1 = L_19;
		// c.a = 0.55f;
		(&V_1)->___a_3 = (0.550000012f);
		// nameText.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___nameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = V_1;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
	}

IL_009e:
	{
		// if( multiSelectionToggle ) // Quick links don't have multi-selection toggle
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___multiSelectionToggle_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		V_2 = L_23;
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_022d;
		}
	}
	{
		// if( fileBrowser.MultiSelectionToggleSelectionMode && ( !IsDirectory || fileBrowser.PickerMode != FileBrowser.PickMode.Files ) )
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_25 = __this->___fileBrowser_9;
		NullCheck(L_25);
		bool L_26;
		L_26 = FileBrowser_get_MultiSelectionToggleSelectionMode_m0CC81C607E6309B5E0E706E5A8F74CF3E541A082(L_25, NULL);
		if (!L_26)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_27;
		L_27 = FileBrowserItem_get_IsDirectory_mE2B9AE6ADA43DF5A8408EE693F2FDDD88D216D0F_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_00d6;
		}
	}
	{
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_28 = __this->___fileBrowser_9;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = FileBrowser_get_PickerMode_m1E7F1A135BE57C9B4E56097009BC001E2CCDF616(L_28, NULL);
		G_B16_0 = ((!(((uint32_t)L_29) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B16_0 = 1;
	}

IL_00d7:
	{
		G_B18_0 = G_B16_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B18_0 = 0;
	}

IL_00da:
	{
		V_3 = (bool)G_B18_0;
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_0199;
		}
	}
	{
		// if( !multiSelectionToggle.gameObject.activeSelf )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___multiSelectionToggle_12;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_32, NULL);
		V_4 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		// multiSelectionToggle.gameObject.SetActive( true );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___multiSelectionToggle_12;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// Vector2 shiftAmount = new Vector2( multiSelectionToggle.rectTransform.sizeDelta.x, 0f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___multiSelectionToggle_12;
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_37, NULL);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_38, NULL);
		float L_40 = L_39.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), L_40, (0.0f), NULL);
		// icon.rectTransform.anchoredPosition += shiftAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___icon_11;
		NullCheck(L_41);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42;
		L_42 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_41, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = L_42;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_43, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_44, L_45, NULL);
		NullCheck(L_43);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_43, L_46, NULL);
		// nameText.rectTransform.anchoredPosition += shiftAmount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = __this->___nameText_13;
		NullCheck(L_47);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48;
		L_48 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_47, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = L_48;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_49, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_50, L_51, NULL);
		NullCheck(L_49);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_49, L_52, NULL);
	}

IL_016c:
	{
		// multiSelectionToggle.sprite = isSelected ? skin.FileMultiSelectionToggleOnIcon : skin.FileMultiSelectionToggleOffIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = __this->___multiSelectionToggle_12;
		bool L_54 = ___isSelected0;
		G_B22_0 = L_53;
		if (L_54)
		{
			G_B23_0 = L_53;
			goto IL_0182;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_55 = __this->___skin_16;
		NullCheck(L_55);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_56;
		L_56 = UISkin_get_FileMultiSelectionToggleOffIcon_m03AB5F1FC3C182BBB9D891A48A74236D419AF857(L_55, NULL);
		G_B24_0 = L_56;
		G_B24_1 = G_B22_0;
		goto IL_018d;
	}

IL_0182:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_57 = __this->___skin_16;
		NullCheck(L_57);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_58;
		L_58 = UISkin_get_FileMultiSelectionToggleOnIcon_mD78F39CDD08F1D545BAB8F5206634F0D0FBE395C(L_57, NULL);
		G_B24_0 = L_58;
		G_B24_1 = G_B23_0;
	}

IL_018d:
	{
		NullCheck(G_B24_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B24_1, G_B24_0, NULL);
		goto IL_022c;
	}

IL_0199:
	{
		// else if( multiSelectionToggle.gameObject.activeSelf )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = __this->___multiSelectionToggle_12;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		NullCheck(L_60);
		bool L_61;
		L_61 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_60, NULL);
		V_6 = L_61;
		bool L_62 = V_6;
		if (!L_62)
		{
			goto IL_022c;
		}
	}
	{
		// multiSelectionToggle.gameObject.SetActive( false );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = __this->___multiSelectionToggle_12;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// Vector2 shiftAmount = new Vector2( -multiSelectionToggle.rectTransform.sizeDelta.x, 0f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_65 = __this->___multiSelectionToggle_12;
		NullCheck(L_65);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66;
		L_66 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_65, NULL);
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_66, NULL);
		float L_68 = L_67.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_7), ((-L_68)), (0.0f), NULL);
		// icon.rectTransform.anchoredPosition += shiftAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___icon_11;
		NullCheck(L_69);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_70;
		L_70 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_69, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = L_70;
		NullCheck(L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_71, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_72, L_73, NULL);
		NullCheck(L_71);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_71, L_74, NULL);
		// nameText.rectTransform.anchoredPosition += shiftAmount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___nameText_13;
		NullCheck(L_75);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_76;
		L_76 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_75, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_77 = L_76;
		NullCheck(L_77);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_77, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_78, L_79, NULL);
		NullCheck(L_77);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_77, L_80, NULL);
		// prevClickTime = 0f;
		__this->___prevClickTime_18 = (0.0f);
	}

IL_022c:
	{
	}

IL_022d:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::SetHidden(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_SetHidden_mC9BA839FA2A4429730135DC29989E8B441E76525 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___isHidden0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B8_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B9_1 = NULL;
	{
		// this.isHidden = isHidden;
		bool L_0 = ___isHidden0;
		__this->___isHidden_15 = L_0;
		// Color c = icon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___icon_11;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// c.a = isHidden ? 0.5f : 1f;
		bool L_3 = ___isHidden0;
		G_B1_0 = (&V_0);
		if (L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = (0.5f);
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		G_B3_1->___a_3 = G_B3_0;
		// icon.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___icon_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// c = nameText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___nameText_13;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		V_0 = L_7;
		// c.a = isHidden ? 0.55f : ( isSelected ? skin.FileSelectedTextColor.a : skin.FileNormalTextColor.a );
		bool L_8 = ___isHidden0;
		G_B4_0 = (&V_0);
		if (L_8)
		{
			G_B8_0 = (&V_0);
			goto IL_0074;
		}
	}
	{
		bool L_9 = __this->___isSelected_14;
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0062;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_10 = __this->___skin_16;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = UISkin_get_FileNormalTextColor_m858F74B10CCAF4618CA6E5C7167BAB80217D0A99(L_10, NULL);
		float L_12 = L_11.___a_3;
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_0072;
	}

IL_0062:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_13 = __this->___skin_16;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = UISkin_get_FileSelectedTextColor_mC1E14053CCF0BD5E03EC173BB7188B4DD0795EB4(L_13, NULL);
		float L_15 = L_14.___a_3;
		G_B7_0 = L_15;
		G_B7_1 = G_B6_0;
	}

IL_0072:
	{
		G_B9_0 = G_B7_0;
		G_B9_1 = G_B7_1;
		goto IL_0079;
	}

IL_0074:
	{
		G_B9_0 = (0.550000012f);
		G_B9_1 = G_B8_0;
	}

IL_0079:
	{
		G_B9_1->___a_3 = G_B9_0;
		// nameText.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___nameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnSkinRefreshed(SimpleFileBrowser.UISkin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnSkinRefreshed_m9ACDA69EDA9861AC47C8A27F02984C03291C1051 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* ___skin0, bool ___isInitialized1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* G_B2_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* G_B1_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* G_B3_2 = NULL;
	{
		// this.skin = skin;
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_0 = ___skin0;
		__this->___skin_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skin_16), (void*)L_0);
		// TransformComponent.sizeDelta = new Vector2( TransformComponent.sizeDelta.x, skin.FileHeight );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = FileBrowserItem_get_TransformComponent_m54A7F99BE536DE843DFD8C2308122A7BA77CFFD9(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = FileBrowserItem_get_TransformComponent_m54A7F99BE536DE843DFD8C2308122A7BA77CFFD9(__this, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_5 = ___skin0;
		NullCheck(L_5);
		float L_6;
		L_6 = UISkin_get_FileHeight_m490761AA2FCD12C90DE5F023FC3353965867FDF8(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_7, NULL);
		// skin.ApplyTo( nameText, isSelected ? skin.FileSelectedTextColor : skin.FileNormalTextColor );
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_8 = ___skin0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___nameText_13;
		bool L_10 = __this->___isSelected_14;
		G_B1_0 = L_9;
		G_B1_1 = L_8;
		if (L_10)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_8;
			goto IL_0046;
		}
	}
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_11 = ___skin0;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = UISkin_get_FileNormalTextColor_m858F74B10CCAF4618CA6E5C7167BAB80217D0A99(L_11, NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_004c;
	}

IL_0046:
	{
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_13 = ___skin0;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = UISkin_get_FileSelectedTextColor_mC1E14053CCF0BD5E03EC173BB7188B4DD0795EB4(L_13, NULL);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_004c:
	{
		NullCheck(G_B3_2);
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(G_B3_2, G_B3_1, G_B3_0, NULL);
		// icon.rectTransform.sizeDelta = new Vector2( icon.rectTransform.sizeDelta.x, -skin.FileIconsPadding );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___icon_11;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_15, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___icon_11;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_17, NULL);
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_18, NULL);
		float L_20 = L_19.___x_0;
		UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* L_21 = ___skin0;
		NullCheck(L_21);
		float L_22;
		L_22 = UISkin_get_FileIconsPadding_m3F6E9AB23B917C2804ECE55F73FF7ADD7591F0D5(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), L_20, ((-L_22)), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_16, L_23, NULL);
		// if( isInitialized )
		bool L_24 = ___isInitialized1;
		V_0 = L_24;
		bool L_25 = V_0;
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		// SetSelected( isSelected );
		bool L_26 = __this->___isSelected_14;
		FileBrowserItem_SetSelected_mD98A715E8753CAAC93243CE7E865BB3E981FE3BB(__this, L_26, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem__ctor_mFD76D8703595FF18AE3C0C30455FD2E877BC5DB8 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	{
		// private float pressTime = Mathf.Infinity;
		__this->___pressTime_17 = (std::numeric_limits<float>::infinity());
		ListItem__ctor_m0F2F59D6C18F974CC520A3E73153EA9C25AE2353(__this, NULL);
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
// System.Void SimpleFileBrowser.FileBrowserMovement::Initialize(SimpleFileBrowser.FileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_Initialize_mE6E2DCBA906CED5E93919B74BACC873B18DC8C5A (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* ___fileBrowser0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.fileBrowser = fileBrowser;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0 = ___fileBrowser0;
		__this->___fileBrowser_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileBrowser_4), (void*)L_0);
		// canvasTR = fileBrowser.GetComponent<RectTransform>();
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_1 = ___fileBrowser0;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_1, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___canvasTR_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasTR_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnDragStarted(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnDragStarted_mB878CDC08ABE141804FA0E6DC015D25C2F4E8C02 (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// canvasCam = pointer.pressEventCamera;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_1, NULL);
		__this->___canvasCam_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasCam_6), (void*)L_2);
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( window, pointer.pressPosition, canvasCam, out initialTouchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___window_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___canvasCam_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___initialTouchPos_9);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_3, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnDrag(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnDrag_m3CA70167EDA0F00781090D5698F1B5B6A9D95F1B (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( window, pointer.position, canvasCam, out touchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___window_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___canvasCam_6;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_4, (&V_1), NULL);
		// window.anchoredPosition += touchPos - initialTouchPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___window_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = L_6;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___initialTouchPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_9, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_12, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnEndDrag(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnEndDrag_m7CD70CC03FEF03871A31AECFE52D69AD85D4DB9B (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// fileBrowser.EnsureWindowIsWithinBounds();
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_EnsureWindowIsWithinBounds_m6052BE3802013AF0A0F003D19C6A132E144F3EE6(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnResizeStarted(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnResizeStarted_m7C591C6E5CDF08E378B0404CC6E491B93D4F6DEE (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// canvasCam = pointer.pressEventCamera;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_1, NULL);
		__this->___canvasCam_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasCam_6), (void*)L_2);
		// initialAnchoredPos = window.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___window_7;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		__this->___initialAnchoredPos_10 = L_4;
		// initialSizeDelta = window.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___window_7;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_5, NULL);
		__this->___initialSizeDelta_11 = L_6;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( canvasTR, pointer.pressPosition, canvasCam, out initialTouchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___canvasTR_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = V_0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___canvasCam_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___initialTouchPos_9);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_7, L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnResize(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnResize_m2F86FCF2FFFE5B82FD8F8E33400488B3AFC63165 (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// PointerEventData pointer = (PointerEventData) data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( canvasTR, pointer.position, canvasCam, out touchPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___canvasTR_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___canvasCam_6;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_4, (&V_1), NULL);
		// Vector2 delta = touchPos - initialTouchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___initialTouchPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// Vector2 newSize = initialSizeDelta + new Vector2( delta.x, -delta.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___initialSizeDelta_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_11, ((-L_13)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_9, L_14, NULL);
		V_3 = L_15;
		// Vector2 canvasSize = canvasTR.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___canvasTR_5;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_16, NULL);
		V_4 = L_17;
		// if( newSize.x < fileBrowser.minWidth ) newSize.x = fileBrowser.minWidth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		float L_19 = L_18.___x_0;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_20 = __this->___fileBrowser_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___minWidth_24;
		V_5 = (bool)((((float)L_19) < ((float)((float)L_21)))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		// if( newSize.x < fileBrowser.minWidth ) newSize.x = fileBrowser.minWidth;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_23 = __this->___fileBrowser_4;
		NullCheck(L_23);
		int32_t L_24 = L_23->___minWidth_24;
		(&V_3)->___x_0 = ((float)L_24);
	}

IL_0087:
	{
		// if( newSize.y < fileBrowser.minHeight ) newSize.y = fileBrowser.minHeight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_3;
		float L_26 = L_25.___y_1;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_27 = __this->___fileBrowser_4;
		NullCheck(L_27);
		int32_t L_28 = L_27->___minHeight_25;
		V_6 = (bool)((((float)L_26) < ((float)((float)L_28)))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// if( newSize.y < fileBrowser.minHeight ) newSize.y = fileBrowser.minHeight;
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_30 = __this->___fileBrowser_4;
		NullCheck(L_30);
		int32_t L_31 = L_30->___minHeight_25;
		(&V_3)->___y_1 = ((float)L_31);
	}

IL_00b4:
	{
		// if( newSize.x > canvasSize.x ) newSize.x = canvasSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_3;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_4;
		float L_35 = L_34.___x_0;
		V_7 = (bool)((((float)L_33) > ((float)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		// if( newSize.x > canvasSize.x ) newSize.x = canvasSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_4;
		float L_38 = L_37.___x_0;
		(&V_3)->___x_0 = L_38;
	}

IL_00d7:
	{
		// if( newSize.y > canvasSize.y ) newSize.y = canvasSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_3;
		float L_40 = L_39.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_4;
		float L_42 = L_41.___y_1;
		V_8 = (bool)((((float)L_40) > ((float)L_42))? 1 : 0);
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_00fa;
		}
	}
	{
		// if( newSize.y > canvasSize.y ) newSize.y = canvasSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_4;
		float L_45 = L_44.___y_1;
		(&V_3)->___y_1 = L_45;
	}

IL_00fa:
	{
		// newSize.x = (int) newSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_3;
		float L_47 = L_46.___x_0;
		(&V_3)->___x_0 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_47));
		// newSize.y = (int) newSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_3;
		float L_49 = L_48.___y_1;
		(&V_3)->___y_1 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_49));
		// delta = newSize - initialSizeDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = __this->___initialSizeDelta_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_50, L_51, NULL);
		V_2 = L_52;
		// window.anchoredPosition = initialAnchoredPos + new Vector2( delta.x * 0.5f, delta.y * -0.5f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = __this->___window_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = __this->___initialAnchoredPos_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_2;
		float L_56 = L_55.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_2;
		float L_58 = L_57.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), ((float)il2cpp_codegen_multiply(L_56, (0.5f))), ((float)il2cpp_codegen_multiply(L_58, (-0.5f))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_54, L_59, NULL);
		NullCheck(L_53);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_53, L_60, NULL);
		// if( window.sizeDelta != newSize )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_61 = __this->___window_7;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_61, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_3;
		bool L_64;
		L_64 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_62, L_63, NULL);
		V_9 = L_64;
		bool L_65 = V_9;
		if (!L_65)
		{
			goto IL_018c;
		}
	}
	{
		// window.sizeDelta = newSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66 = __this->___window_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_3;
		NullCheck(L_66);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_66, L_67, NULL);
		// fileBrowser.OnWindowDimensionsChanged( newSize );
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_68 = __this->___fileBrowser_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_3;
		NullCheck(L_68);
		FileBrowser_OnWindowDimensionsChanged_mF3F9FE60AFAAD85235F6AF5E5F6E28530C397A0C(L_68, L_69, NULL);
	}

IL_018c:
	{
		// listView.OnViewportDimensionsChanged();
		RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* L_70 = __this->___listView_8;
		NullCheck(L_70);
		RecycledListView_OnViewportDimensionsChanged_mB6C2DC3A7A045804CA21594CADB070B00EA8C04B(L_70, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::OnEndResize(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement_OnEndResize_m8425FEDD990DD74A6574095F42D184CD6A5DD4CE (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// fileBrowser.EnsureWindowIsWithinBounds();
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0 = __this->___fileBrowser_4;
		NullCheck(L_0);
		FileBrowser_EnsureWindowIsWithinBounds_m6052BE3802013AF0A0F003D19C6A132E144F3EE6(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserMovement__ctor_mD8568EF6C0AA08152B980E6D05BD4879030B4F8E (FileBrowserMovement_tE0654C45955E7E9C00D84B6E9FEC55E4C896DDC5* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 initialTouchPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___initialTouchPos_9 = L_0;
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
// System.String SimpleFileBrowser.FileBrowserQuickLink::get_TargetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserQuickLink_get_TargetPath_mFF4A822E3C9FFDE3F531E1376E6B1797D64AD756 (FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string TargetPath { get { return m_targetPath; } }
		String_t* L_0 = __this->___m_targetPath_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string TargetPath { get { return m_targetPath; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.FileBrowserQuickLink::SetQuickLink(UnityEngine.Sprite,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserQuickLink_SetQuickLink_mCA309400C8524097232B24883F14BAFE92D0C900 (FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, String_t* ___name1, String_t* ___targetPath2, const RuntimeMethod* method) 
{
	{
		// SetFile( icon, name, true );
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___icon0;
		String_t* L_1 = ___name1;
		FileBrowserItem_SetFile_m01704B1D968B4F8DCFD399DC0D9FE8DC07A36DE5(__this, L_0, L_1, (bool)1, NULL);
		// m_targetPath = targetPath;
		String_t* L_2 = ___targetPath2;
		__this->___m_targetPath_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_targetPath_21), (void*)L_2);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserQuickLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserQuickLink__ctor_m5BDF5B0833F6CC163E18BCCFDF01CCE9DCADC3D1 (FileBrowserQuickLink_t36CB903EE813FED2192202523A7203E8864FD71E* __this, const RuntimeMethod* method) 
{
	{
		FileBrowserItem__ctor_mFD76D8703595FF18AE3C0C30455FD2E877BC5DB8(__this, NULL);
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
// UnityEngine.UI.InputField SimpleFileBrowser.FileBrowserRenamedItem::get_InputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* FileBrowserRenamedItem_get_InputField_m91346D55198B298E74E3BCF1E0F0217F89BDDDD4 (FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* __this, const RuntimeMethod* method) 
{
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* V_0 = NULL;
	{
		// public InputField InputField { get { return nameInputField; } }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___nameInputField_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public InputField InputField { get { return nameInputField; } }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RectTransform SimpleFileBrowser.FileBrowserRenamedItem::get_TransformComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FileBrowserRenamedItem_get_TransformComponent_m5028BCA8A4B50F5F12E62676D6606F29DD8D54CD (FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	{
		// if( m_transform == null )
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_transform_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_transform = (RectTransform) transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_transform_8 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_8), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
	}

IL_0022:
	{
		// return m_transform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___m_transform_8;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_1;
		return L_5;
	}
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::Show(System.String,UnityEngine.Color,UnityEngine.Sprite,SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem_Show_m55D9787654356551E45B68F837AF154EB31613F0 (FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* __this, String_t* ___initialFilename0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon2, OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* ___onRenameCompleted3, const RuntimeMethod* method) 
{
	{
		// background.color = backgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___background_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___backgroundColor1;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// this.icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___icon_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___icon2;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// this.onRenameCompleted = onRenameCompleted;
		OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* L_4 = ___onRenameCompleted3;
		__this->___onRenameCompleted_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onRenameCompleted_7), (void*)L_4);
		// transform.SetAsLastSibling();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_5, NULL);
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// nameInputField.text = initialFilename;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___nameInputField_6;
		String_t* L_8 = ___initialFilename0;
		NullCheck(L_7);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_7, L_8, NULL);
		// nameInputField.ActivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___nameInputField_6;
		NullCheck(L_9);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_9, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::OnInputFieldEndEdit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem_OnInputFieldEndEdit_m5A25798DA5AB1238A465A6F2FB29C87527402452 (FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if( EventSystem.current && !EventSystem.current.alreadySelecting && EventSystem.current.currentSelectedGameObject == nameInputField.gameObject )
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = EventSystem_get_alreadySelecting_m3DB9F620A5E2976EBF1362F95C05C12031BACCC4(L_3, NULL);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_5, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___nameInputField_6;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0043;
	}

IL_0042:
	{
		G_B4_0 = 0;
	}

IL_0043:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject( null );
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_11;
		L_11 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_11);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_11, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0053:
	{
		// if( onRenameCompleted != null )
		OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* L_12 = __this->___onRenameCompleted_7;
		V_1 = (bool)((!(((RuntimeObject*)(OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// onRenameCompleted( filename );
		OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* L_14 = __this->___onRenameCompleted_7;
		String_t* L_15 = ___filename0;
		NullCheck(L_14);
		OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_inline(L_14, L_15, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserRenamedItem__ctor_m8638B851D48F656DD2878E36B40CED94587E9A92 (FileBrowserRenamedItem_tA7DE040D258C479A7C3D9C169F1850CD27D115A6* __this, const RuntimeMethod* method) 
{
	{
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
void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_Multicast(OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* currentDelegate = reinterpret_cast<OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_Open(OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___filename0, method);
}
void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_OpenStaticInvoker(OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___filename0);
}
void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_ClosedStaticInvoker(OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___filename0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84 (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___filename0' to native representation
	char* ____filename0_marshaled = NULL;
	____filename0_marshaled = il2cpp_codegen_marshal_string(___filename0);

	// Native function invocation
	il2cppPInvokeFunc(____filename0_marshaled);

	// Marshaling cleanup of parameter '___filename0' native representation
	il2cpp_codegen_marshal_free(____filename0_marshaled);
	____filename0_marshaled = NULL;

}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted__ctor_m48E13B91ED45B15352E140198FC3415D9A888858 (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_Multicast;
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21 (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRenameCompleted_BeginInvoke_mEA6D5D7CE1A2D85340E70E28964064BFDD3247E2 (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___filename0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimpleFileBrowser.FileBrowserRenamedItem/OnRenameCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenameCompleted_EndInvoke_m296469B8DE1FD1150FA9EDC0F28A386571EA0F95 (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SimpleFileBrowser.NonDrawingGraphic::SetMaterialDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetMaterialDirty_m64684F184E0307DE955559C0E57F748B41B879A4 (NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetMaterialDirty() { return; }
		goto IL_0003;
	}

IL_0003:
	{
		// public override void SetMaterialDirty() { return; }
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::SetVerticesDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetVerticesDirty_m8B4982B91710D4046B2751FFD62A6B193A100AB6 (NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetVerticesDirty() { return; }
		goto IL_0003;
	}

IL_0003:
	{
		// public override void SetVerticesDirty() { return; }
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_OnPopulateMesh_mE2F59B5470ACE70E2934C5A873CFE863F06E454C (NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// return;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.NonDrawingGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic__ctor_m561CB90871C92DBC8E0839BA9C92D5929551709F (NonDrawingGraphic_t872FB18859A18D5027BBD09E6FCE64975CDAB313* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D(__this, NULL);
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
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_Multicast(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* currentDelegate = reinterpret_cast<OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_tE112A367BDC021731139C4894491A00F05B295B3*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_Open(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ListItem_tE112A367BDC021731139C4894491A00F05B295B3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenStaticInvoker(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ListItem_tE112A367BDC021731139C4894491A00F05B295B3* >::Invoke(__this->___method_ptr_0, method, NULL, ___item0);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_ClosedStaticInvoker(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___item0);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenVirtual(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___item0);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenInterface(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___item0);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenGenericVirtual(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___item0);
}
void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenGenericInterface(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___item0);
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler__ctor_mF80210604B9059FD235A2C0339A14F815DF69314 (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_Open;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_Multicast;
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::Invoke(SimpleFileBrowser.ListItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_tE112A367BDC021731139C4894491A00F05B295B3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleFileBrowser.OnItemClickedHandler::BeginInvoke(SimpleFileBrowser.ListItem,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnItemClickedHandler_BeginInvoke_mEDA83A6B63004CDECEEF29096BBF7F73BC00843B (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimpleFileBrowser.OnItemClickedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemClickedHandler_EndInvoke_mB9E3F49BD94DCB436D005D25DC07B28A5DD44AF1 (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Object SimpleFileBrowser.ListItem::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListItem_get_Tag_m54D91B8F78C5BF1987B21B392983057ECED6D383 (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) 
{
	{
		// public object Tag { get; set; }
		RuntimeObject* L_0 = __this->___U3CTagU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.ListItem::set_Tag(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_set_Tag_mF48352498EE087564986E5BF9E9CDACA78C342EA (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Tag { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTagU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTagU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 SimpleFileBrowser.ListItem::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListItem_get_Position_m49214519D4BBE5B0F33D6AAB4E3B8F49B580DEFD (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SimpleFileBrowser.ListItem::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_set_Position_m8605AB6B00F33563B51063DAEE72D65110B2CBAD (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_SetAdapter_m72EBAFC39C01195C647B1EC6E0A57D7D0B378D1E (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, RuntimeObject* ___listView0, const RuntimeMethod* method) 
{
	{
		// this.adapter = listView;
		RuntimeObject* L_0 = ___listView0;
		__this->___adapter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_OnClick_m251412E71A6074C6C7BA2101009FC298987A481A (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if( adapter.OnItemClicked != null )
		RuntimeObject* L_0 = __this->___adapter_6;
		NullCheck(L_0);
		OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* L_1;
		L_1 = InterfaceFuncInvoker0< OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* >::Invoke(0 /* SimpleFileBrowser.OnItemClickedHandler SimpleFileBrowser.IListViewAdapter::get_OnItemClicked() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((!(((RuntimeObject*)(OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// adapter.OnItemClicked( this );
		RuntimeObject* L_3 = __this->___adapter_6;
		NullCheck(L_3);
		OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* L_4;
		L_4 = InterfaceFuncInvoker0< OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* >::Invoke(0 /* SimpleFileBrowser.OnItemClickedHandler SimpleFileBrowser.IListViewAdapter::get_OnItemClicked() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_inline(L_4, __this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.ListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem__ctor_m0F2F59D6C18F974CC520A3E73153EA9C25AE2353 (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleFileBrowser.RecycledListView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_Start_m624BF5D74E7F55A5344C9ED80773F6CC601939DC (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecycledListView_U3CStartU3Eb__10_0_mB8CB8298DCD1DFA739C0DD5C6394175D0C9D80EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___viewportTransform_4;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		__this->___viewportHeight_8 = L_2;
		// GetComponent<ScrollRect>().onValueChanged.AddListener( ( pos ) => UpdateItemsInTheList() );
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3;
		L_3 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		NullCheck(L_3);
		ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* L_4;
		L_4 = ScrollRect_get_onValueChanged_mA6AF3832A97E82D31BB8C20BCD6E87A300E56C05(L_3, NULL);
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_5 = (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)il2cpp_codegen_object_new(UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A(L_5, __this, (intptr_t)((void*)RecycledListView_U3CStartU3Eb__10_0_mB8CB8298DCD1DFA739C0DD5C6394175D0C9D80EA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851(L_4, L_5, UnityEvent_1_AddListener_m2B74313C91E347D6AD24CE5B036E190E77E70851_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::SetAdapter(SimpleFileBrowser.IListViewAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_SetAdapter_mF900098FEB7DCE2041BE234FD593A9DDD7E20699 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, RuntimeObject* ___adapter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.adapter = adapter;
		RuntimeObject* L_0 = ___adapter0;
		__this->___adapter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_11), (void*)L_0);
		// itemHeight = adapter.ItemHeight;
		RuntimeObject* L_1 = ___adapter0;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single SimpleFileBrowser.IListViewAdapter::get_ItemHeight() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_1);
		__this->___itemHeight_6 = L_2;
		// _1OverItemHeight = 1f / itemHeight;
		float L_3 = __this->___itemHeight_6;
		__this->____1OverItemHeight_7 = ((float)((1.0f)/L_3));
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::OnSkinRefreshed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_OnSkinRefreshed_mA211E24C82988639442BFFB7077CCC5073C7B3EC (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if( currentTopIndex >= 0 )
		int32_t L_0 = __this->___currentTopIndex_12;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// DestroyItemsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_2 = __this->___currentTopIndex_12;
		int32_t L_3 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201(__this, L_2, L_3, NULL);
		// currentTopIndex = currentBottomIndex = -1;
		int32_t L_4 = (-1);
		V_1 = L_4;
		__this->___currentBottomIndex_13 = L_4;
		int32_t L_5 = V_1;
		__this->___currentTopIndex_12 = L_5;
	}

IL_0036:
	{
		// itemHeight = adapter.ItemHeight;
		RuntimeObject* L_6 = __this->___adapter_11;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single SimpleFileBrowser.IListViewAdapter::get_ItemHeight() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_6);
		__this->___itemHeight_6 = L_7;
		// _1OverItemHeight = 1f / itemHeight;
		float L_8 = __this->___itemHeight_6;
		__this->____1OverItemHeight_7 = ((float)((1.0f)/L_8));
		// UpdateList();
		RecycledListView_UpdateList_mDB5B2A69EA3A9DD770D372547E3F183554B3EE4F(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateList_mDB5B2A69EA3A9DD770D372547E3F183554B3EE4F (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float newHeight = Mathf.Max( 1f, adapter.Count * itemHeight );
		RuntimeObject* L_0 = __this->___adapter_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_0);
		float L_2 = __this->___itemHeight_6;
		float L_3;
		L_3 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), ((float)il2cpp_codegen_multiply(((float)L_1), L_2)), NULL);
		V_0 = L_3;
		// contentTransform.sizeDelta = new Vector2( 0f, newHeight );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___contentTransform_5;
		float L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_6, NULL);
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___viewportTransform_4;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		__this->___viewportHeight_8 = L_9;
		// UpdateItemsInTheList( true );
		RecycledListView_UpdateItemsInTheList_m55C6ABE3F27C06D0AC7483627ED8D51FBAF83AF4(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::OnViewportDimensionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_OnViewportDimensionsChanged_mB6C2DC3A7A045804CA21594CADB070B00EA8C04B (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// viewportHeight = viewportTransform.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___viewportTransform_4;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		__this->___viewportHeight_8 = L_2;
		// UpdateItemsInTheList();
		RecycledListView_UpdateItemsInTheList_m55C6ABE3F27C06D0AC7483627ED8D51FBAF83AF4(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemsInTheList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemsInTheList_m55C6ABE3F27C06D0AC7483627ED8D51FBAF83AF4 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, bool ___updateAllVisibleItems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B10_0 = 0;
	{
		// if( adapter.Count > 0 )
		RuntimeObject* L_0 = __this->___adapter_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_01dd;
		}
	}
	{
		// float contentPos = contentTransform.anchoredPosition.y - 1f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___contentTransform_5;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		float L_5 = L_4.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, (1.0f)));
		// int newTopIndex = (int) ( contentPos * _1OverItemHeight );
		float L_6 = V_1;
		float L_7 = __this->____1OverItemHeight_7;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_6, L_7)));
		// int newBottomIndex = (int) ( ( contentPos + viewportHeight + 2f ) * _1OverItemHeight );
		float L_8 = V_1;
		float L_9 = __this->___viewportHeight_8;
		float L_10 = __this->____1OverItemHeight_7;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_8, L_9)), (2.0f))), L_10)));
		// if( newTopIndex < 0 )
		int32_t L_11 = V_2;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// newTopIndex = 0;
		V_2 = 0;
	}

IL_005b:
	{
		// if( newBottomIndex > adapter.Count - 1 )
		int32_t L_13 = V_3;
		RuntimeObject* L_14 = __this->___adapter_11;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_14);
		V_5 = (bool)((((int32_t)L_13) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1))))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		// newBottomIndex = adapter.Count - 1;
		RuntimeObject* L_17 = __this->___adapter_11;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 SimpleFileBrowser.IListViewAdapter::get_Count() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_17);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_007f:
	{
		// if( currentTopIndex == -1 )
		int32_t L_19 = __this->___currentTopIndex_12;
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// updateAllVisibleItems = true;
		___updateAllVisibleItems0 = (bool)1;
		// currentTopIndex = newTopIndex;
		int32_t L_21 = V_2;
		__this->___currentTopIndex_12 = L_21;
		// currentBottomIndex = newBottomIndex;
		int32_t L_22 = V_3;
		__this->___currentBottomIndex_13 = L_22;
		// CreateItemsBetweenIndices( newTopIndex, newBottomIndex );
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85(__this, L_23, L_24, NULL);
		goto IL_01be;
	}

IL_00af:
	{
		// if( newBottomIndex < currentTopIndex || newTopIndex > currentBottomIndex )
		int32_t L_25 = V_3;
		int32_t L_26 = __this->___currentTopIndex_12;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_27 = V_2;
		int32_t L_28 = __this->___currentBottomIndex_13;
		G_B10_0 = ((((int32_t)L_27) > ((int32_t)L_28))? 1 : 0);
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B10_0 = 1;
	}

IL_00c5:
	{
		V_7 = (bool)G_B10_0;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00f1;
		}
	}
	{
		// updateAllVisibleItems = true;
		___updateAllVisibleItems0 = (bool)1;
		// DestroyItemsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_30 = __this->___currentTopIndex_12;
		int32_t L_31 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201(__this, L_30, L_31, NULL);
		// CreateItemsBetweenIndices( newTopIndex, newBottomIndex );
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85(__this, L_32, L_33, NULL);
		goto IL_01af;
	}

IL_00f1:
	{
		// if( newTopIndex > currentTopIndex )
		int32_t L_34 = V_2;
		int32_t L_35 = __this->___currentTopIndex_12;
		V_8 = (bool)((((int32_t)L_34) > ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_0113;
		}
	}
	{
		// DestroyItemsBetweenIndices( currentTopIndex, newTopIndex - 1 );
		int32_t L_37 = __this->___currentTopIndex_12;
		int32_t L_38 = V_2;
		RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201(__this, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, 1)), NULL);
	}

IL_0113:
	{
		// if( newBottomIndex < currentBottomIndex )
		int32_t L_39 = V_3;
		int32_t L_40 = __this->___currentBottomIndex_13;
		V_9 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		// DestroyItemsBetweenIndices( newBottomIndex + 1, currentBottomIndex );
		int32_t L_42 = V_3;
		int32_t L_43 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201(__this, ((int32_t)il2cpp_codegen_add(L_42, 1)), L_43, NULL);
	}

IL_0134:
	{
		// if( newTopIndex < currentTopIndex )
		int32_t L_44 = V_2;
		int32_t L_45 = __this->___currentTopIndex_12;
		V_10 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_0171;
		}
	}
	{
		// CreateItemsBetweenIndices( newTopIndex, currentTopIndex - 1 );
		int32_t L_47 = V_2;
		int32_t L_48 = __this->___currentTopIndex_12;
		RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85(__this, L_47, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), NULL);
		// if( !updateAllVisibleItems )
		bool L_49 = ___updateAllVisibleItems0;
		V_11 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_0170;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( newTopIndex, currentTopIndex - 1 );
		int32_t L_51 = V_2;
		int32_t L_52 = __this->___currentTopIndex_12;
		RecycledListView_UpdateItemContentsBetweenIndices_mE71583AFA6393C6B6A2358F76927FB069438B7C9(__this, L_51, ((int32_t)il2cpp_codegen_subtract(L_52, 1)), NULL);
	}

IL_0170:
	{
	}

IL_0171:
	{
		// if( newBottomIndex > currentBottomIndex )
		int32_t L_53 = V_3;
		int32_t L_54 = __this->___currentBottomIndex_13;
		V_12 = (bool)((((int32_t)L_53) > ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_01ae;
		}
	}
	{
		// CreateItemsBetweenIndices( currentBottomIndex + 1, newBottomIndex );
		int32_t L_56 = __this->___currentBottomIndex_13;
		int32_t L_57 = V_3;
		RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85(__this, ((int32_t)il2cpp_codegen_add(L_56, 1)), L_57, NULL);
		// if( !updateAllVisibleItems )
		bool L_58 = ___updateAllVisibleItems0;
		V_13 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_01ad;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( currentBottomIndex + 1, newBottomIndex );
		int32_t L_60 = __this->___currentBottomIndex_13;
		int32_t L_61 = V_3;
		RecycledListView_UpdateItemContentsBetweenIndices_mE71583AFA6393C6B6A2358F76927FB069438B7C9(__this, ((int32_t)il2cpp_codegen_add(L_60, 1)), L_61, NULL);
	}

IL_01ad:
	{
	}

IL_01ae:
	{
	}

IL_01af:
	{
		// currentTopIndex = newTopIndex;
		int32_t L_62 = V_2;
		__this->___currentTopIndex_12 = L_62;
		// currentBottomIndex = newBottomIndex;
		int32_t L_63 = V_3;
		__this->___currentBottomIndex_13 = L_63;
	}

IL_01be:
	{
		// if( updateAllVisibleItems )
		bool L_64 = ___updateAllVisibleItems0;
		V_14 = L_64;
		bool L_65 = V_14;
		if (!L_65)
		{
			goto IL_01da;
		}
	}
	{
		// UpdateItemContentsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_66 = __this->___currentTopIndex_12;
		int32_t L_67 = __this->___currentBottomIndex_13;
		RecycledListView_UpdateItemContentsBetweenIndices_mE71583AFA6393C6B6A2358F76927FB069438B7C9(__this, L_66, L_67, NULL);
	}

IL_01da:
	{
		goto IL_020b;
	}

IL_01dd:
	{
		// else if( currentTopIndex != -1 )
		int32_t L_68 = __this->___currentTopIndex_12;
		V_15 = (bool)((((int32_t)((((int32_t)L_68) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_69 = V_15;
		if (!L_69)
		{
			goto IL_020b;
		}
	}
	{
		// DestroyItemsBetweenIndices( currentTopIndex, currentBottomIndex );
		int32_t L_70 = __this->___currentTopIndex_12;
		int32_t L_71 = __this->___currentBottomIndex_13;
		RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201(__this, L_70, L_71, NULL);
		// currentTopIndex = -1;
		__this->___currentTopIndex_12 = (-1);
	}

IL_020b:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::CreateItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemsBetweenIndices_m429BB2B660C88407528C6F8D3EDE86B7AC688E85 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_0013;
	}

IL_0005:
	{
		// CreateItemAtIndex( i );
		int32_t L_1 = V_0;
		RecycledListView_CreateItemAtIndex_m0A47C8737153B21BFD8616E3DC9FC3E0FA678404(__this, L_1, NULL);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0013:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_3 = V_0;
		int32_t L_4 = ___bottomIndex1;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::CreateItemAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_CreateItemAtIndex_m0A47C8737153B21BFD8616E3DC9FC3E0FA678404 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB2DCCA7B2E62102234C13AF4F67181EAAA01069A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m1A8D86259539819CABDEE147AA25878C8D8CBBF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m154AB2542CB144A59DEB67E3D1002F65CE8BA85D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ListItem_tE112A367BDC021731139C4894491A00F05B295B3* V_0 = NULL;
	bool V_1 = false;
	{
		// if( pooledItems.Count > 0 )
		Stack_1_t01139167DF236CFA36D235423224804125B77FE8* L_0 = __this->___pooledItems_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m154AB2542CB144A59DEB67E3D1002F65CE8BA85D_inline(L_0, Stack_1_get_Count_m154AB2542CB144A59DEB67E3D1002F65CE8BA85D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// item = pooledItems.Pop();
		Stack_1_t01139167DF236CFA36D235423224804125B77FE8* L_3 = __this->___pooledItems_10;
		NullCheck(L_3);
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_4;
		L_4 = Stack_1_Pop_m1A8D86259539819CABDEE147AA25878C8D8CBBF8(L_3, Stack_1_Pop_m1A8D86259539819CABDEE147AA25878C8D8CBBF8_RuntimeMethod_var);
		V_0 = L_4;
		// item.gameObject.SetActive( true );
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		goto IL_005e;
	}

IL_0030:
	{
		// item = adapter.CreateItem();
		RuntimeObject* L_7 = __this->___adapter_11;
		NullCheck(L_7);
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_8;
		L_8 = InterfaceFuncInvoker0< ListItem_tE112A367BDC021731139C4894491A00F05B295B3* >::Invoke(4 /* SimpleFileBrowser.ListItem SimpleFileBrowser.IListViewAdapter::CreateItem() */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
		// item.transform.SetParent( contentTransform, false );
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___contentTransform_5;
		NullCheck(L_10);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_10, L_11, (bool)0, NULL);
		// item.SetAdapter( adapter );
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_12 = V_0;
		RuntimeObject* L_13 = __this->___adapter_11;
		NullCheck(L_12);
		ListItem_SetAdapter_m72EBAFC39C01195C647B1EC6E0A57D7D0B378D1E(L_12, L_13, NULL);
	}

IL_005e:
	{
		// ( (RectTransform) item.transform ).anchoredPosition = new Vector2( 1f, -index * itemHeight );
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		int32_t L_16 = ___index0;
		float L_17 = __this->___itemHeight_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), (1.0f), ((float)il2cpp_codegen_multiply(((float)((-L_16))), L_17)), /*hidden argument*/NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_15, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_15, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_18, NULL);
		// items[index] = item;
		Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* L_19 = __this->___items_9;
		int32_t L_20 = ___index0;
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_21 = V_0;
		NullCheck(L_19);
		Dictionary_2_set_Item_mB2DCCA7B2E62102234C13AF4F67181EAAA01069A(L_19, L_20, L_21, Dictionary_2_set_Item_mB2DCCA7B2E62102234C13AF4F67181EAAA01069A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::DestroyItemsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_DestroyItemsBetweenIndices_m595074E0ACC185C718E71BD88AFF7EB5C7DE6201 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mD7F8A283E616A398BD9D2A86E70C5BCCAF19418F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListItem_tE112A367BDC021731139C4894491A00F05B295B3* V_1 = NULL;
	bool V_2 = false;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_0032;
	}

IL_0005:
	{
		// ListItem item = items[i];
		Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* L_1 = __this->___items_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_3;
		L_3 = Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002(L_1, L_2, Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002_RuntimeMethod_var);
		V_1 = L_3;
		// item.gameObject.SetActive( false );
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// pooledItems.Push( item );
		Stack_1_t01139167DF236CFA36D235423224804125B77FE8* L_6 = __this->___pooledItems_10;
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_7 = V_1;
		NullCheck(L_6);
		Stack_1_Push_mD7F8A283E616A398BD9D2A86E70C5BCCAF19418F(L_6, L_7, Stack_1_Push_mD7F8A283E616A398BD9D2A86E70C5BCCAF19418F_RuntimeMethod_var);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0032:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_9 = V_0;
		int32_t L_10 = ___bottomIndex1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::UpdateItemContentsBetweenIndices(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_UpdateItemContentsBetweenIndices_mE71583AFA6393C6B6A2358F76927FB069438B7C9 (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, int32_t ___topIndex0, int32_t ___bottomIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ListItem_tE112A367BDC021731139C4894491A00F05B295B3* V_1 = NULL;
	bool V_2 = false;
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_0 = ___topIndex0;
		V_0 = L_0;
		goto IL_002d;
	}

IL_0005:
	{
		// ListItem item = items[i];
		Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* L_1 = __this->___items_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_3;
		L_3 = Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002(L_1, L_2, Dictionary_2_get_Item_m972A73E1186C298EF779729D1B17C03E76DBA002_RuntimeMethod_var);
		V_1 = L_3;
		// item.Position = i;
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ListItem_set_Position_m8605AB6B00F33563B51063DAEE72D65110B2CBAD_inline(L_4, L_5, NULL);
		// adapter.SetItemContent( item );
		RuntimeObject* L_6 = __this->___adapter_11;
		ListItem_tE112A367BDC021731139C4894491A00F05B295B3* L_7 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker1< ListItem_tE112A367BDC021731139C4894491A00F05B295B3* >::Invoke(5 /* System.Void SimpleFileBrowser.IListViewAdapter::SetItemContent(SimpleFileBrowser.ListItem) */, IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3_il2cpp_TypeInfo_var, L_6, L_7);
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002d:
	{
		// for( int i = topIndex; i <= bottomIndex; i++ )
		int32_t L_9 = V_0;
		int32_t L_10 = ___bottomIndex1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView__ctor_m883D98DDCC2B6870B849DA84AB7245DE5CC3314F (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCCD7FB384FB3C1D2BB8F3A4012E78C3CF4858AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m42F344C90F5E9BB82CB1E431275C0B960AF2E6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t01139167DF236CFA36D235423224804125B77FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, ListItem> items = new Dictionary<int, ListItem>();
		Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256* L_0 = (Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256*)il2cpp_codegen_object_new(Dictionary_2_tE9802CEE31EFE76DE864B9C8BD17FB5D62FC7256_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCCD7FB384FB3C1D2BB8F3A4012E78C3CF4858AF0(L_0, Dictionary_2__ctor_mCCD7FB384FB3C1D2BB8F3A4012E78C3CF4858AF0_RuntimeMethod_var);
		__this->___items_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items_9), (void*)L_0);
		// private readonly Stack<ListItem> pooledItems = new Stack<ListItem>();
		Stack_1_t01139167DF236CFA36D235423224804125B77FE8* L_1 = (Stack_1_t01139167DF236CFA36D235423224804125B77FE8*)il2cpp_codegen_object_new(Stack_1_t01139167DF236CFA36D235423224804125B77FE8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m42F344C90F5E9BB82CB1E431275C0B960AF2E6C6(L_1, Stack_1__ctor_m42F344C90F5E9BB82CB1E431275C0B960AF2E6C6_RuntimeMethod_var);
		__this->___pooledItems_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pooledItems_10), (void*)L_1);
		// IListViewAdapter adapter = null;
		__this->___adapter_11 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_11), (void*)(RuntimeObject*)NULL);
		// private int currentTopIndex = -1, currentBottomIndex = -1;
		__this->___currentTopIndex_12 = (-1);
		// private int currentTopIndex = -1, currentBottomIndex = -1;
		__this->___currentBottomIndex_13 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SimpleFileBrowser.RecycledListView::<Start>b__10_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecycledListView_U3CStartU3Eb__10_0_mB8CB8298DCD1DFA739C0DD5C6394175D0C9D80EA (RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	{
		// GetComponent<ScrollRect>().onValueChanged.AddListener( ( pos ) => UpdateItemsInTheList() );
		RecycledListView_UpdateItemsInTheList_m55C6ABE3F27C06D0AC7483627ED8D51FBAF83AF4(__this, (bool)0, NULL);
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
// Conversion methods for marshalling of: SimpleFileBrowser.FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_pinvoke(const FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD& unmarshaled, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_pinvoke_back(const FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_pinvoke& marshaled, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD& unmarshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_pinvoke_cleanup(FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleFileBrowser.FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_com(const FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD& unmarshaled, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_com& marshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_com_back(const FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_com& marshaled, FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD& unmarshaled)
{
	Exception_t* ___icon_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'icon' of type 'FiletypeIcon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___icon_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleFileBrowser.FiletypeIcon
IL2CPP_EXTERN_C void FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshal_com_cleanup(FiletypeIcon_tBD98D95B0AB0B98690D94AB62459C0AB89AE0ABD_marshaled_com& marshaled)
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
// System.Int32 SimpleFileBrowser.UISkin::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UISkin_get_Version_mDAF7A3DD2F270AF0E34DB56BE95481EFEBE3D150 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int Version { get { return m_version; } }
		int32_t L_0 = __this->___m_version_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int Version { get { return m_version; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::Invalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_Invalidate_mBDEEA141046DC463BFFCE1E4E3F3EEEFF0DE066F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	{
		// m_version = UnityEngine.Random.Range( int.MinValue / 2, int.MaxValue / 2 );
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-1073741824), ((int32_t)1073741823), NULL);
		__this->___m_version_4 = L_0;
		// initializedFiletypeIcons = false;
		__this->___initializedFiletypeIcons_55 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Font SimpleFileBrowser.UISkin::get_Font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* UISkin_get_Font_mF4B20BA9562F4CDEFE7F72CBA8A2EDC481DE800B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* V_0 = NULL;
	{
		// get { return m_font; }
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = __this->___m_font_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_font; }
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_Font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_Font_mDC0C97F15A599D1540DB2767935F94BC7689B1A7 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_font != value ) { m_font = value; m_version++; } }
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = __this->___m_font_5;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_font != value ) { m_font = value; m_version++; } }
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_4 = ___value0;
		__this->___m_font_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_font_5), (void*)L_4);
		// set { if( m_font != value ) { m_font = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_font != value ) { m_font = value; m_version++; } }
		return;
	}
}
// System.Int32 SimpleFileBrowser.UISkin::get_FontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UISkin_get_FontSize_mC5BD7D44ABDB28F2D804938F5CD1E6FE82970700 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_fontSize; }
		int32_t L_0 = __this->___m_fontSize_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fontSize; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FontSize_mF2097F11D9B90DA7031380B2AADD228B48017C3F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fontSize != value ) { m_fontSize = value; m_version++; } }
		int32_t L_0 = __this->___m_fontSize_6;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fontSize != value ) { m_fontSize = value; m_version++; } }
		int32_t L_3 = ___value0;
		__this->___m_fontSize_6 = L_3;
		// set { if( m_fontSize != value ) { m_fontSize = value; m_version++; } }
		int32_t L_4 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0028:
	{
		// set { if( m_fontSize != value ) { m_fontSize = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_WindowColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_WindowColor_m587EB65FACDE434DBCC5E2961D517FB0071F2B9B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_windowColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_windowColor_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_windowColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_WindowColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_WindowColor_m87B53B161651DD26C478F3F33DF5F4625DCC8AE3 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_windowColor != value ) { m_windowColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_windowColor_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_windowColor != value ) { m_windowColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_windowColor_7 = L_4;
		// set { if( m_windowColor != value ) { m_windowColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_windowColor != value ) { m_windowColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FilesListColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FilesListColor_m7DAED2AD9BE8CDBA0C38BF2A153E8117B215A8DC (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_filesListColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_filesListColor_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_filesListColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FilesListColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FilesListColor_mCA788F63367DE069F8FD1664C7BEC1CD5872C00E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_filesListColor != value ) { m_filesListColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_filesListColor_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_filesListColor != value ) { m_filesListColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_filesListColor_8 = L_4;
		// set { if( m_filesListColor != value ) { m_filesListColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_filesListColor != value ) { m_filesListColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FilesVerticalSeparatorColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FilesVerticalSeparatorColor_mC7398F4BC0B44798A0049B102FE5CF2ECA119A8B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_filesVerticalSeparatorColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_filesVerticalSeparatorColor_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_filesVerticalSeparatorColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FilesVerticalSeparatorColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FilesVerticalSeparatorColor_m433BE8490F69502A0BC7957B6304A7E6AC2B903F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_filesVerticalSeparatorColor != value ) { m_filesVerticalSeparatorColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_filesVerticalSeparatorColor_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_filesVerticalSeparatorColor != value ) { m_filesVerticalSeparatorColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_filesVerticalSeparatorColor_9 = L_4;
		// set { if( m_filesVerticalSeparatorColor != value ) { m_filesVerticalSeparatorColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_filesVerticalSeparatorColor != value ) { m_filesVerticalSeparatorColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_TitleBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_TitleBackgroundColor_mE9842CD030A5C2711F49068385F3CF209162B175 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_titleBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_titleBackgroundColor_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_titleBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_TitleBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_TitleBackgroundColor_m7D6171508315316F2854F03A4092CB68E7AF6069 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_titleBackgroundColor != value ) { m_titleBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_titleBackgroundColor_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_titleBackgroundColor != value ) { m_titleBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_titleBackgroundColor_10 = L_4;
		// set { if( m_titleBackgroundColor != value ) { m_titleBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_titleBackgroundColor != value ) { m_titleBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_TitleTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_TitleTextColor_m0EFEAD3F0F07BC93BB02F3ED98399FF5DA701864 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_titleTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_titleTextColor_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_titleTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_TitleTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_TitleTextColor_m95C293827628CE2ABE320F18FBF3AB894B870F11 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_titleTextColor != value ) { m_titleTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_titleTextColor_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_titleTextColor != value ) { m_titleTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_titleTextColor_11 = L_4;
		// set { if( m_titleTextColor != value ) { m_titleTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_titleTextColor != value ) { m_titleTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_WindowResizeGizmoColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_WindowResizeGizmoColor_m05BE6C8ED3632A4A18C82E91C066A7B016AEC568 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_windowResizeGizmoColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_windowResizeGizmoColor_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_windowResizeGizmoColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_WindowResizeGizmoColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_WindowResizeGizmoColor_mBBBD0B6572664BD4970DB330E2EB39D5D1569BA2 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_windowResizeGizmoColor != value ) { m_windowResizeGizmoColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_windowResizeGizmoColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_windowResizeGizmoColor != value ) { m_windowResizeGizmoColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_windowResizeGizmoColor_12 = L_4;
		// set { if( m_windowResizeGizmoColor != value ) { m_windowResizeGizmoColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_windowResizeGizmoColor != value ) { m_windowResizeGizmoColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_HeaderButtonsColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_HeaderButtonsColor_m11E813AEA79CF48086C20C8049DA7CB8144A970C (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_headerButtonsColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_headerButtonsColor_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_headerButtonsColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_HeaderButtonsColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_HeaderButtonsColor_mE7B34CFF77ACE5708979708D5601A43FB4FEE1B9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_headerButtonsColor != value ) { m_headerButtonsColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_headerButtonsColor_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_headerButtonsColor != value ) { m_headerButtonsColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_headerButtonsColor_13 = L_4;
		// set { if( m_headerButtonsColor != value ) { m_headerButtonsColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_headerButtonsColor != value ) { m_headerButtonsColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_WindowResizeGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_WindowResizeGizmo_mDBEB8CE46B80527E0F33AE2173A305BFF3F9E18D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_windowResizeGizmo; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_windowResizeGizmo_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_windowResizeGizmo; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_WindowResizeGizmo(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_WindowResizeGizmo_m1A4EC118F3F62BF5C11682E0652004AD2F2823B9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_windowResizeGizmo != value ) { m_windowResizeGizmo = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_windowResizeGizmo_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_windowResizeGizmo != value ) { m_windowResizeGizmo = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_windowResizeGizmo_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_windowResizeGizmo_14), (void*)L_4);
		// set { if( m_windowResizeGizmo != value ) { m_windowResizeGizmo = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_windowResizeGizmo != value ) { m_windowResizeGizmo = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_HeaderBackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_HeaderBackButton_mBE8EA5E2A83099BE0D0200FA395E08F7DEB22EF7 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_headerBackButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerBackButton_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_headerBackButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_HeaderBackButton(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_HeaderBackButton_m2105844942D1764173DE589E5B57DE198948A29D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_headerBackButton != value ) { m_headerBackButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerBackButton_15;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_headerBackButton != value ) { m_headerBackButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_headerBackButton_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_headerBackButton_15), (void*)L_4);
		// set { if( m_headerBackButton != value ) { m_headerBackButton = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_headerBackButton != value ) { m_headerBackButton = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_HeaderForwardButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_HeaderForwardButton_m8B3822B153FBE2F369C08E0C3CEFDC87EAB90826 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_headerForwardButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerForwardButton_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_headerForwardButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_HeaderForwardButton(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_HeaderForwardButton_m1A9B67C4EF1E2EF6EE3868086978314F8D475AAD (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_headerForwardButton != value ) { m_headerForwardButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerForwardButton_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_headerForwardButton != value ) { m_headerForwardButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_headerForwardButton_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_headerForwardButton_16), (void*)L_4);
		// set { if( m_headerForwardButton != value ) { m_headerForwardButton = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_headerForwardButton != value ) { m_headerForwardButton = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_HeaderUpButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_HeaderUpButton_m8462D0BB1A8D5AD173E463D6C200BBE5799268ED (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_headerUpButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerUpButton_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_headerUpButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_HeaderUpButton(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_HeaderUpButton_m6F2590A5A6177E98192F4F8963802C1BCBFBBA3A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_headerUpButton != value ) { m_headerUpButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerUpButton_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_headerUpButton != value ) { m_headerUpButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_headerUpButton_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_headerUpButton_17), (void*)L_4);
		// set { if( m_headerUpButton != value ) { m_headerUpButton = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_headerUpButton != value ) { m_headerUpButton = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_HeaderContextMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_HeaderContextMenuButton_m2C886896865E1BD03E061FE941C52410A5A3ADC8 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_headerContextMenuButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerContextMenuButton_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_headerContextMenuButton; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_HeaderContextMenuButton(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_HeaderContextMenuButton_m1BCC96265FBBBA16D969AA3F42110247CB6FEEAB (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_headerContextMenuButton != value ) { m_headerContextMenuButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_headerContextMenuButton_18;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_headerContextMenuButton != value ) { m_headerContextMenuButton = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_headerContextMenuButton_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_headerContextMenuButton_18), (void*)L_4);
		// set { if( m_headerContextMenuButton != value ) { m_headerContextMenuButton = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_headerContextMenuButton != value ) { m_headerContextMenuButton = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldNormalBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldNormalBackgroundColor_m3F438650067F2332CD8726F3EC1F902D374AFFDD (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldNormalBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldNormalBackgroundColor_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldNormalBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldNormalBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldNormalBackgroundColor_mD9DE1BA2802C58B85F3A66EA9858BA0ABBE0F30F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldNormalBackgroundColor != value ) { m_inputFieldNormalBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldNormalBackgroundColor_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldNormalBackgroundColor != value ) { m_inputFieldNormalBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldNormalBackgroundColor_19 = L_4;
		// set { if( m_inputFieldNormalBackgroundColor != value ) { m_inputFieldNormalBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldNormalBackgroundColor != value ) { m_inputFieldNormalBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldInvalidBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldInvalidBackgroundColor_mDB2E76A76311F129618DDFBA57C416EBE0C1CCF1 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldInvalidBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldInvalidBackgroundColor_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldInvalidBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldInvalidBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldInvalidBackgroundColor_m5C4AA5F815E20730A067A2BE6ECE0B1000E4C0F2 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldInvalidBackgroundColor != value ) { m_inputFieldInvalidBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldInvalidBackgroundColor_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldInvalidBackgroundColor != value ) { m_inputFieldInvalidBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldInvalidBackgroundColor_20 = L_4;
		// set { if( m_inputFieldInvalidBackgroundColor != value ) { m_inputFieldInvalidBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldInvalidBackgroundColor != value ) { m_inputFieldInvalidBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldTextColor_m2C432E5F4DD75770C2E537C8996BBC5A67691883 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldTextColor_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldTextColor_mED924C2919107F7F6735B3C860DE20ECEBF5820E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldTextColor != value ) { m_inputFieldTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldTextColor_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldTextColor != value ) { m_inputFieldTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldTextColor_21 = L_4;
		// set { if( m_inputFieldTextColor != value ) { m_inputFieldTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldTextColor != value ) { m_inputFieldTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldPlaceholderTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldPlaceholderTextColor_mA9480AE69A17149110E4B23FB68ECA33485C6207 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldPlaceholderTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldPlaceholderTextColor_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldPlaceholderTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldPlaceholderTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldPlaceholderTextColor_mA4F622FF2AB41D72C630DEBE09EBEF3969E747BA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldPlaceholderTextColor != value ) { m_inputFieldPlaceholderTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldPlaceholderTextColor_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldPlaceholderTextColor != value ) { m_inputFieldPlaceholderTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldPlaceholderTextColor_22 = L_4;
		// set { if( m_inputFieldPlaceholderTextColor != value ) { m_inputFieldPlaceholderTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldPlaceholderTextColor != value ) { m_inputFieldPlaceholderTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldSelectedTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldSelectedTextColor_mD5FB460350A6BAB9D2B14DCF1679339134A97EBD (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldSelectedTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldSelectedTextColor_23;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldSelectedTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldSelectedTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldSelectedTextColor_m9E6F7796FD5ECD0A18DC3B62F6C6123D696D682E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldSelectedTextColor != value ) { m_inputFieldSelectedTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldSelectedTextColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldSelectedTextColor != value ) { m_inputFieldSelectedTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldSelectedTextColor_23 = L_4;
		// set { if( m_inputFieldSelectedTextColor != value ) { m_inputFieldSelectedTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldSelectedTextColor != value ) { m_inputFieldSelectedTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_InputFieldCaretColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_InputFieldCaretColor_mF94C7F5BAECD745F3955C0B4D348A16DEC4CE97C (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_inputFieldCaretColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldCaretColor_24;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldCaretColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldCaretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldCaretColor_mA5E1845D1927B4CDDF41C004664F706DF373E02A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_inputFieldCaretColor != value ) { m_inputFieldCaretColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_inputFieldCaretColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldCaretColor != value ) { m_inputFieldCaretColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_inputFieldCaretColor_24 = L_4;
		// set { if( m_inputFieldCaretColor != value ) { m_inputFieldCaretColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldCaretColor != value ) { m_inputFieldCaretColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_InputFieldBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_InputFieldBackground_m9E4B1FEB7DBCE7B3C6C3158B98D63335925407FF (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_inputFieldBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_inputFieldBackground_25;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_inputFieldBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_InputFieldBackground(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_InputFieldBackground_m30454DC4852F1B8A716AF1836B6CF10411AFFAAA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_inputFieldBackground != value ) { m_inputFieldBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_inputFieldBackground_25;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_inputFieldBackground != value ) { m_inputFieldBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_inputFieldBackground_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_inputFieldBackground_25), (void*)L_4);
		// set { if( m_inputFieldBackground != value ) { m_inputFieldBackground = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_inputFieldBackground != value ) { m_inputFieldBackground = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ButtonColor_m4CED62E6272B26B0D6C98534DB4313E467D323C9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_buttonColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_buttonColor_26;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_buttonColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ButtonColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ButtonColor_mAAC143C605A6FC5FF81FC2513E975B7145A491E4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_buttonColor != value ) { m_buttonColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_buttonColor_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_buttonColor != value ) { m_buttonColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_buttonColor_26 = L_4;
		// set { if( m_buttonColor != value ) { m_buttonColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_buttonColor != value ) { m_buttonColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ButtonTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ButtonTextColor_mA762705039E71DD73F2C9BBCE7DCF7E833BA0E3B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_buttonTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_buttonTextColor_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_buttonTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ButtonTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ButtonTextColor_m2A6B52496D891249BA32642DFDAC7E405E09A203 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_buttonTextColor != value ) { m_buttonTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_buttonTextColor_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_buttonTextColor != value ) { m_buttonTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_buttonTextColor_27 = L_4;
		// set { if( m_buttonTextColor != value ) { m_buttonTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_buttonTextColor != value ) { m_buttonTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_ButtonBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_ButtonBackground_mB1D404AEED0B9774F30D674BD202CF1428A6A892 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_buttonBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_buttonBackground_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_buttonBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ButtonBackground(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ButtonBackground_mF775247FC33D64F36A787FC4F9C36CD829EB2DA8 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_buttonBackground != value ) { m_buttonBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_buttonBackground_28;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_buttonBackground != value ) { m_buttonBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_buttonBackground_28 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_buttonBackground_28), (void*)L_4);
		// set { if( m_buttonBackground != value ) { m_buttonBackground = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_buttonBackground != value ) { m_buttonBackground = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_DropdownColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_DropdownColor_mDF1DC9234C2695E1FE3F39CA35756F2B5DA7E42E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_dropdownColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownColor_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownColor_m1DC7F7EDD31E2A96C646FA2915E0278857C9AA1E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_dropdownColor != value ) { m_dropdownColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownColor_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownColor != value ) { m_dropdownColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_dropdownColor_29 = L_4;
		// set { if( m_dropdownColor != value ) { m_dropdownColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownColor != value ) { m_dropdownColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_DropdownTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_DropdownTextColor_mBD5EDBD3E7DA244242139EA73EFB51AFB94B6E8D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_dropdownTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownTextColor_30;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownTextColor_mC6878CCF4E7016610DC10890EDB72D171D8404A7 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_dropdownTextColor != value ) { m_dropdownTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownTextColor_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownTextColor != value ) { m_dropdownTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_dropdownTextColor_30 = L_4;
		// set { if( m_dropdownTextColor != value ) { m_dropdownTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownTextColor != value ) { m_dropdownTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_DropdownArrowColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_DropdownArrowColor_m0BAA9A62C446917A1588EB59F236FF2F5E1B7680 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_dropdownArrowColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownArrowColor_31;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownArrowColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownArrowColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownArrowColor_mAAC237A078DE523909FD5B563EEF0494F4B602E9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_dropdownArrowColor != value ) { m_dropdownArrowColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownArrowColor_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownArrowColor != value ) { m_dropdownArrowColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_dropdownArrowColor_31 = L_4;
		// set { if( m_dropdownArrowColor != value ) { m_dropdownArrowColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownArrowColor != value ) { m_dropdownArrowColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_DropdownCheckmarkColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_DropdownCheckmarkColor_mC51672265D4B4812EF665A7A272B534A315AD76A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_dropdownCheckmarkColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownCheckmarkColor_32;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownCheckmarkColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownCheckmarkColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownCheckmarkColor_m5E95085890C7AC2C1F7F6CF0C800AD9F05A8AD02 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_dropdownCheckmarkColor != value ) { m_dropdownCheckmarkColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_dropdownCheckmarkColor_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownCheckmarkColor != value ) { m_dropdownCheckmarkColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_dropdownCheckmarkColor_32 = L_4;
		// set { if( m_dropdownCheckmarkColor != value ) { m_dropdownCheckmarkColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownCheckmarkColor != value ) { m_dropdownCheckmarkColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_DropdownBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_DropdownBackground_m92ADAE1BE5D404AF633C4E01F34FB3C8D3B5C585 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_dropdownBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownBackground_33;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownBackground(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownBackground_mD5D5F5D3C3EB668C1C417031155759174C42EC5D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_dropdownBackground != value ) { m_dropdownBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownBackground_33;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownBackground != value ) { m_dropdownBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_dropdownBackground_33 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_dropdownBackground_33), (void*)L_4);
		// set { if( m_dropdownBackground != value ) { m_dropdownBackground = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownBackground != value ) { m_dropdownBackground = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_DropdownArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_DropdownArrow_m5B3CCA38E12871ADBF5C0490D8FFC086B38D471F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_dropdownArrow; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownArrow_34;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownArrow; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownArrow(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownArrow_m45A87A039D8B99588A59BC8BFA08B83B116CC970 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_dropdownArrow != value ) { m_dropdownArrow = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownArrow_34;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownArrow != value ) { m_dropdownArrow = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_dropdownArrow_34 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_dropdownArrow_34), (void*)L_4);
		// set { if( m_dropdownArrow != value ) { m_dropdownArrow = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownArrow != value ) { m_dropdownArrow = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_DropdownCheckmark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_DropdownCheckmark_mDE2FA7C79BA64DFBE642D1FDE9D2ABBEAF92B194 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_dropdownCheckmark; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownCheckmark_35;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_dropdownCheckmark; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DropdownCheckmark(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DropdownCheckmark_mF016CF62667E81CD19A3BF10880C6C3121C57E47 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_dropdownCheckmark != value ) { m_dropdownCheckmark = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_dropdownCheckmark_35;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_dropdownCheckmark != value ) { m_dropdownCheckmark = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_dropdownCheckmark_35 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_dropdownCheckmark_35), (void*)L_4);
		// set { if( m_dropdownCheckmark != value ) { m_dropdownCheckmark = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_dropdownCheckmark != value ) { m_dropdownCheckmark = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ToggleColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ToggleColor_m9E7CC20BC528EA672166874622A88AEC017D7F0D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_toggleColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleColor_36;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_toggleColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ToggleColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ToggleColor_m9DB0C5918C8FF182490ADB1FF98D0030F308B58B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_toggleColor != value ) { m_toggleColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleColor_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_toggleColor != value ) { m_toggleColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_toggleColor_36 = L_4;
		// set { if( m_toggleColor != value ) { m_toggleColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_toggleColor != value ) { m_toggleColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ToggleTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ToggleTextColor_m7A38BE81665D996189C75FD7FA164B5C9C24DEDA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_toggleTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleTextColor_37;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_toggleTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ToggleTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ToggleTextColor_m02734327FE5CE4776CD73FCBB81D06C6607E5BDF (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_toggleTextColor != value ) { m_toggleTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleTextColor_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_toggleTextColor != value ) { m_toggleTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_toggleTextColor_37 = L_4;
		// set { if( m_toggleTextColor != value ) { m_toggleTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_toggleTextColor != value ) { m_toggleTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ToggleCheckmarkColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ToggleCheckmarkColor_m3E3911F246186C227EF8058089B52C4F97511EDA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_toggleCheckmarkColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleCheckmarkColor_38;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_toggleCheckmarkColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ToggleCheckmarkColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ToggleCheckmarkColor_mF04576D2C1F3D3F880DEC8DB55FD3BAD5B287DFF (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_toggleCheckmarkColor != value ) { m_toggleCheckmarkColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_toggleCheckmarkColor_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_toggleCheckmarkColor != value ) { m_toggleCheckmarkColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_toggleCheckmarkColor_38 = L_4;
		// set { if( m_toggleCheckmarkColor != value ) { m_toggleCheckmarkColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_toggleCheckmarkColor != value ) { m_toggleCheckmarkColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_ToggleBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_ToggleBackground_m68C9BDE25EA7EF5B704E88E049BC2568B446C34F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_toggleBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_toggleBackground_39;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_toggleBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ToggleBackground(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ToggleBackground_mFCAD87E2279264C9437719499842829923C87DF4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_toggleBackground != value ) { m_toggleBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_toggleBackground_39;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_toggleBackground != value ) { m_toggleBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_toggleBackground_39 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggleBackground_39), (void*)L_4);
		// set { if( m_toggleBackground != value ) { m_toggleBackground = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_toggleBackground != value ) { m_toggleBackground = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_ToggleCheckmark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_ToggleCheckmark_m45AD35D157929952F77BE0B187DCDD93AEFEF8E1 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_toggleCheckmark; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_toggleCheckmark_40;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_toggleCheckmark; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ToggleCheckmark(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ToggleCheckmark_mDC026395E75DDA862CCF91D45E8C1502E7BF07FC (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_toggleCheckmark != value ) { m_toggleCheckmark = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_toggleCheckmark_40;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_toggleCheckmark != value ) { m_toggleCheckmark = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_toggleCheckmark_40 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggleCheckmark_40), (void*)L_4);
		// set { if( m_toggleCheckmark != value ) { m_toggleCheckmark = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_toggleCheckmark != value ) { m_toggleCheckmark = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ScrollbarBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ScrollbarBackgroundColor_m2476D94D639B09446FAB8AAC1680E82EC622ED78 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_scrollbarBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_scrollbarBackgroundColor_41;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_scrollbarBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ScrollbarBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ScrollbarBackgroundColor_m2CB9CBC9FC10970DDABF5EA840CAB5096481689A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_scrollbarBackgroundColor != value ) { m_scrollbarBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_scrollbarBackgroundColor_41;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_scrollbarBackgroundColor != value ) { m_scrollbarBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_scrollbarBackgroundColor_41 = L_4;
		// set { if( m_scrollbarBackgroundColor != value ) { m_scrollbarBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_scrollbarBackgroundColor != value ) { m_scrollbarBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ScrollbarColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ScrollbarColor_m06B0E4B4BEC11A0D56E10598DB5506B49D14133E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_scrollbarColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_scrollbarColor_42;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_scrollbarColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ScrollbarColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ScrollbarColor_mC576252377DF2D2CBE5EB23F019422E7B5DD898D (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_scrollbarColor != value ) { m_scrollbarColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_scrollbarColor_42;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_scrollbarColor != value ) { m_scrollbarColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_scrollbarColor_42 = L_4;
		// set { if( m_scrollbarColor != value ) { m_scrollbarColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_scrollbarColor != value ) { m_scrollbarColor = value; m_version++; } }
		return;
	}
}
// System.Single SimpleFileBrowser.UISkin::get_FileHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UISkin_get_FileHeight_m490761AA2FCD12C90DE5F023FC3353965867FDF8 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_fileHeight; }
		float L_0 = __this->___m_fileHeight_43;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileHeight; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileHeight_m423EA00C6764B88317B6AA7FC57255C7FDD15E92 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileHeight != value ) { m_fileHeight = value; m_version++; } }
		float L_0 = __this->___m_fileHeight_43;
		float L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileHeight != value ) { m_fileHeight = value; m_version++; } }
		float L_3 = ___value0;
		__this->___m_fileHeight_43 = L_3;
		// set { if( m_fileHeight != value ) { m_fileHeight = value; m_version++; } }
		int32_t L_4 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0028:
	{
		// set { if( m_fileHeight != value ) { m_fileHeight = value; m_version++; } }
		return;
	}
}
// System.Single SimpleFileBrowser.UISkin::get_FileIconsPadding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UISkin_get_FileIconsPadding_m3F6E9AB23B917C2804ECE55F73FF7ADD7591F0D5 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_fileIconsPadding; }
		float L_0 = __this->___m_fileIconsPadding_44;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileIconsPadding; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileIconsPadding(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileIconsPadding_m1A2819BC27847BEC67008DE8CD3DAF21C95A9C80 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileIconsPadding != value ) { m_fileIconsPadding = value; m_version++; } }
		float L_0 = __this->___m_fileIconsPadding_44;
		float L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileIconsPadding != value ) { m_fileIconsPadding = value; m_version++; } }
		float L_3 = ___value0;
		__this->___m_fileIconsPadding_44 = L_3;
		// set { if( m_fileIconsPadding != value ) { m_fileIconsPadding = value; m_version++; } }
		int32_t L_4 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0028:
	{
		// set { if( m_fileIconsPadding != value ) { m_fileIconsPadding = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileNormalBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileNormalBackgroundColor_mB3AB273132682E837F5BFFDFDB3AF207D4C84A8A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileNormalBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileNormalBackgroundColor_45;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileNormalBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileNormalBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileNormalBackgroundColor_m11EED12CB23F0A0F25A99F02EE0AAA06D50A033F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileNormalBackgroundColor != value ) { m_fileNormalBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileNormalBackgroundColor_45;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileNormalBackgroundColor != value ) { m_fileNormalBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileNormalBackgroundColor_45 = L_4;
		// set { if( m_fileNormalBackgroundColor != value ) { m_fileNormalBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileNormalBackgroundColor != value ) { m_fileNormalBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileAlternatingBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileAlternatingBackgroundColor_m9C9A101FE901B7A8E530ED22A1AC3F603184B7EF (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileAlternatingBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileAlternatingBackgroundColor_46;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileAlternatingBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileAlternatingBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileAlternatingBackgroundColor_m74BB407D9D0441C4256FB8BF96B8F8231C6F8FF5 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileAlternatingBackgroundColor != value ) { m_fileAlternatingBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileAlternatingBackgroundColor_46;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileAlternatingBackgroundColor != value ) { m_fileAlternatingBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileAlternatingBackgroundColor_46 = L_4;
		// set { if( m_fileAlternatingBackgroundColor != value ) { m_fileAlternatingBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileAlternatingBackgroundColor != value ) { m_fileAlternatingBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileHoveredBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileHoveredBackgroundColor_mBBFA2C11C2DE553F634A40D8B2EFA414D8BED2C6 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileHoveredBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileHoveredBackgroundColor_47;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileHoveredBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileHoveredBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileHoveredBackgroundColor_m489C9E0B2E0EA776DF57F571949280E32689914B (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileHoveredBackgroundColor != value ) { m_fileHoveredBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileHoveredBackgroundColor_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileHoveredBackgroundColor != value ) { m_fileHoveredBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileHoveredBackgroundColor_47 = L_4;
		// set { if( m_fileHoveredBackgroundColor != value ) { m_fileHoveredBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileHoveredBackgroundColor != value ) { m_fileHoveredBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileSelectedBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileSelectedBackgroundColor_m3E275E244C9580296423FEB3C26DF2D30C44BF37 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileSelectedBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileSelectedBackgroundColor_48;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileSelectedBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileSelectedBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileSelectedBackgroundColor_m471F5A3700D8881BA34709EE9533639BEC5EB0CD (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileSelectedBackgroundColor != value ) { m_fileSelectedBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileSelectedBackgroundColor_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileSelectedBackgroundColor != value ) { m_fileSelectedBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileSelectedBackgroundColor_48 = L_4;
		// set { if( m_fileSelectedBackgroundColor != value ) { m_fileSelectedBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileSelectedBackgroundColor != value ) { m_fileSelectedBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileNormalTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileNormalTextColor_m858F74B10CCAF4618CA6E5C7167BAB80217D0A99 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileNormalTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileNormalTextColor_49;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileNormalTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileNormalTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileNormalTextColor_mAA436E5280042DF16ADEFBE949E0EB9599C28FE5 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileNormalTextColor != value ) { m_fileNormalTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileNormalTextColor_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileNormalTextColor != value ) { m_fileNormalTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileNormalTextColor_49 = L_4;
		// set { if( m_fileNormalTextColor != value ) { m_fileNormalTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileNormalTextColor != value ) { m_fileNormalTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_FileSelectedTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_FileSelectedTextColor_mC1E14053CCF0BD5E03EC173BB7188B4DD0795EB4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_fileSelectedTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileSelectedTextColor_50;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileSelectedTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileSelectedTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileSelectedTextColor_m0F0EDD9CC86EC19F48FCFB4EE5F705047EA045AA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_fileSelectedTextColor != value ) { m_fileSelectedTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_fileSelectedTextColor_50;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileSelectedTextColor != value ) { m_fileSelectedTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_fileSelectedTextColor_50 = L_4;
		// set { if( m_fileSelectedTextColor != value ) { m_fileSelectedTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileSelectedTextColor != value ) { m_fileSelectedTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_FolderIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_FolderIcon_m0A907951175B18526FF527BDC3BDF52D06B3E6A4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_folderIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_folderIcon_51;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_folderIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FolderIcon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FolderIcon_m05531A4BA6947BEDC85E60329490D2CF1FEAB87E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_folderIcon != value ) { m_folderIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_folderIcon_51;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_folderIcon != value ) { m_folderIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_folderIcon_51 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_folderIcon_51), (void*)L_4);
		// set { if( m_folderIcon != value ) { m_folderIcon = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_folderIcon != value ) { m_folderIcon = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_DriveIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_DriveIcon_mBEEB8049F062992480B4CDE6D40762778981EB6A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_driveIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_driveIcon_52;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_driveIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DriveIcon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DriveIcon_m525AB2878135C5B877DBC8EF7F2CE689C42D71F0 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_driveIcon != value ) { m_driveIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_driveIcon_52;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_driveIcon != value ) { m_driveIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_driveIcon_52 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_driveIcon_52), (void*)L_4);
		// set { if( m_driveIcon != value ) { m_driveIcon = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_driveIcon != value ) { m_driveIcon = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_DefaultFileIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_DefaultFileIcon_m93D7C9CF7C1D84FD464C0F92FA9CE0F3589A9A29 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_defaultFileIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_defaultFileIcon_53;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_defaultFileIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_DefaultFileIcon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_DefaultFileIcon_m4FE8383F04CD0B27B3B3C6EE7849F4D5EC929D65 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_defaultFileIcon != value ) { m_defaultFileIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_defaultFileIcon_53;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_defaultFileIcon != value ) { m_defaultFileIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_defaultFileIcon_53 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_defaultFileIcon_53), (void*)L_4);
		// set { if( m_defaultFileIcon != value ) { m_defaultFileIcon = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_defaultFileIcon != value ) { m_defaultFileIcon = value; m_version++; } }
		return;
	}
}
// SimpleFileBrowser.FiletypeIcon[] SimpleFileBrowser.UISkin::get_FiletypeIcons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* UISkin_get_FiletypeIcons_mE72BFF3BDC905792B9447680D7697683EDE77D0E (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* V_0 = NULL;
	{
		// get { return m_filetypeIcons; }
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_0 = __this->___m_filetypeIcons_54;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_filetypeIcons; }
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FiletypeIcons(SimpleFileBrowser.FiletypeIcon[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FiletypeIcons_mB29C8314A4C4979F4CEC787DE8B8E5C560A8708F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if( m_filetypeIcons != value )
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_0 = __this->___m_filetypeIcons_54;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5*)L_0) == ((RuntimeObject*)(FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// m_filetypeIcons = value;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_3 = ___value0;
		__this->___m_filetypeIcons_54 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_filetypeIcons_54), (void*)L_3);
		// initializedFiletypeIcons = false;
		__this->___initializedFiletypeIcons_55 = (bool)0;
		// m_version++;
		int32_t L_4 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean SimpleFileBrowser.UISkin::get_AllIconExtensionsHaveSingleSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UISkin_get_AllIconExtensionsHaveSingleSuffix_m5C42381A1E46E9E52FFB01793EFC8B5C5055AEE4 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if( !initializedFiletypeIcons )
		bool L_0 = __this->___initializedFiletypeIcons_55;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// InitializeFiletypeIcons();
		UISkin_InitializeFiletypeIcons_mA6B13A4B8D906480ABED33D8C70959FB25F94143(__this, NULL);
	}

IL_0015:
	{
		// return m_allIconExtensionsHaveSingleSuffix;
		bool L_2 = __this->___m_allIconExtensionsHaveSingleSuffix_57;
		V_1 = L_2;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_FileMultiSelectionToggleOffIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_FileMultiSelectionToggleOffIcon_m03AB5F1FC3C182BBB9D891A48A74236D419AF857 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_fileMultiSelectionToggleOffIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_fileMultiSelectionToggleOffIcon_58;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileMultiSelectionToggleOffIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileMultiSelectionToggleOffIcon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileMultiSelectionToggleOffIcon_m8CA945920706E530712B2333CE608BE59BB6A2FA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_fileMultiSelectionToggleOffIcon != value ) { m_fileMultiSelectionToggleOffIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_fileMultiSelectionToggleOffIcon_58;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileMultiSelectionToggleOffIcon != value ) { m_fileMultiSelectionToggleOffIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_fileMultiSelectionToggleOffIcon_58 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_fileMultiSelectionToggleOffIcon_58), (void*)L_4);
		// set { if( m_fileMultiSelectionToggleOffIcon != value ) { m_fileMultiSelectionToggleOffIcon = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileMultiSelectionToggleOffIcon != value ) { m_fileMultiSelectionToggleOffIcon = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_FileMultiSelectionToggleOnIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_FileMultiSelectionToggleOnIcon_mD78F39CDD08F1D545BAB8F5206634F0D0FBE395C (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_fileMultiSelectionToggleOnIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_fileMultiSelectionToggleOnIcon_59;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_fileMultiSelectionToggleOnIcon; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_FileMultiSelectionToggleOnIcon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_FileMultiSelectionToggleOnIcon_mD081AC1D7929EAB46898CA3C74548B0E567D15B1 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_fileMultiSelectionToggleOnIcon != value ) { m_fileMultiSelectionToggleOnIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_fileMultiSelectionToggleOnIcon_59;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_fileMultiSelectionToggleOnIcon != value ) { m_fileMultiSelectionToggleOnIcon = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_fileMultiSelectionToggleOnIcon_59 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_fileMultiSelectionToggleOnIcon_59), (void*)L_4);
		// set { if( m_fileMultiSelectionToggleOnIcon != value ) { m_fileMultiSelectionToggleOnIcon = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_fileMultiSelectionToggleOnIcon != value ) { m_fileMultiSelectionToggleOnIcon = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ContextMenuBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ContextMenuBackgroundColor_mB22BB4E4E1F1174790B7C5155A6A56C19ECBB545 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_contextMenuBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuBackgroundColor_60;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_contextMenuBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ContextMenuBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ContextMenuBackgroundColor_mE4D66E88E0AD25792D579BCF36D1E0FCDA140F52 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_contextMenuBackgroundColor != value ) { m_contextMenuBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuBackgroundColor_60;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_contextMenuBackgroundColor != value ) { m_contextMenuBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_contextMenuBackgroundColor_60 = L_4;
		// set { if( m_contextMenuBackgroundColor != value ) { m_contextMenuBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_contextMenuBackgroundColor != value ) { m_contextMenuBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ContextMenuTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ContextMenuTextColor_m7442C31C4B35D1CC6BF57F8BB91C4C7AABE6E76A (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_contextMenuTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuTextColor_61;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_contextMenuTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ContextMenuTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ContextMenuTextColor_m2BB01FB8EF5D6AAAC9755960FFE9D53CC408283F (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_contextMenuTextColor != value ) { m_contextMenuTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuTextColor_61;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_contextMenuTextColor != value ) { m_contextMenuTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_contextMenuTextColor_61 = L_4;
		// set { if( m_contextMenuTextColor != value ) { m_contextMenuTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_contextMenuTextColor != value ) { m_contextMenuTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_ContextMenuSeparatorColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_ContextMenuSeparatorColor_mD624EE6AEA7EB9986A1A0EBA099A218D9FDEB8B9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_contextMenuSeparatorColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuSeparatorColor_62;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_contextMenuSeparatorColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_ContextMenuSeparatorColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_ContextMenuSeparatorColor_m422511782E3018925AD56EFCC8E54E94572B3232 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_contextMenuSeparatorColor != value ) { m_contextMenuSeparatorColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_contextMenuSeparatorColor_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_contextMenuSeparatorColor != value ) { m_contextMenuSeparatorColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_contextMenuSeparatorColor_62 = L_4;
		// set { if( m_contextMenuSeparatorColor != value ) { m_contextMenuSeparatorColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_contextMenuSeparatorColor != value ) { m_contextMenuSeparatorColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_PopupPanelsBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_PopupPanelsBackgroundColor_mFD32EEA3E08C2C5E27F5740EAECD5B1B7EB1EA13 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_popupPanelsBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_popupPanelsBackgroundColor_63;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_popupPanelsBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_PopupPanelsBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_PopupPanelsBackgroundColor_m5197C4C0C3B7FF41C93DA80A2B0FD9475FDFBF89 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_popupPanelsBackgroundColor != value ) { m_popupPanelsBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_popupPanelsBackgroundColor_63;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_popupPanelsBackgroundColor != value ) { m_popupPanelsBackgroundColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_popupPanelsBackgroundColor_63 = L_4;
		// set { if( m_popupPanelsBackgroundColor != value ) { m_popupPanelsBackgroundColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_popupPanelsBackgroundColor != value ) { m_popupPanelsBackgroundColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Color SimpleFileBrowser.UISkin::get_PopupPanelsTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UISkin_get_PopupPanelsTextColor_mDFD2A197B891E1F32FB73B291A467132C90920C2 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_popupPanelsTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_popupPanelsTextColor_64;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_popupPanelsTextColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_PopupPanelsTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_PopupPanelsTextColor_m9EAEA2BB93BA301CB2C87AEA24C0BA40936A97F9 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// set { if( m_popupPanelsTextColor != value ) { m_popupPanelsTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_popupPanelsTextColor_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_popupPanelsTextColor != value ) { m_popupPanelsTextColor = value; m_version++; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value0;
		__this->___m_popupPanelsTextColor_64 = L_4;
		// set { if( m_popupPanelsTextColor != value ) { m_popupPanelsTextColor = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_popupPanelsTextColor != value ) { m_popupPanelsTextColor = value; m_version++; } }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::get_PopupPanelsBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_get_PopupPanelsBackground_m8A0FAE1B65A43E35C6D93707ED6051D806534098 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// get { return m_popupPanelsBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_popupPanelsBackground_65;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_popupPanelsBackground; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleFileBrowser.UISkin::set_PopupPanelsBackground(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_set_PopupPanelsBackground_mB38437BEFA8BB9666BED8FF34DD8F868C42393A8 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// set { if( m_popupPanelsBackground != value ) { m_popupPanelsBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_popupPanelsBackground_65;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// set { if( m_popupPanelsBackground != value ) { m_popupPanelsBackground = value; m_version++; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___value0;
		__this->___m_popupPanelsBackground_65 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_popupPanelsBackground_65), (void*)L_4);
		// set { if( m_popupPanelsBackground != value ) { m_popupPanelsBackground = value; m_version++; } }
		int32_t L_5 = __this->___m_version_4;
		__this->___m_version_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// set { if( m_popupPanelsBackground != value ) { m_popupPanelsBackground = value; m_version++; } }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Text,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textColor1, const RuntimeMethod* method) 
{
	{
		// text.color = textColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___text0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___textColor1;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// text.font = m_font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___text0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_3 = __this->___m_font_5;
		NullCheck(L_2);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_2, L_3, NULL);
		// text.fontSize = m_fontSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = ___text0;
		int32_t L_5 = __this->___m_fontSize_6;
		NullCheck(L_4);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m9B342028BE704955C675CC93864D4347FCF282BA (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// inputField.image.color = m_inputFieldNormalBackgroundColor;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = ___inputField0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_inputFieldNormalBackgroundColor_19;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// inputField.image.sprite = m_inputFieldBackground;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = ___inputField0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___m_inputFieldBackground_25;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// inputField.selectionColor = m_inputFieldSelectedTextColor;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = ___inputField0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___m_inputFieldSelectedTextColor_23;
		NullCheck(L_6);
		InputField_set_selectionColor_m2B7800A90FCE0840800CC01EC2C17059634B015E(L_6, L_7, NULL);
		// inputField.caretColor = m_inputFieldCaretColor;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_8 = ___inputField0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_inputFieldCaretColor_24;
		NullCheck(L_8);
		InputField_set_caretColor_mF9C606AA2F9F123CB6AD078DF616DE35061FF830(L_8, L_9, NULL);
		// ApplyTo( inputField.textComponent, m_inputFieldTextColor );
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = ___inputField0;
		NullCheck(L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___m_inputFieldTextColor_21;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, L_11, L_12, NULL);
		// if( inputField.placeholder as Text )
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_13 = ___inputField0;
		NullCheck(L_13);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_14;
		L_14 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)IsInstClass((RuntimeObject*)L_14, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		// ApplyTo( (Text) inputField.placeholder, m_inputFieldPlaceholderTextColor );
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_17 = ___inputField0;
		NullCheck(L_17);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_18;
		L_18 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F(L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___m_inputFieldPlaceholderTextColor_22;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, ((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_18, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_19, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m74872228D165B123D86A4E2692C2027E337A6602 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.image.color = m_buttonColor;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___button0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_buttonColor_26;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// button.image.sprite = m_buttonBackground;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = ___button0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___m_buttonBackground_28;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// ApplyTo( button.GetComponentInChildren<Text>(), m_buttonTextColor );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = ___button0;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_6, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___m_buttonTextColor_27;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_mD21874F09929E40C271F99AB71EA5EF2B91FD354 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdown0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	{
		// dropdown.image.color = m_dropdownColor;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = ___dropdown0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_dropdownColor_29;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// dropdown.image.sprite = m_dropdownBackground;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = ___dropdown0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___m_dropdownBackground_33;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// dropdown.template.GetComponent<Image>().color = m_dropdownColor;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = ___dropdown0;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = Dropdown_get_template_m6714116D7DA3F457F184B004785B4F017D50987A(L_6, NULL);
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_7, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_dropdownColor_29;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// Image dropdownArrow = dropdown.transform.Find( "Arrow" ).GetComponent<Image>();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_10 = ___dropdown0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_11, _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50, NULL);
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_12, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_0 = L_13;
		// dropdownArrow.color = m_dropdownArrowColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___m_dropdownArrowColor_31;
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		// dropdownArrow.sprite = m_dropdownArrow;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___m_dropdownArrow_34;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
		// ApplyTo( dropdown.captionText, m_dropdownTextColor );
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_18 = ___dropdown0;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19;
		L_19 = Dropdown_get_captionText_m0A8DEACA15F0DDFEE339462E03DF511B87389EF4(L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___m_dropdownTextColor_30;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, L_19, L_20, NULL);
		// ApplyTo( dropdown.itemText, m_dropdownTextColor );
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_21 = ___dropdown0;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22;
		L_22 = Dropdown_get_itemText_m8E98EB1B2B2F8D5C14F0D4A02E620E9240966681(L_21, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___m_dropdownTextColor_30;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, L_22, L_23, NULL);
		// Transform dropdownItem = dropdown.itemText.transform.parent;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_24 = ___dropdown0;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25;
		L_25 = Dropdown_get_itemText_m8E98EB1B2B2F8D5C14F0D4A02E620E9240966681(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_26, NULL);
		V_1 = L_27;
		// dropdownItem.Find( "Item Background" ).GetComponent<Image>().color = m_dropdownColor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_28, _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07, NULL);
		NullCheck(L_29);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30;
		L_30 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_29, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = __this->___m_dropdownColor_29;
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_31);
		// Image dropdownCheckmark = dropdownItem.Find( "Item Checkmark" ).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_1;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_32, _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450, NULL);
		NullCheck(L_33);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_33, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_2 = L_34;
		// dropdownCheckmark.color = m_dropdownCheckmarkColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___m_dropdownCheckmarkColor_32;
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// dropdownCheckmark.sprite = m_dropdownCheckmark;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = V_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = __this->___m_dropdownCheckmark_35;
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_38, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m90BBC4AB07D33B0EDD572D2CD6A92F52C353F493 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.image.color = m_toggleColor;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___toggle0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_toggleColor_36;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// toggle.image.sprite = m_toggleBackground;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = ___toggle0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___m_toggleBackground_39;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// toggle.graphic.color = m_toggleCheckmarkColor;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = ___toggle0;
		NullCheck(L_6);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7 = L_6->___graphic_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___m_toggleCheckmarkColor_38;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// ( (Image) toggle.graphic ).sprite = m_toggleCheckmark;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_9 = ___toggle0;
		NullCheck(L_9);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_10 = L_9->___graphic_21;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___m_toggleCheckmark_40;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_10, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_10, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), L_11, NULL);
		// ApplyTo( toggle.GetComponentInChildren<Text>(), m_toggleTextColor );
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = ___toggle0;
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13;
		L_13 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_12, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___m_toggleTextColor_37;
		UISkin_ApplyTo_m53C98C362E95A9E5E22E385E0A39FEAFA2DA5DEB(__this, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::ApplyTo(UnityEngine.UI.Scrollbar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_ApplyTo_m82C9BDB7381611FFF8AE75C42E41824F0E4E8E72 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___scrollbar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scrollbar.GetComponent<Image>().color = m_scrollbarBackgroundColor;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = ___scrollbar0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_scrollbarBackgroundColor_41;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// scrollbar.image.color = m_scrollbarColor;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_3 = ___scrollbar0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___m_scrollbarColor_42;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// UnityEngine.Sprite SimpleFileBrowser.UISkin::GetIconForFileEntry(SimpleFileBrowser.FileSystemEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* UISkin_GetIconForFileEntry_mBE3548DA513A0F0D809AFD07DC7067086E53E5AC (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 ___fileInfo0, bool ___extensionMayHaveMultipleSuffixes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB0B8F6BEE382C9D20E9134C00BF2FC9855B5C852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	{
		// if( !initializedFiletypeIcons )
		bool L_0 = __this->___initializedFiletypeIcons_55;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// InitializeFiletypeIcons();
		UISkin_InitializeFiletypeIcons_mA6B13A4B8D906480ABED33D8C70959FB25F94143(__this, NULL);
	}

IL_0015:
	{
		// if( fileInfo.IsDirectory )
		bool L_2;
		L_2 = FileSystemEntry_get_IsDirectory_m5B6EAD6DAC01DC97FA18BF8C82FB57CD009F9E53((&___fileInfo0), NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// return m_folderIcon;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___m_folderIcon_51;
		V_3 = L_4;
		goto IL_00f3;
	}

IL_002c:
	{
		// else if( filetypeToIcon.TryGetValue( fileInfo.Extension, out icon ) )
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_5 = __this->___filetypeToIcon_56;
		FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 L_6 = ___fileInfo0;
		String_t* L_7 = L_6.___Extension_2;
		NullCheck(L_5);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_mB0B8F6BEE382C9D20E9134C00BF2FC9855B5C852(L_5, L_7, (&V_0), Dictionary_2_TryGetValue_mB0B8F6BEE382C9D20E9134C00BF2FC9855B5C852_RuntimeMethod_var);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// return icon;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = V_0;
		V_3 = L_10;
		goto IL_00f3;
	}

IL_004c:
	{
		// else if( extensionMayHaveMultipleSuffixes )
		bool L_11 = ___extensionMayHaveMultipleSuffixes1;
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00d2;
		}
	}
	{
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		V_6 = 0;
		goto IL_00bf;
	}

IL_0059:
	{
		// if( fileInfo.Extension.EndsWith( m_filetypeIcons[i].extension, StringComparison.Ordinal ) )
		FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 L_13 = ___fileInfo0;
		String_t* L_14 = L_13.___Extension_2;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_15 = __this->___m_filetypeIcons_54;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___extension_0;
		NullCheck(L_14);
		bool L_18;
		L_18 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_14, L_17, 4, NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// filetypeToIcon[fileInfo.Extension] = m_filetypeIcons[i].icon;
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_20 = __this->___filetypeToIcon_56;
		FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 L_21 = ___fileInfo0;
		String_t* L_22 = L_21.___Extension_2;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_23 = __this->___m_filetypeIcons_54;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___icon_1;
		NullCheck(L_20);
		Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727(L_20, L_22, L_25, Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var);
		// return m_filetypeIcons[i].icon;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_26 = __this->___m_filetypeIcons_54;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___icon_1;
		V_3 = L_28;
		goto IL_00f3;
	}

IL_00b8:
	{
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00bf:
	{
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		int32_t L_30 = V_6;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_31 = __this->___m_filetypeIcons_54;
		NullCheck(L_31);
		V_8 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_8;
		if (L_32)
		{
			goto IL_0059;
		}
	}
	{
	}

IL_00d2:
	{
		// filetypeToIcon[fileInfo.Extension] = m_defaultFileIcon;
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_33 = __this->___filetypeToIcon_56;
		FileSystemEntry_t5447750506AD6E82A254A96E8E4104F73B4733E1 L_34 = ___fileInfo0;
		String_t* L_35 = L_34.___Extension_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = __this->___m_defaultFileIcon_53;
		NullCheck(L_33);
		Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727(L_33, L_35, L_36, Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var);
		// return m_defaultFileIcon;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = __this->___m_defaultFileIcon_53;
		V_3 = L_37;
		goto IL_00f3;
	}

IL_00f3:
	{
		// }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = V_3;
		return L_38;
	}
}
// System.Void SimpleFileBrowser.UISkin::InitializeFiletypeIcons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin_InitializeFiletypeIcons_mA6B13A4B8D906480ABED33D8C70959FB25F94143 (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m6147BBE7935413D31B0CBE1C87D9D2974DCC0F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2661B8E487FC9B4EA1F7DDA4F9BBD16CF8382B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// initializedFiletypeIcons = true;
		__this->___initializedFiletypeIcons_55 = (bool)1;
		// if( filetypeToIcon == null )
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_0 = __this->___filetypeToIcon_56;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// filetypeToIcon = new Dictionary<string, Sprite>( 128 );
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_2 = (Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516*)il2cpp_codegen_object_new(Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m2661B8E487FC9B4EA1F7DDA4F9BBD16CF8382B09(L_2, ((int32_t)128), Dictionary_2__ctor_m2661B8E487FC9B4EA1F7DDA4F9BBD16CF8382B09_RuntimeMethod_var);
		__this->___filetypeToIcon_56 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filetypeToIcon_56), (void*)L_2);
		goto IL_0033;
	}

IL_0027:
	{
		// filetypeToIcon.Clear();
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_3 = __this->___filetypeToIcon_56;
		NullCheck(L_3);
		Dictionary_2_Clear_m6147BBE7935413D31B0CBE1C87D9D2974DCC0F6D(L_3, Dictionary_2_Clear_m6147BBE7935413D31B0CBE1C87D9D2974DCC0F6D_RuntimeMethod_var);
	}

IL_0033:
	{
		// m_allIconExtensionsHaveSingleSuffix = true;
		__this->___m_allIconExtensionsHaveSingleSuffix_57 = (bool)1;
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		V_1 = 0;
		goto IL_0112;
	}

IL_0041:
	{
		// m_filetypeIcons[i].extension = m_filetypeIcons[i].extension.ToLowerInvariant();
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_4 = __this->___m_filetypeIcons_54;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_6 = __this->___m_filetypeIcons_54;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___extension_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_8, NULL);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___extension_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___extension_0), (void*)L_9);
		// if( m_filetypeIcons[i].extension[0] != '.' )
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_10 = __this->___m_filetypeIcons_54;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___extension_0;
		NullCheck(L_12);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, 0, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// m_filetypeIcons[i].extension = "." + m_filetypeIcons[i].extension;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_15 = __this->___m_filetypeIcons_54;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_17 = __this->___m_filetypeIcons_54;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___extension_0;
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___extension_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___extension_0), (void*)L_20);
	}

IL_00b7:
	{
		// filetypeToIcon[m_filetypeIcons[i].extension] = m_filetypeIcons[i].icon;
		Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* L_21 = __this->___filetypeToIcon_56;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_22 = __this->___m_filetypeIcons_54;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		String_t* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___extension_0;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_25 = __this->___m_filetypeIcons_54;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___icon_1;
		NullCheck(L_21);
		Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727(L_21, L_24, L_27, Dictionary_2_set_Item_mD460E52E10776520A9AD30A2BF1ED4E06F398727_RuntimeMethod_var);
		// m_allIconExtensionsHaveSingleSuffix &= ( m_filetypeIcons[i].extension.LastIndexOf( '.' ) == 0 );
		bool L_28 = __this->___m_allIconExtensionsHaveSingleSuffix_57;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_29 = __this->___m_filetypeIcons_54;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		String_t* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___extension_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_31, ((int32_t)46), NULL);
		__this->___m_allIconExtensionsHaveSingleSuffix_57 = (bool)((int32_t)((int32_t)L_28&((((int32_t)L_32) == ((int32_t)0))? 1 : 0)));
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0112:
	{
		// for( int i = 0; i < m_filetypeIcons.Length; i++ )
		int32_t L_34 = V_1;
		FiletypeIconU5BU5D_tDDB38554C14601802B7E1C25424F97D9F55197B5* L_35 = __this->___m_filetypeIcons_54;
		NullCheck(L_35);
		V_3 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_3;
		if (L_36)
		{
			goto IL_0041;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleFileBrowser.UISkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISkin__ctor_m47C84F2C0A2F9BC4C013283F192B24251FD4340C (UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C* __this, const RuntimeMethod* method) 
{
	{
		// private int m_version = 0;
		__this->___m_version_4 = 0;
		// private int m_fontSize = 14;
		__this->___m_fontSize_6 = ((int32_t)14);
		// private Color m_windowColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		__this->___m_windowColor_7 = L_0;
		// private Color m_filesListColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_filesListColor_8 = L_1;
		// private Color m_filesVerticalSeparatorColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		__this->___m_filesVerticalSeparatorColor_9 = L_2;
		// private Color m_titleBackgroundColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_titleBackgroundColor_10 = L_3;
		// private Color m_titleTextColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_titleTextColor_11 = L_4;
		// private Color m_windowResizeGizmoColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_windowResizeGizmoColor_12 = L_5;
		// private Color m_headerButtonsColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_headerButtonsColor_13 = L_6;
		// private Color m_inputFieldNormalBackgroundColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_inputFieldNormalBackgroundColor_19 = L_7;
		// private Color m_inputFieldInvalidBackgroundColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		__this->___m_inputFieldInvalidBackgroundColor_20 = L_8;
		// private Color m_inputFieldTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_inputFieldTextColor_21 = L_9;
		// private Color m_inputFieldPlaceholderTextColor = new Color( 0f, 0f, 0f, 0.5f );
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->___m_inputFieldPlaceholderTextColor_22 = L_10;
		// private Color m_inputFieldSelectedTextColor = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		__this->___m_inputFieldSelectedTextColor_23 = L_11;
		// private Color m_inputFieldCaretColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_inputFieldCaretColor_24 = L_12;
		// private Color m_buttonColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_buttonColor_26 = L_13;
		// private Color m_buttonTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_buttonTextColor_27 = L_14;
		// private Color m_dropdownColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_dropdownColor_29 = L_15;
		// private Color m_dropdownTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_dropdownTextColor_30 = L_16;
		// private Color m_dropdownArrowColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_dropdownArrowColor_31 = L_17;
		// private Color m_dropdownCheckmarkColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_dropdownCheckmarkColor_32 = L_18;
		// private Color m_toggleColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_toggleColor_36 = L_19;
		// private Color m_toggleTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_toggleTextColor_37 = L_20;
		// private Color m_toggleCheckmarkColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_toggleCheckmarkColor_38 = L_21;
		// private Color m_scrollbarBackgroundColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		__this->___m_scrollbarBackgroundColor_41 = L_22;
		// private Color m_scrollbarColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_scrollbarColor_42 = L_23;
		// private float m_fileHeight = 30f;
		__this->___m_fileHeight_43 = (30.0f);
		// private float m_fileIconsPadding = 6f;
		__this->___m_fileIconsPadding_44 = (6.0f);
		// private Color m_fileNormalBackgroundColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_fileNormalBackgroundColor_45 = L_24;
		// private Color m_fileAlternatingBackgroundColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_fileAlternatingBackgroundColor_46 = L_25;
		// private Color m_fileHoveredBackgroundColor = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		__this->___m_fileHoveredBackgroundColor_47 = L_26;
		// private Color m_fileSelectedBackgroundColor = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		__this->___m_fileSelectedBackgroundColor_48 = L_27;
		// private Color m_fileNormalTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_fileNormalTextColor_49 = L_28;
		// private Color m_fileSelectedTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_fileSelectedTextColor_50 = L_29;
		// private bool initializedFiletypeIcons = false;
		__this->___initializedFiletypeIcons_55 = (bool)0;
		// private bool m_allIconExtensionsHaveSingleSuffix = true;
		__this->___m_allIconExtensionsHaveSingleSuffix_57 = (bool)1;
		// private Color m_contextMenuBackgroundColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		__this->___m_contextMenuBackgroundColor_60 = L_30;
		// private Color m_contextMenuTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_contextMenuTextColor_61 = L_31;
		// private Color m_contextMenuSeparatorColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_contextMenuSeparatorColor_62 = L_32;
		// private Color m_popupPanelsBackgroundColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		__this->___m_popupPanelsBackgroundColor_63 = L_33;
		// private Color m_popupPanelsTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___m_popupPanelsTextColor_64 = L_34;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserItem_set_IsDirectory_mA1AD3AFE7B0E46210FE1289FE2D291046DEF66F7_inline (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsDirectoryU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___value0;
		__this->___U3CeligibleForClickU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListItem_get_Position_m49214519D4BBE5B0F33D6AAB4E3B8F49B580DEFD_inline (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FileBrowserItem_get_IsDirectory_mE2B9AE6ADA43DF5A8408EE693F2FDDD88D216D0F_inline (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDirectory { get; private set; }
		bool L_0 = __this->___U3CIsDirectoryU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRenameCompleted_Invoke_m383F016C41D7C2B8E78DBA3BA5130DE979344E21_inline (OnRenameCompleted_t431AC2CFF8D11E4AEF72BBD7D07F5271994D5E84* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___filename0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnItemClickedHandler_Invoke_m35BB1924A7FD2EDADA9D5BF729B37C3E1D7694EA_inline (OnItemClickedHandler_t025D8ADA092CE10AD605EB907DAC3CEC3F59F01F* __this, ListItem_tE112A367BDC021731139C4894491A00F05B295B3* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ListItem_tE112A367BDC021731139C4894491A00F05B295B3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListItem_set_Position_m8605AB6B00F33563B51063DAEE72D65110B2CBAD_inline (ListItem_tE112A367BDC021731139C4894491A00F05B295B3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Position { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
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
