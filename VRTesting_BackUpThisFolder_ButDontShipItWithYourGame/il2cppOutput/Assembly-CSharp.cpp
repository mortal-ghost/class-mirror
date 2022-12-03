#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Char>
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`2<UnityEngine.Vector2Int,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207;
// System.Func`2<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>
struct IEnumerable_1_t8845214D7CADFAAD7AB98132A368905184A79DDF;
// System.Collections.Generic.IEnumerable`1<Unity.RenderStreaming.VideoCodecInfo>
struct IEnumerable_1_t852947B29FEC80F19E638905EE794B46A271B5FA;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Dropdown/OptionData>
struct IEnumerable_1_t48D22DF1140C37CEBB51C4E365703A607B2A4F07;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t5421B2468AFFE816206B49B3A6E589B74E5C6C94;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
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
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Unity.RenderStreaming.SignalingHandlerBase>
struct List_1_tF1263485A51363E8E9630DD285F54CC03F7AA892;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Collections.Generic.List`1<SimpleFileBrowser.FileBrowser/Filter>
struct List_1_t4C78B0E6B07B236B63B2A1441F4B5FC7007FE916;
// System.Predicate`1<Unity.RenderStreaming.VideoCodecInfo>
struct Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.IList`1<Paroxe.PdfRenderer.PDFSearchResult>[]
struct IList_1U5BU5D_tDC44B9D91789BEA6659A4B909647619E3F0CFEB3;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// SimpleFileBrowser.FileSystemEntry[]
struct FileSystemEntryU5BU5D_tC24F2466E60B1F19A351D56D73742A72A983B9A9;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Paroxe.PdfRenderer.Internal.Viewer.PDFPageTextureHolder[]
struct PDFPageTextureHolderU5BU5D_tC0C685B0CC573213115CDFB403AF90CC629C858C;
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// Unity.RenderStreaming.SignalingHandlerBase[]
struct SignalingHandlerBaseU5BU5D_t0C0E5ED7F072F4DAFDDD628DB62B1A2E923D66E1;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.RenderStreaming.VideoCodecInfo[]
struct VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// SimpleFileBrowser.FileBrowser/QuickLink[]
struct QuickLinkU5BU5D_tB2721212BB4E7A159372F669F3E29D2F93D2DA71;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14;
// AskPermissions
struct AskPermissions_t51D96EE38EC03BC4FC71E247873255979B0B22F9;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// Unity.RenderStreaming.Samples.BackButton
struct BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Calibrate
struct Calibrate_t26BB059768D1E218717D38D8A1AC4EBF6BC938C0;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024;
// CameraRayCast
struct CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// CursorSettings
struct CursorSettings_t2EFEAEC566DF8551008207562C570BBEA1D5CDE0;
// Unity.RenderStreaming.DataChannelBase
struct DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DeviceCameraInput
struct DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7;
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
// FollowScroll
struct FollowScroll_tDDDF95096F06D53F797DDD239424C6133E66D0C7;
// Unity.RenderStreaming.Signaling.FurioosSignaling
struct FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// UnityEngine.InputSystem.Gyroscope
struct Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4;
// Unity.RenderStreaming.H264CodecInfo
struct H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2;
// HorizontalScroll
struct HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9;
// Unity.RenderStreaming.Signaling.HttpSignaling
struct HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// SimpleFileBrowser.IListViewAdapter
struct IListViewAdapter_t14960A211DB1A5343E0EAAE128C05A99909CDDF3;
// Paroxe.PdfRenderer.IPDFDeviceActionHandler
struct IPDFDeviceActionHandler_t40761D2719B60F6C2AA1A86E4344CC7917992B2D;
// Unity.RenderStreaming.IRenderStreamingHandler
struct IRenderStreamingHandler_tDB339CEF1DDC742867E5E12BD782B31842DBCC00;
// Unity.RenderStreaming.Signaling.ISignaling
struct ISignaling_tA278B9516A1CCCF356491A54E96BEB68FA119D56;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// InputHandling
struct InputHandling_t27FE3668FCA29D85B82CB949F76D9A317F7D7450;
// Unity.RenderStreaming.InputSystem.InputRemoting
struct InputRemoting_t64A1008E2A906754FEBE6EC3485F8C3A6F9B25D6;
// Unity.RenderStreaming.InputSender
struct InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// MoveCursor
struct MoveCursor_tEAC2BFC15E9332973D7233DF086DEBB1C20483B3;
// NewControlsNamespace.NewControls
struct NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB;
// NewInput
struct NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Numpad
struct Numpad_t393C69246800359ABA968F3772B8AD736AF66BED;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// Unity.RenderStreaming.Signaling.OnAnswerHandler
struct OnAnswerHandler_t702C4034809BCFA126391F9F0C6184B9D5D9C2EB;
// Unity.RenderStreaming.Signaling.OnConnectHandler
struct OnConnectHandler_t46B00C013D4DE6609066F57990DCF3E5B8E05D43;
// Unity.RenderStreaming.Signaling.OnDisconnectHandler
struct OnDisconnectHandler_t06CABD0699EA0E4F8F63AB2864386AF8A0B325F5;
// Unity.RenderStreaming.Signaling.OnIceCandidateHandler
struct OnIceCandidateHandler_t3DA151A1236442174309571D5467BEA8586938C7;
// Unity.RenderStreaming.Signaling.OnOfferHandler
struct OnOfferHandler_tEB3A5982CEB72A0B8E4B34A7AC0EB6C2AEFEABF3;
// Unity.RenderStreaming.Signaling.OnStartHandler
struct OnStartHandler_tE346E1889FEE4565E5943753DE0CA3D391B8A194;
// Unity.RenderStreaming.OnStartedChannelHandler
struct OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296;
// Unity.RenderStreaming.OnStartedStreamHandler
struct OnStartedStreamHandler_t3BDA5A49E0CB709966D4C68EAA728D02FD4DE95E;
// Unity.RenderStreaming.OnStoppedChannelHandler
struct OnStoppedChannelHandler_t18F205BD3FF9CCF8DE16376FDD165B44FA19D8CC;
// Unity.RenderStreaming.OnStoppedStreamHandler
struct OnStoppedStreamHandler_tEFA024AF51F15D0C8EC9030EAC922B431EC2DB24;
// Onclick
struct Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5;
// OverrideInput
struct OverrideInput_t083E01407BA7A8FD2A806459BAF781A401AFFA99;
// Paroxe.PdfRenderer.PDFAsset
struct PDFAsset_t49A736BC8C002A0655E25C54A59A4F356BE928E3;
// Paroxe.PdfRenderer.Internal.Viewer.PDFBookmarksViewer
struct PDFBookmarksViewer_t2AAF19B9274A9F225643BAFD7CC0D7481BB5633F;
// Paroxe.PdfRenderer.PDFDocument
struct PDFDocument_t4FD86210638A9EBA0DD07903C8C2E50CCB44BD33;
// Paroxe.PdfRenderer.Internal.Viewer.PDFPageRange
struct PDFPageRange_tDF2F39F044CBEA53B44C10C574A00692BD8B2444;
// Paroxe.PdfRenderer.PDFRenderer
struct PDFRenderer_tBEC540A52372C9C39CFD9A9F026074BB5DD3781D;
// Paroxe.PdfRenderer.Internal.Viewer.PDFThumbnailsViewer
struct PDFThumbnailsViewer_t4A8067462D52E80CB546FD2ED7D45EB5B487225B;
// Paroxe.PdfRenderer.PDFViewer
struct PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795;
// Paroxe.PdfRenderer.Internal.Viewer.PDFViewerInternal
struct PDFViewerInternal_tEBAEB5ECD58AD4F2C4A1602290B13EDEA50E9090;
// PdfStart
struct PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Posmanager
struct Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93;
// Quit
struct Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2;
// Unity.WebRTC.RTCDataChannel
struct RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77;
// Unity.WebRTC.RTCRtpTransceiver
struct RTCRtpTransceiver_t4950B33225C35C890A0894C738D3F6D19B39F0C5;
// RandomizeColor
struct RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// ReceiverSample
struct ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SimpleFileBrowser.RecycledListView
struct RecycledListView_t00EFBAA414C3606D349D75DBEF693D5614472EF1;
// Unity.RenderStreaming.RenderStreaming
struct RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B;
// Unity.RenderStreaming.RenderStreamingInternal
struct RenderStreamingInternal_tC57F29D25F8E5592C214185992D0854549518474;
// Unity.RenderStreaming.Samples.RenderStreamingSettings
struct RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RotateSet
struct RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.RenderStreaming.Samples.SampleManager
struct SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B;
// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D;
// Unity.RenderStreaming.Samples.SceneSelectUI
struct SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// Scrolldfsdf
struct Scrolldfsdf_t2480941D7E2F42F81942FDBB876AA5A5D70804A0;
// Scrolling
struct Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Unity.RenderStreaming.InputSystem.Sender
struct Sender_t23B079B23D3CA9A81A7AA5DC7DBF9AD44D5E5F27;
// SetupPos
struct SetupPos_t26786CCE98E85D210C695DEAF0E479874AC61296;
// Unity.RenderStreaming.SignalingEventProvider
struct SignalingEventProvider_tCF7DEFD69000F6AAE0CBD36F3378DFF3C9C94E52;
// Unity.RenderStreaming.SignalingHandlerBase
struct SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A;
// Unity.RenderStreaming.SingleConnection
struct SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// SimpleFileBrowser.UISkin
struct UISkin_tB3708DFB7ED371BC3FDF5D149943505528BF6D5C;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Unity.RenderStreaming.VP9CodecInfo
struct VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Unity.RenderStreaming.VideoCodecInfo
struct VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810;
// VideoPlay
struct VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// Unity.RenderStreaming.VideoStreamReceiver
struct VideoStreamReceiver_t4016311DA555883E0A9551D53EBBFB8F8D3EBAF3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4;
// Unity.RenderStreaming.Signaling.WebSocketSignaling
struct WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
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
// Unity.RenderStreaming.Signaling.FurioosSignaling/OnSignedInHandler
struct OnSignedInHandler_tDA9BE750A3131C821421DC45387728C9829FE267;
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
// NewControlsNamespace.NewControls/IButtonsActions
struct IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990;
// NewControlsNamespace.NewControls/IMovementActions
struct IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC;
// NewControlsNamespace.NewControls/IScrollingActions
struct IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C;
// Paroxe.PdfRenderer.PDFRenderer/RenderSettings
struct RenderSettings_tAF73D4ABCAC401C30FB49B5DE4AD9AB722EE69F6;
// Paroxe.PdfRenderer.PDFViewer/CancelEventHandler
struct CancelEventHandler_tA1815F7227191E5659E79BBB4C1992245B318F2F;
// Paroxe.PdfRenderer.PDFViewer/CurrentPageChangedEventHandler
struct CurrentPageChangedEventHandler_t34C08DB07E005A092EC51E999E988EF09086D48B;
// Paroxe.PdfRenderer.PDFViewer/DocumentChangedEventHandler
struct DocumentChangedEventHandler_tFE84954748895554C9D649C0C587D6D83B14E982;
// Paroxe.PdfRenderer.PDFViewer/LoadFailEventHandler
struct LoadFailEventHandler_tCF5675F535BDA28F1ADC49515208E7146EB8B322;
// Paroxe.PdfRenderer.PDFViewer/PDFViewerEventHandler
struct PDFViewerEventHandler_tA04B3F23F728EBAC4CBB118AB4EF5575BE6AFE08;
// Paroxe.PdfRenderer.PDFViewer/ZoomChangedEventHandler
struct ZoomChangedEventHandler_t59E26575B006C35BC1497BBC10F4887E32092D2F;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Unity.RenderStreaming.Samples.SceneSelectUI/<>c
struct U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// Scrolldfsdf/<>c
struct U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;
// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler
struct OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* H264Profile_t91377C2A07B2FECC3D567344D6BB9263F4FD85B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0072FC0914E8FBF8E1C4004A9CDE383698D8E931;
IL2CPP_EXTERN_C String_t* _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610;
IL2CPP_EXTERN_C String_t* _stringLiteral1D29BD4E1335201D00EEE82E698EDBDE3403D478;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A069D7EC2E21BD37211BC8A593A5C59901B939C;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C41ADB1FE2095C1FA0B14A275696D257EEFA3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F;
IL2CPP_EXTERN_C String_t* _stringLiteral53AFAC98120DBB6F1D7996FD52282BF1273F9475;
IL2CPP_EXTERN_C String_t* _stringLiteral55385599C50BC965AABC565E67963FF5642B308B;
IL2CPP_EXTERN_C String_t* _stringLiteral5635955E2F38FAE85097EC595A585FA8B403FE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57426548280384D663F9AC23EBD42E4B86816F68;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5BC2BC3D63FB7F1B646AC0288670B9FC9ABB1D83;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6BDD037B6AEE48B5D323DAAEAB467A82A176AF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6D492D398CB757C1B8B71175A0168D21548D857D;
IL2CPP_EXTERN_C String_t* _stringLiteral73A70E269F7AD1286623ED86F35100E7C46575B3;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DD77DA8F68B460FDFB4CEEE4869AD301790F4EE;
IL2CPP_EXTERN_C String_t* _stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral8FB36AE411D0679209B8EAABB63AE2C845CF1905;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA760F01896973CB261F86D8A920EBD0624A16F;
IL2CPP_EXTERN_C String_t* _stringLiteralA61F7BBA8E501038575C34BED7A2D6FD990C6410;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC88B7268310CF55E1332901267EC9623937285;
IL2CPP_EXTERN_C String_t* _stringLiteralB1DA7DBECC52D76DB5307B905E681DC96C705177;
IL2CPP_EXTERN_C String_t* _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1BA74A8FA6A7FF32EDD45F71F54773982B7C14;
IL2CPP_EXTERN_C String_t* _stringLiteralBEEDAD65EC8407EA8891326C7D7BC848E0E077C4;
IL2CPP_EXTERN_C String_t* _stringLiteralC140CD47EE56A87705BA5000102859D988D112C0;
IL2CPP_EXTERN_C String_t* _stringLiteralC37E89005D0DB19BAC8407F3B23616813EB3CB4C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralD299C919792755C9003DB974F87A2DBD4B87A906;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F66B73B524456DA7261B4E9C6A8E86C378930D;
IL2CPP_EXTERN_C String_t* _stringLiteralD506626DD92A6957F751B7700343B4198E5CADD0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5DB1C187D474B5CA5FB91EAA3FB6F20B81C866;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A;
IL2CPP_EXTERN_C String_t* _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86;
IL2CPP_EXTERN_C String_t* _stringLiteralF983F37D89979FFA1CE7977E99852F1DE910F0A4;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0583E2D07ED84D8125314D7FD3B7BCCCE17D90;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraRayCast_U3CAwakeU3Eb__13_0_mE6E6AC99572F54A4C698346A9D6A90D578A93BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputSender_t049289B7AA492685781B08E636AF5B2A1B91B601_m063EAC9D6BD6D6783073B8CF6CF2B46AB07906CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_m926D886710762EDEC3925BB69A204C1BB3E8E93D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m46B169F60ECBD25AAC000C2EB1E1863625D357F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mFDB33CEAEB4E938DB1F9CA6F08942FC00A1024DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Numpad_EnterText_mD824FB557C053913DA24278B4E717B03CF491F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Numpad_RemoveText_mCBBFCDE6878E99BD13FCC30E25FF223918C189A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RandomizeColor_U3COnEnableU3Eb__1_0_m469BA82B71F388EF21A6FC2A2878B9E12F183270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnAddressChange_m7CD3D288AB6A32DD5DD4078931DC68475093F433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnProceed_m59A9649578F49B508ABA38F5C0FBD67E75544A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnStart_mFDAEE8BD00DE631F5522E6E79DB1B23C0D800591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnStartedChannel_m983767CD03F1B50C85F82BF4A86E2610AEE5208C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnStop_mE5F99039ED1FEA4CC4FA5FD8DCB73E716AE4821E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_OnUpdateReceiveTexture_m863B5A5A92E9A14A2368E8FD86AB54CE1CE2C984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReceiverSample_U3CAwakeU3Eb__16_0_m256AA7BF1897E2B724537E184BC07BA8BEEA153F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderStreamingSettings_get_Signaling_m679998DA5A838CE1E3FEBB771D52F683C333E939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeReceiverVideoCodecSelect_mC26E8022105708AC3C5D9866B115D1D3DA4324D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeSenderVideoCodecSelect_mF301D7E0497B69ED1848D73AB8555D65D2E1F70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeSignalingAddress_mCBCE2F7723D946059036D7E565BFF613E6532E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeSignalingInterval_m48547C5EFA3DE0B863F8D3BD755FA2F2DB74E636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeSignalingSecured_m6FE5CF52F3EC7EA20BC732E7B1E4F5B12B4E57C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeSignalingType_m1D3D0BD8B41CBFA509BA05A752028679E1941D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeStreamSizeSelect_m6491AC9899C2B306E9A46569BFBBCED26A282334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeTextureHeightInput_mC8A59E4F6E73E25A0C250CEDC9C77A9FA060F1C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnChangeTextureWidthInput_m9854E155E2FB1AC64EC457714A750E91C0EB2379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedAR_m4E50DF084B9729A27DFEAE8EC6554776A32424A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedBidirectional_m25FB7D21920689209487AE307A83CBE74106BC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedBroadcast_m463F9BDEF331DF22EBA7E1CE9F42E2F1E6673D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedGyro_m28F9A02BC24AC1BA6A896807403DA10246AE243B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedMultiplay_m0A03A78722918BBCB709F32C9E7D915279D52919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedReceiver_m410229C6048C5B563838BE9F56E3BDCB415F757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedRenderPipeline_m2F1026D2C29D769E4F794E47CFCF78C7F69C6198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_OnPressedWebBrowserInput_m5E47B1EFA297CEFA472DAEFA1C2B3CA686C5CCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_U3CStartU3Eb__20_3_m55FD5D938D91EDB5431676AB1E4200024CDB4CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneSelectUI_U3CStartU3Eb__20_4_m65CD6037B8C494D2056A6BCB1428BD19B4F662F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__20_0_mE1F4F2C09752BEF44E9B650F66C09607E88583E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__20_1_m00041DF52945FFE4B230B53FDFCFCA12DEDBEDAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__20_2_m4FBF688872E0FD7206175A1A5F370B3F3C60E1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__2_0_mA1665F49681A2523F75AE440717EB70B0BCD168F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SignalingHandlerBaseU5BU5D_t0C0E5ED7F072F4DAFDDD628DB62B1A2E923D66E1;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.RenderStreaming.Signaling.FurioosSignaling
struct FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7  : public RuntimeObject
{
	// System.Single Unity.RenderStreaming.Signaling.FurioosSignaling::m_timeout
	float ___m_timeout_0;
	// System.Boolean Unity.RenderStreaming.Signaling.FurioosSignaling::m_running
	bool ___m_running_1;
	// System.Threading.SynchronizationContext Unity.RenderStreaming.Signaling.FurioosSignaling::m_mainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_mainThreadContext_2;
	// System.Threading.Thread Unity.RenderStreaming.Signaling.FurioosSignaling::m_signalingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_signalingThread_3;
	// System.Threading.AutoResetEvent Unity.RenderStreaming.Signaling.FurioosSignaling::m_wsCloseEvent
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___m_wsCloseEvent_4;
	// WebSocketSharp.WebSocket Unity.RenderStreaming.Signaling.FurioosSignaling::m_webSocket
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* ___m_webSocket_5;
	// Unity.RenderStreaming.Signaling.OnStartHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnStart
	OnStartHandler_tE346E1889FEE4565E5943753DE0CA3D391B8A194* ___OnStart_6;
	// Unity.RenderStreaming.Signaling.FurioosSignaling/OnSignedInHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnSignedIn
	OnSignedInHandler_tDA9BE750A3131C821421DC45387728C9829FE267* ___OnSignedIn_7;
	// Unity.RenderStreaming.Signaling.OnConnectHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnCreateConnection
	OnConnectHandler_t46B00C013D4DE6609066F57990DCF3E5B8E05D43* ___OnCreateConnection_8;
	// Unity.RenderStreaming.Signaling.OnDisconnectHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnDestroyConnection
	OnDisconnectHandler_t06CABD0699EA0E4F8F63AB2864386AF8A0B325F5* ___OnDestroyConnection_9;
	// Unity.RenderStreaming.Signaling.OnOfferHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnOffer
	OnOfferHandler_tEB3A5982CEB72A0B8E4B34A7AC0EB6C2AEFEABF3* ___OnOffer_10;
	// Unity.RenderStreaming.Signaling.OnAnswerHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnAnswer
	OnAnswerHandler_t702C4034809BCFA126391F9F0C6184B9D5D9C2EB* ___OnAnswer_11;
	// Unity.RenderStreaming.Signaling.OnIceCandidateHandler Unity.RenderStreaming.Signaling.FurioosSignaling::OnIceCandidate
	OnIceCandidateHandler_t3DA151A1236442174309571D5467BEA8586938C7* ___OnIceCandidate_12;
};

// Unity.RenderStreaming.Signaling.HttpSignaling
struct HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling::m_url
	String_t* ___m_url_0;
	// System.Single Unity.RenderStreaming.Signaling.HttpSignaling::m_timeout
	float ___m_timeout_1;
	// System.Threading.SynchronizationContext Unity.RenderStreaming.Signaling.HttpSignaling::m_mainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_mainThreadContext_2;
	// System.Boolean Unity.RenderStreaming.Signaling.HttpSignaling::m_running
	bool ___m_running_3;
	// System.Threading.Thread Unity.RenderStreaming.Signaling.HttpSignaling::m_signalingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_signalingThread_4;
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling::m_sessionId
	String_t* ___m_sessionId_5;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetAllRequest
	int64_t ___m_lastTimeGetAllRequest_6;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetOfferRequest
	int64_t ___m_lastTimeGetOfferRequest_7;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetAnswerRequest
	int64_t ___m_lastTimeGetAnswerRequest_8;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetCandidateRequest
	int64_t ___m_lastTimeGetCandidateRequest_9;
	// Unity.RenderStreaming.Signaling.OnStartHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnStart
	OnStartHandler_tE346E1889FEE4565E5943753DE0CA3D391B8A194* ___OnStart_10;
	// Unity.RenderStreaming.Signaling.OnConnectHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnCreateConnection
	OnConnectHandler_t46B00C013D4DE6609066F57990DCF3E5B8E05D43* ___OnCreateConnection_11;
	// Unity.RenderStreaming.Signaling.OnDisconnectHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnDestroyConnection
	OnDisconnectHandler_t06CABD0699EA0E4F8F63AB2864386AF8A0B325F5* ___OnDestroyConnection_12;
	// Unity.RenderStreaming.Signaling.OnOfferHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnOffer
	OnOfferHandler_tEB3A5982CEB72A0B8E4B34A7AC0EB6C2AEFEABF3* ___OnOffer_13;
	// Unity.RenderStreaming.Signaling.OnAnswerHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnAnswer
	OnAnswerHandler_t702C4034809BCFA126391F9F0C6184B9D5D9C2EB* ___OnAnswer_14;
	// Unity.RenderStreaming.Signaling.OnIceCandidateHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnIceCandidate
	OnIceCandidateHandler_t3DA151A1236442174309571D5467BEA8586938C7* ___OnIceCandidate_15;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// NewControlsNamespace.NewControls
struct NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset NewControlsNamespace.NewControls::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls::m_Buttons
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Buttons_1;
	// NewControlsNamespace.NewControls/IButtonsActions NewControlsNamespace.NewControls::m_ButtonsActionsCallbackInterface
	RuntimeObject* ___m_ButtonsActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::m_Buttons_ButtonClick
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Buttons_ButtonClick_3;
	// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls::m_Movement
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Movement_4;
	// NewControlsNamespace.NewControls/IMovementActions NewControlsNamespace.NewControls::m_MovementActionsCallbackInterface
	RuntimeObject* ___m_MovementActionsCallbackInterface_5;
	// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::m_Movement_VerticalAxis
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Movement_VerticalAxis_6;
	// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::m_Movement_HorizontalAxis
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Movement_HorizontalAxis_7;
	// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls::m_Scrolling
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Scrolling_8;
	// NewControlsNamespace.NewControls/IScrollingActions NewControlsNamespace.NewControls::m_ScrollingActionsCallbackInterface
	RuntimeObject* ___m_ScrollingActionsCallbackInterface_9;
	// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::m_Scrolling_Scroll
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Scrolling_Scroll_10;
	// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::m_Scrolling_HorScroll
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Scrolling_HorScroll_11;
};

// Unity.RenderStreaming.Samples.SampleManager
struct SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B  : public RuntimeObject
{
	// Unity.RenderStreaming.Samples.RenderStreamingSettings Unity.RenderStreaming.Samples.SampleManager::m_settings
	RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* ___m_settings_1;
};

struct SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_StaticFields
{
	// Unity.RenderStreaming.Samples.SampleManager Unity.RenderStreaming.Samples.SampleManager::s_instance
	SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* ___s_instance_0;
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

// Unity.RenderStreaming.VideoCodecInfo
struct VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.VideoCodecInfo::m_MimeType
	String_t* ___m_MimeType_1;
	// System.String Unity.RenderStreaming.VideoCodecInfo::m_SdpFmtpLine
	String_t* ___m_SdpFmtpLine_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.RenderStreaming.VideoCodecInfo::m_parameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_parameters_3;
};

struct VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_StaticFields
{
	// System.String Unity.RenderStreaming.VideoCodecInfo::KeyCodecImplementation
	String_t* ___KeyCodecImplementation_0;
};

// Unity.RenderStreaming.Signaling.WebSocketSignaling
struct WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.Signaling.WebSocketSignaling::m_url
	String_t* ___m_url_0;
	// System.Single Unity.RenderStreaming.Signaling.WebSocketSignaling::m_timeout
	float ___m_timeout_1;
	// System.Threading.SynchronizationContext Unity.RenderStreaming.Signaling.WebSocketSignaling::m_mainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_mainThreadContext_2;
	// System.Boolean Unity.RenderStreaming.Signaling.WebSocketSignaling::m_running
	bool ___m_running_3;
	// System.Threading.Thread Unity.RenderStreaming.Signaling.WebSocketSignaling::m_signalingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_signalingThread_4;
	// System.Threading.AutoResetEvent Unity.RenderStreaming.Signaling.WebSocketSignaling::m_wsCloseEvent
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___m_wsCloseEvent_5;
	// WebSocketSharp.WebSocket Unity.RenderStreaming.Signaling.WebSocketSignaling::m_webSocket
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* ___m_webSocket_6;
	// Unity.RenderStreaming.Signaling.OnStartHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnStart
	OnStartHandler_tE346E1889FEE4565E5943753DE0CA3D391B8A194* ___OnStart_7;
	// Unity.RenderStreaming.Signaling.OnConnectHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnCreateConnection
	OnConnectHandler_t46B00C013D4DE6609066F57990DCF3E5B8E05D43* ___OnCreateConnection_8;
	// Unity.RenderStreaming.Signaling.OnDisconnectHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnDestroyConnection
	OnDisconnectHandler_t06CABD0699EA0E4F8F63AB2864386AF8A0B325F5* ___OnDestroyConnection_9;
	// Unity.RenderStreaming.Signaling.OnOfferHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnOffer
	OnOfferHandler_tEB3A5982CEB72A0B8E4B34A7AC0EB6C2AEFEABF3* ___OnOffer_10;
	// Unity.RenderStreaming.Signaling.OnAnswerHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnAnswer
	OnAnswerHandler_t702C4034809BCFA126391F9F0C6184B9D5D9C2EB* ___OnAnswer_11;
	// Unity.RenderStreaming.Signaling.OnIceCandidateHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnIceCandidate
	OnIceCandidateHandler_t3DA151A1236442174309571D5467BEA8586938C7* ___OnIceCandidate_12;
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

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// Unity.RenderStreaming.Samples.SceneSelectUI/<>c
struct U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8  : public RuntimeObject
{
};

struct U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields
{
	// Unity.RenderStreaming.Samples.SceneSelectUI/<>c Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<>9
	U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2Int,UnityEngine.UI.Dropdown/OptionData> Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<>9__20_0
	Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* ___U3CU3E9__20_0_1;
	// System.Func`2<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData> Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<>9__20_1
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* ___U3CU3E9__20_1_2;
	// System.Func`2<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData> Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<>9__20_2
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* ___U3CU3E9__20_2_3;
};

// Scrolldfsdf/<>c
struct U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1  : public RuntimeObject
{
};

struct U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields
{
	// Scrolldfsdf/<>c Scrolldfsdf/<>c::<>9
	U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction`1<System.Single> Scrolldfsdf/<>c::<>9__2_0
	UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___U3CU3E9__2_0_1;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VrModeController VrModeController/<StartXR>d__10::<>4__this
	VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// System.Nullable`1<Unity.RenderStreaming.VP9Profile>
struct Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// Unity.RenderStreaming.H264CodecInfo
struct H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2  : public VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810
{
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// Paroxe.PdfRenderer.PDFSearchResult
struct PDFSearchResult_tD3D1473E748FCC231CB1A662409A333913DA2EC6 
{
	// System.Int32 Paroxe.PdfRenderer.PDFSearchResult::m_PageIndex
	int32_t ___m_PageIndex_0;
	// System.Int32 Paroxe.PdfRenderer.PDFSearchResult::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 Paroxe.PdfRenderer.PDFSearchResult::m_Count
	int32_t ___m_Count_2;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Unity.RenderStreaming.VP9CodecInfo
struct VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420  : public VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810
{
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// NewControlsNamespace.NewControls/ButtonsActions
struct ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E 
{
	// NewControlsNamespace.NewControls NewControlsNamespace.NewControls/ButtonsActions::m_Wrapper
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of NewControlsNamespace.NewControls/ButtonsActions
struct ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_pinvoke
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for COM marshalling of NewControlsNamespace.NewControls/ButtonsActions
struct ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_com
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};

// NewControlsNamespace.NewControls/MovementActions
struct MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 
{
	// NewControlsNamespace.NewControls NewControlsNamespace.NewControls/MovementActions::m_Wrapper
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of NewControlsNamespace.NewControls/MovementActions
struct MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_pinvoke
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for COM marshalling of NewControlsNamespace.NewControls/MovementActions
struct MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_com
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};

// NewControlsNamespace.NewControls/ScrollingActions
struct ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA 
{
	// NewControlsNamespace.NewControls NewControlsNamespace.NewControls/ScrollingActions::m_Wrapper
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of NewControlsNamespace.NewControls/ScrollingActions
struct ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_pinvoke
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};
// Native definition for COM marshalling of NewControlsNamespace.NewControls/ScrollingActions
struct ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_com
{
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___m_Wrapper_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
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

// Unity.RenderStreaming.Samples.RenderStreamingSettings
struct RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4  : public RuntimeObject
{
	// Unity.RenderStreaming.Samples.SignalingType Unity.RenderStreaming.Samples.RenderStreamingSettings::signalingType
	int32_t ___signalingType_2;
	// System.String Unity.RenderStreaming.Samples.RenderStreamingSettings::signalingAddress
	String_t* ___signalingAddress_3;
	// System.Single Unity.RenderStreaming.Samples.RenderStreamingSettings::signalingInterval
	float ___signalingInterval_4;
	// System.Boolean Unity.RenderStreaming.Samples.RenderStreamingSettings::signalingSecured
	bool ___signalingSecured_5;
	// UnityEngine.Vector2Int Unity.RenderStreaming.Samples.RenderStreamingSettings::streamSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___streamSize_6;
	// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::receiverVideoCodec
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___receiverVideoCodec_7;
	// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::senderVideoCodec
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___senderVideoCodec_8;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector2Int,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

// System.Predicate`1<Unity.RenderStreaming.VideoCodecInfo>
struct Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.RenderStreaming.OnStartedChannelHandler
struct OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler
struct OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;
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

// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14* ___U3CanyKeyU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CshiftKeyU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CctrlKeyU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CaltKeyU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CimeSelectedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 ___m_TextInputListeners_46;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_47;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA* ___m_Keys_48;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 ___m_ImeCompositionListeners_49;
};

struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields
{
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* ___U3CcurrentU3Ek__BackingField_45;
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

// UnityEngine.InputSystem.Sensor
struct Sensor_t8EF743F06C5B025B572E11A5B2CD0B23833D3FD4  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// AskPermissions
struct AskPermissions_t51D96EE38EC03BC4FC71E247873255979B0B22F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AndroidJavaClass AskPermissions::plugin
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___plugin_4;
};

// Unity.RenderStreaming.Samples.BackButton
struct BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.RenderStreaming.Samples.BackButton::m_BackButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BackButton_4;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;
};

struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;
};

// Calibrate
struct Calibrate_t26BB059768D1E218717D38D8A1AC4EBF6BC938C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Calibrate::uri
	String_t* ___uri_4;
};

// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
};

// CameraRayCast
struct CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraRayCast::sphere
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sphere_4;
	// UnityEngine.Material CameraRayCast::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_5;
	// UnityEngine.Material CameraRayCast::highlightedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___highlightedMaterial_6;
	// UnityEngine.LayerMask CameraRayCast::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_7;
	// UnityEngine.Vector3 CameraRayCast::collision
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___collision_8;
	// UnityEngine.Transform CameraRayCast::selection
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___selection_9;
	// UnityEngine.Renderer CameraRayCast::selectionrenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___selectionrenderer_10;
	// NewControlsNamespace.NewControls CameraRayCast::controls
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___controls_11;
	// UnityEngine.UI.Button CameraRayCast::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_12;
	// UnityEngine.UI.Toggle CameraRayCast::tog
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___tog_13;
	// UnityEngine.GameObject CameraRayCast::curObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___curObject_14;
	// UnityEngine.GameObject CameraRayCast::prevObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prevObject_15;
	// System.Single CameraRayCast::input
	float ___input_16;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CursorSettings
struct CursorSettings_t2EFEAEC566DF8551008207562C570BBEA1D5CDE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.RenderStreaming.DataChannelBase
struct DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Unity.RenderStreaming.DataChannelBase::local
	bool ___local_4;
	// System.String Unity.RenderStreaming.DataChannelBase::label
	String_t* ___label_5;
	// Unity.WebRTC.RTCDataChannel Unity.RenderStreaming.DataChannelBase::<Channel>k__BackingField
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ___U3CChannelU3Ek__BackingField_6;
	// Unity.RenderStreaming.OnStartedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStartedChannel>k__BackingField
	OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* ___U3COnStartedChannelU3Ek__BackingField_7;
	// Unity.RenderStreaming.OnStoppedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStoppedChannel>k__BackingField
	OnStoppedChannelHandler_t18F205BD3FF9CCF8DE16376FDD165B44FA19D8CC* ___U3COnStoppedChannelU3Ek__BackingField_8;
};

// DeviceCameraInput
struct DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DeviceCameraInput::deviceIndex
	int32_t ___deviceIndex_4;
	// UnityEngine.WebCamTexture DeviceCameraInput::webcamTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___webcamTexture_5;
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

// FollowScroll
struct FollowScroll_tDDDF95096F06D53F797DDD239424C6133E66D0C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Scrollbar FollowScroll::followedScroll
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___followedScroll_4;
	// UnityEngine.UI.Scrollbar FollowScroll::followingScroll
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___followingScroll_5;
};

// UnityEngine.InputSystem.Gyroscope
struct Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4  : public Sensor_t8EF743F06C5B025B572E11A5B2CD0B23833D3FD4
{
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.Gyroscope::<angularVelocity>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CangularVelocityU3Ek__BackingField_39;
};

struct Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4_StaticFields
{
	// UnityEngine.InputSystem.Gyroscope UnityEngine.InputSystem.Gyroscope::<current>k__BackingField
	Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4* ___U3CcurrentU3Ek__BackingField_40;
};

// HorizontalScroll
struct HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NewControlsNamespace.NewControls HorizontalScroll::controls
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___controls_4;
	// UnityEngine.UI.Scrollbar HorizontalScroll::scrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___scrollbar_5;
	// System.Single HorizontalScroll::input
	float ___input_6;
};

// InputHandling
struct InputHandling_t27FE3668FCA29D85B82CB949F76D9A317F7D7450  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MouseLook/RotationAxes MouseLook::axes
	int32_t ___axes_4;
	// System.Single MouseLook::sensitivityX
	float ___sensitivityX_5;
	// System.Single MouseLook::sensitivityY
	float ___sensitivityY_6;
	// System.Single MouseLook::minimumX
	float ___minimumX_7;
	// System.Single MouseLook::maximumX
	float ___maximumX_8;
	// System.Single MouseLook::minimumY
	float ___minimumY_9;
	// System.Single MouseLook::maximumY
	float ___maximumY_10;
	// System.Single MouseLook::rotationY
	float ___rotationY_11;
};

// MoveCursor
struct MoveCursor_tEAC2BFC15E9332973D7233DF086DEBB1C20483B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode MoveCursor::left
	int32_t ___left_4;
	// UnityEngine.KeyCode MoveCursor::right
	int32_t ___right_5;
	// UnityEngine.KeyCode MoveCursor::up
	int32_t ___up_6;
	// UnityEngine.KeyCode MoveCursor::down
	int32_t ___down_7;
	// UnityEngine.KeyCode MoveCursor::click
	int32_t ___click_8;
	// UnityEngine.RectTransform MoveCursor::fakeCursor
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___fakeCursor_9;
	// System.Single MoveCursor::moveSpeed
	float ___moveSpeed_10;
};

// Numpad
struct Numpad_t393C69246800359ABA968F3772B8AD736AF66BED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Numpad::isBksp
	bool ___isBksp_4;
	// System.String Numpad::numText
	String_t* ___numText_5;
	// UnityEngine.UI.InputField Numpad::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_6;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// Onclick
struct Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OverrideInput
struct OverrideInput_t083E01407BA7A8FD2A806459BAF781A401AFFA99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OverrideInput::changed
	bool ___changed_4;
	// NewInput OverrideInput::newInput
	NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988* ___newInput_5;
};

// PdfStart
struct PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PdfStart::stopped
	bool ___stopped_4;
	// UnityEngine.GameObject PdfStart::pdfObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pdfObject_5;
	// UnityEngine.UI.Button PdfStart::homeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___homeButton_6;
	// UnityEngine.UI.Button PdfStart::stopButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___stopButton_7;
	// UnityEngine.GameObject PdfStart::fileBrowser
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fileBrowser_8;
	// UnityEngine.GameObject PdfStart::esh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___esh_9;
	// System.String PdfStart::pdfURL
	String_t* ___pdfURL_10;
	// Paroxe.PdfRenderer.PDFViewer PdfStart::pdfComponent
	PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795* ___pdfComponent_11;
};

struct PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_StaticFields
{
	// System.String PdfStart::initialPath
	String_t* ___initialPath_12;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NewControlsNamespace.NewControls PlayerMovement::controls
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___controls_4;
	// System.Single PlayerMovement::input
	float ___input_5;
	// UnityEngine.Camera PlayerMovement::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_6;
};

// Posmanager
struct Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields
{
	// UnityEngine.Transform Posmanager::playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTransform_4;
	// UnityEngine.Transform Posmanager::setTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___setTransform_5;
};

// Quit
struct Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RandomizeColor
struct RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button RandomizeColor::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_4;
};

// ReceiverSample
struct ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.RenderStreaming ReceiverSample::renderStreaming
	RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B* ___renderStreaming_4;
	// UnityEngine.UI.Button ReceiverSample::startButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___startButton_5;
	// UnityEngine.UI.Button ReceiverSample::stopButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___stopButton_6;
	// UnityEngine.UI.InputField ReceiverSample::connectionIdInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___connectionIdInput_7;
	// UnityEngine.UI.InputField ReceiverSample::addressInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___addressInput_8;
	// UnityEngine.Renderer ReceiverSample::renderTexture
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderTexture_9;
	// Unity.RenderStreaming.VideoStreamReceiver ReceiverSample::receiveVideoViewer
	VideoStreamReceiver_t4016311DA555883E0A9551D53EBBFB8F8D3EBAF3* ___receiveVideoViewer_10;
	// Unity.RenderStreaming.SingleConnection ReceiverSample::connection
	SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE* ___connection_11;
	// UnityEngine.UI.Button ReceiverSample::proceedButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___proceedButton_12;
	// UnityEngine.GameObject ReceiverSample::createConnection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___createConnection_13;
	// System.String ReceiverSample::connectionId
	String_t* ___connectionId_14;
	// System.String ReceiverSample::signalingAddress
	String_t* ___signalingAddress_15;
	// Unity.RenderStreaming.Signaling.ISignaling ReceiverSample::signaling
	RuntimeObject* ___signaling_16;
	// Unity.RenderStreaming.InputSender ReceiverSample::inputSender
	InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* ___inputSender_17;
};

// Unity.RenderStreaming.RenderStreaming
struct RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Unity.RenderStreaming.RenderStreaming::urlSignaling
	String_t* ___urlSignaling_4;
	// System.String Unity.RenderStreaming.RenderStreaming::signalingType
	String_t* ___signalingType_5;
	// Unity.WebRTC.RTCIceServer[] Unity.RenderStreaming.RenderStreaming::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_6;
	// System.Single Unity.RenderStreaming.RenderStreaming::interval
	float ___interval_7;
	// System.Collections.Generic.List`1<Unity.RenderStreaming.SignalingHandlerBase> Unity.RenderStreaming.RenderStreaming::handlers
	List_1_tF1263485A51363E8E9630DD285F54CC03F7AA892* ___handlers_8;
	// System.Boolean Unity.RenderStreaming.RenderStreaming::runOnAwake
	bool ___runOnAwake_9;
	// Unity.RenderStreaming.RenderStreamingInternal Unity.RenderStreaming.RenderStreaming::m_instance
	RenderStreamingInternal_tC57F29D25F8E5592C214185992D0854549518474* ___m_instance_10;
	// Unity.RenderStreaming.SignalingEventProvider Unity.RenderStreaming.RenderStreaming::m_provider
	SignalingEventProvider_tCF7DEFD69000F6AAE0CBD36F3378DFF3C9C94E52* ___m_provider_11;
	// System.Boolean Unity.RenderStreaming.RenderStreaming::m_running
	bool ___m_running_12;
};

// RotateSet
struct RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NewControlsNamespace.NewControls RotateSet::controls
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___controls_4;
	// System.Single RotateSet::input
	float ___input_5;
	// UnityEngine.GameObject RotateSet::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.Vector3 RotateSet::rotateAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateAxis_7;
};

// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SceneChange::sceneName
	String_t* ___sceneName_4;
};

// Unity.RenderStreaming.Samples.SceneSelectUI
struct SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Dropdown Unity.RenderStreaming.Samples.SceneSelectUI::dropdownSignalingType
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownSignalingType_4;
	// UnityEngine.UI.InputField Unity.RenderStreaming.Samples.SceneSelectUI::inputFieldSignalingAddress
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputFieldSignalingAddress_5;
	// UnityEngine.UI.Toggle Unity.RenderStreaming.Samples.SceneSelectUI::toggleSignalingSecured
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggleSignalingSecured_6;
	// UnityEngine.UI.InputField Unity.RenderStreaming.Samples.SceneSelectUI::inputFieldSignalingInterval
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputFieldSignalingInterval_7;
	// UnityEngine.UI.Dropdown Unity.RenderStreaming.Samples.SceneSelectUI::streamSizeSelector
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___streamSizeSelector_8;
	// UnityEngine.UI.InputField Unity.RenderStreaming.Samples.SceneSelectUI::textureWidthInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___textureWidthInput_9;
	// UnityEngine.UI.InputField Unity.RenderStreaming.Samples.SceneSelectUI::textureHeightInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___textureHeightInput_10;
	// UnityEngine.UI.Dropdown Unity.RenderStreaming.Samples.SceneSelectUI::receiverVideoCodecSelector
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___receiverVideoCodecSelector_11;
	// UnityEngine.UI.Dropdown Unity.RenderStreaming.Samples.SceneSelectUI::senderVideoCodecSelector
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___senderVideoCodecSelector_12;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonBidirectional
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonBidirectional_13;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonBroadcast
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonBroadcast_14;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonGyro
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonGyro_15;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonRenderPipeline
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonRenderPipeline_16;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonReceiver
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReceiver_17;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonWebBrowserInput
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonWebBrowserInput_18;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonAR
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonAR_19;
	// UnityEngine.UI.Button Unity.RenderStreaming.Samples.SceneSelectUI::buttonMultiplay
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonMultiplay_20;
	// System.Collections.Generic.List`1<UnityEngine.Vector2Int> Unity.RenderStreaming.Samples.SceneSelectUI::streamSizeList
	List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* ___streamSizeList_21;
	// Unity.RenderStreaming.Samples.RenderStreamingSettings Unity.RenderStreaming.Samples.SceneSelectUI::settings
	RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* ___settings_22;
};

// Scrolldfsdf
struct Scrolldfsdf_t2480941D7E2F42F81942FDBB876AA5A5D70804A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Scrollbar Scrolldfsdf::sccc
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___sccc_4;
};

// Scrolling
struct Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NewControlsNamespace.NewControls Scrolling::controls
	NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___controls_4;
	// UnityEngine.UI.Scrollbar Scrolling::scrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___scrollbar_5;
	// System.Single Scrolling::input
	float ___input_6;
};

// SetupPos
struct SetupPos_t26786CCE98E85D210C695DEAF0E479874AC61296  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SetupPos::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject SetupPos::classroom
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___classroom_5;
};

// Unity.RenderStreaming.SignalingHandlerBase
struct SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.IRenderStreamingHandler Unity.RenderStreaming.SignalingHandlerBase::m_handler
	RuntimeObject* ___m_handler_4;
};

// Unity.RenderStreaming.StreamReceiverBase
struct StreamReceiverBase_tA5C94E3DC809181CD59B39EF5F6621BE223ACAB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.OnStartedStreamHandler Unity.RenderStreaming.StreamReceiverBase::<OnStartedStream>k__BackingField
	OnStartedStreamHandler_t3BDA5A49E0CB709966D4C68EAA728D02FD4DE95E* ___U3COnStartedStreamU3Ek__BackingField_4;
	// Unity.RenderStreaming.OnStoppedStreamHandler Unity.RenderStreaming.StreamReceiverBase::<OnStoppedStream>k__BackingField
	OnStoppedStreamHandler_tEFA024AF51F15D0C8EC9030EAC922B431EC2DB24* ___U3COnStoppedStreamU3Ek__BackingField_5;
	// Unity.WebRTC.RTCRtpTransceiver Unity.RenderStreaming.StreamReceiverBase::m_transceiver
	RTCRtpTransceiver_t4950B33225C35C890A0894C738D3F6D19B39F0C5* ___m_transceiver_6;
	// Unity.WebRTC.MediaStreamTrack Unity.RenderStreaming.StreamReceiverBase::m_track
	MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* ___m_track_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VideoPlay
struct VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider VideoPlay::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// System.Boolean VideoPlay::stopped
	bool ___stopped_5;
	// UnityEngine.GameObject VideoPlay::pauseIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseIcon_6;
	// UnityEngine.UI.Button VideoPlay::homeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___homeButton_7;
	// UnityEngine.UI.Button VideoPlay::stopButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___stopButton_8;
	// UnityEngine.GameObject VideoPlay::fileBrowser
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fileBrowser_9;
	// UnityEngine.GameObject VideoPlay::videoEffectCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___videoEffectCanvas_10;
	// UnityEngine.GameObject VideoPlay::esh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___esh_11;
	// System.Double VideoPlay::shiftTime
	double ___shiftTime_12;
	// System.String VideoPlay::videoURL
	String_t* ___videoURL_13;
	// UnityEngine.Video.VideoPlayer VideoPlay::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_14;
};

struct VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_StaticFields
{
	// System.String VideoPlay::initialPath
	String_t* ___initialPath_15;
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
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

// Unity.RenderStreaming.InputSender
struct InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601  : public DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4
{
	// Unity.RenderStreaming.InputSystem.Sender Unity.RenderStreaming.InputSender::sender
	Sender_t23B079B23D3CA9A81A7AA5DC7DBF9AD44D5E5F27* ___sender_9;
	// Unity.RenderStreaming.InputSystem.InputRemoting Unity.RenderStreaming.InputSender::senderInput
	InputRemoting_t64A1008E2A906754FEBE6EC3485F8C3A6F9B25D6* ___senderInput_10;
	// System.IDisposable Unity.RenderStreaming.InputSender::suscriberDisposer
	RuntimeObject* ___suscriberDisposer_11;
};

// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0  : public ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF
{
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_37;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_38;
};

// Paroxe.PdfRenderer.PDFViewer
struct PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// Paroxe.PdfRenderer.Internal.Viewer.PDFViewerInternal Paroxe.PdfRenderer.PDFViewer::m_Internal
	PDFViewerInternal_tEBAEB5ECD58AD4F2C4A1602290B13EDEA50E9090* ___m_Internal_4;
	// Paroxe.PdfRenderer.IPDFDeviceActionHandler Paroxe.PdfRenderer.PDFViewer::m_BookmarksActionHandler
	RuntimeObject* ___m_BookmarksActionHandler_5;
	// Paroxe.PdfRenderer.IPDFDeviceActionHandler Paroxe.PdfRenderer.PDFViewer::m_LinksActionHandler
	RuntimeObject* ___m_LinksActionHandler_6;
	// Paroxe.PdfRenderer.Internal.Viewer.PDFPageRange Paroxe.PdfRenderer.PDFViewer::m_CurrentPageRange
	PDFPageRange_tDF2F39F044CBEA53B44C10C574A00692BD8B2444* ___m_CurrentPageRange_7;
	// Paroxe.PdfRenderer.PDFSearchResult Paroxe.PdfRenderer.PDFViewer::m_CurrentSearchResult
	PDFSearchResult_tD3D1473E748FCC231CB1A662409A333913DA2EC6 ___m_CurrentSearchResult_8;
	// Paroxe.PdfRenderer.PDFDocument Paroxe.PdfRenderer.PDFViewer::m_Document
	PDFDocument_t4FD86210638A9EBA0DD07903C8C2E50CCB44BD33* ___m_Document_9;
	// Paroxe.PdfRenderer.PDFDocument Paroxe.PdfRenderer.PDFViewer::m_SuppliedDocument
	PDFDocument_t4FD86210638A9EBA0DD07903C8C2E50CCB44BD33* ___m_SuppliedDocument_10;
	// Paroxe.PdfRenderer.Internal.Viewer.PDFPageTextureHolder[] Paroxe.PdfRenderer.PDFViewer::m_PageTextureHolders
	PDFPageTextureHolderU5BU5D_tC0C685B0CC573213115CDFB403AF90CC629C858C* ___m_PageTextureHolders_11;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_CurrentSearchResultIndex
	int32_t ___m_CurrentSearchResultIndex_12;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_CurrentSearchResultIndexWithinCurrentPage
	int32_t ___m_CurrentSearchResultIndexWithinCurrentPage_13;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_DelayedOnEnable
	bool ___m_DelayedOnEnable_14;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_InvalidPasswordMessageDelay
	float ___m_InvalidPasswordMessageDelay_15;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_InvalidPasswordMessageDelayBeforeFade
	float ___m_InvalidPasswordMessageDelayBeforeFade_16;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_DownloadCanceled
	bool ___m_DownloadCanceled_17;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_InvalidPasswordMessageVisisble
	bool ___m_InvalidPasswordMessageVisisble_18;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_IsLoaded
	bool ___m_IsLoaded_19;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_LoadAtPageIndex
	int32_t ___m_LoadAtPageIndex_20;
	// System.Single Paroxe.PdfRenderer.PDFViewer::OverlayAlpha
	float ___OverlayAlpha_21;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::OverlayVisible
	bool ___OverlayVisible_22;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_PageCount
	int32_t ___m_PageCount_23;
	// System.Single[] Paroxe.PdfRenderer.PDFViewer::m_PageOffsets
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_PageOffsets_24;
	// UnityEngine.Vector2[] Paroxe.PdfRenderer.PDFViewer::m_PageSizes
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_PageSizes_25;
	// UnityEngine.Vector2[] Paroxe.PdfRenderer.PDFViewer::m_NormalPageSizes
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_NormalPageSizes_26;
	// System.Byte[] Paroxe.PdfRenderer.PDFViewer::m_PendingDocumentBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_PendingDocumentBuffer_27;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_PreviousMostVisiblePage
	int32_t ___m_PreviousMostVisiblePage_28;
	// Paroxe.PdfRenderer.PDFViewer/PageFittingType Paroxe.PdfRenderer.PDFViewer::m_PreviousPageFitting
	int32_t ___m_PreviousPageFitting_29;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_PreviousZoom
	float ___m_PreviousZoom_30;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_PreviousZoomToGo
	float ___m_PreviousZoomToGo_31;
	// System.Collections.Generic.IList`1<Paroxe.PdfRenderer.PDFSearchResult>[] Paroxe.PdfRenderer.PDFViewer::m_SearchResults
	IList_1U5BU5D_tDC44B9D91789BEA6659A4B909647619E3F0CFEB3* ___m_SearchResults_32;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_StartZoom
	float ___m_StartZoom_33;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_UpdateChangeDelay
	float ___m_UpdateChangeDelay_34;
	// UnityEngine.Vector2 Paroxe.PdfRenderer.PDFViewer::m_ZoomPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ZoomPosition_35;
	// Paroxe.PdfRenderer.PDFRenderer Paroxe.PdfRenderer.PDFViewer::m_Renderer
	PDFRenderer_tBEC540A52372C9C39CFD9A9F026074BB5DD3781D* ___m_Renderer_36;
	// System.Int32 Paroxe.PdfRenderer.PDFViewer::m_PreviousTouchCount
	int32_t ___m_PreviousTouchCount_37;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_PinchZoomStartZoomFactor
	float ___m_PinchZoomStartZoomFactor_38;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_PinchZoomStartDeltaMag
	float ___m_PinchZoomStartDeltaMag_39;
	// UnityEngine.Canvas Paroxe.PdfRenderer.PDFViewer::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_40;
	// UnityEngine.UI.GraphicRaycaster Paroxe.PdfRenderer.PDFViewer::m_GraphicRaycaster
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* ___m_GraphicRaycaster_41;
	// System.Collections.Generic.List`1<UnityEngine.Canvas> Paroxe.PdfRenderer.PDFViewer::m_CanvasList
	List_1_t5421B2468AFFE816206B49B3A6E589B74E5C6C94* ___m_CanvasList_42;
	// Paroxe.PdfRenderer.Internal.Viewer.PDFThumbnailsViewer Paroxe.PdfRenderer.PDFViewer::m_ThumbnailsViewer
	PDFThumbnailsViewer_t4A8067462D52E80CB546FD2ED7D45EB5B487225B* ___m_ThumbnailsViewer_43;
	// Paroxe.PdfRenderer.Internal.Viewer.PDFBookmarksViewer Paroxe.PdfRenderer.PDFViewer::m_BookmarksViewer
	PDFBookmarksViewer_t2AAF19B9274A9F225643BAFD7CC0D7481BB5633F* ___m_BookmarksViewer_44;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_AllowOpenURL
	bool ___m_AllowOpenURL_45;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ChangeCursorWhenOverURL
	bool ___m_ChangeCursorWhenOverURL_46;
	// UnityEngine.GameObject Paroxe.PdfRenderer.PDFViewer::m_BytesSupplierObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BytesSupplierObject_47;
	// UnityEngine.Component Paroxe.PdfRenderer.PDFViewer::m_BytesSupplierComponent
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_BytesSupplierComponent_48;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_BytesSupplierFunctionName
	String_t* ___m_BytesSupplierFunctionName_49;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_FileName
	String_t* ___m_FileName_50;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_FilePath
	String_t* ___m_FilePath_51;
	// Paroxe.PdfRenderer.PDFViewer/FileSourceType Paroxe.PdfRenderer.PDFViewer::m_FileSource
	int32_t ___m_FileSource_52;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_FileURL
	String_t* ___m_FileURL_53;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_Folder
	String_t* ___m_Folder_54;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_LoadOnEnable
	bool ___m_LoadOnEnable_55;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_MaxZoomFactor
	float ___m_MaxZoomFactor_56;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_MaxZoomFactorTextureQuality
	float ___m_MaxZoomFactorTextureQuality_57;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_MinZoomFactor
	float ___m_MinZoomFactor_58;
	// Paroxe.PdfRenderer.PDFViewer/PageFittingType Paroxe.PdfRenderer.PDFViewer::m_PageFitting
	int32_t ___m_PageFitting_59;
	// System.String Paroxe.PdfRenderer.PDFViewer::m_Password
	String_t* ___m_Password_60;
	// Paroxe.PdfRenderer.PDFAsset Paroxe.PdfRenderer.PDFViewer::m_PDFAsset
	PDFAsset_t49A736BC8C002A0655E25C54A59A4F356BE928E3* ___m_PDFAsset_61;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ZoomFactor
	float ___m_ZoomFactor_62;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ZoomStep
	float ___m_ZoomStep_63;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ZoomToGo
	float ___m_ZoomToGo_64;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_VerticalMarginBetweenPages
	float ___m_VerticalMarginBetweenPages_65;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_UnloadOnDisable
	bool ___m_UnloadOnDisable_66;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ShowVerticalScrollBar
	bool ___m_ShowVerticalScrollBar_67;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ShowBookmarksViewer
	bool ___m_ShowBookmarksViewer_68;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ShowHorizontalScrollBar
	bool ___m_ShowHorizontalScrollBar_69;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ShowThumbnailsViewer
	bool ___m_ShowThumbnailsViewer_70;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ShowTopBar
	bool ___m_ShowTopBar_71;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ScrollSensitivity
	float ___m_ScrollSensitivity_72;
	// UnityEngine.Color Paroxe.PdfRenderer.PDFViewer::m_SearchResultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SearchResultColor_73;
	// UnityEngine.Vector2 Paroxe.PdfRenderer.PDFViewer::m_SearchResultPadding
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SearchResultPadding_74;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_SearchTimeBudgetPerFrame
	float ___m_SearchTimeBudgetPerFrame_75;
	// Paroxe.PdfRenderer.PDFRenderer/RenderSettings Paroxe.PdfRenderer.PDFViewer::m_RenderSettings
	RenderSettings_tAF73D4ABCAC401C30FB49B5DE4AD9AB722EE69F6* ___m_RenderSettings_76;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_DelayAfterZoomingBeforeUpdate
	float ___m_DelayAfterZoomingBeforeUpdate_77;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ParagraphZoomFactor
	float ___m_ParagraphZoomFactor_78;
	// System.Boolean Paroxe.PdfRenderer.PDFViewer::m_ParagraphZoomingEnable
	bool ___m_ParagraphZoomingEnable_79;
	// System.Single Paroxe.PdfRenderer.PDFViewer::m_ParagraphDetectionThreshold
	float ___m_ParagraphDetectionThreshold_80;
	// UnityEngine.Texture2D Paroxe.PdfRenderer.PDFViewer::m_PageTileTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PageTileTexture_81;
	// UnityEngine.Color Paroxe.PdfRenderer.PDFViewer::m_PageColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PageColor_82;
	// Paroxe.PdfRenderer.PDFViewer/CurrentPageChangedEventHandler Paroxe.PdfRenderer.PDFViewer::OnCurrentPageChanged
	CurrentPageChangedEventHandler_t34C08DB07E005A092EC51E999E988EF09086D48B* ___OnCurrentPageChanged_83;
	// Paroxe.PdfRenderer.PDFViewer/PDFViewerEventHandler Paroxe.PdfRenderer.PDFViewer::OnDisabled
	PDFViewerEventHandler_tA04B3F23F728EBAC4CBB118AB4EF5575BE6AFE08* ___OnDisabled_84;
	// Paroxe.PdfRenderer.PDFViewer/DocumentChangedEventHandler Paroxe.PdfRenderer.PDFViewer::OnDocumentLoaded
	DocumentChangedEventHandler_tFE84954748895554C9D649C0C587D6D83B14E982* ___OnDocumentLoaded_85;
	// Paroxe.PdfRenderer.PDFViewer/LoadFailEventHandler Paroxe.PdfRenderer.PDFViewer::OnDocumentLoadFailed
	LoadFailEventHandler_tCF5675F535BDA28F1ADC49515208E7146EB8B322* ___OnDocumentLoadFailed_86;
	// Paroxe.PdfRenderer.PDFViewer/DocumentChangedEventHandler Paroxe.PdfRenderer.PDFViewer::OnDocumentUnloaded
	DocumentChangedEventHandler_tFE84954748895554C9D649C0C587D6D83B14E982* ___OnDocumentUnloaded_87;
	// Paroxe.PdfRenderer.PDFViewer/CancelEventHandler Paroxe.PdfRenderer.PDFViewer::OnDownloadCancelled
	CancelEventHandler_tA1815F7227191E5659E79BBB4C1992245B318F2F* ___OnDownloadCancelled_88;
	// Paroxe.PdfRenderer.PDFViewer/CancelEventHandler Paroxe.PdfRenderer.PDFViewer::OnPasswordCancelled
	CancelEventHandler_tA1815F7227191E5659E79BBB4C1992245B318F2F* ___OnPasswordCancelled_89;
	// Paroxe.PdfRenderer.PDFViewer/ZoomChangedEventHandler Paroxe.PdfRenderer.PDFViewer::OnZoomChanged
	ZoomChangedEventHandler_t59E26575B006C35BC1497BBC10F4887E32092D2F* ___OnZoomChanged_90;
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

// Unity.RenderStreaming.SingleConnection
struct SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE  : public SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A
{
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.RenderStreaming.SingleConnection::streams
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___streams_5;
	// System.String Unity.RenderStreaming.SingleConnection::connectionId
	String_t* ___connectionId_6;
};

// Unity.RenderStreaming.VideoStreamReceiver
struct VideoStreamReceiver_t4016311DA555883E0A9551D53EBBFB8F8D3EBAF3  : public StreamReceiverBase_tA5C94E3DC809181CD59B39EF5F6621BE223ACAB0
{
	// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler Unity.RenderStreaming.VideoStreamReceiver::OnUpdateReceiveTexture
	OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A* ___OnUpdateReceiveTexture_8;
	// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.VideoStreamReceiver::m_Codec
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___m_Codec_9;
	// Unity.RenderStreaming.VideoRenderMode Unity.RenderStreaming.VideoStreamReceiver::m_RenderMode
	int32_t ___m_RenderMode_10;
	// UnityEngine.RenderTexture Unity.RenderStreaming.VideoStreamReceiver::m_TargetTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_TargetTexture_11;
	// UnityEngine.Texture Unity.RenderStreaming.VideoStreamReceiver::m_texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_texture_12;
	// UnityEngine.Coroutine Unity.RenderStreaming.VideoStreamReceiver::m_coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_coroutine_13;
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

// NewInput
struct NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988  : public BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622
{
	// System.String NewInput::clickkey
	String_t* ___clickkey_4;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
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

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.RenderStreaming.SignalingHandlerBase[]
struct SignalingHandlerBaseU5BU5D_t0C0E5ED7F072F4DAFDDD628DB62B1A2E923D66E1  : public RuntimeArray
{
	ALIGN_FIELD (8) SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A* m_Items[1];

	inline SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SignalingHandlerBase_t71C947A7F992711F9C5D613FE048B92F637BD39A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
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
// Unity.RenderStreaming.VideoCodecInfo[]
struct VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5  : public RuntimeArray
{
	ALIGN_FIELD (8) VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* m_Items[1];

	inline VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Component::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_ReadValue_TisIl2CppFullySharedGenericStruct_m0B8C6490DD8EE673339E603898F5BB14254C3DBD_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m112E86038EFFFA375926EB25DC88FEBF820FBD05_gshared (RuntimeObject* ___source0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_mAD7ADD5EE3D6E0A30271EDC31500BCE6301A256D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_m6A76484DC6D833014999600380101B2D9EE2403F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Array::FindIndex<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisIl2CppFullySharedGenericAny_m293A3BED2CB34E68D3E80A3A1980E9CFD47C03AD_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_ElementAt_TisIl2CppFullySharedGenericAny_m1186C5B0011759EA7B83B972A395087B02FE2D30_gshared (RuntimeObject* ___source0, int32_t ___index1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A (const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::.ctor(System.String,System.Single,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling__ctor_mB1C0763DC076E392B87C39A837DA792B0907D12F (WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC* __this, String_t* ___url0, float ___timeout1, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___mainThreadContext2, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateReceiveTextureHandler__ctor_mC5C7B00A6A69347A99594EB17195A1EE58A4BD85 (OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.RenderStreaming.InputSender>()
inline InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* Component_GetComponent_TisInputSender_t049289B7AA492685781B08E636AF5B2A1B91B601_m063EAC9D6BD6D6783073B8CF6CF2B46AB07906CA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Unity.RenderStreaming.OnStartedChannelHandler Unity.RenderStreaming.DataChannelBase::get_OnStartedChannel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* DataChannelBase_get_OnStartedChannel_m6445CEAF6A804F6E2637B7C1EF1A0EEDEFE10457_inline (DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.OnStartedChannelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedChannelHandler__ctor_mA1D55EEDC82E92549D927BE73EBE5165513BBB89 (OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.DataChannelBase::set_OnStartedChannel(Unity.RenderStreaming.OnStartedChannelHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataChannelBase_set_OnStartedChannel_m49197770E2E29AAE71D8544DCCD707578B6BB1D7_inline (DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4* __this, OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void ReceiverSample::SetInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_SetInputChange_mCCE2E570871EFD1B094C3EEAE5A9BDDD73B9F1D2 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.DataChannelBase::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataChannelBase_get_IsConnected_mE286117C6815CDB6BD2FDDC01657C13784751FE3 (DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSender::EnableInputPositionCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSender_EnableInputPositionCorrection_m800020B55FF42A75829E16DD21C3851D9AD4CC94 (InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* __this, bool ___enabled0, const RuntimeMethod* method) ;
// Unity.RenderStreaming.Signaling.ISignaling ReceiverSample::get_Signaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiverSample_get_Signaling_m404AE5E096718F3784B83D01C494B9F64EB02199 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.RenderStreaming::Run(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.SignalingHandlerBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreaming_Run_m2976F313990B99CA32BB0F0132014F192A46F734 (RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B* __this, RuntimeObject* ___signaling0, SignalingHandlerBaseU5BU5D_t0C0E5ED7F072F4DAFDDD628DB62B1A2E923D66E1* ___handlers1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerPressed_m69CFBBBFCA8AB8D960F1EE7CF6D98AFA9D5F761F (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___fieldName0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___methodName0, ___args1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___methodName0, ___args1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___methodName0, ___args1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::SaveDeviceParams(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_SaveDeviceParams_m770FC4A4068968E85433BB4A91A917B377C578A2 (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF (const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// NewControlsNamespace.NewControls/ButtonsActions NewControlsNamespace.NewControls::get_Buttons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ButtonsActions::get_ButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ButtonsActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_Enable_mC4AB9E3A65B676CEC1845383D4480160D1ADD0E4 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ButtonsActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_Disable_m737312A0FAE0210313CCF36CD1A3E6E7347C48F1 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))InputAction_ReadValue_TisIl2CppFullySharedGenericStruct_m0B8C6490DD8EE673339E603898F5BB14254C3DBD_gshared)((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SimpleFileBrowser.FileBrowserItem>()
inline FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerClick_mA105524535DA9304C54057B9FBEFC4DC607E4FEF (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerEnter_m6E522B31AA73A624A7E2C1E0C072A2B9B37B5810 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowserItem::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserItem_OnPointerExit_m53AA3FB9005B0A92FA62C66BA1EED14DE61E1982 (FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void CameraRayCast::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_getinput_m1E88A541FA21227755B2AACB19D6CF3CFCD70D5F (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_mDC8FA4227BDD5F2D8D38C56B765CFBDDFD37573C (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m57C87EDB46D59270106748ABCF8D5AC5505B5067 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF (const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m3F5A0BEC12A603F96B5C27D658C606B4B3196115 (int32_t ___exitCode0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* Component_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_m926D886710762EDEC3925BB69A204C1BB3E8E93D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___value0, const RuntimeMethod* method) ;
// NewControlsNamespace.NewControls/ScrollingActions NewControlsNamespace.NewControls::get_Scrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ScrollingActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ScrollingActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ScrollingActions::get_HorScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Scrollbar::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_size_mD88FDA836274F40EC8A97237C72B7E3C4906DB5F (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.String[] SimpleFileBrowser.FileBrowser::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FileBrowser_get_Result_m68BED71300B0738904437796A2C20ADB8B057FF0_inline (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<SimpleFileBrowser.FileBrowser>()
inline FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E (const RuntimeMethod* method)
{
	return ((  FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void SimpleFileBrowser.FileBrowser::OnPathChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowser_OnPathChanged_mA276DEEBF8BF2572D763A15AA21036216B996661 (FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* __this, String_t* ___newPath0, const RuntimeMethod* method) ;
// System.Void Paroxe.PdfRenderer.PDFViewer::set_FilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDFViewer_set_FilePath_mAED895AEF86499F24124FD84E8D8905AE912D724 (PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void SimpleFileBrowser.FileBrowser::set_Result(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowser_set_Result_m6656F9251FE3557D72BF0D0F4BA83B475820F8AD_inline (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Void Paroxe.PdfRenderer.PDFViewer::CloseDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDFViewer_CloseDocument_mD2310B8C007511D4B5E2617170933B1A6A384973 (PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void PdfStart::ForwardURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_ForwardURL_mE3E944A45EFE4961EC1B9E5C41F35033BBC293BD (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// NewControlsNamespace.NewControls/MovementActions NewControlsNamespace.NewControls::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/MovementActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/MovementActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/MovementActions::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovement::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_getinput_m37BF98FABA1E0EB61FB1FF7450DC0D860FCAB072 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Random_ColorHSV_mC4AE87DC3711E0B9BC42F07625345F9443A3AF3B (float ___hueMin0, float ___hueMax1, float ___saturationMin2, float ___saturationMax3, float ___valueMin4, float ___valueMax5, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/MovementActions::get_HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// System.Void RotateSet::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_getinput_m7FEA77917AE05B3F52107246416D0E0F22B9F38E (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInput__ctor_m7E497239A0A78CCAC04BE6EE9AA81D49D887787C (BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* EventSystem_get_currentInputModule_m30559FCECCCE1AAD97D801968B8BD1C483FBF7AC (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::set_inputOverride(UnityEngine.EventSystems.BaseInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_set_inputOverride_m876BAC421A4BC40FB5873FC386E361C4CFA53987 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ScrollingActions::get_Scroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoPlayer::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void VideoPlay::SetVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_SetVideo_mE6BB70B0E83018CB3B453616E4D7F28D10921310 (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* Scrollbar_get_onValueChanged_m14356CECC1A2BA96576EB73279AF2ECF28B26D6A (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void Scrolldfsdf/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE833960C2445BE1372E1BD527E99A3F38C7CE2DF (U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC (String_t* ___levelName0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_Item(UnityEngine.InputSystem.Key)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_Item_m8043FEF215F8E96635D5D04B0D5D3D7153B64782 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.BackButton::BackButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_BackButtonPressed_m87910C649A73F5B428AF6FF7BA8870D71F628BCB (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.SampleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleManager__ctor_mF055A3145A836E5E7A9702CCBFCA3A3603C1C43F (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings__ctor_m9AAA972E14C620FDA5AB823EEF80784FFC78A8EF (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.FurioosSignaling::.ctor(System.String,System.Single,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FurioosSignaling__ctor_m56864E44CB559E45B1408B8BFB677C7C6E52142A (FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7* __this, String_t* ___url0, float ___timeout1, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___mainThreadContext2, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling::.ctor(System.String,System.Single,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSignaling__ctor_m0AE2E4D03B73DC1B560878FAEFE344C0B2787B1B (HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE* __this, String_t* ___url0, float ___timeout1, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___mainThreadContext2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.String Unity.RenderStreaming.VideoCodecInfo::get_mimeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCodecInfo_get_mimeType_mAC798D274E0590600307359B9EDE3E9DFAC25F9B (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* __this, const RuntimeMethod* method) ;
// Unity.RenderStreaming.H264Profile Unity.RenderStreaming.H264CodecInfo::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t H264CodecInfo_get_profile_mDEB15AB884FB86DEB697512731FFE6C7F916FECF (H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.H264CodecInfo::get_level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t H264CodecInfo_get_level_m3B734D9E92CB0EB52F391A212B219ED0ABB92BFD (H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String Unity.RenderStreaming.VideoCodecInfo::get_codecImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCodecInfo_get_codecImplementation_m08A3149302BA56D0FC14B71BF63A2E7281352444 (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Nullable`1<Unity.RenderStreaming.VP9Profile> Unity.RenderStreaming.VP9CodecInfo::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9 VP9CodecInfo_get_profile_m2CCA606F692855DF778B5D14D1D34BA79AAF4AD2 (VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// Unity.RenderStreaming.Samples.SampleManager Unity.RenderStreaming.Samples.SampleManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* SampleManager_get_Instance_m338B8F9ADAB37868548A0CAEEC1EC0ACA2F6779F (const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.SampleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleManager_Initialize_m15BCFE4303AB1689D77094FAE412EC77B7D3DF31 (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) ;
// Unity.RenderStreaming.Samples.RenderStreamingSettings Unity.RenderStreaming.Samples.SampleManager::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* SampleManager_get_Settings_mD95A6DBA7E7D2D6D083E831DA97E3369E9B6B30B (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) ;
// Unity.RenderStreaming.Samples.SignalingType Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStreamingSettings_get_SignalingType_m42F41993F756316DC222ED4D3D6B5D055C8AEA83 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderStreamingSettings_get_SignalingAddress_mD6F503F56D7DA977692D3F19CDC9F0458575F5F0 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingSecured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStreamingSettings_get_SignalingSecured_m5FD6DB7C4A0468D856F9CAD28EA5A64DDAD08273 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderStreamingSettings_get_SignalingInterval_m60B9133AD811FF8DA034A96FE12311FD635DCF93 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void System.Func`2<UnityEngine.Vector2Int,UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE522E4061B42AE2F1DA49C5016D9CA4F3B96ECBD (Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Vector2Int,UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m46B169F60ECBD25AAC000C2EB1E1863625D357F2 (RuntimeObject* ___source0, Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* ___selector1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m112E86038EFFFA375926EB25DC88FEBF820FBD05_gshared)((RuntimeObject*)___source0, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___selector1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_mAD7ADD5EE3D6E0A30271EDC31500BCE6301A256D_gshared)((RuntimeObject*)___source0, method);
	return (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*)il2cppRetVal;
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(T)
inline void List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_options_mEC30A0E3E0819485B1EACF8624D0C1974857D368 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Unity.RenderStreaming.Samples.RenderStreamingSettings::get_StreamSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Contains(T)
inline bool List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4 (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::IndexOf(T)
inline int32_t List_1_IndexOf_mFDB33CEAEB4E938DB1F9CA6F08942FC00A1024DD (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Count()
inline int32_t List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Unity.RenderStreaming.VideoCodecInfo> Unity.RenderStreaming.VideoStreamReceiver::GetAvailableCodecs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoStreamReceiver_GetAvailableCodecs_m1E1C870D60F67BD3CDA5F4EC6B9008D677CB0904 (const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m72D8D685F95C54AECF392C8A9CBAC7D7145B1A4E (Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.RenderStreaming.VideoCodecInfo,UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064 (RuntimeObject* ___source0, Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* ___selector1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m112E86038EFFFA375926EB25DC88FEBF820FBD05_gshared)((RuntimeObject*)___source0, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___selector1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Collections.Generic.IEnumerable`1<Unity.RenderStreaming.VideoCodecInfo> Unity.RenderStreaming.VideoStreamSender::GetAvailableCodecs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoStreamSender_GetAvailableCodecs_m279531912CEC0393ECD1D2C1DBB59202A3C533B5 (const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.RenderStreaming.VideoCodecInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5* Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_m6A76484DC6D833014999600380101B2D9EE2403F_gshared)((RuntimeObject*)___source0, method);
	return (VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5*)il2cppRetVal;
}
// System.Void System.Predicate`1<Unity.RenderStreaming.VideoCodecInfo>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mFBA8FC3761252CC4A736A133F5BEA7C3D779D8D4 (Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<Unity.RenderStreaming.VideoCodecInfo>(T[],System.Predicate`1<T>)
inline int32_t Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043 (VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5* ___array0, Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7* ___match1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))Array_FindIndex_TisIl2CppFullySharedGenericAny_m293A3BED2CB34E68D3E80A3A1980E9CFD47C03AD_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___array0, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___match1, method);
}
// UnityEngine.InputSystem.Gyroscope UnityEngine.InputSystem.Gyroscope::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4* Gyroscope_get_current_m428AD02BCAFA9196EE3676D53D26C014EAAD2811_inline (const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21 (RuntimeArray* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingType(Unity.RenderStreaming.Samples.SignalingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingType_m154DFF537431A3CC937EFAFF8EEC5FC20972F3BF (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingAddress_m67C41E2A23C5BE0F71063E09AE22EC02D66D63EB (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingSecured(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingSecured_mC663A12B74630AF2C37CED5C83FE51464414B373 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingInterval_mB0788477349607D1F4878C07324436BA0E6C17EA (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Count()
inline int32_t List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_StreamSize(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SenderVideoCodec(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SenderVideoCodec_mFF695D8037C924F78ED553C2054EB1DECD40093F (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___value0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<Unity.RenderStreaming.VideoCodecInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883 (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* il2cppRetVal;
	((  void (*) (RuntimeObject*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_ElementAt_TisIl2CppFullySharedGenericAny_m1186C5B0011759EA7B83B972A395087B02FE2D30_gshared)((RuntimeObject*)___source0, ___index1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_ReceiverVideoCodec(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_ReceiverVideoCodec_m9D02483B95ADD8D45BB95A16DF6DCF4C9E0D235C (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___value0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
inline void List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(T)
inline void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::get_ReceiverVideoCodec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* RenderStreamingSettings_get_ReceiverVideoCodec_mC9C07E79BAC3175E98D07C0310FA5CFAD94BBB52 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.VideoCodecInfo::Equals(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCodecInfo_Equals_mDD43C36553FB6049120D4675686A6301320F3E58 (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___other0, const RuntimeMethod* method) ;
// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SenderVideoCodec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* RenderStreamingSettings_get_SenderVideoCodec_m7C37A9F08E6A74E696539D264AB1AC8474558D7E (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DD0482741E6D83F27A3674CE7060F624672AA63 (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* __this, const RuntimeMethod* method) ;
// System.String Unity.RenderStreaming.Samples.SceneSelectUI::CodecTitle(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneSelectUI_CodecTitle_mE77B5ADB4AC5954EBB3679A483E9ECF62FB041E9 (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347 (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset NewControlsNamespace.NewControls::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> NewControlsNamespace.NewControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_GetEnumerator_mAA0A5E15F8FC76CD02985240BD3552790984847F (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ButtonsActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions__ctor_m099746A06E35B99B4EC4D3A784B4AAAF78D75EDE (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/MovementActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions__ctor_m66D22C5AFD239ECCBDC942AF6F73A49150874D70 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ScrollingActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions__ctor_m8E33DB50D647EBAA1FD45825D6697D61AD145256 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ButtonsActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean NewControlsNamespace.NewControls/ButtonsActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonsActions_get_enabled_mA0482F5B02DCD0851E1C0194EDA1B92C4C0BDEC3 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ButtonsActions::SetCallbacks(NewControlsNamespace.NewControls/IButtonsActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_SetCallbacks_mA315BF0208CE23D1C1EEAF5B282C7E2E413DB7FB (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/MovementActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// System.Boolean NewControlsNamespace.NewControls/MovementActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovementActions_get_enabled_m2DA60A4FBE663BA7FB6A4EF1B910E054E5459282 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/MovementActions::SetCallbacks(NewControlsNamespace.NewControls/IMovementActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_SetCallbacks_m8D1AA8A9820436CBB17B5EA10D26C3D272B7927D (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ScrollingActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// System.Boolean NewControlsNamespace.NewControls/ScrollingActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScrollingActions_get_enabled_mCBB0B79615A844B8C2FDD349FF40367D4760D552 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) ;
// System.Void NewControlsNamespace.NewControls/ScrollingActions::SetCallbacks(NewControlsNamespace.NewControls/IScrollingActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_SetCallbacks_m2F7B128777172356F0BC7AA177B429BE47BBE962 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
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
// System.Void Onclick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Onclick_Start_m4B89EBACD34E3962AFB2C1B047C5E5F55C716ED4 (Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Onclick::clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Onclick_clicked_m3DF43290162A273D3B121BA582053FD9CF499C3C (Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Clicked");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18, NULL);
		// }
		return;
	}
}
// System.Void Onclick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Onclick_Update_m76E193EB207F7EFD0ECEDACDB99ED7A2E0A388BA (Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Onclick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Onclick__ctor_m4BFBB93D0DD3C6669A0C70BFBBBB350841250362 (Onclick_t0B598D9B228F78976551D371F4AE25FBCB625FD5* __this, const RuntimeMethod* method) 
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
// System.Void InputHandling::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandling_Start_mF747DEB74E989426392D9C707B1D89589E59DE23 (InputHandling_t27FE3668FCA29D85B82CB949F76D9A317F7D7450* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputHandling::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandling_Update_mED5D08B79BD9D74B6D9CBA60E1C8DA5BC9660ACC (InputHandling_t27FE3668FCA29D85B82CB949F76D9A317F7D7450* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputHandling::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandling__ctor_mAA03468418CD0DC0D78C3C2407B38762B271F376 (InputHandling_t27FE3668FCA29D85B82CB949F76D9A317F7D7450* __this, const RuntimeMethod* method) 
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
// System.Void Numpad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Numpad_Start_m469A9379F637B07C2B2B5D44E56B19ED066933BD (Numpad_t393C69246800359ABA968F3772B8AD736AF66BED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Numpad_EnterText_mD824FB557C053913DA24278B4E717B03CF491F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Numpad_RemoveText_mCBBFCDE6878E99BD13FCC30E25FF223918C189A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5635955E2F38FAE85097EC595A585FA8B403FE0A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// numText = GetComponentInChildren<TextMeshProUGUI>().text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(__this, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		__this->___numText_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___numText_5), (void*)L_1);
		// if( numText.Equals("Bksp"))
		String_t* L_2 = __this->___numText_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteral5635955E2F38FAE85097EC595A585FA8B403FE0A, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// isBksp = true;
		__this->___isBksp_4 = (bool)1;
	}

IL_002f:
	{
		// if(isBksp)
		bool L_5 = __this->___isBksp_4;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// GetComponent<Button>().onClick.AddListener(RemoveText);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)Numpad_RemoveText_mCBBFCDE6878E99BD13FCC30E25FF223918C189A6_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		goto IL_0079;
	}

IL_005a:
	{
		// GetComponent<Button>().onClick.AddListener(EnterText);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10;
		L_10 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)Numpad_EnterText_mD824FB557C053913DA24278B4E717B03CF491F44_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Numpad::RemoveText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Numpad_RemoveText_mCBBFCDE6878E99BD13FCC30E25FF223918C189A6 (Numpad_t393C69246800359ABA968F3772B8AD736AF66BED* __this, const RuntimeMethod* method) 
{
	{
		// inputField.text = inputField.text.Remove(inputField.text.Length -1 , 1);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_6;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___inputField_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_1, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___inputField_6;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		NullCheck(L_2);
		String_t* L_6;
		L_6 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), 1, NULL);
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Numpad::EnterText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Numpad_EnterText_mD824FB557C053913DA24278B4E717B03CF491F44 (Numpad_t393C69246800359ABA968F3772B8AD736AF66BED* __this, const RuntimeMethod* method) 
{
	{
		// inputField.text = inputField.text + numText;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_6;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___inputField_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_1, NULL);
		String_t* L_3 = __this->___numText_5;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, L_3, NULL);
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Numpad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Numpad_Update_mFDFE9FE911AC0EDACA7F3CF87D728A438AC9A68E (Numpad_t393C69246800359ABA968F3772B8AD736AF66BED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Numpad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Numpad__ctor_m670A0218B7A8F3AC8AA42C898DF51E55D0CC5B95 (Numpad_t393C69246800359ABA968F3772B8AD736AF66BED* __this, const RuntimeMethod* method) 
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
// Unity.RenderStreaming.Signaling.ISignaling ReceiverSample::get_Signaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiverSample_get_Signaling_m404AE5E096718F3784B83D01C494B9F64EB02199 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new WebSocketSignaling($"ws://{signalingAddress}", 5, SynchronizationContext.Current);
		String_t* L_0 = __this->___signalingAddress_15;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71, L_0, NULL);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC* L_3 = (WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC*)il2cpp_codegen_object_new(WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocketSignaling__ctor_mB1C0763DC076E392B87C39A837DA792B0907D12F(L_3, L_1, (5.0f), L_2, NULL);
		V_0 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Void ReceiverSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_Awake_m458B564E837501797BF172C0EF3033262E13C8A5 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputSender_t049289B7AA492685781B08E636AF5B2A1B91B601_m063EAC9D6BD6D6783073B8CF6CF2B46AB07906CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnAddressChange_m7CD3D288AB6A32DD5DD4078931DC68475093F433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnProceed_m59A9649578F49B508ABA38F5C0FBD67E75544A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnStart_mFDAEE8BD00DE631F5522E6E79DB1B23C0D800591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnStartedChannel_m983767CD03F1B50C85F82BF4A86E2610AEE5208C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnStop_mE5F99039ED1FEA4CC4FA5FD8DCB73E716AE4821E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_OnUpdateReceiveTexture_m863B5A5A92E9A14A2368E8FD86AB54CE1CE2C984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiverSample_U3CAwakeU3Eb__16_0_m256AA7BF1897E2B724537E184BC07BA8BEEA153F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// startButton.onClick.AddListener(OnStart);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___startButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ReceiverSample_OnStart_mFDAEE8BD00DE631F5522E6E79DB1B23C0D800591_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// stopButton.onClick.AddListener(OnStop);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___stopButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)ReceiverSample_OnStop_mE5F99039ED1FEA4CC4FA5FD8DCB73E716AE4821E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// proceedButton.onClick.AddListener(OnProceed);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___proceedButton_12;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)ReceiverSample_OnProceed_m59A9649578F49B508ABA38F5C0FBD67E75544A06_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// addressInput.onValueChanged.AddListener(OnAddressChange);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___addressInput_8;
		NullCheck(L_9);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_10;
		L_10 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_9, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_11 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_11, __this, (intptr_t)((void*)ReceiverSample_OnAddressChange_m7CD3D288AB6A32DD5DD4078931DC68475093F433_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_10, L_11, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// if(connectionIdInput != null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___connectionIdInput_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_13;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		// connectionIdInput.onValueChanged.AddListener(input => connectionId = input);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___connectionIdInput_7;
		NullCheck(L_15);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_16;
		L_16 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_15, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_17 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_17, __this, (intptr_t)((void*)ReceiverSample_U3CAwakeU3Eb__16_0_m256AA7BF1897E2B724537E184BC07BA8BEEA153F_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_16, L_17, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
	}

IL_00a2:
	{
		// receiveVideoViewer.OnUpdateReceiveTexture += OnUpdateReceiveTexture;
		VideoStreamReceiver_t4016311DA555883E0A9551D53EBBFB8F8D3EBAF3* L_18 = __this->___receiveVideoViewer_10;
		VideoStreamReceiver_t4016311DA555883E0A9551D53EBBFB8F8D3EBAF3* L_19 = L_18;
		NullCheck(L_19);
		OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A* L_20 = L_19->___OnUpdateReceiveTexture_8;
		OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A* L_21 = (OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A*)il2cpp_codegen_object_new(OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		OnUpdateReceiveTextureHandler__ctor_mC5C7B00A6A69347A99594EB17195A1EE58A4BD85(L_21, __this, (intptr_t)((void*)ReceiverSample_OnUpdateReceiveTexture_m863B5A5A92E9A14A2368E8FD86AB54CE1CE2C984_RuntimeMethod_var), NULL);
		Delegate_t* L_22;
		L_22 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_20, L_21, NULL);
		NullCheck(L_19);
		L_19->___OnUpdateReceiveTexture_8 = ((OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A*)CastclassSealed((RuntimeObject*)L_22, OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___OnUpdateReceiveTexture_8), (void*)((OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A*)CastclassSealed((RuntimeObject*)L_22, OnUpdateReceiveTextureHandler_tDF638FB4656E84F2B8212F71D98D6FDCD49B547A_il2cpp_TypeInfo_var)));
		// inputSender = GetComponent<InputSender>();
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_23;
		L_23 = Component_GetComponent_TisInputSender_t049289B7AA492685781B08E636AF5B2A1B91B601_m063EAC9D6BD6D6783073B8CF6CF2B46AB07906CA(__this, Component_GetComponent_TisInputSender_t049289B7AA492685781B08E636AF5B2A1B91B601_m063EAC9D6BD6D6783073B8CF6CF2B46AB07906CA_RuntimeMethod_var);
		__this->___inputSender_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSender_17), (void*)L_23);
		// inputSender.OnStartedChannel += OnStartedChannel;
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_24 = __this->___inputSender_17;
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_25 = L_24;
		NullCheck(L_25);
		OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* L_26;
		L_26 = DataChannelBase_get_OnStartedChannel_m6445CEAF6A804F6E2637B7C1EF1A0EEDEFE10457_inline(L_25, NULL);
		OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* L_27 = (OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296*)il2cpp_codegen_object_new(OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		OnStartedChannelHandler__ctor_mA1D55EEDC82E92549D927BE73EBE5165513BBB89(L_27, __this, (intptr_t)((void*)ReceiverSample_OnStartedChannel_m983767CD03F1B50C85F82BF4A86E2610AEE5208C_RuntimeMethod_var), NULL);
		Delegate_t* L_28;
		L_28 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_26, L_27, NULL);
		NullCheck(L_25);
		DataChannelBase_set_OnStartedChannel_m49197770E2E29AAE71D8544DCCD707578B6BB1D7_inline(L_25, ((OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296*)CastclassSealed((RuntimeObject*)L_28, OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_Start_m1DBDBEEC413E9CDA0FCA862B8CFE1FB283A98115 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (renderStreaming.runOnAwake)
		RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B* L_0 = __this->___renderStreaming_4;
		NullCheck(L_0);
		bool L_1 = L_0->___runOnAwake_9;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void ReceiverSample::OnUpdateReceiveTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnUpdateReceiveTexture_m863B5A5A92E9A14A2368E8FD86AB54CE1CE2C984 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	{
		// renderTexture.material.mainTexture = texture;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___renderTexture_9;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		NullCheck(L_1);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_1, L_2, NULL);
		// SetInputChange();
		ReceiverSample_SetInputChange_mCCE2E570871EFD1B094C3EEAE5A9BDDD73B9F1D2(__this, NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::OnStartedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnStartedChannel_m983767CD03F1B50C85F82BF4A86E2610AEE5208C (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, String_t* ___connectionId0, const RuntimeMethod* method) 
{
	{
		// SetInputChange();
		ReceiverSample_SetInputChange_mCCE2E570871EFD1B094C3EEAE5A9BDDD73B9F1D2(__this, NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::SetInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_SetInputChange_mCCE2E570871EFD1B094C3EEAE5A9BDDD73B9F1D2 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (inputSender == null || !inputSender.IsConnected)
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_0 = __this->___inputSender_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_2 = __this->___inputSender_17;
		NullCheck(L_2);
		bool L_3;
		L_3 = DataChannelBase_get_IsConnected_mE286117C6815CDB6BD2FDDC01657C13784751FE3(L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_0033;
	}

IL_0026:
	{
		// inputSender.EnableInputPositionCorrection(true);
		InputSender_t049289B7AA492685781B08E636AF5B2A1B91B601* L_5 = __this->___inputSender_17;
		NullCheck(L_5);
		InputSender_EnableInputPositionCorrection_m800020B55FF42A75829E16DD21C3851D9AD4CC94(L_5, (bool)1, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void ReceiverSample::OnProceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnProceed_m59A9649578F49B508ABA38F5C0FBD67E75544A06 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	{
		// renderStreaming.Run(signaling: Signaling);
		RenderStreaming_t7BF6501FFC6490975ABCF8D46801AAF507F7CB6B* L_0 = __this->___renderStreaming_4;
		RuntimeObject* L_1;
		L_1 = ReceiverSample_get_Signaling_m404AE5E096718F3784B83D01C494B9F64EB02199(__this, NULL);
		NullCheck(L_0);
		RenderStreaming_Run_m2976F313990B99CA32BB0F0132014F192A46F734(L_0, L_1, (SignalingHandlerBaseU5BU5D_t0C0E5ED7F072F4DAFDDD628DB62B1A2E923D66E1*)NULL, NULL);
		// connectionIdInput.gameObject.SetActive(true);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___connectionIdInput_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// startButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___startButton_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// createConnection.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___createConnection_13;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::OnAddressChange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnAddressChange_m7CD3D288AB6A32DD5DD4078931DC68475093F433 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// signalingAddress = value;
		String_t* L_0 = ___value0;
		__this->___signalingAddress_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalingAddress_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void ReceiverSample::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnStart_mFDAEE8BD00DE631F5522E6E79DB1B23C0D800591 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (string.IsNullOrEmpty(connectionId))
		String_t* L_0 = __this->___connectionId_14;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// connectionId = System.Guid.NewGuid().ToString("N");
		Guid_t L_3;
		L_3 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_1), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		__this->___connectionId_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_14), (void*)L_4);
		// connectionIdInput.text = connectionId;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___connectionIdInput_7;
		String_t* L_6 = __this->___connectionId_14;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_6, NULL);
	}

IL_003c:
	{
		// connectionIdInput.interactable = false;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___connectionIdInput_7;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)0, NULL);
		// connection.CreateConnection(connectionId);
		SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE* L_8 = __this->___connection_11;
		String_t* L_9 = __this->___connectionId_14;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(5 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::CreateConnection(System.String) */, L_8, L_9);
		// startButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___startButton_5;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// stopButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___stopButton_6;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::OnStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_OnStop_mE5F99039ED1FEA4CC4FA5FD8DCB73E716AE4821E (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connection.DeleteConnection(connectionId);
		SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE* L_0 = __this->___connection_11;
		String_t* L_1 = __this->___connectionId_14;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::DeleteConnection(System.String) */, L_0, L_1);
		// connectionId = String.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___connectionId_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_14), (void*)L_2);
		// connectionIdInput.text = String.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___connectionIdInput_7;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_3, L_4, NULL);
		// connectionIdInput.interactable = true;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___connectionIdInput_7;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)1, NULL);
		// startButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___startButton_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// stopButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___stopButton_6;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ReceiverSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample__ctor_m5D54490B02C5F671F538291157AA8FDFE2519375 (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string signalingAddress = "localhost";
		__this->___signalingAddress_15 = _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalingAddress_15), (void*)_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ReceiverSample::<Awake>b__16_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiverSample_U3CAwakeU3Eb__16_0_m256AA7BF1897E2B724537E184BC07BA8BEEA153F (ReceiverSample_tBB95721E3581433EC8E18C1661C84398C014973C* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	{
		// connectionIdInput.onValueChanged.AddListener(input => connectionId = input);
		String_t* L_0 = ___input0;
		__this->___connectionId_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_14), (void*)L_0);
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
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_mF19D284A593E4627CD4F22A58C11FB87B6627FF4 (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B14_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B13_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_1, L_3, (&V_0), (10.0f), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0082;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0050;
		}
	}
	{
		goto IL_005b;
	}

IL_0050:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B4_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_005b:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		__this->____gazedAtObject_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_14);
		// _gazedAtObject.SendMessage("OnPointerEnter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____gazedAtObject_5;
		NullCheck(L_15);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_15, _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240, NULL);
	}

IL_007f:
	{
		goto IL_00a2;
	}

IL_0082:
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16;
		G_B8_0 = L_17;
		if (L_17)
		{
			G_B9_0 = L_17;
			goto IL_008f;
		}
	}
	{
		goto IL_009a;
	}

IL_008f:
	{
		NullCheck(G_B9_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B9_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_009a:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_00a2:
	{
		// if (Google.XR.Cardboard.Api.IsTriggerPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Api_get_IsTriggerPressed_m69CFBBBFCA8AB8D960F1EE7CF6D98AFA9D5F761F(NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClick");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20;
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		goto IL_00c3;
	}

IL_00b8:
	{
		NullCheck(G_B14_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B14_0, _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A, NULL);
	}

IL_00c3:
	{
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_m5C4B443EB7C8A518306BF27BD947D938FDF5162D (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, L_6, NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_7))%L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		V_2 = L_13;
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-3.14159274f), (3.14159274f), NULL);
		V_3 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((2.5f), (3.5f), NULL);
		V_4 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (3.5f), NULL);
		V_5 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_3;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_4;
		float L_20 = V_5;
		float L_21 = V_3;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), ((float)il2cpp_codegen_multiply(L_18, L_19)), L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		// transform.parent.localPosition = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_26, NULL);
		// randomSib.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnter_m5D028066A6B28C2770924AE0C5A2A926E807FC42 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExit_mB2F968E3432A4B5E90ABFCE7E6B025A39041809F (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClick_m42836A892DD52FE0C121F5E37231BF198052017E (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B6_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B7_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____myRenderer_10;
		bool L_6 = ___gazedAt0;
		G_B5_0 = L_5;
		if (L_6)
		{
			G_B6_0 = L_5;
			goto IL_0034;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___InactiveMaterial_4;
		G_B7_0 = L_7;
		G_B7_1 = G_B5_0;
		goto IL_003a;
	}

IL_0034:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___GazedAtMaterial_5;
		G_B7_0 = L_8;
		G_B7_1 = G_B6_0;
	}

IL_003a:
	{
		NullCheck(G_B7_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B7_1, G_B7_0, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
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
// System.Void SceneChange::SceneSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_SceneSwitch_mCC1063A77876ABA4F7919378B7FC43A89027D663 (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange__ctor_m4BEE4E939472EAB59441D14F2324EEE353793A1B (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
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
// System.Void AskPermissions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AskPermissions_Start_m4FCC586AC361A75C722F40C371CF760C02617F6D (AskPermissions_t51D96EE38EC03BC4FC71E247873255979B0B22F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53AFAC98120DBB6F1D7996FD52282BF1273F9475);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	String_t* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_4 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	{
		// plugin = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		__this->___plugin_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plugin_4), (void*)L_0);
		// var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
		// AndroidJavaObject currentActivityObject = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_3;
		// string packageName = currentActivityObject.Call<string>("getPackageName");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_4, _stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610, L_5, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_2 = L_6;
		// Debug.Log(packageName);
		String_t* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// var intentObject = new AndroidJavaObject("android.content.Intent", "android.settings.MANAGE_APP_ALL_FILES_ACCESS_PERMISSION");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral53AFAC98120DBB6F1D7996FD52282BF1273F9475);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral53AFAC98120DBB6F1D7996FD52282BF1273F9475);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_9, NULL);
		V_3 = L_10;
		// var uriClass = new AndroidJavaClass("android.net.Uri");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_11, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
		V_4 = L_11;
		// AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("fromParts", "package", packageName, null);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		NullCheck(L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_12, _stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F, L_15, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_5 = L_17;
		// intentObject.Call<AndroidJavaObject>("setData", uriObject);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_5;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		NullCheck(L_18);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22;
		L_22 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_18, _stringLiteralF407349B9F3F0F153BADC9B448EE75ED60B5AF86, L_20, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// currentActivityObject.Call("startActivity", intentObject);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_3;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		NullCheck(L_23);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_23, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_25, NULL);
		// }
		return;
	}
}
// System.Void AskPermissions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AskPermissions_Update_mD84CDAB02A6DCF083DC5282946D0006918BD0089 (AskPermissions_t51D96EE38EC03BC4FC71E247873255979B0B22F9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AskPermissions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AskPermissions__ctor_m1C5C3FBC954EC07F512280D8522351D03C109C61 (AskPermissions_t51D96EE38EC03BC4FC71E247873255979B0B22F9* __this, const RuntimeMethod* method) 
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
// System.Void Calibrate::ChangeVRParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calibrate_ChangeVRParameters_m0264A1F9F4559FBDF8A448BD03E3DD6E6AB09BEB (Calibrate_t26BB059768D1E218717D38D8A1AC4EBF6BC938C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D29BD4E1335201D00EEE82E698EDBDE3403D478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Api.SaveDeviceParams(uri);
		String_t* L_0 = __this->___uri_4;
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_SaveDeviceParams_m770FC4A4068968E85433BB4A91A917B377C578A2(L_0, NULL);
		// Debug.Log("Params changed!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1D29BD4E1335201D00EEE82E698EDBDE3403D478, NULL);
		// }
		return;
	}
}
// System.Void Calibrate::ScanQR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calibrate_ScanQR_mE711DC70BD3F43D3D35E778517CD810C2A640010 (Calibrate_t26BB059768D1E218717D38D8A1AC4EBF6BC938C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
		// }
		return;
	}
}
// System.Void Calibrate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calibrate__ctor_mF76AD79689E8D7CAFAA3E18CC61B21B83C2F48C5 (Calibrate_t26BB059768D1E218717D38D8A1AC4EBF6BC938C0* __this, const RuntimeMethod* method) 
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
// System.Void CameraRayCast::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_Awake_m096112C7D738E6B5DFA4111A6A4459352B550809 (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraRayCast_U3CAwakeU3Eb__13_0_mE6E6AC99572F54A4C698346A9D6A90D578A93BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls = new NewControls();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB*)il2cpp_codegen_object_new(NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE(L_0, NULL);
		__this->___controls_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controls_11), (void*)L_0);
		// controls.Buttons.ButtonClick.performed += ctx => getinput();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_1 = __this->___controls_11;
		NullCheck(L_1);
		ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E L_2;
		L_2 = NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)CameraRayCast_U3CAwakeU3Eb__13_0_mE6E6AC99572F54A4C698346A9D6A90D578A93BC6_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CameraRayCast::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_OnEnable_m731C579466AAB1B4AAF6174CB257E452D8FC005A (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Buttons.Enable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_11;
		NullCheck(L_0);
		ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E L_1;
		L_1 = NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4(L_0, NULL);
		V_0 = L_1;
		ButtonsActions_Enable_mC4AB9E3A65B676CEC1845383D4480160D1ADD0E4((&V_0), NULL);
		// }
		return;
	}
}
// System.Void CameraRayCast::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_OnDisable_m8E85AF35D7696728F2B04C1CCF39129497F281DA (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Buttons.Disable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_11;
		NullCheck(L_0);
		ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E L_1;
		L_1 = NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4(L_0, NULL);
		V_0 = L_1;
		ButtonsActions_Disable_m737312A0FAE0210313CCF36CD1A3E6E7347C48F1((&V_0), NULL);
		// }
		return;
	}
}
// System.Void CameraRayCast::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_getinput_m1E88A541FA21227755B2AACB19D6CF3CFCD70D5F (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B2_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B1_0 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B5_0 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B10_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B9_0 = NULL;
	{
		// input  = controls.Buttons.ButtonClick.ReadValue<float>();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_11;
		NullCheck(L_0);
		ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E L_1;
		L_1 = NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D((&V_0), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___input_16 = L_3;
		// btn?.onClick.Invoke();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btn_12;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_002b;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		NullCheck(G_B2_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(G_B2_0, NULL);
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
	}

IL_0036:
	{
		// tog?.OnPointerClick(new PointerEventData(null));
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = __this->___tog_13;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0042;
		}
	}
	{
		goto IL_004e;
	}

IL_0042:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_9, (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707*)NULL, NULL);
		NullCheck(G_B5_0);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(49 /* System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData) */, G_B5_0, L_9);
	}

IL_004e:
	{
		// curObject?.GetComponent<FileBrowserItem>()?.OnPointerClick(new PointerEventData(null));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___curObject_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_005a;
		}
	}
	{
		goto IL_0071;
	}

IL_005a:
	{
		NullCheck(G_B8_0);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_12;
		L_12 = GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53(G_B8_0, GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_13 = L_12;
		G_B9_0 = L_13;
		if (L_13)
		{
			G_B10_0 = L_13;
			goto IL_0065;
		}
	}
	{
		goto IL_0071;
	}

IL_0065:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_14, (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707*)NULL, NULL);
		NullCheck(G_B10_0);
		FileBrowserItem_OnPointerClick_mA105524535DA9304C54057B9FBEFC4DC607E4FEF(G_B10_0, L_14, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void CameraRayCast::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_Start_m808F5A46BE2BB8F33826A43552B4A433D81CCEF8 (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CameraRayCast::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_Update_mF475096D9F509DFB8FD5D6A24EC0FA0DA718AEF1 (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B6_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B11_0 = NULL;
	FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* G_B10_0 = NULL;
	{
		// if(Physics.Raycast(this.transform.position,this.transform.forward, out hit, maxDistance: 10000.0f, layerMask: layerMask))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___layerMask_7;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		bool L_6;
		L_6 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_1, L_3, (&V_0), (10000.0f), L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00f1;
		}
	}
	{
		// collision = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		__this->___collision_8 = L_8;
		// sphere.transform.position = collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___sphere_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___collision_8;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// curObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		__this->___curObject_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curObject_14), (void*)L_13);
		// if(!curObject.Equals(prevObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___curObject_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___prevObject_15;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		V_2 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00ce;
		}
	}
	{
		// curObject?.GetComponent<FileBrowserItem>()?.OnPointerEnter(null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___curObject_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18;
		G_B3_0 = L_19;
		if (L_19)
		{
			G_B4_0 = L_19;
			goto IL_0091;
		}
	}
	{
		goto IL_00a3;
	}

IL_0091:
	{
		NullCheck(G_B4_0);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_20;
		L_20 = GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53(G_B4_0, GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_21 = L_20;
		G_B5_0 = L_21;
		if (L_21)
		{
			G_B6_0 = L_21;
			goto IL_009c;
		}
	}
	{
		goto IL_00a3;
	}

IL_009c:
	{
		NullCheck(G_B6_0);
		FileBrowserItem_OnPointerEnter_m6E522B31AA73A624A7E2C1E0C072A2B9B37B5810(G_B6_0, (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL, NULL);
	}

IL_00a3:
	{
		// prevObject?.GetComponent<FileBrowserItem>()?.OnPointerExit(null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___prevObject_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22;
		G_B8_0 = L_23;
		if (L_23)
		{
			G_B9_0 = L_23;
			goto IL_00af;
		}
	}
	{
		goto IL_00c1;
	}

IL_00af:
	{
		NullCheck(G_B9_0);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_24;
		L_24 = GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53(G_B9_0, GameObject_GetComponent_TisFileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5_m6417DCEDC0B1B2C8AD7A1C977B7F6973BD7C9B53_RuntimeMethod_var);
		FileBrowserItem_t45C2C26F5BB76A6E518DB392E03451C6E33A0EE5* L_25 = L_24;
		G_B10_0 = L_25;
		if (L_25)
		{
			G_B11_0 = L_25;
			goto IL_00ba;
		}
	}
	{
		goto IL_00c1;
	}

IL_00ba:
	{
		NullCheck(G_B11_0);
		FileBrowserItem_OnPointerExit_m53AA3FB9005B0A92FA62C66BA1EED14DE61E1982(G_B11_0, (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL, NULL);
	}

IL_00c1:
	{
		// prevObject = curObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___curObject_14;
		__this->___prevObject_15 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevObject_15), (void*)L_26);
	}

IL_00ce:
	{
		// btn = curObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___curObject_14;
		NullCheck(L_27);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28;
		L_28 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_27, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___btn_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_12), (void*)L_28);
		// tog = curObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___curObject_14;
		NullCheck(L_29);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_30;
		L_30 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_29, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___tog_13 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tog_13), (void*)L_30);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void CameraRayCast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast__ctor_mD918D2833FF5D5C5741DD56483A90704DE551ED1 (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 collision = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___collision_8 = L_0;
		// private Button btn = null;
		__this->___btn_12 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_12), (void*)(Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL);
		// private Toggle tog = null;
		__this->___tog_13 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tog_13), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CameraRayCast::<Awake>b__13_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRayCast_U3CAwakeU3Eb__13_0_mE6E6AC99572F54A4C698346A9D6A90D578A93BC6 (CameraRayCast_t8FB0D1EE30D2EFB7B57890974D60A5983C463D19* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// controls.Buttons.ButtonClick.performed += ctx => getinput();
		CameraRayCast_getinput_m1E88A541FA21227755B2AACB19D6CF3CFCD70D5F(__this, NULL);
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0012:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0023:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Api_get_IsTriggerHeldPressed_mDC8FA4227BDD5F2D8D38C56B765CFBDDFD37573C(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m57C87EDB46D59270106748ABCF8D5AC5505B5067(NULL);
	}

IL_0034:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181(NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9(NULL);
	}

IL_0045:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
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
// System.Void CursorSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSettings_Start_mED73AECBDA4A91B6137573951D4FB97C476D25B5 (CursorSettings_t2EFEAEC566DF8551008207562C570BBEA1D5CDE0* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// }
		return;
	}
}
// System.Void CursorSettings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSettings_Update_mD2651328E57F63F72DC9C71EB008879FCA6A175C (CursorSettings_t2EFEAEC566DF8551008207562C570BBEA1D5CDE0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CursorSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSettings__ctor_m448F8F38161450E10FA135A1A144FCB4A278C4E6 (CursorSettings_t2EFEAEC566DF8551008207562C570BBEA1D5CDE0* __this, const RuntimeMethod* method) 
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
// System.Void DeviceCameraInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCameraInput_Start_m9054344C857437CADB7215F8FF8A51D9E8DB76CB (DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA760F01896973CB261F86D8A920EBD0624A16F);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	bool V_2 = false;
	{
		// WebCamDevice[] devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_0;
		L_0 = WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF(NULL);
		V_0 = L_0;
		// webcamTexture = new WebCamTexture();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_1 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269(L_1, NULL);
		__this->___webcamTexture_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webcamTexture_5), (void*)L_1);
		// if(devices.Length==0)
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_2 = V_0;
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("No Camera Device Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral9CA760F01896973CB261F86D8A920EBD0624A16F, NULL);
		// return;
		goto IL_006b;
	}

IL_0029:
	{
		// webcamTexture.deviceName = devices[deviceIndex].name;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___webcamTexture_5;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_5 = V_0;
		int32_t L_6 = __this->___deviceIndex_4;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), NULL);
		NullCheck(L_4);
		WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86(L_4, L_7, NULL);
		// Renderer renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_8;
		// renderer.material.mainTexture = webcamTexture;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = V_1;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_11 = __this->___webcamTexture_5;
		NullCheck(L_10);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_10, L_11, NULL);
		// webcamTexture.Play();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_12 = __this->___webcamTexture_5;
		NullCheck(L_12);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_12, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void DeviceCameraInput::StopCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCameraInput_StopCam_m04FCA1DDAA3A3867DDEEE0475000927326226582 (DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7* __this, const RuntimeMethod* method) 
{
	{
		// webcamTexture.Stop();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___webcamTexture_5;
		NullCheck(L_0);
		WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184(L_0, NULL);
		// }
		return;
	}
}
// System.Void DeviceCameraInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCameraInput_Update_m5EE126C1440B36DD808B14BC9EA5CB17CA0D8BB3 (DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DeviceCameraInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCameraInput__ctor_mDFEBAE4704D97D9156956CA6F9DFCD360754E22B (DeviceCameraInput_t00FF8C5F5A1EEA21F335FED1F2452A520C6EE1E7* __this, const RuntimeMethod* method) 
{
	{
		// public int deviceIndex = 0;
		__this->___deviceIndex_4 = 0;
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
// System.Void Quit::MyQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_MyQuit_mD7FB5062BC97A4F1A8154E419DAEEB5D496DAEF7 (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit(0);
		Application_Quit_m3F5A0BEC12A603F96B5C27D658C606B4B3196115(0, NULL);
		// }
		return;
	}
}
// System.Void Quit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit__ctor_m3F91DC1CD69CEDC58473E2984694380137C228C0 (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
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
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (axes == RotationAxes.MouseXAndY)
		int32_t L_0 = __this->___axes_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0094;
		}
	}
	{
		// float rotationX = transform.localEulerAngles.y + Input.GetAxis("Mouse X") * sensitivityX;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6 = __this->___sensitivityX_5;
		V_1 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_7 = __this->___rotationY_11;
		float L_8;
		L_8 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_9 = __this->___sensitivityY_6;
		__this->___rotationY_11 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_8, L_9))));
		// rotationY = Mathf.Clamp(rotationY, minimumY, maximumY);
		float L_10 = __this->___rotationY_11;
		float L_11 = __this->___minimumY_9;
		float L_12 = __this->___maximumY_10;
		float L_13;
		L_13 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_10, L_11, L_12, NULL);
		__this->___rotationY_11 = L_13;
		// transform.localEulerAngles = new Vector3(-rotationY, rotationX, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_15 = __this->___rotationY_11;
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((-L_15)), L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_14, L_17, NULL);
		goto IL_0136;
	}

IL_0094:
	{
		// else if (axes == RotationAxes.MouseX)
		int32_t L_18 = __this->___axes_4;
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00cc;
		}
	}
	{
		// transform.Rotate(0, Input.GetAxis("Mouse X") * sensitivityX, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_21;
		L_21 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_22 = __this->___sensitivityX_5;
		NullCheck(L_20);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_20, (0.0f), ((float)il2cpp_codegen_multiply(L_21, L_22)), (0.0f), NULL);
		goto IL_0136;
	}

IL_00cc:
	{
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_23 = __this->___rotationY_11;
		float L_24;
		L_24 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_25 = __this->___sensitivityY_6;
		__this->___rotationY_11 = ((float)il2cpp_codegen_add(L_23, ((float)il2cpp_codegen_multiply(L_24, L_25))));
		// rotationY = Mathf.Clamp(rotationY, minimumY, maximumY);
		float L_26 = __this->___rotationY_11;
		float L_27 = __this->___minimumY_9;
		float L_28 = __this->___maximumY_10;
		float L_29;
		L_29 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_26, L_27, L_28, NULL);
		__this->___rotationY_11 = L_29;
		// transform.localEulerAngles = new Vector3(-rotationY, transform.localEulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_31 = __this->___rotationY_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_32, NULL);
		float L_34 = L_33.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), ((-L_31)), L_34, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_30, L_35, NULL);
	}

IL_0136:
	{
		// }
		return;
	}
}
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m08FD16A47A96624540CD1B8EBA5FFAA1FD75E686 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_3);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_3, (bool)1, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// public RotationAxes axes = RotationAxes.MouseXAndY;
		__this->___axes_4 = 0;
		// public float sensitivityX = 15F;
		__this->___sensitivityX_5 = (15.0f);
		// public float sensitivityY = 15F;
		__this->___sensitivityY_6 = (15.0f);
		// public float minimumX = -360F;
		__this->___minimumX_7 = (-360.0f);
		// public float maximumX = 360F;
		__this->___maximumX_8 = (360.0f);
		// public float minimumY = -60F;
		__this->___minimumY_9 = (-60.0f);
		// public float maximumY = 60F;
		__this->___maximumY_10 = (60.0f);
		// float rotationY = 0F;
		__this->___rotationY_11 = (0.0f);
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
// System.Void FollowScroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowScroll_Start_m58B0170AF270C6CB3648DDE1A8470CC319CCB74A (FollowScroll_tDDDF95096F06D53F797DDD239424C6133E66D0C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_m926D886710762EDEC3925BB69A204C1BB3E8E93D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// followingScroll = GetComponent<Scrollbar>();
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0;
		L_0 = Component_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_m926D886710762EDEC3925BB69A204C1BB3E8E93D(__this, Component_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_m926D886710762EDEC3925BB69A204C1BB3E8E93D_RuntimeMethod_var);
		__this->___followingScroll_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followingScroll_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void FollowScroll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowScroll_Update_m93B5B0341DF0101711AC0D2BC3EB1596E7552C22 (FollowScroll_tDDDF95096F06D53F797DDD239424C6133E66D0C7* __this, const RuntimeMethod* method) 
{
	{
		// followingScroll.value = followedScroll.value;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___followingScroll_5;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_1 = __this->___followedScroll_4;
		NullCheck(L_1);
		float L_2;
		L_2 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_1, NULL);
		NullCheck(L_0);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void FollowScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowScroll__ctor_mF2DF2BAC724C9BC51CC67B19043DCB9661ACF913 (FollowScroll_tDDDF95096F06D53F797DDD239424C6133E66D0C7* __this, const RuntimeMethod* method) 
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
// System.Void HorizontalScroll::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScroll_Awake_mD84D43F33896241ACCCDE865113693E728BB9C64 (HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controls = new NewControls();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB*)il2cpp_codegen_object_new(NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE(L_0, NULL);
		__this->___controls_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controls_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HorizontalScroll::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScroll_OnEnable_m8EF1E35DA1D1411521632499D210B729D7AB6910 (HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9* __this, const RuntimeMethod* method) 
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Scrolling.Enable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003((&V_0), NULL);
		// }
		return;
	}
}
// System.Void HorizontalScroll::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScroll_OnDisable_mAB48BA2604E0E5C71AD4B013528783C443F61C75 (HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9* __this, const RuntimeMethod* method) 
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Scrolling.Disable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10((&V_0), NULL);
		// }
		return;
	}
}
// System.Void HorizontalScroll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScroll_Update_m8853FA9C9454156E25812E123A33141D131CE00A (HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// input = controls.Scrolling.HorScroll.ReadValue<float>();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B((&V_0), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___input_6 = L_3;
		// scrollbar.value += (0.05f)*scrollbar.size*input;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_4 = __this->___scrollbar_5;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_5, NULL);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_7 = __this->___scrollbar_5;
		NullCheck(L_7);
		float L_8;
		L_8 = Scrollbar_get_size_mD88FDA836274F40EC8A97237C72B7E3C4906DB5F(L_7, NULL);
		float L_9 = __this->___input_6;
		NullCheck(L_5);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_5, ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0500000007f), L_8)), L_9)))), NULL);
		// }
		return;
	}
}
// System.Void HorizontalScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScroll__ctor_m8556A4B7F9B41F9374F073EAAC69A432E7870F37 (HorizontalScroll_t6BEDEB3F219178BAC3BF023AA74561208234EAE9* __this, const RuntimeMethod* method) 
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
// System.Void PdfStart::FetchFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_FetchFile_m69F293D760E9E07A7E56A2744730AF6D7AC9DE30 (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// string[] pdfURLs = FileBrowser.Result;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = FileBrowser_get_Result_m68BED71300B0738904437796A2C20ADB8B057FF0_inline(NULL);
		V_0 = L_0;
		// if (pdfURLs == null || pdfURLs.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_0019:
	{
		// pdfURL = pdfURLs[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___pdfURL_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pdfURL_10), (void*)L_6);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void PdfStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_Start_m38AD2242CD03AC7A30EC3FD29280958F5479181C (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* V_0 = NULL;
	{
		// pdfComponent = (PDFViewer)pdfObject.GetComponent(typeof(PDFViewer));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pdfObject_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		__this->___pdfComponent_11 = ((PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795*)CastclassClass((RuntimeObject*)L_3, PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pdfComponent_11), (void*)((PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795*)CastclassClass((RuntimeObject*)L_3, PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795_il2cpp_TypeInfo_var)));
		// FileBrowser inputField = FindObjectOfType<FileBrowser>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_4;
		L_4 = Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E(Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E_RuntimeMethod_var);
		V_0 = L_4;
		// inputField.OnPathChanged(initialPath);
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var);
		String_t* L_6 = ((PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_StaticFields*)il2cpp_codegen_static_fields_for(PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var))->___initialPath_12;
		NullCheck(L_5);
		FileBrowser_OnPathChanged_mA276DEEBF8BF2572D763A15AA21036216B996661(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void PdfStart::ForwardURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_ForwardURL_mE3E944A45EFE4961EC1B9E5C41F35033BBC293BD (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(pdfURL);
		String_t* L_0 = __this->___pdfURL_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// stopped = false;
		__this->___stopped_4 = (bool)0;
		// pdfObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pdfObject_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// pdfComponent.FilePath = pdfURL;
		PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795* L_2 = __this->___pdfComponent_11;
		String_t* L_3 = __this->___pdfURL_10;
		NullCheck(L_2);
		PDFViewer_set_FilePath_mAED895AEF86499F24124FD84E8D8905AE912D724(L_2, L_3, NULL);
		// homeButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___homeButton_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// stopButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___stopButton_7;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PdfStart::OnStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_OnStop_mABD9458ED456C9C5AB5F6AE318079997A90C4B0F (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stopped = true;
		__this->___stopped_4 = (bool)1;
		// FileBrowser.Result = null;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		FileBrowser_set_Result_m6656F9251FE3557D72BF0D0F4BA83B475820F8AD_inline((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// pdfURL = "";
		__this->___pdfURL_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pdfURL_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// pdfComponent.CloseDocument();
		PDFViewer_t6526C8865BE69D8E9827B360BB97687190993795* L_0 = __this->___pdfComponent_11;
		NullCheck(L_0);
		PDFViewer_CloseDocument_mD2310B8C007511D4B5E2617170933B1A6A384973(L_0, NULL);
		// homeButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___homeButton_6;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// stopButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___stopButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// fileBrowser.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___fileBrowser_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// pdfObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pdfObject_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PdfStart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart_Update_mE6DD037A35039CDE54569DF8B212CC99CFFD766E (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(stopped)
		bool L_0 = __this->___stopped_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (pdfURL == "")
		String_t* L_2 = __this->___pdfURL_10;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_0038;
	}

IL_0023:
	{
		// esh.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___esh_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// ForwardURL();
		PdfStart_ForwardURL_mE3E944A45EFE4961EC1B9E5C41F35033BBC293BD(__this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void PdfStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart__ctor_mDF4114097FBC438DCECA549FFF6E4AD61D94EFBF (PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool stopped = true;
		__this->___stopped_4 = (bool)1;
		// private string pdfURL = "";
		__this->___pdfURL_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pdfURL_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PdfStart::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStart__cctor_mA0E44442946A6ACF8D591987C5A2E6C118FC7F5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     private static string initialPath =
		// #if UNITY_EDITOR
		//      "C:/";
		//     //using android as default OS
		// #else
		//     "/storage/emulated/0/";
		((PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_StaticFields*)il2cpp_codegen_static_fields_for(PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var))->___initialPath_12 = _stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C;
		Il2CppCodeGenWriteBarrier((void**)(&((PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_StaticFields*)il2cpp_codegen_static_fields_for(PdfStart_t4DE8C55A614F8E0896DF8EEE42669CD009E2A8C0_il2cpp_TypeInfo_var))->___initialPath_12), (void*)_stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C);
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m7E8376225AEB5B44C88D56C73B36BD3E3F09CC1F (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controls = new NewControls();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB*)il2cpp_codegen_object_new(NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE(L_0, NULL);
		__this->___controls_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controls_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_m83FD44DCA324CE3D05A71FD2E2991FCD743F003A (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->____mainCamera_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnEnable_mC174B01E97C5048AFEA84EAF74190FD66CCDA0ED (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Movement.Enable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311((&V_0), NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnDisable_m27A81E0BBA333A85AB67863E8ADB06B73F36739E (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Movement.Disable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99((&V_0), NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_getinput_m37BF98FABA1E0EB61FB1FF7450DC0D860FCAB072 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// input  = controls.Movement.VerticalAxis.ReadValue<float>();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C((&V_0), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___input_5 = L_3;
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m05F06EBAEB85F1B860ED042B83AD54F61DC53EFE (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getinput();
		PlayerMovement_getinput_m37BF98FABA1E0EB61FB1FF7450DC0D860FCAB072(__this, NULL);
		// this.transform.Translate(1.0f/50.0f * input * new Vector3(_mainCamera.transform.forward.x,0,_mainCamera.transform.forward.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___input_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->____mainCamera_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = L_4.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->____mainCamera_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_5, (0.0f), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply((0.0199999996f), L_1)), L_10, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_11, NULL);
		// Posmanager.playerTransform = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___playerTransform_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___playerTransform_4), (void*)L_12);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
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
// System.Void Posmanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Posmanager__ctor_m48176232D45565C06F55ADDEA9B9D6B8EEAA5A8A (Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93* __this, const RuntimeMethod* method) 
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
// System.Void RandomizeColor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizeColor_OnEnable_mE332C0080A978D1E16AEF8876345E269DDB78C7F (RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomizeColor_U3COnEnableU3Eb__1_0_m469BA82B71F388EF21A6FC2A2878B9E12F183270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_4), (void*)L_0);
		// btn.onClick.AddListener(()=>{
		//     GetComponent<Image>().color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btn_4;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)RandomizeColor_U3COnEnableU3Eb__1_0_m469BA82B71F388EF21A6FC2A2878B9E12F183270_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void RandomizeColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizeColor_Start_m8DEA541C7D68E11563A7314B6F4023F51B83BD8F (RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RandomizeColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizeColor_Update_mD2A259CA0E18E11F1709591AE5B24C5937F032D9 (RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RandomizeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizeColor__ctor_m3BA07E98C08A8D01C15BCAB4BD493DA89B0A7B91 (RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RandomizeColor::<OnEnable>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizeColor_U3COnEnableU3Eb__1_0_m469BA82B71F388EF21A6FC2A2878B9E12F183270 (RandomizeColor_t6FDD8F9EA9AD9FF789CD4462E828D8D6880802D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Image>().color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Random_ColorHSV_mC4AE87DC3711E0B9BC42F07625345F9443A3AF3B((0.0f), (1.0f), (1.0f), (1.0f), (0.5f), (1.0f), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
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
// System.Void RotateSet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_Awake_mCA7D0359B2288B16D9DB0AAA3E929B12E31608F1 (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controls = new NewControls();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB*)il2cpp_codegen_object_new(NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE(L_0, NULL);
		__this->___controls_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controls_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void RotateSet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_Start_m0CA6A461C14991B8B589BC00241A6EA212A7B99A (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	{
		// rotateAxis = new Vector3(0,1,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotateAxis_7 = L_0;
		// }
		return;
	}
}
// System.Void RotateSet::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_OnEnable_mAC59B97939BA82ACA2092B77CBAE44F220520BC1 (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Movement.Enable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311((&V_0), NULL);
		// }
		return;
	}
}
// System.Void RotateSet::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_OnDisable_m7DCCA2B044F6C75AD14E94769D2C274B7E419F8C (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Movement.Disable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99((&V_0), NULL);
		// }
		return;
	}
}
// System.Void RotateSet::getinput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_getinput_m7FEA77917AE05B3F52107246416D0E0F22B9F38E (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// input  = controls.Movement.HorizontalAxis.ReadValue<float>();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_1;
		L_1 = NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D((&V_0), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___input_5 = L_3;
		// }
		return;
	}
}
// System.Void RotateSet::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet_FixedUpdate_m7BE59E814EDF03320D12C0573BBAD9124F6EC699 (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getinput();
		RotateSet_getinput_m7FEA77917AE05B3F52107246416D0E0F22B9F38E(__this, NULL);
		// this.transform.RotateAround(player.transform.position,rotateAxis,-1.0f * input);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___rotateAxis_7;
		float L_5 = __this->___input_5;
		NullCheck(L_0);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_0, L_3, L_4, ((float)il2cpp_codegen_multiply((-1.0f), L_5)), NULL);
		// Posmanager.setTransform = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___setTransform_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___setTransform_5), (void*)L_6);
		// }
		return;
	}
}
// System.Void RotateSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSet__ctor_m2D275695ED641DA9F770453743EA32E7E7AB6950 (RotateSet_t530C9AF9C9A089CEB193E36F0AB57ABB710F21F8* __this, const RuntimeMethod* method) 
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
// System.Void SetupPos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetupPos_Start_m39DC68780C5A191D4D914C8DF2DF46326D7D2250 (SetupPos_t26786CCE98E85D210C695DEAF0E479874AC61296* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.transform.position = Posmanager.playerTransform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___playerTransform_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// player.transform.rotation = Posmanager.playerTransform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___playerTransform_4;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
		// classroom.transform.position = Posmanager.setTransform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___classroom_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___setTransform_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// classroom.transform.rotation = Posmanager.setTransform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___classroom_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ((Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_StaticFields*)il2cpp_codegen_static_fields_for(Posmanager_tD547CC8F2F8B453255F67831B8CE80732E6D8D93_il2cpp_TypeInfo_var))->___setTransform_5;
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void SetupPos::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetupPos_Update_m2D7133F9AAD434CDD6B6590C516199449EF39561 (SetupPos_t26786CCE98E85D210C695DEAF0E479874AC61296* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetupPos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetupPos__ctor_mC56252EFBD4B7A077A6A8CCC9E7730CD8933ED81 (SetupPos_t26786CCE98E85D210C695DEAF0E479874AC61296* __this, const RuntimeMethod* method) 
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
// System.Void MoveCursor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCursor_Update_mB84EE4C89E1E2412453F182F1BE5EE0D97535427 (MoveCursor_tEAC2BFC15E9332973D7233DF086DEBB1C20483B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Input.GetKey(left))
		int32_t L_0 = __this->___left_4;
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// fakeCursor.anchoredPosition += new Vector2(-1 * moveSpeed, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___fakeCursor_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_4, NULL);
		float L_6 = __this->___moveSpeed_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_multiply((-1.0f), L_6)), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_5, L_7, NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_4, L_8, NULL);
	}

IL_003f:
	{
		// if (Input.GetKey(right))
		int32_t L_9 = __this->___right_5;
		bool L_10;
		L_10 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		// fakeCursor.anchoredPosition += new Vector2(moveSpeed, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___fakeCursor_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = L_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_13, NULL);
		float L_15 = __this->___moveSpeed_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), L_15, (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_14, L_16, NULL);
		NullCheck(L_13);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_13, L_17, NULL);
	}

IL_0077:
	{
		// if (Input.GetKey(down))
		int32_t L_18 = __this->___down_7;
		bool L_19;
		L_19 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_18, NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b5;
		}
	}
	{
		// fakeCursor.anchoredPosition += new Vector2(0f, -1 * moveSpeed);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___fakeCursor_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = L_21;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_22, NULL);
		float L_24 = __this->___moveSpeed_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (0.0f), ((float)il2cpp_codegen_multiply((-1.0f), L_24)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_23, L_25, NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_22, L_26, NULL);
	}

IL_00b5:
	{
		// if (Input.GetKey(up))
		int32_t L_27 = __this->___up_6;
		bool L_28;
		L_28 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_27, NULL);
		V_3 = L_28;
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_00ed;
		}
	}
	{
		// fakeCursor.anchoredPosition += new Vector2(0f, moveSpeed);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___fakeCursor_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = L_30;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_31, NULL);
		float L_33 = __this->___moveSpeed_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (0.0f), L_33, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_32, L_34, NULL);
		NullCheck(L_31);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_31, L_35, NULL);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void MoveCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCursor__ctor_m5BDA4C611314A996B95DCD82C15E444D83AFCDF9 (MoveCursor_tEAC2BFC15E9332973D7233DF086DEBB1C20483B3* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private RectTransform fakeCursor = null;
		__this->___fakeCursor_9 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fakeCursor_9), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private float moveSpeed = 2f;
		__this->___moveSpeed_10 = (2.0f);
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
// UnityEngine.Vector2 NewInput::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NewInput_get_mouseScrollDelta_mFE7D68F0EB1063166B7B408C015BFA2FE02ADE9E (NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return new Vector2(0,Input.GetAxis("Vertical")); }
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.0f), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// get { return new Vector2(0,Input.GetAxis("Vertical")); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 NewInput::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NewInput_get_mousePosition_m41928471E30FC75982B7D5140808C33B6C717440 (NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73A70E269F7AD1286623ED86F35100E7C46575B3);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { Debug.Log($"{Screen.width/2.0f} and {Screen.height/2.0f}");
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_1 = ((float)(((float)L_0)/(2.0f)));
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_4 = ((float)(((float)L_3)/(2.0f)));
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral73A70E269F7AD1286623ED86F35100E7C46575B3, L_2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// return new Vector2(Screen.width/2.0f ,  Screen.height/2.0f);}
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)(((float)L_7)/(2.0f))), ((float)(((float)L_8)/(2.0f))), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0053;
	}

IL_0053:
	{
		// return new Vector2(Screen.width/2.0f ,  Screen.height/2.0f);}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		return L_10;
	}
}
// System.Void NewInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewInput__ctor_mF2DF756F8692AFAF91EC73FC4F9AE6B6B190B600 (NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988* __this, const RuntimeMethod* method) 
{
	{
		BaseInput__ctor_m7E497239A0A78CCAC04BE6EE9AA81D49D887787C(__this, NULL);
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
// System.Void OverrideInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideInput_Update_m9009506A5049574E3A869E1B4502F7B3EA70C534 (OverrideInput_t083E01407BA7A8FD2A806459BAF781A401AFFA99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(!changed)
		bool L_0 = __this->___changed_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// EventSystem.current.currentInputModule.inputOverride = newInput;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_2);
		BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* L_3;
		L_3 = EventSystem_get_currentInputModule_m30559FCECCCE1AAD97D801968B8BD1C483FBF7AC(L_2, NULL);
		NewInput_t5ED375B64182F3DAFF4393B7C95E49A01A1F8988* L_4 = __this->___newInput_5;
		NullCheck(L_3);
		BaseInputModule_set_inputOverride_m876BAC421A4BC40FB5873FC386E361C4CFA53987(L_3, L_4, NULL);
		// changed = true;
		__this->___changed_4 = (bool)1;
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void OverrideInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideInput__ctor_mB59727B84F6ED1A4BF06F507EE181021104A58E0 (OverrideInput_t083E01407BA7A8FD2A806459BAF781A401AFFA99* __this, const RuntimeMethod* method) 
{
	{
		// private bool changed = false;
		__this->___changed_4 = (bool)0;
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
// System.Void Scrolling::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolling_Awake_m9D9C56F0052D42EC5767CC43E1866D44EADC9784 (Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controls = new NewControls();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB*)il2cpp_codegen_object_new(NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE(L_0, NULL);
		__this->___controls_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controls_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Scrolling::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolling_OnEnable_mA91209A2C35B6A40359205866C215E9F663DE1F5 (Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC* __this, const RuntimeMethod* method) 
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Scrolling.Enable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Scrolling::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolling_OnDisable_mBEDFE08EE80DF3C28E7FA2E999F08627287D59E1 (Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC* __this, const RuntimeMethod* method) 
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// controls.Scrolling.Disable();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Scrolling::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolling_Update_m6CB19E6F3706232A28C86138245C93E9D53D0ED0 (Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// input = controls.Scrolling.Scroll.ReadValue<float>();
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___controls_4;
		NullCheck(L_0);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_1;
		L_1 = NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5((&V_0), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___input_6 = L_3;
		// scrollbar.value += (0.05f)*scrollbar.size*input;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_4 = __this->___scrollbar_5;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_5, NULL);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_7 = __this->___scrollbar_5;
		NullCheck(L_7);
		float L_8;
		L_8 = Scrollbar_get_size_mD88FDA836274F40EC8A97237C72B7E3C4906DB5F(L_7, NULL);
		float L_9 = __this->___input_6;
		NullCheck(L_5);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_5, ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0500000007f), L_8)), L_9)))), NULL);
		// }
		return;
	}
}
// System.Void Scrolling::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolling__ctor_m6DA7696D3CB289BAA8D890684397E8B4700A7F8F (Scrolling_t1D885CF65CA42251016C5B802ED98524F3A317AC* __this, const RuntimeMethod* method) 
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
// System.Void VideoPlay::FetchFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_FetchFile_mBC97D79C7969EEF0B1286F41994AB83D3D4E5DE1 (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// string[] videoURLs = FileBrowser.Result;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = FileBrowser_get_Result_m68BED71300B0738904437796A2C20ADB8B057FF0_inline(NULL);
		V_0 = L_0;
		// if (videoURLs==null || videoURLs.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_002e;
	}

IL_0019:
	{
		// videoURL = videoURLs[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___videoURL_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoURL_13), (void*)L_6);
		// Debug.Log(videoURL);
		String_t* L_7 = __this->___videoURL_13;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void VideoPlay::SetVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_SetVideo_mE6BB70B0E83018CB3B453616E4D7F28D10921310 (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject screen = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		V_0 = L_0;
		// videoPlayer = screen.AddComponent<VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2;
		L_2 = GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D(L_1, GameObject_AddComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m5E711BC1432102F3C65C301B965F9B5FDF4A8F1D_RuntimeMethod_var);
		__this->___videoPlayer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoPlayer_14), (void*)L_2);
		// videoPlayer.playOnAwake = false;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_14;
		NullCheck(L_3);
		VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0(L_3, (bool)0, NULL);
		// videoPlayer.renderMode = VideoRenderMode.MaterialOverride;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = __this->___videoPlayer_14;
		NullCheck(L_4);
		VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0(L_4, 3, NULL);
		// videoPlayer.url = videoURL;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = __this->___videoPlayer_14;
		String_t* L_6 = __this->___videoURL_13;
		NullCheck(L_5);
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_5, L_6, NULL);
		// videoPlayer.isLooping = true;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = __this->___videoPlayer_14;
		NullCheck(L_7);
		VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E(L_7, (bool)1, NULL);
		// videoPlayer.Prepare();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = __this->___videoPlayer_14;
		NullCheck(L_8);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_8, NULL);
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_9 = __this->___videoPlayer_14;
		NullCheck(L_9);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_9, NULL);
		// stopped = false;
		__this->___stopped_5 = (bool)0;
		// stopButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___stopButton_8;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// homeButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___homeButton_7;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// videoEffectCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___videoEffectCanvas_10;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void VideoPlay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_Start_mCF741783CE999F5EECAFDC1F1695A922514BE59C (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* V_0 = NULL;
	{
		// FileBrowser inputField = FindObjectOfType<FileBrowser>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_0;
		L_0 = Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E(Object_FindObjectOfType_TisFileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_m7B47A498EC82213B43AB87BDB1D628016D4A162E_RuntimeMethod_var);
		V_0 = L_0;
		// inputField.OnPathChanged(initialPath);
		FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var);
		String_t* L_2 = ((VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var))->___initialPath_15;
		NullCheck(L_1);
		FileBrowser_OnPathChanged_mA276DEEBF8BF2572D763A15AA21036216B996661(L_1, L_2, NULL);
		// slider.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_4;
		NullCheck(L_3);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_3, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void VideoPlay::VideoPlayPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_VideoPlayPause_mC3B02A89664B1FF9BA02832D25098931315EE820 (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC140CD47EE56A87705BA5000102859D988D112C0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("Pausing/Playing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC140CD47EE56A87705BA5000102859D988D112C0, NULL);
		// if (videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// videoPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_14;
		NullCheck(L_3);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_3, NULL);
		// pauseIcon.GetComponent<RawImage>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___pauseIcon_6;
		NullCheck(L_4);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5;
		L_5 = GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E(L_4, GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var);
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		goto IL_005d;
	}

IL_003d:
	{
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___videoPlayer_14;
		NullCheck(L_6);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_6, NULL);
		// pauseIcon.GetComponent<RawImage>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___pauseIcon_6;
		NullCheck(L_7);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_8;
		L_8 = GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E(L_7, GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void VideoPlay::OnStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_OnStop_m97049D142A6391AB83BDD9D04A039ABA02A4736E (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stopped = true;
		__this->___stopped_5 = (bool)1;
		// FileBrowser.Result = null;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		FileBrowser_set_Result_m6656F9251FE3557D72BF0D0F4BA83B475820F8AD_inline((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// videoURL = "";
		__this->___videoURL_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoURL_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// videoPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_14;
		NullCheck(L_0);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_0, NULL);
		// homeButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___homeButton_7;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// stopButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___stopButton_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// videoEffectCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___videoEffectCanvas_10;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// pauseIcon.GetComponent<RawImage>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pauseIcon_6;
		NullCheck(L_6);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_7;
		L_7 = GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E(L_6, GameObject_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m51636C7F3481A344AA96C18C0C1471F72CEE7A3E_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// fileBrowser.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___fileBrowser_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// slider.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___slider_4;
		NullCheck(L_9);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_9, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void VideoPlay::MoveBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_MoveBackward_m672D40FB02DD8059A714CE7825EEA27F14F246B3 (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0583E2D07ED84D8125314D7FD3B7BCCCE17D90);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	{
		// Debug.Log("Going back");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralFC0583E2D07ED84D8125314D7FD3B7BCCCE17D90, NULL);
		// double currentTime = videoPlayer.time;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_14;
		NullCheck(L_0);
		double L_1;
		L_1 = VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48(L_0, NULL);
		V_0 = L_1;
		// currentTime -= shiftTime;
		double L_2 = V_0;
		double L_3 = __this->___shiftTime_12;
		V_0 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		// if (currentTime < 0)
		double L_4 = V_0;
		V_1 = (bool)((((double)L_4) < ((double)(0.0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// currentTime = 0;
		V_0 = (0.0);
	}

IL_003b:
	{
		// videoPlayer.time = currentTime;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___videoPlayer_14;
		double L_7 = V_0;
		NullCheck(L_6);
		VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void VideoPlay::MoveForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_MoveForward_mD4A9D23C6C9B8AD4B20AA6D5D7CD443946AF504F (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE1BA74A8FA6A7FF32EDD45F71F54773982B7C14);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		// Debug.Log("Going front");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBE1BA74A8FA6A7FF32EDD45F71F54773982B7C14, NULL);
		// double currentTime = videoPlayer.time;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_14;
		NullCheck(L_0);
		double L_1;
		L_1 = VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48(L_0, NULL);
		V_0 = L_1;
		// double maxTime = videoPlayer.length;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_14;
		NullCheck(L_2);
		double L_3;
		L_3 = VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E(L_2, NULL);
		V_1 = L_3;
		// currentTime += shiftTime;
		double L_4 = V_0;
		double L_5 = __this->___shiftTime_12;
		V_0 = ((double)il2cpp_codegen_add(L_4, L_5));
		// if (currentTime > maxTime)
		double L_6 = V_0;
		double L_7 = V_1;
		V_2 = (bool)((((double)L_6) > ((double)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// currentTime = maxTime;
		double L_9 = V_1;
		V_0 = L_9;
	}

IL_0037:
	{
		// videoPlayer.time = currentTime;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_10 = __this->___videoPlayer_14;
		double L_11 = V_0;
		NullCheck(L_10);
		VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void VideoPlay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay_Update_mBE4E1349CBBBFFA9D2F9245B1AC7D280CDF7F82E (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(stopped)
		bool L_0 = __this->___stopped_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (videoURL == "")
		String_t* L_2 = __this->___videoURL_13;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_0068;
	}

IL_0023:
	{
		// esh.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___esh_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// SetVideo();
		VideoPlay_SetVideo_mE6BB70B0E83018CB3B453616E4D7F28D10921310(__this, NULL);
	}

IL_0038:
	{
		// slider.maxValue = (float)videoPlayer.length;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = __this->___videoPlayer_14;
		NullCheck(L_7);
		double L_8;
		L_8 = VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E(L_7, NULL);
		NullCheck(L_6);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_6, ((float)L_8), NULL);
		// slider.value = (float)videoPlayer.time;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___slider_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_10 = __this->___videoPlayer_14;
		NullCheck(L_10);
		double L_11;
		L_11 = VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, ((float)L_11));
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void VideoPlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay__ctor_m587BD22AD9EDD7C8F3D0D33D74DFFA5A85D7C65F (VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool stopped = true;
		__this->___stopped_5 = (bool)1;
		// public double shiftTime = 10d;
		__this->___shiftTime_12 = (10.0);
		// private string videoURL = "";
		__this->___videoURL_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoURL_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VideoPlay::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlay__cctor_m2CE255456122791858DB94BD74E2980ED5BE614C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     private static string initialPath =
		// #if UNITY_EDITOR
		//      "C:/";
		//     //using android as default OS
		// #else
		//     "/storage/emulated/0/";
		((VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var))->___initialPath_15 = _stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlay_tB4A1BA6630D3032808EF6652124EB16508444F54_il2cpp_TypeInfo_var))->___initialPath_15), (void*)_stringLiteral7DA579544B4F370A8625B0CE9E1443FA5DFFCE0C);
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68(L_1, NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_001e:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_002f:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7(NULL);
		goto IL_004d;
	}

IL_0038:
	{
		// if (_isScreenTouched)
		bool L_6;
		L_6 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9(NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
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
		goto IL_0049;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_00ab;
	}

IL_0078:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_11;
		L_11 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_11);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_12;
		L_12 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_11, NULL);
		NullCheck(L_12);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_12, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_00ab:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
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
// System.Void Scrolldfsdf::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolldfsdf_Start_m88A834B69C40424AEB1AED3CA2F3F23F8BFEF498 (Scrolldfsdf_t2480941D7E2F42F81942FDBB876AA5A5D70804A0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Scrolldfsdf::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolldfsdf_Update_m16FF5D29B138E39A207283681CE7B715EAF1E707 (Scrolldfsdf_t2480941D7E2F42F81942FDBB876AA5A5D70804A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__2_0_mA1665F49681A2523F75AE440717EB70B0BCD168F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* G_B2_0 = NULL;
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* G_B2_1 = NULL;
	UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* G_B1_0 = NULL;
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* G_B1_1 = NULL;
	{
		// sccc.onValueChanged.AddListener((val)=>{ Debug.Log("hey");});
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___sccc_4;
		NullCheck(L_0);
		ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* L_1;
		L_1 = Scrollbar_get_onValueChanged_m14356CECC1A2BA96576EB73279AF2ECF28B26D6A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = ((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var);
		U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* L_4 = ((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__2_0_mA1665F49681A2523F75AE440717EB70B0BCD168F_RuntimeMethod_var), NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_6 = L_5;
		((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(G_B2_1, G_B2_0, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Scrolldfsdf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrolldfsdf__ctor_mEF731110DB81ACD835D0DB93CF8F77673B266C23 (Scrolldfsdf_t2480941D7E2F42F81942FDBB876AA5A5D70804A0* __this, const RuntimeMethod* method) 
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
// System.Void Scrolldfsdf/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD2BBCFD41383E8110C718C2A5DDE9B265C6473A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* L_0 = (U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1*)il2cpp_codegen_object_new(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE833960C2445BE1372E1BD527E99A3F38C7CE2DF(L_0, NULL);
		((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Scrolldfsdf/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE833960C2445BE1372E1BD527E99A3F38C7CE2DF (U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Scrolldfsdf/<>c::<Update>b__2_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__2_0_mA1665F49681A2523F75AE440717EB70B0BCD168F (U3CU3Ec_t2F9DEF42C6D8587F11E5A28F6171439AE5DAC5C1* __this, float ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F66B73B524456DA7261B4E9C6A8E86C378930D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sccc.onValueChanged.AddListener((val)=>{ Debug.Log("hey");});
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD4F66B73B524456DA7261B4E9C6A8E86C378930D, NULL);
		// sccc.onValueChanged.AddListener((val)=>{ Debug.Log("hey");});
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
// UnityEngine.GameObject Unity.RenderStreaming.Samples.BackButton::get_backButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BackButton_get_backButton_m868B70F747CF29693E130E758948E78832107E36 (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BackButton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_BackButton_4;
		return L_0;
	}
}
// System.Void Unity.RenderStreaming.Samples.BackButton::set_backButton(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_set_backButton_mFB0ABCD12C4F738B9CE01541E8CF6941B1622140 (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BackButton = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_BackButton_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BackButton_4), (void*)L_0);
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BackButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_Start_mDF7006DB74ED04FF863B3647F51D177A36A3E6EF (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Application.CanStreamedLevelBeLoaded("Menu"))
		bool L_0;
		L_0 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_BackButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_BackButton_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BackButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_Update_m723D9742BDDB492EDE60958C824C8341D7D33198 (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Keyboard.current != null && Keyboard.current[Key.Escape].wasPressedThisFrame)
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_0;
		L_0 = Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline(NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_1;
		L_1 = Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline(NULL);
		NullCheck(L_1);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_2;
		L_2 = Keyboard_get_Item_m8043FEF215F8E96635D5D04B0D5D3D7153B64782(L_1, ((int32_t)60), NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// BackButtonPressed();
		BackButton_BackButtonPressed_m87910C649A73F5B428AF6FF7BA8870D71F628BCB(__this, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BackButton::BackButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_BackButtonPressed_m87910C649A73F5B428AF6FF7BA8870D71F628BCB (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Application.CanStreamedLevelBeLoaded("Menu"))
		bool L_0;
		L_0 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene("Menu", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, 0, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BackButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton__ctor_mC30098BB53EEA441813895DFFECDCE8499E277E5 (BackButton_tC4CFCB79BD76F21AAC22F2C23E6EB5F695A8B0EC* __this, const RuntimeMethod* method) 
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
// Unity.RenderStreaming.Samples.SampleManager Unity.RenderStreaming.Samples.SampleManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* SampleManager_get_Instance_m338B8F9ADAB37868548A0CAEEC1EC0ACA2F6779F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* V_1 = NULL;
	{
		// if (s_instance == null)
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_0 = ((SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_StaticFields*)il2cpp_codegen_static_fields_for(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var))->___s_instance_0;
		V_0 = (bool)((((RuntimeObject*)(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// s_instance = new SampleManager();
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_2 = (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B*)il2cpp_codegen_object_new(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SampleManager__ctor_mF055A3145A836E5E7A9702CCBFCA3A3603C1C43F(L_2, NULL);
		((SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_StaticFields*)il2cpp_codegen_static_fields_for(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var))->___s_instance_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_StaticFields*)il2cpp_codegen_static_fields_for(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var))->___s_instance_0), (void*)L_2);
	}

IL_0017:
	{
		// return s_instance;
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_3 = ((SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_StaticFields*)il2cpp_codegen_static_fields_for(SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B_il2cpp_TypeInfo_var))->___s_instance_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_4 = V_1;
		return L_4;
	}
}
// Unity.RenderStreaming.Samples.RenderStreamingSettings Unity.RenderStreaming.Samples.SampleManager::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* SampleManager_get_Settings_mD95A6DBA7E7D2D6D083E831DA97E3369E9B6B30B (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) 
{
	RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* V_0 = NULL;
	{
		// return m_settings;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___m_settings_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.SampleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleManager_Initialize_m15BCFE4303AB1689D77094FAE412EC77B7D3DF31 (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(m_settings == null)
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___m_settings_1;
		V_0 = (bool)((((RuntimeObject*)(RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_settings = new RenderStreamingSettings();
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_2 = (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4*)il2cpp_codegen_object_new(RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RenderStreamingSettings__ctor_m9AAA972E14C620FDA5AB823EEF80784FFC78A8EF(L_2, NULL);
		__this->___m_settings_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_settings_1), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SampleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleManager__ctor_mF055A3145A836E5E7A9702CCBFCA3A3603C1C43F (SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* __this, const RuntimeMethod* method) 
{
	{
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
// Unity.RenderStreaming.Samples.SignalingType Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStreamingSettings_get_SignalingType_m42F41993F756316DC222ED4D3D6B5D055C8AEA83 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return signalingType; }
		int32_t L_0 = __this->___signalingType_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return signalingType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingType(Unity.RenderStreaming.Samples.SignalingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingType_m154DFF537431A3CC937EFAFF8EEC5FC20972F3BF (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { signalingType = value; }
		int32_t L_0 = ___value0;
		__this->___signalingType_2 = L_0;
		// set { signalingType = value; }
		return;
	}
}
// System.String Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderStreamingSettings_get_SignalingAddress_mD6F503F56D7DA977692D3F19CDC9F0458575F5F0 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return signalingAddress; }
		String_t* L_0 = __this->___signalingAddress_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return signalingAddress; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingAddress_m67C41E2A23C5BE0F71063E09AE22EC02D66D63EB (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { signalingAddress = value; }
		String_t* L_0 = ___value0;
		__this->___signalingAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalingAddress_3), (void*)L_0);
		// set { signalingAddress = value; }
		return;
	}
}
// System.Boolean Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingSecured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStreamingSettings_get_SignalingSecured_m5FD6DB7C4A0468D856F9CAD28EA5A64DDAD08273 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return signalingSecured; }
		bool L_0 = __this->___signalingSecured_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return signalingSecured; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingSecured(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingSecured_mC663A12B74630AF2C37CED5C83FE51464414B373 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { signalingSecured = value; }
		bool L_0 = ___value0;
		__this->___signalingSecured_5 = L_0;
		// set { signalingSecured = value; }
		return;
	}
}
// System.Single Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SignalingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderStreamingSettings_get_SignalingInterval_m60B9133AD811FF8DA034A96FE12311FD635DCF93 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return signalingInterval; }
		float L_0 = __this->___signalingInterval_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return signalingInterval; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SignalingInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SignalingInterval_mB0788477349607D1F4878C07324436BA0E6C17EA (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { signalingInterval = value; }
		float L_0 = ___value0;
		__this->___signalingInterval_4 = L_0;
		// set { signalingInterval = value; }
		return;
	}
}
// Unity.RenderStreaming.Signaling.ISignaling Unity.RenderStreaming.Samples.RenderStreamingSettings::get_Signaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RenderStreamingSettings_get_Signaling_m679998DA5A838CE1E3FEBB771D52F683C333E939 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B13_0 = NULL;
	{
		// switch (signalingType)
		int32_t L_0 = __this->___signalingType_2;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0097;
			}
			case 2:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_0021:
	{
		// var schema = signalingSecured ? "https" : "http";
		bool L_3 = __this->___signalingSecured_5;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		G_B5_0 = _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
		goto IL_0036;
	}

IL_0031:
	{
		G_B5_0 = _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
	}

IL_0036:
	{
		V_2 = G_B5_0;
		// return new FurioosSignaling(
		//     $"{schema}://{signalingAddress}", signalingInterval, SynchronizationContext.Current);
		String_t* L_4 = V_2;
		String_t* L_5 = __this->___signalingAddress_3;
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_4, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_5, NULL);
		float L_7 = __this->___signalingInterval_4;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8;
		L_8 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7* L_9 = (FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7*)il2cpp_codegen_object_new(FurioosSignaling_t0524709CEF7761BED0CF1D3B91C5EF115BF47EE7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FurioosSignaling__ctor_m56864E44CB559E45B1408B8BFB677C7C6E52142A(L_9, L_6, L_7, L_8, NULL);
		V_3 = L_9;
		goto IL_00d9;
	}

IL_005b:
	{
		// var schema = signalingSecured ? "wss" : "ws";
		bool L_10 = __this->___signalingSecured_5;
		if (L_10)
		{
			goto IL_006b;
		}
	}
	{
		G_B9_0 = _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
		goto IL_0070;
	}

IL_006b:
	{
		G_B9_0 = _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
	}

IL_0070:
	{
		V_4 = G_B9_0;
		// return new WebSocketSignaling(
		//     $"{schema}://{signalingAddress}", signalingInterval, SynchronizationContext.Current);
		String_t* L_11 = V_4;
		String_t* L_12 = __this->___signalingAddress_3;
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_11, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_12, NULL);
		float L_14 = __this->___signalingInterval_4;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_15;
		L_15 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC* L_16 = (WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC*)il2cpp_codegen_object_new(WebSocketSignaling_t2DA2B1B2E68FDAC361F30FF02FA421459FC408AC_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WebSocketSignaling__ctor_mB1C0763DC076E392B87C39A837DA792B0907D12F(L_16, L_13, L_14, L_15, NULL);
		V_3 = L_16;
		goto IL_00d9;
	}

IL_0097:
	{
		// var schema = signalingSecured ? "https" : "http";
		bool L_17 = __this->___signalingSecured_5;
		if (L_17)
		{
			goto IL_00a7;
		}
	}
	{
		G_B13_0 = _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
		goto IL_00ac;
	}

IL_00a7:
	{
		G_B13_0 = _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
	}

IL_00ac:
	{
		V_5 = G_B13_0;
		// return new HttpSignaling(
		//     $"{schema}://{signalingAddress}", signalingInterval, SynchronizationContext.Current);
		String_t* L_18 = V_5;
		String_t* L_19 = __this->___signalingAddress_3;
		String_t* L_20;
		L_20 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_18, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_19, NULL);
		float L_21 = __this->___signalingInterval_4;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_22;
		L_22 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE* L_23 = (HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE*)il2cpp_codegen_object_new(HttpSignaling_t31F6AA738951959A9E636E6E6B87422677699BAE_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		HttpSignaling__ctor_m0AE2E4D03B73DC1B560878FAEFE344C0B2787B1B(L_23, L_20, L_21, L_22, NULL);
		V_3 = L_23;
		goto IL_00d9;
	}

IL_00d3:
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_24 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderStreamingSettings_get_Signaling_m679998DA5A838CE1E3FEBB771D52F683C333E939_RuntimeMethod_var)));
	}

IL_00d9:
	{
		// }
		RuntimeObject* L_25 = V_3;
		return L_25;
	}
}
// UnityEngine.Vector2Int Unity.RenderStreaming.Samples.RenderStreamingSettings::get_StreamSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return streamSize; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___streamSize_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return streamSize; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_StreamSize(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// set { streamSize = value; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___streamSize_6 = L_0;
		// set { streamSize = value; }
		return;
	}
}
// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::get_ReceiverVideoCodec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* RenderStreamingSettings_get_ReceiverVideoCodec_mC9C07E79BAC3175E98D07C0310FA5CFAD94BBB52 (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* V_0 = NULL;
	{
		// get { return receiverVideoCodec; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = __this->___receiverVideoCodec_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return receiverVideoCodec; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_ReceiverVideoCodec(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_ReceiverVideoCodec_m9D02483B95ADD8D45BB95A16DF6DCF4C9E0D235C (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___value0, const RuntimeMethod* method) 
{
	{
		// set { receiverVideoCodec = value; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___value0;
		__this->___receiverVideoCodec_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiverVideoCodec_7), (void*)L_0);
		// set { receiverVideoCodec = value; }
		return;
	}
}
// Unity.RenderStreaming.VideoCodecInfo Unity.RenderStreaming.Samples.RenderStreamingSettings::get_SenderVideoCodec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* RenderStreamingSettings_get_SenderVideoCodec_m7C37A9F08E6A74E696539D264AB1AC8474558D7E (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* V_0 = NULL;
	{
		// get { return senderVideoCodec; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = __this->___senderVideoCodec_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return senderVideoCodec; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::set_SenderVideoCodec(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings_set_SenderVideoCodec_mFF695D8037C924F78ED553C2054EB1DECD40093F (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___value0, const RuntimeMethod* method) 
{
	{
		// set { senderVideoCodec = value; }
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___value0;
		__this->___senderVideoCodec_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___senderVideoCodec_8), (void*)L_0);
		// set { senderVideoCodec = value; }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.RenderStreamingSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStreamingSettings__ctor_m9AAA972E14C620FDA5AB823EEF80784FFC78A8EF (RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SignalingType signalingType = SignalingType.WebSocket;
		__this->___signalingType_2 = 0;
		// private string signalingAddress = "localhost";
		__this->___signalingAddress_3 = _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalingAddress_3), (void*)_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		// private float signalingInterval = 5;
		__this->___signalingInterval_4 = (5.0f);
		// private bool signalingSecured = false;
		__this->___signalingSecured_5 = (bool)0;
		// private Vector2Int streamSize = new Vector2Int(DefaultStreamWidth, DefaultStreamHeight);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_0), ((int32_t)1280), ((int32_t)720), /*hidden argument*/NULL);
		__this->___streamSize_6 = L_0;
		// private VideoCodecInfo receiverVideoCodec = null;
		__this->___receiverVideoCodec_7 = (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiverVideoCodec_7), (void*)(VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL);
		// private VideoCodecInfo senderVideoCodec = null;
		__this->___senderVideoCodec_8 = (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___senderVideoCodec_8), (void*)(VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL);
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
// System.String Unity.RenderStreaming.Samples.SceneSelectUI::CodecTitle(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneSelectUI_CodecTitle_mE77B5ADB4AC5954EBB3679A483E9ECF62FB041E9 (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&H264Profile_t91377C2A07B2FECC3D567344D6BB9263F4FD85B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC88B7268310CF55E1332901267EC9623937285);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* V_0 = NULL;
	VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* V_1 = NULL;
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* V_2 = NULL;
	VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// switch (codec)
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___codec0;
		V_3 = L_0;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_1 = V_3;
		V_2 = L_1;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_2 = V_2;
		V_0 = ((H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2*)IsInstClass((RuntimeObject*)L_2, H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2_il2cpp_TypeInfo_var));
		H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* L_3 = V_0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_4 = V_2;
		V_1 = ((VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420*)IsInstClass((RuntimeObject*)L_4, VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420_il2cpp_TypeInfo_var));
		VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* L_5 = V_1;
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_0095;
	}

IL_001b:
	{
		goto IL_001d;
	}

IL_001d:
	{
		// return $"{h264Codec.mimeType} {h264Codec.profile} {h264Codec.level.ToString().Insert(1, ".")} {h264Codec.codecImplementation}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VideoCodecInfo_get_mimeType_mAC798D274E0590600307359B9EDE3E9DFAC25F9B(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = H264CodecInfo_get_profile_mDEB15AB884FB86DEB697512731FFE6C7F916FECF(L_11, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(H264Profile_t91377C2A07B2FECC3D567344D6BB9263F4FD85B4_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = H264CodecInfo_get_level_m3B734D9E92CB0EB52F391A212B219ED0ABB92BFD(L_16, NULL);
		V_4 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_18, 1, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_15;
		H264CodecInfo_tD1536203847FE515E876B1092399F322552F3AE2* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VideoCodecInfo_get_codecImplementation_m08A3149302BA56D0FC14B71BF63A2E7281352444(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24, L_20, NULL);
		V_5 = L_23;
		goto IL_00af;
	}

IL_006e:
	{
		goto IL_0070;
	}

IL_0070:
	{
		// return $"{V9Codec.mimeType} {V9Codec.profile} {V9Codec.codecImplementation}";
		VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VideoCodecInfo_get_mimeType_mAC798D274E0590600307359B9EDE3E9DFAC25F9B(L_24, NULL);
		VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* L_26 = V_1;
		NullCheck(L_26);
		Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9 L_27;
		L_27 = VP9CodecInfo_get_profile_m2CCA606F692855DF778B5D14D1D34BA79AAF4AD2(L_26, NULL);
		Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9 L_28 = L_27;
		RuntimeObject* L_29 = Box(Nullable_1_tF598CD91EF5C182A7613436BA2DFB8BB463036B9_il2cpp_TypeInfo_var, &L_28);
		VP9CodecInfo_t43A7FE85B02842B4D616DB16E10C7CD271990420* L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VideoCodecInfo_get_codecImplementation_m08A3149302BA56D0FC14B71BF63A2E7281352444(L_30, NULL);
		String_t* L_32;
		L_32 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralAFC88B7268310CF55E1332901267EC9623937285, L_25, L_29, L_31, NULL);
		V_5 = L_32;
		goto IL_00af;
	}

IL_0095:
	{
		// return $"{codec.mimeType} {codec.codecImplementation}";
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_33 = ___codec0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VideoCodecInfo_get_mimeType_mAC798D274E0590600307359B9EDE3E9DFAC25F9B(L_33, NULL);
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_35 = ___codec0;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VideoCodecInfo_get_codecImplementation_m08A3149302BA56D0FC14B71BF63A2E7281352444(L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_36, NULL);
		V_5 = L_37;
		goto IL_00af;
	}

IL_00af:
	{
		// }
		String_t* L_38 = V_5;
		return L_38;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_Start_mAB272E7EA15A10C4499B39EB4416ED340588579B (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m46B169F60ECBD25AAC000C2EB1E1863625D357F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mFDB33CEAEB4E938DB1F9CA6F08942FC00A1024DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeReceiverVideoCodecSelect_mC26E8022105708AC3C5D9866B115D1D3DA4324D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeSenderVideoCodecSelect_mF301D7E0497B69ED1848D73AB8555D65D2E1F70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeSignalingAddress_mCBCE2F7723D946059036D7E565BFF613E6532E66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeSignalingInterval_m48547C5EFA3DE0B863F8D3BD755FA2F2DB74E636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeSignalingSecured_m6FE5CF52F3EC7EA20BC732E7B1E4F5B12B4E57C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeSignalingType_m1D3D0BD8B41CBFA509BA05A752028679E1941D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeStreamSizeSelect_m6491AC9899C2B306E9A46569BFBBCED26A282334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeTextureHeightInput_mC8A59E4F6E73E25A0C250CEDC9C77A9FA060F1C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnChangeTextureWidthInput_m9854E155E2FB1AC64EC457714A750E91C0EB2379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedAR_m4E50DF084B9729A27DFEAE8EC6554776A32424A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedBidirectional_m25FB7D21920689209487AE307A83CBE74106BC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedBroadcast_m463F9BDEF331DF22EBA7E1CE9F42E2F1E6673D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedGyro_m28F9A02BC24AC1BA6A896807403DA10246AE243B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedMultiplay_m0A03A78722918BBCB709F32C9E7D915279D52919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedReceiver_m410229C6048C5B563838BE9F56E3BDCB415F757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedRenderPipeline_m2F1026D2C29D769E4F794E47CFCF78C7F69C6198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_OnPressedWebBrowserInput_m5E47B1EFA297CEFA472DAEFA1C2B3CA686C5CCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_U3CStartU3Eb__20_3_m55FD5D938D91EDB5431676AB1E4200024CDB4CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneSelectUI_U3CStartU3Eb__20_4_m65CD6037B8C494D2056A6BCB1428BD19B4F662F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__20_0_mE1F4F2C09752BEF44E9B650F66C09607E88583E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__20_1_m00041DF52945FFE4B230B53FDFCFCA12DEDBEDAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__20_2_m4FBF688872E0FD7206175A1A5F370B3F3C60E1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C41ADB1FE2095C1FA0B14A275696D257EEFA3E1);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* V_0 = NULL;
	bool V_1 = false;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* V_2 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* V_3 = NULL;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* G_B2_0 = NULL;
	List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* G_B2_1 = NULL;
	Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* G_B1_0 = NULL;
	List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* G_B1_1 = NULL;
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// SampleManager.Instance.Initialize();
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_0;
		L_0 = SampleManager_get_Instance_m338B8F9ADAB37868548A0CAEEC1EC0ACA2F6779F(NULL);
		NullCheck(L_0);
		SampleManager_Initialize_m15BCFE4303AB1689D77094FAE412EC77B7D3DF31(L_0, NULL);
		// settings  = SampleManager.Instance.Settings;
		SampleManager_tF1A4A60094AC028E33EA623F2A4792C2AA4C7C2B* L_1;
		L_1 = SampleManager_get_Instance_m338B8F9ADAB37868548A0CAEEC1EC0ACA2F6779F(NULL);
		NullCheck(L_1);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_2;
		L_2 = SampleManager_get_Settings_mD95A6DBA7E7D2D6D083E831DA97E3369E9B6B30B(L_1, NULL);
		__this->___settings_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_22), (void*)L_2);
		// dropdownSignalingType.value = (int)settings.SignalingType;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownSignalingType_4;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_4 = __this->___settings_22;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RenderStreamingSettings_get_SignalingType_m42F41993F756316DC222ED4D3D6B5D055C8AEA83(L_4, NULL);
		NullCheck(L_3);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_3, L_5, NULL);
		// inputFieldSignalingAddress.text = settings.SignalingAddress;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___inputFieldSignalingAddress_5;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_7 = __this->___settings_22;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = RenderStreamingSettings_get_SignalingAddress_mD6F503F56D7DA977692D3F19CDC9F0458575F5F0(L_7, NULL);
		NullCheck(L_6);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_6, L_8, NULL);
		// toggleSignalingSecured.isOn = settings.SignalingSecured;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_9 = __this->___toggleSignalingSecured_6;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_10 = __this->___settings_22;
		NullCheck(L_10);
		bool L_11;
		L_11 = RenderStreamingSettings_get_SignalingSecured_m5FD6DB7C4A0468D856F9CAD28EA5A64DDAD08273(L_10, NULL);
		NullCheck(L_9);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_9, L_11, NULL);
		// inputFieldSignalingInterval.text =
		//     settings.SignalingInterval.ToString(CultureInfo.InvariantCulture);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___inputFieldSignalingInterval_7;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_13 = __this->___settings_22;
		NullCheck(L_13);
		float L_14;
		L_14 = RenderStreamingSettings_get_SignalingInterval_m60B9133AD811FF8DA034A96FE12311FD635DCF93(L_13, NULL);
		V_4 = L_14;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_16;
		L_16 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_4), L_15, NULL);
		NullCheck(L_12);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_12, L_16, NULL);
		// dropdownSignalingType.onValueChanged.AddListener(OnChangeSignalingType);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_17 = __this->___dropdownSignalingType_4;
		NullCheck(L_17);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_18;
		L_18 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_17, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_19 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_19, __this, (intptr_t)((void*)SceneSelectUI_OnChangeSignalingType_m1D3D0BD8B41CBFA509BA05A752028679E1941D28_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_18, L_19, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// inputFieldSignalingAddress.onValueChanged.AddListener(OnChangeSignalingAddress);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_20 = __this->___inputFieldSignalingAddress_5;
		NullCheck(L_20);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_21;
		L_21 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_20, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_22 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_22, __this, (intptr_t)((void*)SceneSelectUI_OnChangeSignalingAddress_mCBCE2F7723D946059036D7E565BFF613E6532E66_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_21, L_22, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// toggleSignalingSecured.onValueChanged.AddListener(OnChangeSignalingSecured);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23 = __this->___toggleSignalingSecured_6;
		NullCheck(L_23);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_24 = L_23->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_25 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_25, __this, (intptr_t)((void*)SceneSelectUI_OnChangeSignalingSecured_m6FE5CF52F3EC7EA20BC732E7B1E4F5B12B4E57C6_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_24, L_25, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// inputFieldSignalingInterval.onValueChanged.AddListener(OnChangeSignalingInterval);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_26 = __this->___inputFieldSignalingInterval_7;
		NullCheck(L_26);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_27;
		L_27 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_26, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_28 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_28, __this, (intptr_t)((void*)SceneSelectUI_OnChangeSignalingInterval_m48547C5EFA3DE0B863F8D3BD755FA2F2DB74E636_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_27, L_28, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// var optionList = streamSizeList.Select(size => new Dropdown.OptionData($" {size.x} x {size.y} ")).ToList();
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_29 = __this->___streamSizeList_21;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* L_30 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* L_31 = L_30;
		G_B1_0 = L_31;
		G_B1_1 = L_29;
		if (L_31)
		{
			G_B2_0 = L_31;
			G_B2_1 = L_29;
			goto IL_011f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* L_32 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* L_33 = (Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207*)il2cpp_codegen_object_new(Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_mE522E4061B42AE2F1DA49C5016D9CA4F3B96ECBD(L_33, L_32, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__20_0_mE1F4F2C09752BEF44E9B650F66C09607E88583E0_RuntimeMethod_var), NULL);
		Func_2_t11B8E1213288415647C9F003FDDADA3EAD216207* L_34 = L_33;
		((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_34);
		G_B2_0 = L_34;
		G_B2_1 = G_B1_1;
	}

IL_011f:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m46B169F60ECBD25AAC000C2EB1E1863625D357F2(G_B2_1, G_B2_0, Enumerable_Select_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m46B169F60ECBD25AAC000C2EB1E1863625D357F2_RuntimeMethod_var);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_36;
		L_36 = Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852(L_35, Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		V_0 = L_36;
		// optionList.Add(new Dropdown.OptionData(" Custom "));
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_37 = V_0;
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_38 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_38, _stringLiteral2C41ADB1FE2095C1FA0B14A275696D257EEFA3E1, NULL);
		NullCheck(L_37);
		List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline(L_37, L_38, List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		// streamSizeSelector.options = optionList;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_39 = __this->___streamSizeSelector_8;
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_40 = V_0;
		NullCheck(L_39);
		Dropdown_set_options_mEC30A0E3E0819485B1EACF8624D0C1974857D368(L_39, L_40, NULL);
		// var existInList = streamSizeList.Contains(settings.StreamSize);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_41 = __this->___streamSizeList_21;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_42 = __this->___settings_22;
		NullCheck(L_42);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_43;
		L_43 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_42, NULL);
		NullCheck(L_41);
		bool L_44;
		L_44 = List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4(L_41, L_43, List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var);
		V_1 = L_44;
		// if (existInList)
		bool L_45 = V_1;
		V_5 = L_45;
		bool L_46 = V_5;
		if (!L_46)
		{
			goto IL_018f;
		}
	}
	{
		// streamSizeSelector.value = streamSizeList.IndexOf(settings.StreamSize);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_47 = __this->___streamSizeSelector_8;
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_48 = __this->___streamSizeList_21;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_49 = __this->___settings_22;
		NullCheck(L_49);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_50;
		L_50 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_49, NULL);
		NullCheck(L_48);
		int32_t L_51;
		L_51 = List_1_IndexOf_mFDB33CEAEB4E938DB1F9CA6F08942FC00A1024DD(L_48, L_50, List_1_IndexOf_mFDB33CEAEB4E938DB1F9CA6F08942FC00A1024DD_RuntimeMethod_var);
		NullCheck(L_47);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_47, L_51, NULL);
		goto IL_0211;
	}

IL_018f:
	{
		// streamSizeSelector.value = optionList.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_52 = __this->___streamSizeSelector_8;
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_53, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_52);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_52, ((int32_t)il2cpp_codegen_subtract(L_54, 1)), NULL);
		// textureWidthInput.text = settings.StreamSize.x.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_55 = __this->___textureWidthInput_9;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_56 = __this->___settings_22;
		NullCheck(L_56);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_57;
		L_57 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_56, NULL);
		V_6 = L_57;
		int32_t L_58;
		L_58 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_6), NULL);
		V_7 = L_58;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		NullCheck(L_55);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_55, L_59, NULL);
		// textureHeightInput.text = settings.StreamSize.y.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_60 = __this->___textureHeightInput_10;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_61 = __this->___settings_22;
		NullCheck(L_61);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_62;
		L_62 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_61, NULL);
		V_6 = L_62;
		int32_t L_63;
		L_63 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_6), NULL);
		V_7 = L_63;
		String_t* L_64;
		L_64 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		NullCheck(L_60);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_60, L_64, NULL);
		// textureWidthInput.interactable = true;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_65 = __this->___textureWidthInput_9;
		NullCheck(L_65);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_65, (bool)1, NULL);
		// textureHeightInput.interactable = true;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_66 = __this->___textureHeightInput_10;
		NullCheck(L_66);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_66, (bool)1, NULL);
	}

IL_0211:
	{
		// streamSizeSelector.onValueChanged.AddListener(OnChangeStreamSizeSelect);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_67 = __this->___streamSizeSelector_8;
		NullCheck(L_67);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_68;
		L_68 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_67, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_69 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_69, __this, (intptr_t)((void*)SceneSelectUI_OnChangeStreamSizeSelect_m6491AC9899C2B306E9A46569BFBBCED26A282334_RuntimeMethod_var), NULL);
		NullCheck(L_68);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_68, L_69, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// textureWidthInput.onValueChanged.AddListener(OnChangeTextureWidthInput);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_70 = __this->___textureWidthInput_9;
		NullCheck(L_70);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_71;
		L_71 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_70, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_72 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_72, __this, (intptr_t)((void*)SceneSelectUI_OnChangeTextureWidthInput_m9854E155E2FB1AC64EC457714A750E91C0EB2379_RuntimeMethod_var), NULL);
		NullCheck(L_71);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_71, L_72, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// textureHeightInput.onValueChanged.AddListener(OnChangeTextureHeightInput);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_73 = __this->___textureHeightInput_10;
		NullCheck(L_73);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_74;
		L_74 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE(L_73, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_75 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_75, __this, (intptr_t)((void*)SceneSelectUI_OnChangeTextureHeightInput_mC8A59E4F6E73E25A0C250CEDC9C77A9FA060F1C3_RuntimeMethod_var), NULL);
		NullCheck(L_74);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_74, L_75, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// var receiverVideoCodecList = VideoStreamReceiver.GetAvailableCodecs()
		//     .Select(codec => new Dropdown.OptionData(CodecTitle(codec))).ToList();
		RuntimeObject* L_76;
		L_76 = VideoStreamReceiver_GetAvailableCodecs_m1E1C870D60F67BD3CDA5F4EC6B9008D677CB0904(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_77 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_1_2;
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_78 = L_77;
		G_B6_0 = L_78;
		G_B6_1 = L_76;
		if (L_78)
		{
			G_B7_0 = L_78;
			G_B7_1 = L_76;
			goto IL_028c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* L_79 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_80 = (Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B*)il2cpp_codegen_object_new(Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		Func_2__ctor_m72D8D685F95C54AECF392C8A9CBAC7D7145B1A4E(L_80, L_79, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__20_1_m00041DF52945FFE4B230B53FDFCFCA12DEDBEDAA_RuntimeMethod_var), NULL);
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_81 = L_80;
		((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_1_2 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_1_2), (void*)L_81);
		G_B7_0 = L_81;
		G_B7_1 = G_B6_1;
	}

IL_028c:
	{
		RuntimeObject* L_82;
		L_82 = Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064(G_B7_1, G_B7_0, Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064_RuntimeMethod_var);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_83;
		L_83 = Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852(L_82, Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		V_2 = L_83;
		// receiverVideoCodecSelector.options.AddRange(receiverVideoCodecList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_84 = __this->___receiverVideoCodecSelector_11;
		NullCheck(L_84);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_85;
		L_85 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_84, NULL);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_86 = V_2;
		NullCheck(L_85);
		List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6(L_85, L_86, List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		// var senderVideoCodecList = VideoStreamSender.GetAvailableCodecs()
		//     .Select(codec => new Dropdown.OptionData(CodecTitle(codec))).ToList();
		il2cpp_codegen_runtime_class_init_inline(VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_87;
		L_87 = VideoStreamSender_GetAvailableCodecs_m279531912CEC0393ECD1D2C1DBB59202A3C533B5(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_88 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_2_3;
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_89 = L_88;
		G_B8_0 = L_89;
		G_B8_1 = L_87;
		if (L_89)
		{
			G_B9_0 = L_89;
			G_B9_1 = L_87;
			goto IL_02cd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* L_90 = ((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_91 = (Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B*)il2cpp_codegen_object_new(Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Func_2__ctor_m72D8D685F95C54AECF392C8A9CBAC7D7145B1A4E(L_91, L_90, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__20_2_m4FBF688872E0FD7206175A1A5F370B3F3C60E1A9_RuntimeMethod_var), NULL);
		Func_2_t7EB9C72810AF586911C07415A3D9F20BF91B251B* L_92 = L_91;
		((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_2_3 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9__20_2_3), (void*)L_92);
		G_B9_0 = L_92;
		G_B9_1 = G_B8_1;
	}

IL_02cd:
	{
		RuntimeObject* L_93;
		L_93 = Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064(G_B9_1, G_B9_0, Enumerable_Select_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m614F486DDDF2D3071F8D25090AF8350A01E34064_RuntimeMethod_var);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_94;
		L_94 = Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852(L_93, Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		V_3 = L_94;
		// senderVideoCodecSelector.options.AddRange(senderVideoCodecList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_95 = __this->___senderVideoCodecSelector_12;
		NullCheck(L_95);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_96;
		L_96 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_95, NULL);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_97 = V_3;
		NullCheck(L_96);
		List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6(L_96, L_97, List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		// receiverVideoCodecSelector.value = Array.FindIndex(VideoStreamReceiver.GetAvailableCodecs().ToArray(), codec => codec.Equals(settings.ReceiverVideoCodec)) + 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_98 = __this->___receiverVideoCodecSelector_11;
		RuntimeObject* L_99;
		L_99 = VideoStreamReceiver_GetAvailableCodecs_m1E1C870D60F67BD3CDA5F4EC6B9008D677CB0904(NULL);
		VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5* L_100;
		L_100 = Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E(L_99, Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E_RuntimeMethod_var);
		Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7* L_101 = (Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7*)il2cpp_codegen_object_new(Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		Predicate_1__ctor_mFBA8FC3761252CC4A736A133F5BEA7C3D779D8D4(L_101, __this, (intptr_t)((void*)SceneSelectUI_U3CStartU3Eb__20_3_m55FD5D938D91EDB5431676AB1E4200024CDB4CBE_RuntimeMethod_var), NULL);
		int32_t L_102;
		L_102 = Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043(L_100, L_101, Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043_RuntimeMethod_var);
		NullCheck(L_98);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_98, ((int32_t)il2cpp_codegen_add(L_102, 1)), NULL);
		// senderVideoCodecSelector.value = Array.FindIndex(VideoStreamSender.GetAvailableCodecs().ToArray(), codec => codec.Equals(settings.SenderVideoCodec)) + 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_103 = __this->___senderVideoCodecSelector_12;
		il2cpp_codegen_runtime_class_init_inline(VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_104;
		L_104 = VideoStreamSender_GetAvailableCodecs_m279531912CEC0393ECD1D2C1DBB59202A3C533B5(NULL);
		VideoCodecInfoU5BU5D_tB56EAB566C589E8698FC93F0E8137DAAF7532CB5* L_105;
		L_105 = Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E(L_104, Enumerable_ToArray_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mC35324DA72ACD9BDB46097DFAA8A822D15CE8D9E_RuntimeMethod_var);
		Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7* L_106 = (Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7*)il2cpp_codegen_object_new(Predicate_1_t18D160418EF7FB7384F1629A6BCC91263EB6CBF7_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		Predicate_1__ctor_mFBA8FC3761252CC4A736A133F5BEA7C3D779D8D4(L_106, __this, (intptr_t)((void*)SceneSelectUI_U3CStartU3Eb__20_4_m65CD6037B8C494D2056A6BCB1428BD19B4F662F5_RuntimeMethod_var), NULL);
		int32_t L_107;
		L_107 = Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043(L_105, L_106, Array_FindIndex_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_m6B4F007932323ED68D41079EE6DE9487696DB043_RuntimeMethod_var);
		NullCheck(L_103);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_103, ((int32_t)il2cpp_codegen_add(L_107, 1)), NULL);
		// receiverVideoCodecSelector.onValueChanged.AddListener(OnChangeReceiverVideoCodecSelect);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_108 = __this->___receiverVideoCodecSelector_11;
		NullCheck(L_108);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_109;
		L_109 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_108, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_110 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_110);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_110, __this, (intptr_t)((void*)SceneSelectUI_OnChangeReceiverVideoCodecSelect_mC26E8022105708AC3C5D9866B115D1D3DA4324D0_RuntimeMethod_var), NULL);
		NullCheck(L_109);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_109, L_110, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// senderVideoCodecSelector.onValueChanged.AddListener(OnChangeSenderVideoCodecSelect);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_111 = __this->___senderVideoCodecSelector_12;
		NullCheck(L_111);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_112;
		L_112 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_111, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_113 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_113);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_113, __this, (intptr_t)((void*)SceneSelectUI_OnChangeSenderVideoCodecSelect_mF301D7E0497B69ED1848D73AB8555D65D2E1F70E_RuntimeMethod_var), NULL);
		NullCheck(L_112);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_112, L_113, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// buttonBidirectional.onClick.AddListener(OnPressedBidirectional);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_114 = __this->___buttonBidirectional_13;
		NullCheck(L_114);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_115;
		L_115 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_114, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_116 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_116, __this, (intptr_t)((void*)SceneSelectUI_OnPressedBidirectional_m25FB7D21920689209487AE307A83CBE74106BC68_RuntimeMethod_var), NULL);
		NullCheck(L_115);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_115, L_116, NULL);
		// buttonBroadcast.onClick.AddListener(OnPressedBroadcast);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_117 = __this->___buttonBroadcast_14;
		NullCheck(L_117);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_118;
		L_118 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_117, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_119 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_119);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_119, __this, (intptr_t)((void*)SceneSelectUI_OnPressedBroadcast_m463F9BDEF331DF22EBA7E1CE9F42E2F1E6673D97_RuntimeMethod_var), NULL);
		NullCheck(L_118);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_118, L_119, NULL);
		// buttonGyro.onClick.AddListener(OnPressedGyro);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_120 = __this->___buttonGyro_15;
		NullCheck(L_120);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_121;
		L_121 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_120, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_122 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_122);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_122, __this, (intptr_t)((void*)SceneSelectUI_OnPressedGyro_m28F9A02BC24AC1BA6A896807403DA10246AE243B_RuntimeMethod_var), NULL);
		NullCheck(L_121);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_121, L_122, NULL);
		// buttonRenderPipeline.onClick.AddListener(OnPressedRenderPipeline);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_123 = __this->___buttonRenderPipeline_16;
		NullCheck(L_123);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_124;
		L_124 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_123, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_125 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_125);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_125, __this, (intptr_t)((void*)SceneSelectUI_OnPressedRenderPipeline_m2F1026D2C29D769E4F794E47CFCF78C7F69C6198_RuntimeMethod_var), NULL);
		NullCheck(L_124);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_124, L_125, NULL);
		// buttonReceiver.onClick.AddListener(OnPressedReceiver);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_126 = __this->___buttonReceiver_17;
		NullCheck(L_126);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_127;
		L_127 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_126, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_128 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_128, __this, (intptr_t)((void*)SceneSelectUI_OnPressedReceiver_m410229C6048C5B563838BE9F56E3BDCB415F757D_RuntimeMethod_var), NULL);
		NullCheck(L_127);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_127, L_128, NULL);
		// buttonWebBrowserInput.onClick.AddListener(OnPressedWebBrowserInput);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_129 = __this->___buttonWebBrowserInput_18;
		NullCheck(L_129);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_130;
		L_130 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_129, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_131 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_131, __this, (intptr_t)((void*)SceneSelectUI_OnPressedWebBrowserInput_m5E47B1EFA297CEFA472DAEFA1C2B3CA686C5CCD7_RuntimeMethod_var), NULL);
		NullCheck(L_130);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_130, L_131, NULL);
		// buttonAR.onClick.AddListener(OnPressedAR);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_132 = __this->___buttonAR_19;
		NullCheck(L_132);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_133;
		L_133 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_132, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_134 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_134);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_134, __this, (intptr_t)((void*)SceneSelectUI_OnPressedAR_m4E50DF084B9729A27DFEAE8EC6554776A32424A7_RuntimeMethod_var), NULL);
		NullCheck(L_133);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_133, L_134, NULL);
		// buttonMultiplay.onClick.AddListener(OnPressedMultiplay);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_135 = __this->___buttonMultiplay_20;
		NullCheck(L_135);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_136;
		L_136 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_135, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_137 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_137, __this, (intptr_t)((void*)SceneSelectUI_OnPressedMultiplay_m0A03A78722918BBCB709F32C9E7D915279D52919_RuntimeMethod_var), NULL);
		NullCheck(L_136);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_136, L_137, NULL);
		// if (Gyroscope.current == null)
		Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4* L_138;
		L_138 = Gyroscope_get_current_m428AD02BCAFA9196EE3676D53D26C014EAAD2811_inline(NULL);
		V_8 = (bool)((((RuntimeObject*)(Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4*)L_138) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_139 = V_8;
		if (!L_139)
		{
			goto IL_047b;
		}
	}
	{
		// buttonGyro.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_140 = __this->___buttonGyro_15;
		NullCheck(L_140);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_140, (bool)0, NULL);
	}

IL_047b:
	{
		// buttonRenderPipeline.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_141 = __this->___buttonRenderPipeline_16;
		NullCheck(L_141);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_141, (bool)0, NULL);
		// buttonAR.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_142 = __this->___buttonAR_19;
		NullCheck(L_142);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_142, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeSignalingType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeSignalingType_m1D3D0BD8B41CBFA509BA05A752028679E1941D28 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.SignalingType =
		//     (SignalingType)Enum.GetValues(typeof(SignalingType)).GetValue(value);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___settings_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_3;
		L_3 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_2, NULL);
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21(L_3, L_4, NULL);
		NullCheck(L_0);
		RenderStreamingSettings_set_SignalingType_m154DFF537431A3CC937EFAFF8EEC5FC20972F3BF(L_0, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, SignalingType_t758E7564BA3A929DA158A8DF2C67F94A7E5BAD0F_il2cpp_TypeInfo_var)))), NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeSignalingAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeSignalingAddress_mCBCE2F7723D946059036D7E565BFF613E6532E66 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// settings.SignalingAddress = value;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___settings_22;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		RenderStreamingSettings_set_SignalingAddress_m67C41E2A23C5BE0F71063E09AE22EC02D66D63EB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeSignalingSecured(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeSignalingSecured_m6FE5CF52F3EC7EA20BC732E7B1E4F5B12B4E57C6 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// settings.SignalingSecured = value;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___settings_22;
		bool L_1 = ___value0;
		NullCheck(L_0);
		RenderStreamingSettings_set_SignalingSecured_mC663A12B74630AF2C37CED5C83FE51464414B373(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeSignalingInterval(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeSignalingInterval_m48547C5EFA3DE0B863F8D3BD755FA2F2DB74E636 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// if (float.TryParse(value, out float _value))
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// settings.SignalingInterval = _value;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_3 = __this->___settings_22;
		float L_4 = V_0;
		NullCheck(L_3);
		RenderStreamingSettings_set_SignalingInterval_mB0788477349607D1F4878C07324436BA0E6C17EA(L_3, L_4, NULL);
		goto IL_0031;
	}

IL_001e:
	{
		// settings.SignalingInterval = 5;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_5 = __this->___settings_22;
		NullCheck(L_5);
		RenderStreamingSettings_set_SignalingInterval_mB0788477349607D1F4878C07324436BA0E6C17EA(L_5, (5.0f), NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeStreamSizeSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeStreamSizeSelect_m6491AC9899C2B306E9A46569BFBBCED26A282334 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// var isCustom = index >= streamSizeList.Count;
		int32_t L_0 = ___index0;
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_1 = __this->___streamSizeList_21;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_inline(L_1, List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// textureWidthInput.interactable = isCustom;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___textureWidthInput_9;
		bool L_4 = V_0;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, L_4, NULL);
		// textureHeightInput.interactable = isCustom;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___textureHeightInput_10;
		bool L_6 = V_0;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, L_6, NULL);
		// if (isCustom)
		bool L_7 = V_0;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_004d;
	}

IL_0035:
	{
		// settings.StreamSize = streamSizeList[index];
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_9 = __this->___settings_22;
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_10 = __this->___streamSizeList_21;
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12;
		L_12 = List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A(L_10, L_11, List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var);
		NullCheck(L_9);
		RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189(L_9, L_12, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeTextureWidthInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeTextureWidthInput_m9854E155E2FB1AC64EC457714A750E91C0EB2379 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// var height = settings.StreamSize.y;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___settings_22;
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_0, NULL);
		V_2 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_2), NULL);
		V_0 = L_2;
		// if (string.IsNullOrEmpty(input))
		String_t* L_3 = ___input0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// settings.StreamSize = new Vector2Int(RenderStreamingSettings.DefaultStreamWidth, height);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_6 = __this->___settings_22;
		int32_t L_7 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), ((int32_t)1280), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189(L_6, L_8, NULL);
		// return;
		goto IL_005c;
	}

IL_0039:
	{
		// if (int.TryParse(input, out var width))
		String_t* L_9 = ___input0;
		bool L_10;
		L_10 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_9, (&V_1), NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// settings.StreamSize = new Vector2Int(width, height);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_12 = __this->___settings_22;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189(L_12, L_15, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeTextureHeightInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeTextureHeightInput_mC8A59E4F6E73E25A0C250CEDC9C77A9FA060F1C3 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// var width = settings.StreamSize.x;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_0 = __this->___settings_22;
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = RenderStreamingSettings_get_StreamSize_mDA613ECAEE272F0B2ECD7AEB169A1CD6B81145FE(L_0, NULL);
		V_2 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_2), NULL);
		V_0 = L_2;
		// if (string.IsNullOrEmpty(input))
		String_t* L_3 = ___input0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// settings.StreamSize = new Vector2Int(width, RenderStreamingSettings.DefaultStreamHeight);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_6 = __this->___settings_22;
		int32_t L_7 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), L_7, ((int32_t)720), /*hidden argument*/NULL);
		NullCheck(L_6);
		RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189(L_6, L_8, NULL);
		// return;
		goto IL_005c;
	}

IL_0039:
	{
		// if (int.TryParse(input, out var height))
		String_t* L_9 = ___input0;
		bool L_10;
		L_10 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_9, (&V_1), NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// settings.StreamSize = new Vector2Int(width, height);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_12 = __this->___settings_22;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		RenderStreamingSettings_set_StreamSize_mFB5B811FDEDEC2525FA54B7761DF96A7E7098189(L_12, L_15, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeSenderVideoCodecSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeSenderVideoCodecSelect_mF301D7E0497B69ED1848D73AB8555D65D2E1F70E (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (index == 0)
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// settings.SenderVideoCodec = null;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_2 = __this->___settings_22;
		NullCheck(L_2);
		RenderStreamingSettings_set_SenderVideoCodec_mFF695D8037C924F78ED553C2054EB1DECD40093F(L_2, (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL, NULL);
		goto IL_0031;
	}

IL_0018:
	{
		// settings.SenderVideoCodec = VideoStreamSender.GetAvailableCodecs().ElementAt(index - 1);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_3 = __this->___settings_22;
		il2cpp_codegen_runtime_class_init_inline(VideoStreamSender_t1DB37B2A29B2123FA5420FBC55D99CC13FFB3AF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = VideoStreamSender_GetAvailableCodecs_m279531912CEC0393ECD1D2C1DBB59202A3C533B5(NULL);
		int32_t L_5 = ___index0;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_6;
		L_6 = Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883_RuntimeMethod_var);
		NullCheck(L_3);
		RenderStreamingSettings_set_SenderVideoCodec_mFF695D8037C924F78ED553C2054EB1DECD40093F(L_3, L_6, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnChangeReceiverVideoCodecSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnChangeReceiverVideoCodecSelect_mC26E8022105708AC3C5D9866B115D1D3DA4324D0 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (index == 0)
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// settings.ReceiverVideoCodec = null;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_2 = __this->___settings_22;
		NullCheck(L_2);
		RenderStreamingSettings_set_ReceiverVideoCodec_m9D02483B95ADD8D45BB95A16DF6DCF4C9E0D235C(L_2, (VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810*)NULL, NULL);
		goto IL_0031;
	}

IL_0018:
	{
		// settings.ReceiverVideoCodec = VideoStreamReceiver.GetAvailableCodecs().ElementAt(index - 1);
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_3 = __this->___settings_22;
		RuntimeObject* L_4;
		L_4 = VideoStreamReceiver_GetAvailableCodecs_m1E1C870D60F67BD3CDA5F4EC6B9008D677CB0904(NULL);
		int32_t L_5 = ___index0;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_6;
		L_6 = Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), Enumerable_ElementAt_TisVideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810_mD85E548EDBBF5CF39F2CCADFE053AB9F624DC883_RuntimeMethod_var);
		NullCheck(L_3);
		RenderStreamingSettings_set_ReceiverVideoCodec_m9D02483B95ADD8D45BB95A16DF6DCF4C9E0D235C(L_3, L_6, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedBidirectional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedBidirectional_m25FB7D21920689209487AE307A83CBE74106BC68 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD299C919792755C9003DB974F87A2DBD4B87A906);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Bidirectional", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralD299C919792755C9003DB974F87A2DBD4B87A906, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedBroadcast_m463F9BDEF331DF22EBA7E1CE9F42E2F1E6673D97 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55385599C50BC965AABC565E67963FF5642B308B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Broadcast", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral55385599C50BC965AABC565E67963FF5642B308B, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedGyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedGyro_m28F9A02BC24AC1BA6A896807403DA10246AE243B (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A069D7EC2E21BD37211BC8A593A5C59901B939C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Gyro", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral2A069D7EC2E21BD37211BC8A593A5C59901B939C, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedRenderPipeline_m2F1026D2C29D769E4F794E47CFCF78C7F69C6198 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException("HDRP or URP package is not found in this project.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD506626DD92A6957F751B7700343B4198E5CADD0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneSelectUI_OnPressedRenderPipeline_m2F1026D2C29D769E4F794E47CFCF78C7F69C6198_RuntimeMethod_var)));
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedReceiver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedReceiver_m410229C6048C5B563838BE9F56E3BDCB415F757D (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0072FC0914E8FBF8E1C4004A9CDE383698D8E931);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Receiver", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral0072FC0914E8FBF8E1C4004A9CDE383698D8E931, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedWebBrowserInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedWebBrowserInput_m5E47B1EFA297CEFA472DAEFA1C2B3CA686C5CCD7 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37E89005D0DB19BAC8407F3B23616813EB3CB4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("WebBrowserInput", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralC37E89005D0DB19BAC8407F3B23616813EB3CB4C, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedAR_m4E50DF084B9729A27DFEAE8EC6554776A32424A7 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BC2BC3D63FB7F1B646AC0288670B9FC9ABB1D83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ARFoundation", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral5BC2BC3D63FB7F1B646AC0288670B9FC9ABB1D83, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::OnPressedMultiplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI_OnPressedMultiplay_m0A03A78722918BBCB709F32C9E7D915279D52919 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEDAD65EC8407EA8891326C7D7BC848E0E077C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Multiplay", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralBEEDAD65EC8407EA8891326C7D7BC848E0E077C4, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelectUI__ctor_m5FE386D2863CD755A390B41AE03DAC1D145A8A7B (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Vector2Int> streamSizeList = new List<Vector2Int>
		// {
		//     new Vector2Int(640, 360),
		//     new Vector2Int(1280, 720),
		//     new Vector2Int(1920, 1080),
		//     new Vector2Int(2560, 1440),
		//     new Vector2Int(3840, 2160),
		//     new Vector2Int(360, 640),
		//     new Vector2Int(720, 1280),
		//     new Vector2Int(1080, 1920),
		//     new Vector2Int(1440, 2560),
		//     new Vector2Int(2160, 3840),
		// };
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_0 = (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*)il2cpp_codegen_object_new(List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF(L_0, List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_1 = L_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_2), ((int32_t)640), ((int32_t)360), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_1, L_2, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_3 = L_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), ((int32_t)1280), ((int32_t)720), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_3, L_4, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_5 = L_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_6), ((int32_t)1920), ((int32_t)1080), /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_5, L_6, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_7 = L_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), ((int32_t)2560), ((int32_t)1440), /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_7, L_8, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_9 = L_7;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_10), ((int32_t)3840), ((int32_t)2160), /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_9, L_10, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_11 = L_9;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_12), ((int32_t)360), ((int32_t)640), /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_11, L_12, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_13 = L_11;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_14), ((int32_t)720), ((int32_t)1280), /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_13, L_14, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_15 = L_13;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_16), ((int32_t)1080), ((int32_t)1920), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_15, L_16, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_17 = L_15;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_18), ((int32_t)1440), ((int32_t)2560), /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_17, L_18, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_19 = L_17;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_20), ((int32_t)2160), ((int32_t)3840), /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_19, L_20, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		__this->___streamSizeList_21 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamSizeList_21), (void*)L_19);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Unity.RenderStreaming.Samples.SceneSelectUI::<Start>b__20_3(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneSelectUI_U3CStartU3Eb__20_3_m55FD5D938D91EDB5431676AB1E4200024CDB4CBE (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) 
{
	{
		// receiverVideoCodecSelector.value = Array.FindIndex(VideoStreamReceiver.GetAvailableCodecs().ToArray(), codec => codec.Equals(settings.ReceiverVideoCodec)) + 1;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___codec0;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_1 = __this->___settings_22;
		NullCheck(L_1);
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_2;
		L_2 = RenderStreamingSettings_get_ReceiverVideoCodec_mC9C07E79BAC3175E98D07C0310FA5CFAD94BBB52(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VideoCodecInfo_Equals_mDD43C36553FB6049120D4675686A6301320F3E58(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Unity.RenderStreaming.Samples.SceneSelectUI::<Start>b__20_4(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneSelectUI_U3CStartU3Eb__20_4_m65CD6037B8C494D2056A6BCB1428BD19B4F662F5 (SceneSelectUI_tBA87591FACBABF8B23EC175A36FB3119A183DC44* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) 
{
	{
		// senderVideoCodecSelector.value = Array.FindIndex(VideoStreamSender.GetAvailableCodecs().ToArray(), codec => codec.Equals(settings.SenderVideoCodec)) + 1;
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___codec0;
		RenderStreamingSettings_t29B4ED77A88E5C65E6B7E16A864BB27FB23C6FE4* L_1 = __this->___settings_22;
		NullCheck(L_1);
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_2;
		L_2 = RenderStreamingSettings_get_SenderVideoCodec_m7C37A9F08E6A74E696539D264AB1AC8474558D7E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VideoCodecInfo_Equals_mDD43C36553FB6049120D4675686A6301320F3E58(L_0, L_2, NULL);
		return L_3;
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
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0B497545BC63740A1FB8F6BADED40E583057E4E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* L_0 = (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8*)il2cpp_codegen_object_new(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1DD0482741E6D83F27A3674CE7060F624672AA63(L_0, NULL);
		((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.SceneSelectUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DD0482741E6D83F27A3674CE7060F624672AA63 (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UI.Dropdown/OptionData Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<Start>b__20_0(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CStartU3Eb__20_0_mE1F4F2C09752BEF44E9B650F66C09607E88583E0 (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF983F37D89979FFA1CE7977E99852F1DE910F0A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var optionList = streamSizeList.Select(size => new Dropdown.OptionData($" {size.x} x {size.y} ")).ToList();
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___size0), NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___size0), NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF983F37D89979FFA1CE7977E99852F1DE910F0A4, L_2, L_5, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_7 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_7, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.UI.Dropdown/OptionData Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<Start>b__20_1(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CStartU3Eb__20_1_m00041DF52945FFE4B230B53FDFCFCA12DEDBEDAA (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(codec => new Dropdown.OptionData(CodecTitle(codec))).ToList();
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___codec0;
		String_t* L_1;
		L_1 = SceneSelectUI_CodecTitle_mE77B5ADB4AC5954EBB3679A483E9ECF62FB041E9(L_0, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_2 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_2, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.UI.Dropdown/OptionData Unity.RenderStreaming.Samples.SceneSelectUI/<>c::<Start>b__20_2(Unity.RenderStreaming.VideoCodecInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CStartU3Eb__20_2_m4FBF688872E0FD7206175A1A5F370B3F3C60E1A9 (U3CU3Ec_tBDC98AE282A8DBF2977F73B5B4890C09F1BB85D8* __this, VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* ___codec0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(codec => new Dropdown.OptionData(CodecTitle(codec))).ToList();
		VideoCodecInfo_t14D1696BA1E173905F90C76004D373AB4EE67810* L_0 = ___codec0;
		String_t* L_1;
		L_1 = SceneSelectUI_CodecTitle_mE77B5ADB4AC5954EBB3679A483E9ECF62FB041E9(L_0, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_2 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_2, L_1, NULL);
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
// UnityEngine.InputSystem.InputActionAsset NewControlsNamespace.NewControls::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NewControlsNamespace.NewControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls__ctor_mCC7AE39DC9EC5FC401264FBCFCD31C4884DE73CE (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57426548280384D663F9AC23EBD42E4B86816F68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BDD037B6AEE48B5D323DAAEAB467A82A176AF5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D492D398CB757C1B8B71175A0168D21548D857D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DD77DA8F68B460FDFB4CEEE4869AD301790F4EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FB36AE411D0679209B8EAABB63AE2C845CF1905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61F7BBA8E501038575C34BED7A2D6FD990C6410);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1DA7DBECC52D76DB5307B905E681DC96C705177);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5DB1C187D474B5CA5FB91EAA3FB6F20B81C866);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @NewControls()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//             asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""New Controls"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Buttons"",
		//             ""id"": ""827e5c73-53d0-4894-981d-8136f9b2c822"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""ButtonClick"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""e6597ea3-a0b1-44ff-b198-b91ea02da80e"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""640b941d-d20a-477b-9ec6-e518417d15f6"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""ButtonClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""4fa8a779-0860-4ce3-907e-b0f671b203a2"",
		//                     ""path"": ""<VirtualMouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""ButtonClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""44109118-69a6-43dd-94ed-999ca27213c0"",
		//                     ""path"": ""<Gamepad>/leftShoulder"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""ButtonClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Movement"",
		//             ""id"": ""1325b081-79a4-4f1b-ac27-2e107a6de4a8"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""VerticalAxis"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""91c43831-9911-4be9-9c53-d929147c888b"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""HorizontalAxis"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""402de01d-0234-47ee-94d5-1886c64632e9"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""id"": ""4afaf337-28e4-48d8-9d8d-57ba7011ecfb"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""e29f2201-4834-40d3-adbe-46c62afe6e95"",
		//                     ""path"": ""<Joystick>/stick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""f09a6975-de18-44a0-b1dc-ffc782562515"",
		//                     ""path"": ""<Joystick>/stick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadRightStick"",
		//                     ""id"": ""154cb6c7-ecd1-4ec0-aae5-fb6c976a833c"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""85a6cc16-13cd-4977-bd68-729016378434"",
		//                     ""path"": ""<Gamepad>/rightStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""74ef5e60-773c-4b18-9cb2-7fb8285c32d9"",
		//                     ""path"": ""<Gamepad>/rightStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadLeftStick"",
		//                     ""id"": ""14e3fce3-da36-4d21-8c1a-939ce2e8dc54"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""1c27c3d7-0de3-4913-ae7e-2cdf702e6c8a"",
		//                     ""path"": ""<Gamepad>/leftStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""326b9fda-03ac-485f-86e5-104fd3027207"",
		//                     ""path"": ""<Gamepad>/leftStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadDPad"",
		//                     ""id"": ""8438263b-4f6a-4f42-aa82-8302ea432f86"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""6ed2d823-d977-4796-ad67-010a237a5b42"",
		//                     ""path"": ""<Gamepad>/dpad/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""25a57910-391f-475e-ae83-7e25cbca66f8"",
		//                     ""path"": ""<Gamepad>/dpad/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""VerticalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""Move"",
		//                     ""id"": ""827c7f8a-2b03-4e2c-995b-ebec0059cbc5"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""84d6aad2-3128-44ea-ae6b-8f314b4c73d0"",
		//                     ""path"": ""<Joystick>/stick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""24585a64-8f2f-4774-8a9b-8656f94a255c"",
		//                     ""path"": ""<Joystick>/stick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadRightStick"",
		//                     ""id"": ""de6cdf3d-f246-4b2a-9832-0e748d603170"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""4ac1a712-bf4a-449e-a2a3-282ca2121fc7"",
		//                     ""path"": ""<Gamepad>/rightStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""db3b94b1-95f8-4dce-a055-b2a9ff263562"",
		//                     ""path"": ""<Gamepad>/rightStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadLeftStick"",
		//                     ""id"": ""191ec069-100d-43ba-8aea-fcc5793db895"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""089c2e41-8130-4e33-ba00-1725a894cb75"",
		//                     ""path"": ""<Gamepad>/leftStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""2af929a7-bdc5-4f31-83f8-187f18e38065"",
		//                     ""path"": ""<Gamepad>/leftStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamepadDPad"",
		//                     ""id"": ""2f8f28ff-ca87-425c-b70d-1fde3b77ee0f"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""0740c3b2-7f96-4d03-aec1-28d917d6cc70"",
		//                     ""path"": ""<Gamepad>/dpad/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""2bdd155f-653b-44e4-8a4f-9af13252a555"",
		//                     ""path"": ""<Gamepad>/dpad/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorizontalAxis"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Scrolling"",
		//             ""id"": ""4bc555c1-883a-4a87-b362-5eba1d412106"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Scroll"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""7541ed53-5f5c-4a31-af68-8dff65f6e0f9"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""HorScroll"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""2d568a26-1faa-4f1d-baae-2893d3ee2dc4"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""ButtonScroll"",
		//                     ""id"": ""fdf14c1a-ad1f-424e-802b-1fc07209e0d4"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""adaad0b0-63a3-4e6a-aa97-259206577b93"",
		//                     ""path"": ""<Joystick>/trigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""9fa08e1d-39be-43ae-8134-0c35ac48cb1b"",
		//                     ""path"": ""<HID::? 205C33634243>/button5"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""GamePadScroll"",
		//                     ""id"": ""bef956b9-9747-4ce9-a515-bb96e0ba5d7e"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""311fb282-94ca-4bfb-9210-4672f36102cb"",
		//                     ""path"": ""<Gamepad>/buttonSouth"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""7c10a2bf-8f28-4142-95bd-ce1df7f8a534"",
		//                     ""path"": ""<Gamepad>/buttonNorth"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Scroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""1D Axis"",
		//                     ""id"": ""e74759e2-902f-435b-b007-f1cebf3a6469"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorScroll"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""c69ee0e3-44c6-4a6e-ab14-6912d099f6e2"",
		//                     ""path"": ""<Gamepad>/buttonWest"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorScroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""2ff5322c-bb1a-4555-aaf6-c3476501a9a5"",
		//                     ""path"": ""<Gamepad>/buttonEast"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""HorScroll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347(_stringLiteral6D492D398CB757C1B8B71175A0168D21548D857D, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Buttons = asset.FindActionMap("Buttons", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralA61F7BBA8E501038575C34BED7A2D6FD990C6410, (bool)1, NULL);
		__this->___m_Buttons_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buttons_1), (void*)L_2);
		// m_Buttons_ButtonClick = m_Buttons.FindAction("ButtonClick", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Buttons_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteralB1DA7DBECC52D76DB5307B905E681DC96C705177, (bool)1, NULL);
		__this->___m_Buttons_ButtonClick_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buttons_ButtonClick_3), (void*)L_4);
		// m_Movement = asset.FindActionMap("Movement", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_5;
		L_5 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_5);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_6;
		L_6 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_5, _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A, (bool)1, NULL);
		__this->___m_Movement_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Movement_4), (void*)L_6);
		// m_Movement_VerticalAxis = m_Movement.FindAction("VerticalAxis", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_Movement_4;
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteral57426548280384D663F9AC23EBD42E4B86816F68, (bool)1, NULL);
		__this->___m_Movement_VerticalAxis_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Movement_VerticalAxis_6), (void*)L_8);
		// m_Movement_HorizontalAxis = m_Movement.FindAction("HorizontalAxis", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_9 = __this->___m_Movement_4;
		NullCheck(L_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_9, _stringLiteral8FB36AE411D0679209B8EAABB63AE2C845CF1905, (bool)1, NULL);
		__this->___m_Movement_HorizontalAxis_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Movement_HorizontalAxis_7), (void*)L_10);
		// m_Scrolling = asset.FindActionMap("Scrolling", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_11;
		L_11 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_11);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_12;
		L_12 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_11, _stringLiteralDD5DB1C187D474B5CA5FB91EAA3FB6F20B81C866, (bool)1, NULL);
		__this->___m_Scrolling_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scrolling_8), (void*)L_12);
		// m_Scrolling_Scroll = m_Scrolling.FindAction("Scroll", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_13 = __this->___m_Scrolling_8;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_13, _stringLiteral6BDD037B6AEE48B5D323DAAEAB467A82A176AF5E, (bool)1, NULL);
		__this->___m_Scrolling_Scroll_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scrolling_Scroll_10), (void*)L_14);
		// m_Scrolling_HorScroll = m_Scrolling.FindAction("HorScroll", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_15 = __this->___m_Scrolling_8;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_15, _stringLiteral7DD77DA8F68B460FDFB4CEEE4869AD301790F4EE, (bool)1, NULL);
		__this->___m_Scrolling_HorScroll_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scrolling_HorScroll_11), (void*)L_16);
		// }
		return;
	}
}
// System.Void NewControlsNamespace.NewControls::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Dispose_m5E71DDA9412A1D4D91CC66A4D2D14780CF2D4078 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> NewControlsNamespace.NewControls::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 NewControls_get_bindingMask_mFC1B10E938F4C55F5BC02818835EB31BD6048834 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_set_bindingMask_m255FCE69E8E96F6DBB2FA652C56F71AC45B53478 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> NewControlsNamespace.NewControls::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D NewControls_get_devices_mF3C77CD93D82ADB7D7DCE01ACB25508637E53E25 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_set_devices_m3259E6D5DAD4DF1C42044E8628D9632D744217F2 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> NewControlsNamespace.NewControls::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 NewControls_get_controlSchemes_m810AD0E1521E202912BAF936EF73C97B38160413 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean NewControlsNamespace.NewControls::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewControls_Contains_m018FC85DF0E4C458A75938265F1469D5D4EE37AD (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
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
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> NewControlsNamespace.NewControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_GetEnumerator_mAA0A5E15F8FC76CD02985240BD3552790984847F (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator NewControlsNamespace.NewControls::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_System_Collections_IEnumerable_GetEnumerator_m9B341B9A5721552291FC5BB275D443095FDD37EB (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = NewControls_GetEnumerator_mAA0A5E15F8FC76CD02985240BD3552790984847F(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Enable_mE0A15470D84013FD3A04CF05E839912FD6572A85 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void NewControlsNamespace.NewControls::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Disable_m477DF9ECB9A69E177A27D9A9385C0460857F140F (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> NewControlsNamespace.NewControls::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_get_bindings_m587E869B59CCA814831C27950D0BD6D2FCE0E213 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* NewControls_FindAction_m1D51E778C3039714E3E4049AFDE0F5970882A522 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 NewControlsNamespace.NewControls::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewControls_FindBinding_m31EF08379096CD72BA3C5DC0046438D8B47AEC51 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// NewControlsNamespace.NewControls/ButtonsActions NewControlsNamespace.NewControls::get_Buttons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E NewControls_get_Buttons_m0DDB9282C5A7EEF541E6181C869D907BDB6EB8C4 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonsActions @Buttons => new ButtonsActions(this);
		ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E L_0;
		memset((&L_0), 0, sizeof(L_0));
		ButtonsActions__ctor_m099746A06E35B99B4EC4D3A784B4AAAF78D75EDE((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// NewControlsNamespace.NewControls/MovementActions NewControlsNamespace.NewControls::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 NewControls_get_Movement_m032F7FCB1BF049D66659C25B94DFE00A9A29F1C8 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public MovementActions @Movement => new MovementActions(this);
		MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		MovementActions__ctor_m66D22C5AFD239ECCBDC942AF6F73A49150874D70((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// NewControlsNamespace.NewControls/ScrollingActions NewControlsNamespace.NewControls::get_Scrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA NewControls_get_Scrolling_m92D2146EE485B459EE2A807350DE4345EFCFC295 (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public ScrollingActions @Scrolling => new ScrollingActions(this);
		ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA L_0;
		memset((&L_0), 0, sizeof(L_0));
		ScrollingActions__ctor_m8E33DB50D647EBAA1FD45825D6697D61AD145256((&L_0), __this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/ButtonsActions
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_pinvoke(const ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E& unmarshaled, ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ButtonsActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_pinvoke_back(const ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_pinvoke& marshaled, ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ButtonsActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/ButtonsActions
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_pinvoke_cleanup(ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/ButtonsActions
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_com(const ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E& unmarshaled, ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ButtonsActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_com_back(const ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_com& marshaled, ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ButtonsActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/ButtonsActions
IL2CPP_EXTERN_C void ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshal_com_cleanup(ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E_marshaled_com& marshaled)
{
}
// System.Void NewControlsNamespace.NewControls/ButtonsActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions__ctor_m099746A06E35B99B4EC4D3A784B4AAAF78D75EDE (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public ButtonsActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public ButtonsActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void ButtonsActions__ctor_m099746A06E35B99B4EC4D3A784B4AAAF78D75EDE_AdjustorThunk (RuntimeObject* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	ButtonsActions__ctor_m099746A06E35B99B4EC4D3A784B4AAAF78D75EDE(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ButtonsActions::get_ButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @ButtonClick => m_Wrapper.m_Buttons_ButtonClick;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Buttons_ButtonClick_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ButtonsActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Buttons; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Buttons_1;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Buttons; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080(_thisAdjusted, method);
	return _returnValue;
}
// System.Void NewControlsNamespace.NewControls/ButtonsActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_Enable_mC4AB9E3A65B676CEC1845383D4480160D1ADD0E4 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ButtonsActions_Enable_mC4AB9E3A65B676CEC1845383D4480160D1ADD0E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	ButtonsActions_Enable_mC4AB9E3A65B676CEC1845383D4480160D1ADD0E4(_thisAdjusted, method);
}
// System.Void NewControlsNamespace.NewControls/ButtonsActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_Disable_m737312A0FAE0210313CCF36CD1A3E6E7347C48F1 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ButtonsActions_Disable_m737312A0FAE0210313CCF36CD1A3E6E7347C48F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	ButtonsActions_Disable_m737312A0FAE0210313CCF36CD1A3E6E7347C48F1(_thisAdjusted, method);
}
// System.Boolean NewControlsNamespace.NewControls/ButtonsActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonsActions_get_enabled_mA0482F5B02DCD0851E1C0194EDA1B92C4C0BDEC3 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ButtonsActions_get_enabled_mA0482F5B02DCD0851E1C0194EDA1B92C4C0BDEC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ButtonsActions_get_enabled_mA0482F5B02DCD0851E1C0194EDA1B92C4C0BDEC3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ButtonsActions::op_Implicit(NewControlsNamespace.NewControls/ButtonsActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ButtonsActions_op_Implicit_m54A7E453C709F4BB41882260CB20F5442AEA7695 (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(ButtonsActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ButtonsActions_Get_mC00DF4AFD07EE11D063185C258904E9086661080((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(ButtonsActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls/ButtonsActions::SetCallbacks(NewControlsNamespace.NewControls/IButtonsActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonsActions_SetCallbacks_mA315BF0208CE23D1C1EEAF5B282C7E2E413DB7FB (ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_ButtonsActionsCallbackInterface != null)
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ButtonsActionsCallbackInterface_2;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		// @ButtonClick.started -= m_Wrapper.m_ButtonsActionsCallbackInterface.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_ButtonsActionsCallbackInterface_2;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @ButtonClick.performed -= m_Wrapper.m_ButtonsActionsCallbackInterface.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_ButtonsActionsCallbackInterface_2;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @ButtonClick.canceled -= m_Wrapper.m_ButtonsActionsCallbackInterface.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_ButtonsActionsCallbackInterface_2;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
	}

IL_007e:
	{
		// m_Wrapper.m_ButtonsActionsCallbackInterface = instance;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_18 = __this->___m_Wrapper_0;
		RuntimeObject* L_19 = ___instance0;
		NullCheck(L_18);
		L_18->___m_ButtonsActionsCallbackInterface_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___m_ButtonsActionsCallbackInterface_2), (void*)L_19);
		// if (instance != null)
		RuntimeObject* L_20 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00df;
		}
	}
	{
		// @ButtonClick.started += instance.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		RuntimeObject* L_23 = ___instance0;
		RuntimeObject* L_24 = L_23;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_25 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_25, L_24, (intptr_t)((void*)GetInterfaceMethodInfo(L_24, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_22, L_25, NULL);
		// @ButtonClick.performed += instance.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26;
		L_26 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		RuntimeObject* L_27 = ___instance0;
		RuntimeObject* L_28 = L_27;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_29 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_29, L_28, (intptr_t)((void*)GetInterfaceMethodInfo(L_28, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_26);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_26, L_29, NULL);
		// @ButtonClick.canceled += instance.OnButtonClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = ButtonsActions_get_ButtonClick_mED8931EC316DDC422B085CB74FBD31DC64B5659D(__this, NULL);
		RuntimeObject* L_31 = ___instance0;
		RuntimeObject* L_32 = L_31;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_33 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_33, L_32, (intptr_t)((void*)GetInterfaceMethodInfo(L_32, 0, IButtonsActions_tEC4429B13DFE933A375B4B5CFED50E55BE361990_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_30);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_30, L_33, NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ButtonsActions_SetCallbacks_mA315BF0208CE23D1C1EEAF5B282C7E2E413DB7FB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ButtonsActions_t52142FC3F9086929AFCE24373C9233E7A846FC4E*>(__this + _offset);
	ButtonsActions_SetCallbacks_mA315BF0208CE23D1C1EEAF5B282C7E2E413DB7FB(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/MovementActions
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_pinvoke(const MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6& unmarshaled, MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MovementActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_pinvoke_back(const MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_pinvoke& marshaled, MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MovementActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/MovementActions
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_pinvoke_cleanup(MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/MovementActions
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_com(const MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6& unmarshaled, MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MovementActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_com_back(const MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_com& marshaled, MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MovementActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/MovementActions
IL2CPP_EXTERN_C void MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshal_com_cleanup(MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6_marshaled_com& marshaled)
{
}
// System.Void NewControlsNamespace.NewControls/MovementActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions__ctor_m66D22C5AFD239ECCBDC942AF6F73A49150874D70 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public MovementActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public MovementActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void MovementActions__ctor_m66D22C5AFD239ECCBDC942AF6F73A49150874D70_AdjustorThunk (RuntimeObject* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	MovementActions__ctor_m66D22C5AFD239ECCBDC942AF6F73A49150874D70(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/MovementActions::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @VerticalAxis => m_Wrapper.m_Movement_VerticalAxis;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Movement_VerticalAxis_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/MovementActions::get_HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @HorizontalAxis => m_Wrapper.m_Movement_HorizontalAxis;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Movement_HorizontalAxis_7;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/MovementActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Movement; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Movement_4;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Movement; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266(_thisAdjusted, method);
	return _returnValue;
}
// System.Void NewControlsNamespace.NewControls/MovementActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	MovementActions_Enable_m4DE9CA0CAE60B16C984F6A47F280CD16D3B10311(_thisAdjusted, method);
}
// System.Void NewControlsNamespace.NewControls/MovementActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	MovementActions_Disable_m525FCF96A779E83178696E7BF3B1E8F956C01E99(_thisAdjusted, method);
}
// System.Boolean NewControlsNamespace.NewControls/MovementActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovementActions_get_enabled_m2DA60A4FBE663BA7FB6A4EF1B910E054E5459282 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool MovementActions_get_enabled_m2DA60A4FBE663BA7FB6A4EF1B910E054E5459282_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	bool _returnValue;
	_returnValue = MovementActions_get_enabled_m2DA60A4FBE663BA7FB6A4EF1B910E054E5459282(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/MovementActions::op_Implicit(NewControlsNamespace.NewControls/MovementActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* MovementActions_op_Implicit_m10FD846685FD046827AA570E13F6309E078952E8 (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6 ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(MovementActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = MovementActions_Get_mD7DB4C698D9EE620F45DC32B721C8A3FA5DD6266((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(MovementActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls/MovementActions::SetCallbacks(NewControlsNamespace.NewControls/IMovementActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementActions_SetCallbacks_m8D1AA8A9820436CBB17B5EA10D26C3D272B7927D (MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_MovementActionsCallbackInterface != null)
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_MovementActionsCallbackInterface_5;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ea;
		}
	}
	{
		// @VerticalAxis.started -= m_Wrapper.m_MovementActionsCallbackInterface.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @VerticalAxis.performed -= m_Wrapper.m_MovementActionsCallbackInterface.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @VerticalAxis.canceled -= m_Wrapper.m_MovementActionsCallbackInterface.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @HorizontalAxis.started -= m_Wrapper.m_MovementActionsCallbackInterface.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @HorizontalAxis.performed -= m_Wrapper.m_MovementActionsCallbackInterface.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @HorizontalAxis.canceled -= m_Wrapper.m_MovementActionsCallbackInterface.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_MovementActionsCallbackInterface_5;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
	}

IL_00ea:
	{
		// m_Wrapper.m_MovementActionsCallbackInterface = instance;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_33 = __this->___m_Wrapper_0;
		RuntimeObject* L_34 = ___instance0;
		NullCheck(L_33);
		L_33->___m_MovementActionsCallbackInterface_5 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___m_MovementActionsCallbackInterface_5), (void*)L_34);
		// if (instance != null)
		RuntimeObject* L_35 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0199;
		}
	}
	{
		// @VerticalAxis.started += instance.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		RuntimeObject* L_38 = ___instance0;
		RuntimeObject* L_39 = L_38;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, L_39, (intptr_t)((void*)GetInterfaceMethodInfo(L_39, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_37, L_40, NULL);
		// @VerticalAxis.performed += instance.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41;
		L_41 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		RuntimeObject* L_42 = ___instance0;
		RuntimeObject* L_43 = L_42;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_44 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_44, L_43, (intptr_t)((void*)GetInterfaceMethodInfo(L_43, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_41);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_41, L_44, NULL);
		// @VerticalAxis.canceled += instance.OnVerticalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45;
		L_45 = MovementActions_get_VerticalAxis_m449A8BBDC0DE7164471FB35E118FDABCE9BA966C(__this, NULL);
		RuntimeObject* L_46 = ___instance0;
		RuntimeObject* L_47 = L_46;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_48 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_48, L_47, (intptr_t)((void*)GetInterfaceMethodInfo(L_47, 0, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_45);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_45, L_48, NULL);
		// @HorizontalAxis.started += instance.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49;
		L_49 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		RuntimeObject* L_50 = ___instance0;
		RuntimeObject* L_51 = L_50;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, L_51, (intptr_t)((void*)GetInterfaceMethodInfo(L_51, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_49);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_49, L_52, NULL);
		// @HorizontalAxis.performed += instance.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53;
		L_53 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		RuntimeObject* L_54 = ___instance0;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_53);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_53, L_56, NULL);
		// @HorizontalAxis.canceled += instance.OnHorizontalAxis;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = MovementActions_get_HorizontalAxis_mA01AE9D61D67A9C31533B5A9AAEE6847EF5CE43D(__this, NULL);
		RuntimeObject* L_58 = ___instance0;
		RuntimeObject* L_59 = L_58;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_60 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_60, L_59, (intptr_t)((void*)GetInterfaceMethodInfo(L_59, 1, IMovementActions_t1B29C98C54862F4E202A1F962E022E73E105B6DC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_57, L_60, NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MovementActions_SetCallbacks_m8D1AA8A9820436CBB17B5EA10D26C3D272B7927D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovementActions_tBE563EEF5A1AEFE88EFA23F8C7381E35A953D4B6*>(__this + _offset);
	MovementActions_SetCallbacks_m8D1AA8A9820436CBB17B5EA10D26C3D272B7927D(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/ScrollingActions
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_pinvoke(const ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA& unmarshaled, ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ScrollingActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_pinvoke_back(const ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_pinvoke& marshaled, ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ScrollingActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/ScrollingActions
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_pinvoke_cleanup(ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NewControlsNamespace.NewControls/ScrollingActions
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_com(const ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA& unmarshaled, ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ScrollingActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_com_back(const ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_com& marshaled, ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ScrollingActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControlsNamespace.NewControls/ScrollingActions
IL2CPP_EXTERN_C void ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshal_com_cleanup(ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA_marshaled_com& marshaled)
{
}
// System.Void NewControlsNamespace.NewControls/ScrollingActions::.ctor(NewControlsNamespace.NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions__ctor_m8E33DB50D647EBAA1FD45825D6697D61AD145256 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public ScrollingActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public ScrollingActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void ScrollingActions__ctor_m8E33DB50D647EBAA1FD45825D6697D61AD145256_AdjustorThunk (RuntimeObject* __this, NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* ___wrapper0, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	ScrollingActions__ctor_m8E33DB50D647EBAA1FD45825D6697D61AD145256(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ScrollingActions::get_Scroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Scroll => m_Wrapper.m_Scrolling_Scroll;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Scrolling_Scroll_10;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControlsNamespace.NewControls/ScrollingActions::get_HorScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @HorScroll => m_Wrapper.m_Scrolling_HorScroll;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Scrolling_HorScroll_11;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ScrollingActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Scrolling; }
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Scrolling_8;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Scrolling; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void NewControlsNamespace.NewControls/ScrollingActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	ScrollingActions_Enable_mBDE2F5A3B7004C318DE31CCFA8FDCCD011CEB003(_thisAdjusted, method);
}
// System.Void NewControlsNamespace.NewControls/ScrollingActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	ScrollingActions_Disable_mCA5634246B86C26E492F1C0045CA12BC308DDD10(_thisAdjusted, method);
}
// System.Boolean NewControlsNamespace.NewControls/ScrollingActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScrollingActions_get_enabled_mCBB0B79615A844B8C2FDD349FF40367D4760D552 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ScrollingActions_get_enabled_mCBB0B79615A844B8C2FDD349FF40367D4760D552_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScrollingActions_get_enabled_mCBB0B79615A844B8C2FDD349FF40367D4760D552(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControlsNamespace.NewControls/ScrollingActions::op_Implicit(NewControlsNamespace.NewControls/ScrollingActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ScrollingActions_op_Implicit_mFD61D5681A8E752399D0D3C295EAC92319B2F6C3 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(ScrollingActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ScrollingActions_Get_mB83AEF53FAB5D9E8BAD334A33491AFFF66EB5AB1((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(ScrollingActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void NewControlsNamespace.NewControls/ScrollingActions::SetCallbacks(NewControlsNamespace.NewControls/IScrollingActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingActions_SetCallbacks_m2F7B128777172356F0BC7AA177B429BE47BBE962 (ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_ScrollingActionsCallbackInterface != null)
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ScrollingActionsCallbackInterface_9;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ea;
		}
	}
	{
		// @Scroll.started -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @Scroll.performed -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @Scroll.canceled -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @HorScroll.started -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @HorScroll.performed -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @HorScroll.canceled -= m_Wrapper.m_ScrollingActionsCallbackInterface.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_ScrollingActionsCallbackInterface_9;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
	}

IL_00ea:
	{
		// m_Wrapper.m_ScrollingActionsCallbackInterface = instance;
		NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* L_33 = __this->___m_Wrapper_0;
		RuntimeObject* L_34 = ___instance0;
		NullCheck(L_33);
		L_33->___m_ScrollingActionsCallbackInterface_9 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___m_ScrollingActionsCallbackInterface_9), (void*)L_34);
		// if (instance != null)
		RuntimeObject* L_35 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0199;
		}
	}
	{
		// @Scroll.started += instance.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		RuntimeObject* L_38 = ___instance0;
		RuntimeObject* L_39 = L_38;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, L_39, (intptr_t)((void*)GetInterfaceMethodInfo(L_39, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_37, L_40, NULL);
		// @Scroll.performed += instance.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41;
		L_41 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		RuntimeObject* L_42 = ___instance0;
		RuntimeObject* L_43 = L_42;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_44 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_44, L_43, (intptr_t)((void*)GetInterfaceMethodInfo(L_43, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_41);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_41, L_44, NULL);
		// @Scroll.canceled += instance.OnScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45;
		L_45 = ScrollingActions_get_Scroll_m5980DEF6B4F12867BE42447A6E20FCBD5310FCB5(__this, NULL);
		RuntimeObject* L_46 = ___instance0;
		RuntimeObject* L_47 = L_46;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_48 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_48, L_47, (intptr_t)((void*)GetInterfaceMethodInfo(L_47, 0, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_45);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_45, L_48, NULL);
		// @HorScroll.started += instance.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49;
		L_49 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		RuntimeObject* L_50 = ___instance0;
		RuntimeObject* L_51 = L_50;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, L_51, (intptr_t)((void*)GetInterfaceMethodInfo(L_51, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_49);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_49, L_52, NULL);
		// @HorScroll.performed += instance.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53;
		L_53 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		RuntimeObject* L_54 = ___instance0;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_53);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_53, L_56, NULL);
		// @HorScroll.canceled += instance.OnHorScroll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = ScrollingActions_get_HorScroll_m8A1A4750B6CC0D53FC95975D1D09F954EFFD131B(__this, NULL);
		RuntimeObject* L_58 = ___instance0;
		RuntimeObject* L_59 = L_58;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_60 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_60, L_59, (intptr_t)((void*)GetInterfaceMethodInfo(L_59, 1, IScrollingActions_t45DA9429941A74DF97B1A399BE0CEEC37DE8875C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_57, L_60, NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ScrollingActions_SetCallbacks_m2F7B128777172356F0BC7AA177B429BE47BBE962_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScrollingActions_t71164412C69291A74807C6ECB44F8354E39B4FEA*>(__this + _offset);
	ScrollingActions_SetCallbacks_m2F7B128777172356F0BC7AA177B429BE47BBE962(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* DataChannelBase_get_OnStartedChannel_m6445CEAF6A804F6E2637B7C1EF1A0EEDEFE10457_inline (DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4* __this, const RuntimeMethod* method) 
{
	{
		// public OnStartedChannelHandler OnStartedChannel { get; set; }
		OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* L_0 = __this->___U3COnStartedChannelU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataChannelBase_set_OnStartedChannel_m49197770E2E29AAE71D8544DCCD707578B6BB1D7_inline (DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4* __this, OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* ___value0, const RuntimeMethod* method) 
{
	{
		// public OnStartedChannelHandler OnStartedChannel { get; set; }
		OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* L_0 = ___value0;
		__this->___U3COnStartedChannelU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnStartedChannelU3Ek__BackingField_7), (void*)L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FileBrowser_get_Result_m68BED71300B0738904437796A2C20ADB8B057FF0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string[] Result { get; set; }
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var))->___U3CResultU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowser_set_Result_m6656F9251FE3557D72BF0D0F4BA83B475820F8AD_inline (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string[] Result { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var);
		((FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var))->___U3CResultU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_StaticFields*)il2cpp_codegen_static_fields_for(FileBrowser_t7339AD1486598EA62217333AA4FDB787C35EC0DA_il2cpp_TypeInfo_var))->___U3CResultU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_0 = ((Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4* Gyroscope_get_current_m428AD02BCAFA9196EE3676D53D26C014EAAD2811_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Gyroscope current { get; private set; }
		Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4* L_0 = ((Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4_StaticFields*)il2cpp_codegen_static_fields_for(Gyroscope_t07C58BC3D40B432CE9B1526B33487FD23EBB47D4_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* NewControls_get_asset_m31F0D961521D5E89DDC31B797BCAFA2B58770FAE_inline (NewControls_t4702747FF5B7232F73A679A5CC915C89E205EBEB* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
