#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// System.Collections.Generic.List`1<BoardData>
struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C;
// System.Collections.Generic.List`1<BoardData/SearcingWord>
struct List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD;
// System.Collections.Generic.List`1<GameLevelData/CategoryRecord>
struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8;
// System.Collections.Generic.List`1<UnlockLevelScreen/CategoryNames>
struct List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4;
// BoardData[]
struct BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AlphabetData/LetterData[]
struct LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250;
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26;
// BoardData/SearcingWord[]
struct SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213;
// GameLevelData/CategoryRecord[]
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18;
// UnlockLevelScreen/CategoryNames[]
struct CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF;
// AlphabetData
struct AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BoardData
struct BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CountTimer
struct CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD;
// GameDataSelect
struct GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583;
// GameLevelData
struct GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverScreen
struct GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7;
// GameUtility
struct GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GridSquare
struct GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SaveSystems
struct SaveSystems_t752B5853C0A1AFC9FBE2A29507B8A6F8F04BBE5B;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// SeachingWordsList
struct SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A;
// SearchingWord
struct SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B;
// SelectPuzzleButton
struct SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// SoundToggleBtn
struct SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnlockLevelScreen
struct UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WinScreen
struct WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC;
// WordChecker
struct WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A;
// WordsGrid
struct WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B;
// AlphabetData/LetterData
struct LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD;
// BoardData/BoardRow
struct BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A;
// BoardData/SearcingWord
struct SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GameEvents/BoardCompleted
struct BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04;
// GameEvents/CheckSquare
struct CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E;
// GameEvents/ClearSelection
struct ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1;
// GameEvents/CorrectWord
struct CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA;
// GameEvents/DisableSquareSelection
struct DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B;
// GameEvents/EnableSquareSelection
struct EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0;
// GameEvents/GameOver
struct GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C;
// GameEvents/LoadNextLevel
struct LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F;
// GameEvents/SelectSquare
struct SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6;
// GameEvents/ToggleSound
struct ToggleSound_t95DC195479161739D464E187F2264F185C673FB0;
// GameEvents/UnlockNextCategory
struct UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646;
// GameOverScreen/<PanelDelay>d__5
struct U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62;
// GameUtility/<AnimPanels>d__7
struct U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnlockLevelScreen/<PanelDelay>d__9
struct U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB;
// WinScreen/<PanelDelay>d__7
struct U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC;
// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65;

IL2CPP_EXTERN_C RuntimeClass* BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleSound_t95DC195479161739D464E187F2264F185C673FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7D8D77B27322582696119B9D09FA75671AA502;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral7C433B9EC7A9BF0F5418E3D47FC9B6A13DB79078;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6245206B0E8E9943409B34A70E5297CF3E6C52;
IL2CPP_EXTERN_C String_t* _stringLiteralBE287F534BCA47A81041120BEC61541E7012AACF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC5A9159EFBE0D5B6B505347DB60EF9F19FC0E107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m17581B1CA2912C8D1A263C8A928491B0804071BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C4538A398E0F470C57C3F0CD14B4933E079E1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0486DD11A00771959FE4C76DC81AF875A9AF5552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA960F4CC9DFB93EB6C233AB358FA96816F6CC81F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCA86DCFA33C632A1B2A480E34FEDE1E9F46B47DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimPanelsU3Ed__7_System_Collections_IEnumerator_Reset_mD0E58D6988C32D266FB5BA2B8D6B33CEBFB1AA55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPanelDelayU3Ed__5_System_Collections_IEnumerator_Reset_mA93FACC396C16D999F8EF9502F18312644100AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPanelDelayU3Ed__7_System_Collections_IEnumerator_Reset_m05247750DD5C252AFF9D88813AFDED8B1AE4E97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPanelDelayU3Ed__9_System_Collections_IEnumerator_Reset_m39A69DB2A80CDB8F639FB046FD39D7605F57E9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26;
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<BoardData>
struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____items_1)); }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* get__items_1() const { return ____items_1; }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32_StaticFields, ____emptyArray_5)); }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____items_1)); }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* get__items_1() const { return ____items_1; }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_StaticFields, ____emptyArray_5)); }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<BoardData/SearcingWord>
struct List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD, ____items_1)); }
	inline SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* get__items_1() const { return ____items_1; }
	inline SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD_StaticFields, ____emptyArray_5)); }
	inline SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SearcingWordU5BU5D_t457992C275E59AD848381A496EBA6D6ED9963213* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<GameLevelData/CategoryRecord>
struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____items_1)); }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* get__items_1() const { return ____items_1; }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8_StaticFields, ____emptyArray_5)); }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnlockLevelScreen/CategoryNames>
struct List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC, ____items_1)); }
	inline CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* get__items_1() const { return ____items_1; }
	inline CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC_StaticFields, ____emptyArray_5)); }
	inline CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CategoryNamesU5BU5D_t5B05C071B0D7B4E01BD34226865BD464D01467DF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GameEvents
struct GameEvents_t304F2D5249A807B067595CF817CA809E1051942C  : public RuntimeObject
{
public:

public:
};

struct GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields
{
public:
	// GameEvents/EnableSquareSelection GameEvents::OnEnableSquareSelection
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___OnEnableSquareSelection_0;
	// GameEvents/DisableSquareSelection GameEvents::OnDisableSquareSelection
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___OnDisableSquareSelection_1;
	// GameEvents/SelectSquare GameEvents::OnSelectSquare
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___OnSelectSquare_2;
	// GameEvents/CheckSquare GameEvents::OnCheckSquare
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___OnCheckSquare_3;
	// GameEvents/ClearSelection GameEvents::OnCleaerSelection
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___OnCleaerSelection_4;
	// GameEvents/CorrectWord GameEvents::OnCorrectWord
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___OnCorrectWord_5;
	// GameEvents/BoardCompleted GameEvents::OnBoardCompleted
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___OnBoardCompleted_6;
	// GameEvents/UnlockNextCategory GameEvents::OnUnlockNextCategory
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___OnUnlockNextCategory_7;
	// GameEvents/LoadNextLevel GameEvents::OnLoadNextLevel
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___OnLoadNextLevel_8;
	// GameEvents/GameOver GameEvents::OnGameOver
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___OnGameOver_9;
	// GameEvents/ToggleSound GameEvents::OnToggleSound
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * ___OnToggleSound_10;

public:
	inline static int32_t get_offset_of_OnEnableSquareSelection_0() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnEnableSquareSelection_0)); }
	inline EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * get_OnEnableSquareSelection_0() const { return ___OnEnableSquareSelection_0; }
	inline EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 ** get_address_of_OnEnableSquareSelection_0() { return &___OnEnableSquareSelection_0; }
	inline void set_OnEnableSquareSelection_0(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * value)
	{
		___OnEnableSquareSelection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnableSquareSelection_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisableSquareSelection_1() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnDisableSquareSelection_1)); }
	inline DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * get_OnDisableSquareSelection_1() const { return ___OnDisableSquareSelection_1; }
	inline DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B ** get_address_of_OnDisableSquareSelection_1() { return &___OnDisableSquareSelection_1; }
	inline void set_OnDisableSquareSelection_1(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * value)
	{
		___OnDisableSquareSelection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisableSquareSelection_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSelectSquare_2() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnSelectSquare_2)); }
	inline SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * get_OnSelectSquare_2() const { return ___OnSelectSquare_2; }
	inline SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 ** get_address_of_OnSelectSquare_2() { return &___OnSelectSquare_2; }
	inline void set_OnSelectSquare_2(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * value)
	{
		___OnSelectSquare_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectSquare_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnCheckSquare_3() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnCheckSquare_3)); }
	inline CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * get_OnCheckSquare_3() const { return ___OnCheckSquare_3; }
	inline CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E ** get_address_of_OnCheckSquare_3() { return &___OnCheckSquare_3; }
	inline void set_OnCheckSquare_3(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * value)
	{
		___OnCheckSquare_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCheckSquare_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnCleaerSelection_4() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnCleaerSelection_4)); }
	inline ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * get_OnCleaerSelection_4() const { return ___OnCleaerSelection_4; }
	inline ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 ** get_address_of_OnCleaerSelection_4() { return &___OnCleaerSelection_4; }
	inline void set_OnCleaerSelection_4(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * value)
	{
		___OnCleaerSelection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCleaerSelection_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnCorrectWord_5() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnCorrectWord_5)); }
	inline CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * get_OnCorrectWord_5() const { return ___OnCorrectWord_5; }
	inline CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA ** get_address_of_OnCorrectWord_5() { return &___OnCorrectWord_5; }
	inline void set_OnCorrectWord_5(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * value)
	{
		___OnCorrectWord_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCorrectWord_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardCompleted_6() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnBoardCompleted_6)); }
	inline BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * get_OnBoardCompleted_6() const { return ___OnBoardCompleted_6; }
	inline BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 ** get_address_of_OnBoardCompleted_6() { return &___OnBoardCompleted_6; }
	inline void set_OnBoardCompleted_6(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * value)
	{
		___OnBoardCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnlockNextCategory_7() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnUnlockNextCategory_7)); }
	inline UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * get_OnUnlockNextCategory_7() const { return ___OnUnlockNextCategory_7; }
	inline UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 ** get_address_of_OnUnlockNextCategory_7() { return &___OnUnlockNextCategory_7; }
	inline void set_OnUnlockNextCategory_7(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * value)
	{
		___OnUnlockNextCategory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnlockNextCategory_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadNextLevel_8() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnLoadNextLevel_8)); }
	inline LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * get_OnLoadNextLevel_8() const { return ___OnLoadNextLevel_8; }
	inline LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F ** get_address_of_OnLoadNextLevel_8() { return &___OnLoadNextLevel_8; }
	inline void set_OnLoadNextLevel_8(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * value)
	{
		___OnLoadNextLevel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadNextLevel_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameOver_9() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnGameOver_9)); }
	inline GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * get_OnGameOver_9() const { return ___OnGameOver_9; }
	inline GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C ** get_address_of_OnGameOver_9() { return &___OnGameOver_9; }
	inline void set_OnGameOver_9(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * value)
	{
		___OnGameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameOver_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnToggleSound_10() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnToggleSound_10)); }
	inline ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * get_OnToggleSound_10() const { return ___OnToggleSound_10; }
	inline ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 ** get_address_of_OnToggleSound_10() { return &___OnToggleSound_10; }
	inline void set_OnToggleSound_10(ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * value)
	{
		___OnToggleSound_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnToggleSound_10), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// AlphabetData/LetterData
struct LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD  : public RuntimeObject
{
public:
	// System.String AlphabetData/LetterData::letter
	String_t* ___letter_0;
	// UnityEngine.Sprite AlphabetData/LetterData::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_1;

public:
	inline static int32_t get_offset_of_letter_0() { return static_cast<int32_t>(offsetof(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD, ___letter_0)); }
	inline String_t* get_letter_0() const { return ___letter_0; }
	inline String_t** get_address_of_letter_0() { return &___letter_0; }
	inline void set_letter_0(String_t* value)
	{
		___letter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___letter_0), (void*)value);
	}

	inline static int32_t get_offset_of_image_1() { return static_cast<int32_t>(offsetof(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD, ___image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_1() const { return ___image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_1() { return &___image_1; }
	inline void set_image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_1), (void*)value);
	}
};


// BoardData/BoardRow
struct BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A  : public RuntimeObject
{
public:
	// System.Int32 BoardData/BoardRow::Size
	int32_t ___Size_0;
	// System.String[] BoardData/BoardRow::Row
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Row_1;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A, ___Size_0)); }
	inline int32_t get_Size_0() const { return ___Size_0; }
	inline int32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(int32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Row_1() { return static_cast<int32_t>(offsetof(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A, ___Row_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Row_1() const { return ___Row_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Row_1() { return &___Row_1; }
	inline void set_Row_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Row_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Row_1), (void*)value);
	}
};


// BoardData/SearcingWord
struct SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C  : public RuntimeObject
{
public:
	// System.Boolean BoardData/SearcingWord::Found
	bool ___Found_0;
	// System.String BoardData/SearcingWord::Word
	String_t* ___Word_1;

public:
	inline static int32_t get_offset_of_Found_0() { return static_cast<int32_t>(offsetof(SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C, ___Found_0)); }
	inline bool get_Found_0() const { return ___Found_0; }
	inline bool* get_address_of_Found_0() { return &___Found_0; }
	inline void set_Found_0(bool value)
	{
		___Found_0 = value;
	}

	inline static int32_t get_offset_of_Word_1() { return static_cast<int32_t>(offsetof(SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C, ___Word_1)); }
	inline String_t* get_Word_1() const { return ___Word_1; }
	inline String_t** get_address_of_Word_1() { return &___Word_1; }
	inline void set_Word_1(String_t* value)
	{
		___Word_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Word_1), (void*)value);
	}
};


// GameOverScreen/<PanelDelay>d__5
struct U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62  : public RuntimeObject
{
public:
	// System.Int32 GameOverScreen/<PanelDelay>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOverScreen/<PanelDelay>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameOverScreen GameOverScreen/<PanelDelay>d__5::<>4__this
	GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62, ___U3CU3E4__this_2)); }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameUtility/<AnimPanels>d__7
struct U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A  : public RuntimeObject
{
public:
	// System.Int32 GameUtility/<AnimPanels>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameUtility/<AnimPanels>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameUtility GameUtility/<AnimPanels>d__7::<>4__this
	GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A, ___U3CU3E4__this_2)); }
	inline GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnlockLevelScreen/<PanelDelay>d__9
struct U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB  : public RuntimeObject
{
public:
	// System.Int32 UnlockLevelScreen/<PanelDelay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnlockLevelScreen/<PanelDelay>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnlockLevelScreen UnlockLevelScreen/<PanelDelay>d__9::<>4__this
	UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB, ___U3CU3E4__this_2)); }
	inline UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// WinScreen/<PanelDelay>d__7
struct U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC  : public RuntimeObject
{
public:
	// System.Int32 WinScreen/<PanelDelay>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WinScreen/<PanelDelay>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WinScreen WinScreen/<PanelDelay>d__7::<>4__this
	WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC, ___U3CU3E4__this_2)); }
	inline WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65  : public RuntimeObject
{
public:
	// System.String WordsGrid/<>c__DisplayClass9_0::squareLetter
	String_t* ___squareLetter_0;

public:
	inline static int32_t get_offset_of_squareLetter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65, ___squareLetter_0)); }
	inline String_t* get_squareLetter_0() const { return ___squareLetter_0; }
	inline String_t** get_address_of_squareLetter_0() { return &___squareLetter_0; }
	inline void set_squareLetter_0(String_t* value)
	{
		___squareLetter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___squareLetter_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<BoardData/SearcingWord>
struct Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B, ___list_0)); }
	inline List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * get_list_0() const { return ___list_0; }
	inline List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B, ___current_3)); }
	inline SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * get_current_3() const { return ___current_3; }
	inline SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F 
{
public:
	// System.String GameLevelData/CategoryRecord::categoryName
	String_t* ___categoryName_0;
	// System.Collections.Generic.List`1<BoardData> GameLevelData/CategoryRecord::boardData
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;

public:
	inline static int32_t get_offset_of_categoryName_0() { return static_cast<int32_t>(offsetof(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F, ___categoryName_0)); }
	inline String_t* get_categoryName_0() const { return ___categoryName_0; }
	inline String_t** get_address_of_categoryName_0() { return &___categoryName_0; }
	inline void set_categoryName_0(String_t* value)
	{
		___categoryName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryName_0), (void*)value);
	}

	inline static int32_t get_offset_of_boardData_1() { return static_cast<int32_t>(offsetof(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F, ___boardData_1)); }
	inline List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * get_boardData_1() const { return ___boardData_1; }
	inline List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 ** get_address_of_boardData_1() { return &___boardData_1; }
	inline void set_boardData_1(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * value)
	{
		___boardData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardData_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke
{
	char* ___categoryName_0;
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;
};
// Native definition for COM marshalling of GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com
{
	Il2CppChar* ___categoryName_0;
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;
};

// UnlockLevelScreen/CategoryNames
struct CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8 
{
public:
	// System.String UnlockLevelScreen/CategoryNames::name
	String_t* ___name_0;
	// UnityEngine.UI.Text UnlockLevelScreen/CategoryNames::CategoryNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CategoryNameText_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_CategoryNameText_1() { return static_cast<int32_t>(offsetof(CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8, ___CategoryNameText_1)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CategoryNameText_1() const { return ___CategoryNameText_1; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CategoryNameText_1() { return &___CategoryNameText_1; }
	inline void set_CategoryNameText_1(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CategoryNameText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CategoryNameText_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnlockLevelScreen/CategoryNames
struct CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_pinvoke
{
	char* ___name_0;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CategoryNameText_1;
};
// Native definition for COM marshalling of UnlockLevelScreen/CategoryNames
struct CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_com
{
	Il2CppChar* ___name_0;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CategoryNameText_1;
};

// System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>
struct Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___list_0)); }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * get_list_0() const { return ___list_0; }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___current_3)); }
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  get_current_3() const { return ___current_3; }
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___categoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___boardData_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>
struct Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C, ___list_0)); }
	inline List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * get_list_0() const { return ___list_0; }
	inline List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C, ___current_3)); }
	inline CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  get_current_3() const { return ___current_3; }
	inline CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___CategoryNameText_1), (void*)NULL);
		#endif
	}
};


// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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
struct Delegate_t  : public RuntimeObject
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

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SoundToggleBtn/ButtonTypes
struct ButtonTypes_tEF885AFAB6083A9238A2CC46A713BF40E5A240B4 
{
public:
	// System.Int32 SoundToggleBtn/ButtonTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonTypes_tEF885AFAB6083A9238A2CC46A713BF40E5A240B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F  : public MulticastDelegate_t
{
public:

public:
};


// AlphabetData
struct AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetPlain
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetPlain_4;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetNormal
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetNormal_5;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetHighlighted
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetHighlighted_6;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetWrong
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetWrong_7;

public:
	inline static int32_t get_offset_of_AlphabetPlain_4() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetPlain_4)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetPlain_4() const { return ___AlphabetPlain_4; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetPlain_4() { return &___AlphabetPlain_4; }
	inline void set_AlphabetPlain_4(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetPlain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetPlain_4), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetNormal_5() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetNormal_5)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetNormal_5() const { return ___AlphabetNormal_5; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetNormal_5() { return &___AlphabetNormal_5; }
	inline void set_AlphabetNormal_5(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetHighlighted_6() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetHighlighted_6)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetHighlighted_6() const { return ___AlphabetHighlighted_6; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetHighlighted_6() { return &___AlphabetHighlighted_6; }
	inline void set_AlphabetHighlighted_6(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetHighlighted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetHighlighted_6), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetWrong_7() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetWrong_7)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetWrong_7() const { return ___AlphabetWrong_7; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetWrong_7() { return &___AlphabetWrong_7; }
	inline void set_AlphabetWrong_7(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetWrong_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetWrong_7), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// BoardData
struct BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Single BoardData::timeInSeconds
	float ___timeInSeconds_4;
	// System.Single BoardData::grade1
	float ___grade1_5;
	// System.Single BoardData::grade2
	float ___grade2_6;
	// System.Single BoardData::grade3
	float ___grade3_7;
	// System.Int32 BoardData::Colums
	int32_t ___Colums_8;
	// System.Int32 BoardData::Rows
	int32_t ___Rows_9;
	// BoardData/BoardRow[] BoardData::Board
	BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* ___Board_10;
	// System.Collections.Generic.List`1<BoardData/SearcingWord> BoardData::SearcingWords
	List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * ___SearcingWords_11;

public:
	inline static int32_t get_offset_of_timeInSeconds_4() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___timeInSeconds_4)); }
	inline float get_timeInSeconds_4() const { return ___timeInSeconds_4; }
	inline float* get_address_of_timeInSeconds_4() { return &___timeInSeconds_4; }
	inline void set_timeInSeconds_4(float value)
	{
		___timeInSeconds_4 = value;
	}

	inline static int32_t get_offset_of_grade1_5() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___grade1_5)); }
	inline float get_grade1_5() const { return ___grade1_5; }
	inline float* get_address_of_grade1_5() { return &___grade1_5; }
	inline void set_grade1_5(float value)
	{
		___grade1_5 = value;
	}

	inline static int32_t get_offset_of_grade2_6() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___grade2_6)); }
	inline float get_grade2_6() const { return ___grade2_6; }
	inline float* get_address_of_grade2_6() { return &___grade2_6; }
	inline void set_grade2_6(float value)
	{
		___grade2_6 = value;
	}

	inline static int32_t get_offset_of_grade3_7() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___grade3_7)); }
	inline float get_grade3_7() const { return ___grade3_7; }
	inline float* get_address_of_grade3_7() { return &___grade3_7; }
	inline void set_grade3_7(float value)
	{
		___grade3_7 = value;
	}

	inline static int32_t get_offset_of_Colums_8() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Colums_8)); }
	inline int32_t get_Colums_8() const { return ___Colums_8; }
	inline int32_t* get_address_of_Colums_8() { return &___Colums_8; }
	inline void set_Colums_8(int32_t value)
	{
		___Colums_8 = value;
	}

	inline static int32_t get_offset_of_Rows_9() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Rows_9)); }
	inline int32_t get_Rows_9() const { return ___Rows_9; }
	inline int32_t* get_address_of_Rows_9() { return &___Rows_9; }
	inline void set_Rows_9(int32_t value)
	{
		___Rows_9 = value;
	}

	inline static int32_t get_offset_of_Board_10() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Board_10)); }
	inline BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* get_Board_10() const { return ___Board_10; }
	inline BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26** get_address_of_Board_10() { return &___Board_10; }
	inline void set_Board_10(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* value)
	{
		___Board_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Board_10), (void*)value);
	}

	inline static int32_t get_offset_of_SearcingWords_11() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___SearcingWords_11)); }
	inline List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * get_SearcingWords_11() const { return ___SearcingWords_11; }
	inline List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD ** get_address_of_SearcingWords_11() { return &___SearcingWords_11; }
	inline void set_SearcingWords_11(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * value)
	{
		___SearcingWords_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SearcingWords_11), (void*)value);
	}
};


// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String GameData::selectedCategoryName
	String_t* ___selectedCategoryName_4;
	// BoardData GameData::selectedBoardData
	BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * ___selectedBoardData_5;

public:
	inline static int32_t get_offset_of_selectedCategoryName_4() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD, ___selectedCategoryName_4)); }
	inline String_t* get_selectedCategoryName_4() const { return ___selectedCategoryName_4; }
	inline String_t** get_address_of_selectedCategoryName_4() { return &___selectedCategoryName_4; }
	inline void set_selectedCategoryName_4(String_t* value)
	{
		___selectedCategoryName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedCategoryName_4), (void*)value);
	}

	inline static int32_t get_offset_of_selectedBoardData_5() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD, ___selectedBoardData_5)); }
	inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * get_selectedBoardData_5() const { return ___selectedBoardData_5; }
	inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC ** get_address_of_selectedBoardData_5() { return &___selectedBoardData_5; }
	inline void set_selectedBoardData_5(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * value)
	{
		___selectedBoardData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedBoardData_5), (void*)value);
	}
};


// GameLevelData
struct GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<GameLevelData/CategoryRecord> GameLevelData::data
	List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B, ___data_4)); }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * get_data_4() const { return ___data_4; }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/BoardCompleted
struct BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/CheckSquare
struct CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/ClearSelection
struct ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/CorrectWord
struct CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/DisableSquareSelection
struct DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/EnableSquareSelection
struct EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/GameOver
struct GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/LoadNextLevel
struct LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/SelectSquare
struct SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/ToggleSound
struct ToggleSound_t95DC195479161739D464E187F2264F185C673FB0  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/UnlockNextCategory
struct UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___startValue_57)); }
	inline float get_startValue_57() const { return ___startValue_57; }
	inline float* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(float value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___endValue_58)); }
	inline float get_endValue_58() const { return ___endValue_58; }
	inline float* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(float value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___changeValue_59)); }
	inline float get_changeValue_59() const { return ___changeValue_59; }
	inline float* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(float value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___plugOptions_60)); }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  get_plugOptions_60() const { return ___plugOptions_60; }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___getter_61)); }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___setter_62)); }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CountTimer
struct CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData CountTimer::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.UI.Text CountTimer::timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerText_5;
	// UnityEngine.UI.Text CountTimer::secondsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___secondsText_6;
	// System.Single CountTimer::_timeLeft
	float ____timeLeft_7;
	// System.Single CountTimer::_minutes
	float ____minutes_8;
	// System.Single CountTimer::_seconds
	float ____seconds_9;
	// System.Single CountTimer::_oneSecondDown
	float ____oneSecondDown_10;
	// System.Boolean CountTimer::_timeOut
	bool ____timeOut_11;
	// System.Boolean CountTimer::_stopTimer
	bool ____stopTimer_12;
	// UnityEngine.UI.Image CountTimer::ProgressTimer
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ProgressTimer_13;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_timerText_5() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ___timerText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerText_5() const { return ___timerText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerText_5() { return &___timerText_5; }
	inline void set_timerText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_5), (void*)value);
	}

	inline static int32_t get_offset_of_secondsText_6() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ___secondsText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_secondsText_6() const { return ___secondsText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_secondsText_6() { return &___secondsText_6; }
	inline void set_secondsText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___secondsText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondsText_6), (void*)value);
	}

	inline static int32_t get_offset_of__timeLeft_7() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____timeLeft_7)); }
	inline float get__timeLeft_7() const { return ____timeLeft_7; }
	inline float* get_address_of__timeLeft_7() { return &____timeLeft_7; }
	inline void set__timeLeft_7(float value)
	{
		____timeLeft_7 = value;
	}

	inline static int32_t get_offset_of__minutes_8() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____minutes_8)); }
	inline float get__minutes_8() const { return ____minutes_8; }
	inline float* get_address_of__minutes_8() { return &____minutes_8; }
	inline void set__minutes_8(float value)
	{
		____minutes_8 = value;
	}

	inline static int32_t get_offset_of__seconds_9() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____seconds_9)); }
	inline float get__seconds_9() const { return ____seconds_9; }
	inline float* get_address_of__seconds_9() { return &____seconds_9; }
	inline void set__seconds_9(float value)
	{
		____seconds_9 = value;
	}

	inline static int32_t get_offset_of__oneSecondDown_10() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____oneSecondDown_10)); }
	inline float get__oneSecondDown_10() const { return ____oneSecondDown_10; }
	inline float* get_address_of__oneSecondDown_10() { return &____oneSecondDown_10; }
	inline void set__oneSecondDown_10(float value)
	{
		____oneSecondDown_10 = value;
	}

	inline static int32_t get_offset_of__timeOut_11() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____timeOut_11)); }
	inline bool get__timeOut_11() const { return ____timeOut_11; }
	inline bool* get_address_of__timeOut_11() { return &____timeOut_11; }
	inline void set__timeOut_11(bool value)
	{
		____timeOut_11 = value;
	}

	inline static int32_t get_offset_of__stopTimer_12() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ____stopTimer_12)); }
	inline bool get__stopTimer_12() const { return ____stopTimer_12; }
	inline bool* get_address_of__stopTimer_12() { return &____stopTimer_12; }
	inline void set__stopTimer_12(bool value)
	{
		____stopTimer_12 = value;
	}

	inline static int32_t get_offset_of_ProgressTimer_13() { return static_cast<int32_t>(offsetof(CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE, ___ProgressTimer_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ProgressTimer_13() const { return ___ProgressTimer_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ProgressTimer_13() { return &___ProgressTimer_13; }
	inline void set_ProgressTimer_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ProgressTimer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProgressTimer_13), (void*)value);
	}
};


// GameDataSelect
struct GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData GameDataSelect::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// GameLevelData GameDataSelect::levelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData_5;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_5() { return static_cast<int32_t>(offsetof(GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583, ___levelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_levelData_5() const { return ___levelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_levelData_5() { return &___levelData_5; }
	inline void set_levelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___levelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_5), (void*)value);
	}
};


// GameOverScreen
struct GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOverScreen::gameOverScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverScreen_4;
	// UnityEngine.GameObject GameOverScreen::AdsButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AdsButton_5;

public:
	inline static int32_t get_offset_of_gameOverScreen_4() { return static_cast<int32_t>(offsetof(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7, ___gameOverScreen_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverScreen_4() const { return ___gameOverScreen_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverScreen_4() { return &___gameOverScreen_4; }
	inline void set_gameOverScreen_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_AdsButton_5() { return static_cast<int32_t>(offsetof(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7, ___AdsButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AdsButton_5() const { return ___AdsButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AdsButton_5() { return &___AdsButton_5; }
	inline void set_AdsButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AdsButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdsButton_5), (void*)value);
	}
};


// GameUtility
struct GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameUtility::settigsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___settigsPanel_4;

public:
	inline static int32_t get_offset_of_settigsPanel_4() { return static_cast<int32_t>(offsetof(GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645, ___settigsPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_settigsPanel_4() const { return ___settigsPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_settigsPanel_4() { return &___settigsPanel_4; }
	inline void set_settigsPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___settigsPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settigsPanel_4), (void*)value);
	}
};


// GridSquare
struct GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GridSquare::<SquareIndex>k__BackingField
	int32_t ___U3CSquareIndexU3Ek__BackingField_4;
	// AlphabetData/LetterData GridSquare::_normalLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____normalLetterData_5;
	// AlphabetData/LetterData GridSquare::_selectedLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____selectedLetterData_6;
	// AlphabetData/LetterData GridSquare::_correctLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____correctLetterData_7;
	// UnityEngine.SpriteRenderer GridSquare::_displayedImage
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ____displayedImage_8;
	// System.Boolean GridSquare::_selected
	bool ____selected_9;
	// System.Boolean GridSquare::_clicked
	bool ____clicked_10;
	// System.Int32 GridSquare::_index
	int32_t ____index_11;
	// System.Boolean GridSquare::_correct
	bool ____correct_12;
	// UnityEngine.AudioSource GridSquare::_source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____source_13;

public:
	inline static int32_t get_offset_of_U3CSquareIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ___U3CSquareIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CSquareIndexU3Ek__BackingField_4() const { return ___U3CSquareIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSquareIndexU3Ek__BackingField_4() { return &___U3CSquareIndexU3Ek__BackingField_4; }
	inline void set_U3CSquareIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CSquareIndexU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__normalLetterData_5() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____normalLetterData_5)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__normalLetterData_5() const { return ____normalLetterData_5; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__normalLetterData_5() { return &____normalLetterData_5; }
	inline void set__normalLetterData_5(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____normalLetterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normalLetterData_5), (void*)value);
	}

	inline static int32_t get_offset_of__selectedLetterData_6() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____selectedLetterData_6)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__selectedLetterData_6() const { return ____selectedLetterData_6; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__selectedLetterData_6() { return &____selectedLetterData_6; }
	inline void set__selectedLetterData_6(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____selectedLetterData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedLetterData_6), (void*)value);
	}

	inline static int32_t get_offset_of__correctLetterData_7() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____correctLetterData_7)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__correctLetterData_7() const { return ____correctLetterData_7; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__correctLetterData_7() { return &____correctLetterData_7; }
	inline void set__correctLetterData_7(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____correctLetterData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____correctLetterData_7), (void*)value);
	}

	inline static int32_t get_offset_of__displayedImage_8() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____displayedImage_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get__displayedImage_8() const { return ____displayedImage_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of__displayedImage_8() { return &____displayedImage_8; }
	inline void set__displayedImage_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		____displayedImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayedImage_8), (void*)value);
	}

	inline static int32_t get_offset_of__selected_9() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____selected_9)); }
	inline bool get__selected_9() const { return ____selected_9; }
	inline bool* get_address_of__selected_9() { return &____selected_9; }
	inline void set__selected_9(bool value)
	{
		____selected_9 = value;
	}

	inline static int32_t get_offset_of__clicked_10() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____clicked_10)); }
	inline bool get__clicked_10() const { return ____clicked_10; }
	inline bool* get_address_of__clicked_10() { return &____clicked_10; }
	inline void set__clicked_10(bool value)
	{
		____clicked_10 = value;
	}

	inline static int32_t get_offset_of__index_11() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____index_11)); }
	inline int32_t get__index_11() const { return ____index_11; }
	inline int32_t* get_address_of__index_11() { return &____index_11; }
	inline void set__index_11(int32_t value)
	{
		____index_11 = value;
	}

	inline static int32_t get_offset_of__correct_12() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____correct_12)); }
	inline bool get__correct_12() const { return ____correct_12; }
	inline bool* get_address_of__correct_12() { return &____correct_12; }
	inline void set__correct_12(bool value)
	{
		____correct_12 = value;
	}

	inline static int32_t get_offset_of__source_13() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____source_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__source_13() const { return ____source_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__source_13() { return &____source_13; }
	inline void set__source_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____source_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_13), (void*)value);
	}
};


// SaveSystems
struct SaveSystems_t752B5853C0A1AFC9FBE2A29507B8A6F8F04BBE5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SeachingWordsList
struct SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData SeachingWordsList::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.GameObject SeachingWordsList::searchingWordPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___searchingWordPrefab_5;
	// System.Single SeachingWordsList::offset
	float ___offset_6;
	// System.Int32 SeachingWordsList::maxColums
	int32_t ___maxColums_7;
	// System.Int32 SeachingWordsList::maxRows
	int32_t ___maxRows_8;
	// System.Int32 SeachingWordsList::_colums
	int32_t ____colums_9;
	// System.Int32 SeachingWordsList::_rows
	int32_t ____rows_10;
	// System.Int32 SeachingWordsList::_wordsNumber
	int32_t ____wordsNumber_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SeachingWordsList::_words
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____words_12;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_searchingWordPrefab_5() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ___searchingWordPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_searchingWordPrefab_5() const { return ___searchingWordPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_searchingWordPrefab_5() { return &___searchingWordPrefab_5; }
	inline void set_searchingWordPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___searchingWordPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchingWordPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ___offset_6)); }
	inline float get_offset_6() const { return ___offset_6; }
	inline float* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(float value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_maxColums_7() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ___maxColums_7)); }
	inline int32_t get_maxColums_7() const { return ___maxColums_7; }
	inline int32_t* get_address_of_maxColums_7() { return &___maxColums_7; }
	inline void set_maxColums_7(int32_t value)
	{
		___maxColums_7 = value;
	}

	inline static int32_t get_offset_of_maxRows_8() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ___maxRows_8)); }
	inline int32_t get_maxRows_8() const { return ___maxRows_8; }
	inline int32_t* get_address_of_maxRows_8() { return &___maxRows_8; }
	inline void set_maxRows_8(int32_t value)
	{
		___maxRows_8 = value;
	}

	inline static int32_t get_offset_of__colums_9() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ____colums_9)); }
	inline int32_t get__colums_9() const { return ____colums_9; }
	inline int32_t* get_address_of__colums_9() { return &____colums_9; }
	inline void set__colums_9(int32_t value)
	{
		____colums_9 = value;
	}

	inline static int32_t get_offset_of__rows_10() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ____rows_10)); }
	inline int32_t get__rows_10() const { return ____rows_10; }
	inline int32_t* get_address_of__rows_10() { return &____rows_10; }
	inline void set__rows_10(int32_t value)
	{
		____rows_10 = value;
	}

	inline static int32_t get_offset_of__wordsNumber_11() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ____wordsNumber_11)); }
	inline int32_t get__wordsNumber_11() const { return ____wordsNumber_11; }
	inline int32_t* get_address_of__wordsNumber_11() { return &____wordsNumber_11; }
	inline void set__wordsNumber_11(int32_t value)
	{
		____wordsNumber_11 = value;
	}

	inline static int32_t get_offset_of__words_12() { return static_cast<int32_t>(offsetof(SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A, ____words_12)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__words_12() const { return ____words_12; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__words_12() { return &____words_12; }
	inline void set__words_12(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____words_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____words_12), (void*)value);
	}
};


// SearchingWord
struct SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text SearchingWord::displayedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___displayedText_4;
	// System.String SearchingWord::_word
	String_t* ____word_5;
	// UnityEngine.AudioSource SearchingWord::_source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____source_6;

public:
	inline static int32_t get_offset_of_displayedText_4() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ___displayedText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_displayedText_4() const { return ___displayedText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_displayedText_4() { return &___displayedText_4; }
	inline void set_displayedText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___displayedText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayedText_4), (void*)value);
	}

	inline static int32_t get_offset_of__word_5() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ____word_5)); }
	inline String_t* get__word_5() const { return ____word_5; }
	inline String_t** get_address_of__word_5() { return &____word_5; }
	inline void set__word_5(String_t* value)
	{
		____word_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____word_5), (void*)value);
	}

	inline static int32_t get_offset_of__source_6() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ____source_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__source_6() const { return ____source_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__source_6() { return &____source_6; }
	inline void set__source_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_6), (void*)value);
	}
};


// SelectPuzzleButton
struct SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData SelectPuzzleButton::gameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___gameData_4;
	// GameLevelData SelectPuzzleButton::levelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData_5;
	// UnityEngine.UI.Text SelectPuzzleButton::categoryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___categoryText_6;
	// UnityEngine.UI.Image SelectPuzzleButton::progressBarFilling
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___progressBarFilling_7;
	// System.String SelectPuzzleButton::gameSceneName
	String_t* ___gameSceneName_8;
	// System.Boolean SelectPuzzleButton::_levelLocked
	bool ____levelLocked_9;

public:
	inline static int32_t get_offset_of_gameData_4() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___gameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_gameData_4() const { return ___gameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_gameData_4() { return &___gameData_4; }
	inline void set_gameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___gameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_5() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___levelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_levelData_5() const { return ___levelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_levelData_5() { return &___levelData_5; }
	inline void set_levelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___levelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_5), (void*)value);
	}

	inline static int32_t get_offset_of_categoryText_6() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___categoryText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_categoryText_6() const { return ___categoryText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_categoryText_6() { return &___categoryText_6; }
	inline void set_categoryText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___categoryText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryText_6), (void*)value);
	}

	inline static int32_t get_offset_of_progressBarFilling_7() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___progressBarFilling_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_progressBarFilling_7() const { return ___progressBarFilling_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_progressBarFilling_7() { return &___progressBarFilling_7; }
	inline void set_progressBarFilling_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___progressBarFilling_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressBarFilling_7), (void*)value);
	}

	inline static int32_t get_offset_of_gameSceneName_8() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___gameSceneName_8)); }
	inline String_t* get_gameSceneName_8() const { return ___gameSceneName_8; }
	inline String_t** get_address_of_gameSceneName_8() { return &___gameSceneName_8; }
	inline void set_gameSceneName_8(String_t* value)
	{
		___gameSceneName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSceneName_8), (void*)value);
	}

	inline static int32_t get_offset_of__levelLocked_9() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ____levelLocked_9)); }
	inline bool get__levelLocked_9() const { return ____levelLocked_9; }
	inline bool* get_address_of__levelLocked_9() { return &____levelLocked_9; }
	inline void set__levelLocked_9(bool value)
	{
		____levelLocked_9 = value;
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SoundManager::_muteMainMusic
	bool ____muteMainMusic_4;
	// System.Boolean SoundManager::_muteSounds
	bool ____muteSounds_5;
	// UnityEngine.AudioSource SoundManager::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_7;

public:
	inline static int32_t get_offset_of__muteMainMusic_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____muteMainMusic_4)); }
	inline bool get__muteMainMusic_4() const { return ____muteMainMusic_4; }
	inline bool* get_address_of__muteMainMusic_4() { return &____muteMainMusic_4; }
	inline void set__muteMainMusic_4(bool value)
	{
		____muteMainMusic_4 = value;
	}

	inline static int32_t get_offset_of__muteSounds_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____muteSounds_5)); }
	inline bool get__muteSounds_5() const { return ____muteSounds_5; }
	inline bool* get_address_of__muteSounds_5() { return &____muteSounds_5; }
	inline void set__muteSounds_5(bool value)
	{
		____muteSounds_5 = value;
	}

	inline static int32_t get_offset_of__audioSource_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____audioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_7() const { return ____audioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_7() { return &____audioSource_7; }
	inline void set__audioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_7), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___instance_6)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// SoundToggleBtn
struct SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SoundToggleBtn/ButtonTypes SoundToggleBtn::type
	int32_t ___type_4;
	// UnityEngine.Sprite SoundToggleBtn::onSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___onSprite_5;
	// UnityEngine.Sprite SoundToggleBtn::offSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___offSprite_6;
	// UnityEngine.UI.Image SoundToggleBtn::_image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____image_7;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_onSprite_5() { return static_cast<int32_t>(offsetof(SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545, ___onSprite_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_onSprite_5() const { return ___onSprite_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_onSprite_5() { return &___onSprite_5; }
	inline void set_onSprite_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___onSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSprite_5), (void*)value);
	}

	inline static int32_t get_offset_of_offSprite_6() { return static_cast<int32_t>(offsetof(SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545, ___offSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_offSprite_6() const { return ___offSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_offSprite_6() { return &___offSprite_6; }
	inline void set_offSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___offSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of__image_7() { return static_cast<int32_t>(offsetof(SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545, ____image_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__image_7() const { return ____image_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__image_7() { return &____image_7; }
	inline void set__image_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____image_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____image_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnlockLevelScreen
struct UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData UnlockLevelScreen::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// System.Collections.Generic.List`1<UnlockLevelScreen/CategoryNames> UnlockLevelScreen::categoryNames
	List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * ___categoryNames_5;
	// UnityEngine.GameObject UnlockLevelScreen::winScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winScreen_6;
	// UnityEngine.UI.Text UnlockLevelScreen::categoryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___categoryText_7;
	// UnityEngine.AudioSource UnlockLevelScreen::_source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____source_8;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryNames_5() { return static_cast<int32_t>(offsetof(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32, ___categoryNames_5)); }
	inline List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * get_categoryNames_5() const { return ___categoryNames_5; }
	inline List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC ** get_address_of_categoryNames_5() { return &___categoryNames_5; }
	inline void set_categoryNames_5(List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * value)
	{
		___categoryNames_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryNames_5), (void*)value);
	}

	inline static int32_t get_offset_of_winScreen_6() { return static_cast<int32_t>(offsetof(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32, ___winScreen_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winScreen_6() const { return ___winScreen_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winScreen_6() { return &___winScreen_6; }
	inline void set_winScreen_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winScreen_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winScreen_6), (void*)value);
	}

	inline static int32_t get_offset_of_categoryText_7() { return static_cast<int32_t>(offsetof(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32, ___categoryText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_categoryText_7() const { return ___categoryText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_categoryText_7() { return &___categoryText_7; }
	inline void set_categoryText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___categoryText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryText_7), (void*)value);
	}

	inline static int32_t get_offset_of__source_8() { return static_cast<int32_t>(offsetof(UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32, ____source_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__source_8() const { return ____source_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__source_8() { return &____source_8; }
	inline void set__source_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____source_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_8), (void*)value);
	}
};


// WinScreen
struct WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WinScreen::winPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winPanel_4;
	// UnityEngine.AudioSource WinScreen::_source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____source_5;

public:
	inline static int32_t get_offset_of_winPanel_4() { return static_cast<int32_t>(offsetof(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC, ___winPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winPanel_4() const { return ___winPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winPanel_4() { return &___winPanel_4; }
	inline void set_winPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of__source_5() { return static_cast<int32_t>(offsetof(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC, ____source_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__source_5() const { return ____source_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__source_5() { return &____source_5; }
	inline void set__source_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____source_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_5), (void*)value);
	}
};


// WordChecker
struct WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData WordChecker::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// GameLevelData WordChecker::gameLevelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___gameLevelData_5;
	// System.String WordChecker::_word
	String_t* ____word_6;
	// System.Int32 WordChecker::_assignedPoints
	int32_t ____assignedPoints_7;
	// System.Int32 WordChecker::_completedWords
	int32_t ____completedWords_8;
	// UnityEngine.Ray WordChecker::_rayUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayUp_9;
	// UnityEngine.Ray WordChecker::_rayDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDown_10;
	// UnityEngine.Ray WordChecker::_rayLeft
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayLeft_11;
	// UnityEngine.Ray WordChecker::_rayRight
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayRight_12;
	// UnityEngine.Ray WordChecker::_currentRay
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____currentRay_13;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalLeftUp_14;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalLeftDown_15;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalRightUp_16;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalRightDown_17;
	// UnityEngine.Vector3 WordChecker::_rayStartPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____rayStartPosition_18;
	// System.Collections.Generic.List`1<System.Int32> WordChecker::_correctSquareList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____correctSquareList_19;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameLevelData_5() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ___gameLevelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_gameLevelData_5() const { return ___gameLevelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_gameLevelData_5() { return &___gameLevelData_5; }
	inline void set_gameLevelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___gameLevelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameLevelData_5), (void*)value);
	}

	inline static int32_t get_offset_of__word_6() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____word_6)); }
	inline String_t* get__word_6() const { return ____word_6; }
	inline String_t** get_address_of__word_6() { return &____word_6; }
	inline void set__word_6(String_t* value)
	{
		____word_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____word_6), (void*)value);
	}

	inline static int32_t get_offset_of__assignedPoints_7() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____assignedPoints_7)); }
	inline int32_t get__assignedPoints_7() const { return ____assignedPoints_7; }
	inline int32_t* get_address_of__assignedPoints_7() { return &____assignedPoints_7; }
	inline void set__assignedPoints_7(int32_t value)
	{
		____assignedPoints_7 = value;
	}

	inline static int32_t get_offset_of__completedWords_8() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____completedWords_8)); }
	inline int32_t get__completedWords_8() const { return ____completedWords_8; }
	inline int32_t* get_address_of__completedWords_8() { return &____completedWords_8; }
	inline void set__completedWords_8(int32_t value)
	{
		____completedWords_8 = value;
	}

	inline static int32_t get_offset_of__rayUp_9() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayUp_9)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayUp_9() const { return ____rayUp_9; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayUp_9() { return &____rayUp_9; }
	inline void set__rayUp_9(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayUp_9 = value;
	}

	inline static int32_t get_offset_of__rayDown_10() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDown_10)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDown_10() const { return ____rayDown_10; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDown_10() { return &____rayDown_10; }
	inline void set__rayDown_10(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDown_10 = value;
	}

	inline static int32_t get_offset_of__rayLeft_11() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayLeft_11)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayLeft_11() const { return ____rayLeft_11; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayLeft_11() { return &____rayLeft_11; }
	inline void set__rayLeft_11(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayLeft_11 = value;
	}

	inline static int32_t get_offset_of__rayRight_12() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayRight_12)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayRight_12() const { return ____rayRight_12; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayRight_12() { return &____rayRight_12; }
	inline void set__rayRight_12(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayRight_12 = value;
	}

	inline static int32_t get_offset_of__currentRay_13() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____currentRay_13)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__currentRay_13() const { return ____currentRay_13; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__currentRay_13() { return &____currentRay_13; }
	inline void set__currentRay_13(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____currentRay_13 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalLeftUp_14() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalLeftUp_14)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalLeftUp_14() const { return ____rayDiagonalLeftUp_14; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalLeftUp_14() { return &____rayDiagonalLeftUp_14; }
	inline void set__rayDiagonalLeftUp_14(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalLeftUp_14 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalLeftDown_15() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalLeftDown_15)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalLeftDown_15() const { return ____rayDiagonalLeftDown_15; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalLeftDown_15() { return &____rayDiagonalLeftDown_15; }
	inline void set__rayDiagonalLeftDown_15(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalLeftDown_15 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalRightUp_16() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalRightUp_16)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalRightUp_16() const { return ____rayDiagonalRightUp_16; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalRightUp_16() { return &____rayDiagonalRightUp_16; }
	inline void set__rayDiagonalRightUp_16(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalRightUp_16 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalRightDown_17() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalRightDown_17)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalRightDown_17() const { return ____rayDiagonalRightDown_17; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalRightDown_17() { return &____rayDiagonalRightDown_17; }
	inline void set__rayDiagonalRightDown_17(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalRightDown_17 = value;
	}

	inline static int32_t get_offset_of__rayStartPosition_18() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayStartPosition_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__rayStartPosition_18() const { return ____rayStartPosition_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__rayStartPosition_18() { return &____rayStartPosition_18; }
	inline void set__rayStartPosition_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____rayStartPosition_18 = value;
	}

	inline static int32_t get_offset_of__correctSquareList_19() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____correctSquareList_19)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__correctSquareList_19() const { return ____correctSquareList_19; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__correctSquareList_19() { return &____correctSquareList_19; }
	inline void set__correctSquareList_19(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____correctSquareList_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____correctSquareList_19), (void*)value);
	}
};


// WordsGrid
struct WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData WordsGrid::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.GameObject WordsGrid::gridSquarePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gridSquarePrefab_5;
	// AlphabetData WordsGrid::alphabetData
	AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * ___alphabetData_6;
	// System.Single WordsGrid::squareOffset
	float ___squareOffset_7;
	// System.Single WordsGrid::topPosition
	float ___topPosition_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WordsGrid::_squareList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____squareList_9;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_gridSquarePrefab_5() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___gridSquarePrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gridSquarePrefab_5() const { return ___gridSquarePrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gridSquarePrefab_5() { return &___gridSquarePrefab_5; }
	inline void set_gridSquarePrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gridSquarePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridSquarePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_alphabetData_6() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___alphabetData_6)); }
	inline AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * get_alphabetData_6() const { return ___alphabetData_6; }
	inline AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 ** get_address_of_alphabetData_6() { return &___alphabetData_6; }
	inline void set_alphabetData_6(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * value)
	{
		___alphabetData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alphabetData_6), (void*)value);
	}

	inline static int32_t get_offset_of_squareOffset_7() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___squareOffset_7)); }
	inline float get_squareOffset_7() const { return ___squareOffset_7; }
	inline float* get_address_of_squareOffset_7() { return &___squareOffset_7; }
	inline void set_squareOffset_7(float value)
	{
		___squareOffset_7 = value;
	}

	inline static int32_t get_offset_of_topPosition_8() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___topPosition_8)); }
	inline float get_topPosition_8() const { return ___topPosition_8; }
	inline float* get_address_of_topPosition_8() { return &___topPosition_8; }
	inline void set_topPosition_8(float value)
	{
		___topPosition_8 = value;
	}

	inline static int32_t get_offset_of__squareList_9() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ____squareList_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__squareList_9() const { return ____squareList_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__squareList_9() { return &____squareList_9; }
	inline void set__squareList_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____squareList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____squareList_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * m_Items[1];

public:
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
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
// GameLevelData/CategoryRecord[]
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  m_Items[1];

public:
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___boardData_1), (void*)NULL);
		#endif
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___boardData_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_gshared (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_gshared (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_gshared (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(!!0,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared (RuntimeObject * ___t0, int32_t ___ease1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnlockLevelScreen/CategoryNames>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C  List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC_gshared (List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_gshared_inline (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226_gshared (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A_gshared (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<AlphabetData/LetterData>::.ctor()
inline void List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method);
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BoardData/SearcingWord>::.ctor()
inline void List_1__ctor_mA960F4CC9DFB93EB6C233AB358FA96816F6CC81F (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameEvents/BoardCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/UnlockNextCategory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void CountTimer::ActivateGameOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_ActivateGameOverGUI_m4230FD0A6C82D1F00CDB51D5F1ED6E87EC4AF1AC (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method);
// System.Void GameEvents::GameOverMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameDataSelect::SelectSequentalBoardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelect_SelectSequentalBoardData_mF7FD646A09B33A36FA66B964AF16B3B5C4E2EE90 (GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::GetEnumerator()
inline Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, const RuntimeMethod*))List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::get_Current()
inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	return ((  CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 SaveSystems::ReadCategoryCurrentIndexValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<BoardData>::get_Count()
inline int32_t List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<BoardData>::get_Item(System.Int32)
inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * (*) (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::MoveNext()
inline bool Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2 (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::Dispose()
inline void Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void GameEvents/EnableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method);
// System.Void GameEvents/DisableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method);
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method);
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method);
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method);
// System.Void GameEvents/BoardCompleted::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method);
// System.Void GameEvents/UnlockNextCategory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method);
// System.Void GameEvents/LoadNextLevel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method);
// System.Void GameEvents/GameOver::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method);
// System.Void GameEvents/ToggleSound::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSound_Invoke_m23D091E2A1C0D9396DBEE11670334F051310EE36 (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameEvents/GameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameOverScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverScreen_PanelDelay_m1B1F57B3E45F5EF98772F1912C6E24C4A5A85590 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameOverScreen/<PanelDelay>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__5__ctor_mD8938DC850BE1C8118353E3F008CDDC9065DD43F (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(!!0,DG.Tweening.Ease)
inline TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4 (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared)(___t0, ___ease1, method);
}
// System.Collections.IEnumerator GameUtility::AnimPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameUtility_AnimPanels_mDAC63BD49C87E1B2535D67C445EE9BFEC45DF03D (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method);
// System.Void GameUtility/<AnimPanels>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimPanelsU3Ed__7__ctor_m70E7A35DC7B74AF8B59DF0232BF31FE1B2E1A612 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SoundManager::ToggleMainMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleMainMusic_mCFB21056E7E31FD17A75AE7FE911A50B54663F27 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void SoundManager::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleSound_m2E28AC533EBDF2CD8162634FD7A35B9D6DCBDF24 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameEvents/EnableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/DisableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method);
// System.Void GameEvents::EnableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19 (const RuntimeMethod* method);
// System.Void GridSquare::CheckSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method);
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783 (const RuntimeMethod* method);
// System.Void GameEvents::DisableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B (const RuntimeMethod* method);
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2 (String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method);
// System.Boolean SoundManager::IsSoundMuted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Item(System.Int32)
inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<BoardData/SearcingWord>::get_Count()
inline int32_t List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_inline (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void SeachingWordsList::CalculateColumsAndRowsNumbers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_CalculateColumsAndRowsNumbers_m54F80781D2F9514F6DA78930394482BFF57F8CF5 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method);
// System.Void SeachingWordsList::CreateWordsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_CreateWordsObject_m09B232186166C154BF5D62B980FEB795A361743A (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method);
// System.Void SeachingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_SetWordsPosition_m162CB7150A90F5718CC7E0969D4B3B53CE76E259 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 SeachingWordsList::GetVectorSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SeachingWordsList_GetVectorSquareScale_mC5FCE99923B0BE82D66F05391408774428BFAAF9 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SearchingWord>()
inline SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<BoardData/SearcingWord>::get_Item(System.Int32)
inline SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * List_1_get_Item_mCA86DCFA33C632A1B2A480E34FEDE1E9F46B47DE_inline (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * (*) (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, const RuntimeMethod* method);
// System.Boolean SeachingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeachingWordsList_ShouldScaleDown_m5C5E0A8F3F0336A1F7AC513D086DA3BB1DDC1EF2 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Boolean SeachingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeachingWordsList_TryIncreaseColumnNumber_m2D534BE708734D0757BE96D2EEADB1D1136750D4 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 SeachingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SeachingWordsList_GetFirstSquarePosition_m7DA2237447531AF5BAAE2A4B3DBAD414A155D33A (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOMoveY_mB1957C5B502EF9A2ACADF4432D02D1C9606607FD (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * DOTweenModuleUI_DOFade_mBE8F5B25D6DAB090178C1AE0A97896F09D42136C (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void SelectPuzzleButton::UpdateButtonInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void SaveSystems::SaveCategoryData(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystems_SaveCategoryData_mCBC4C233543FD36CBE3CDE5C795E00FFA99D88E2 (String_t* ___categoryName0, int32_t ___currentIndex1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameEvents::OnToggleSoundMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_OnToggleSoundMethod_m0E4C5EE1324DFF04D03F8DF3CD5E53D5D6341319 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void SoundToggleBtn::ToggleButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleBtn_ToggleButton_m5182F32CD1371A0AFCC555C03E1F059DE84C0960 (SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545 * __this, const RuntimeMethod* method);
// System.Boolean SoundManager::IsMainMusicMuted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsMainMusicMuted_mBF02DD30650A616DCECD188E046D78A948ED048C_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnlockLevelScreen/CategoryNames>::GetEnumerator()
inline Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C  List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC (List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C  (*) (List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC *, const RuntimeMethod*))List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::get_Current()
inline CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_inline (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method)
{
	return ((  CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  (*) (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *, const RuntimeMethod*))Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::MoveNext()
inline bool Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226 (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *, const RuntimeMethod*))Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnlockLevelScreen/CategoryNames>::Dispose()
inline void Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *, const RuntimeMethod*))Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A_gshared)(__this, method);
}
// System.Collections.IEnumerator UnlockLevelScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnlockLevelScreen_PanelDelay_m5F686D577D6A1531ABB4682E911E0AC4F2AE8BFE (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method);
// System.Void UnlockLevelScreen/<PanelDelay>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__9__ctor_m363DA65E598743CAA96BAF07E0DB8824265742E5 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator WinScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinScreen_PanelDelay_mA1113C16B5CF23E439204256D80ABE52873CF680 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method);
// System.Void GameEvents::LoadNextLevelMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50 (const RuntimeMethod* method);
// System.Void WinScreen/<PanelDelay>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__7__ctor_m906387F7B886B4470AB8F68BCDBAC42111F1F1C4 (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnCleaerSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCleaerSelection_m0DC33DC58D231B1431E30CEB8FC58C1EA74A090B (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/LoadNextLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnCleaerSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCleaerSelection_mC7A45AD73C1D104F76A9725FD70C66AA5CEFA315 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method);
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method);
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___currentRay0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<BoardData/SearcingWord>::GetEnumerator()
inline Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B  List_1_GetEnumerator_m0486DD11A00771959FE4C76DC81AF875A9AF5552 (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B  (*) (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<BoardData/SearcingWord>::get_Current()
inline SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * Enumerator_get_Current_m4C4538A398E0F470C57C3F0CD14B4933E079E1F2_inline (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B * __this, const RuntimeMethod* method)
{
	return ((  SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * (*) (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288 (String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void WordChecker::CheckBoardCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<BoardData/SearcingWord>::MoveNext()
inline bool Enumerator_MoveNext_m17581B1CA2912C8D1A263C8A928491B0804071BD (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BoardData/SearcingWord>::Dispose()
inline void Enumerator_Dispose_mC5A9159EFBE0D5B6B505347DB60EF9F19FC0E107 (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* Physics_RaycastAll_m72947571EFB0EFB34E48340AA2EC0C8030D27C50 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___maxDistance1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Count()
inline int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, const RuntimeMethod*))List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline)(__this, method);
}
// System.Void GameEvents::BoardCompletedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23 (const RuntimeMethod* method);
// System.Void GameEvents::UnlockNextCategoryMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// System.Void WordsGrid::SetSquaresPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70 (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method);
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<AlphabetData/LetterData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79 (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<AlphabetData/LetterData>::Find(System.Predicate`1<!0>)
inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411 (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * __this, Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * ___match0, const RuntimeMethod* method)
{
	return ((  LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * (*) (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *, Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *, const RuntimeMethod*))List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GridSquare>()
inline GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___normalLetterData0, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___selectedLetterData1, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___correctLetterData2, const RuntimeMethod* method);
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method);
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AlphabetData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlphabetData__ctor_mE0E91E96E0D74FF386E4EE2B98318121DF80F879 (AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<LetterData> AlphabetPlain = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_0 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_0, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetPlain_4(L_0);
		// public List<LetterData> AlphabetNormal = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_1 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_1, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetNormal_5(L_1);
		// public List<LetterData> AlphabetHighlighted = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_2 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_2, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetHighlighted_6(L_2);
		// public List<LetterData> AlphabetWrong = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_3 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_3, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetWrong_7(L_3);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void BoardData::ClearWithEmptyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_ClearWithEmptyString_m3FF1510C8BC3F05C20533F8946A521C883B0FBF0 (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Colums; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Board[i].ClearRow();
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_0 = __this->get_Board_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < Colums; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < Colums; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_Colums_8();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::CreateNewBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_CreateNewBoard_m8490B75A6879A9933D0EEE642F5B1F6D72E21ECE (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Board = new BoardRow[Colums];
		int32_t L_0 = __this->get_Colums_8();
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_1 = (BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26*)(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26*)SZArrayNew(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_Board_10(L_1);
		// for (int i = 0; i < Colums; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// Board[i] = new BoardRow(Rows);
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_2 = __this->get_Board_10();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_Rows_9();
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_5 = (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A *)il2cpp_codegen_object_new(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var);
		BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A *)L_5);
		// for (int i = 0; i < Colums; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002c:
	{
		// for (int i = 0; i < Colums; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_Colums_8();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData__ctor_mCD73F4EBC62B7CC9948F7F0ADB5E1BC0B1955B00 (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA960F4CC9DFB93EB6C233AB358FA96816F6CC81F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SearcingWord> SearcingWords = new List<SearcingWord>();
		List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * L_0 = (List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD *)il2cpp_codegen_object_new(List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD_il2cpp_TypeInfo_var);
		List_1__ctor_mA960F4CC9DFB93EB6C233AB358FA96816F6CC81F(L_0, /*hidden argument*/List_1__ctor_mA960F4CC9DFB93EB6C233AB358FA96816F6CC81F_RuntimeMethod_var);
		__this->set_SearcingWords_11(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void CountTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_Start_m197683541112F0001ADE90F3DAF8808CBAF09E00 (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _stopTimer = false;
		__this->set__stopTimer_12((bool)0);
		// _timeOut = false;
		__this->set__timeOut_11((bool)0);
		// _timeLeft = currentGameData.selectedBoardData.timeInSeconds;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		float L_2 = L_1->get_timeInSeconds_4();
		__this->set__timeLeft_7(L_2);
		// _oneSecondDown = _timeLeft - 1f;
		float L_3 = __this->get__timeLeft_7();
		__this->set__oneSecondDown_10(((float)il2cpp_codegen_subtract((float)L_3, (float)(1.0f))));
		// GameEvents.OnBoardCompleted += StopTimer;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_4 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_4, __this, (intptr_t)((intptr_t)CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D(L_4, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory += StopTimer;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_5, __this, (intptr_t)((intptr_t)CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountTimer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_OnDisable_m4C5ABDD920F8BF51486C704729F70237877D5B07 (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted -= StopTimer;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D(L_0, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory -= StopTimer;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_1, __this, (intptr_t)((intptr_t)CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountTimer::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_StopTimer_m2DEB43FDFF48E68D5A71B858DB2843A0B345E1E3 (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	{
		// _stopTimer = true;
		__this->set__stopTimer_12((bool)1);
		// }
		return;
	}
}
// System.Void CountTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_Update_m191B171702C3056DA2007758CC88C08560C22BCE (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	{
		// if (_stopTimer == false)
		bool L_0 = __this->get__stopTimer_12();
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		// _timeLeft -= Time.deltaTime;
		float L_1 = __this->get__timeLeft_7();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__timeLeft_7(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// ProgressTimer.fillAmount = _timeLeft / currentGameData.selectedBoardData.timeInSeconds;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_ProgressTimer_13();
		float L_4 = __this->get__timeLeft_7();
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_5 = __this->get_currentGameData_4();
		NullCheck(L_5);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_6 = L_5->get_selectedBoardData_5();
		NullCheck(L_6);
		float L_7 = L_6->get_timeInSeconds_4();
		NullCheck(L_3);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_3, ((float)((float)L_4/(float)L_7)), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// if (_timeLeft <= _oneSecondDown)
		float L_8 = __this->get__timeLeft_7();
		float L_9 = __this->get__oneSecondDown_10();
		if ((!(((float)L_8) <= ((float)L_9))))
		{
			goto IL_005c;
		}
	}
	{
		// _oneSecondDown = _timeLeft - 1f;
		float L_10 = __this->get__timeLeft_7();
		__this->set__oneSecondDown_10(((float)il2cpp_codegen_subtract((float)L_10, (float)(1.0f))));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void CountTimer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_OnGUI_m9AD7E389526C11B381D31528281F2A1FF6D1577A (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_timeOut == false)
		bool L_0 = __this->get__timeOut_11();
		if (L_0)
		{
			goto IL_008b;
		}
	}
	{
		// if (_timeLeft > 0)
		float L_1 = __this->get__timeLeft_7();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		// _minutes = Mathf.Floor(_timeLeft / 60); // For example total time : 150s -> 150/60 : 2 minutes and 150 % 60 : 30s. Result = 2 : 30
		float L_2 = __this->get__timeLeft_7();
		float L_3;
		L_3 = floorf(((float)((float)L_2/(float)(60.0f))));
		__this->set__minutes_8(L_3);
		// _seconds = Mathf.RoundToInt(_timeLeft % 60);
		float L_4 = __this->get__timeLeft_7();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((fmodf(L_4, (60.0f))), /*hidden argument*/NULL);
		__this->set__seconds_9(((float)((float)L_5)));
		// timerText.text = _minutes.ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_timerText_5();
		float* L_7 = __this->get_address_of__minutes_8();
		String_t* L_8;
		L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_7, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// secondsText.text = _seconds.ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_secondsText_6();
		float* L_10 = __this->get_address_of__seconds_9();
		String_t* L_11;
		L_11 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_10, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// }
		return;
	}

IL_007e:
	{
		// _stopTimer = true;
		__this->set__stopTimer_12((bool)1);
		// ActivateGameOverGUI();
		CountTimer_ActivateGameOverGUI_m4230FD0A6C82D1F00CDB51D5F1ED6E87EC4AF1AC(__this, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void CountTimer::ActivateGameOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer_ActivateGameOverGUI_m4230FD0A6C82D1F00CDB51D5F1ED6E87EC4AF1AC (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
{
	{
		// GameEvents.GameOverMethod();
		GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC(/*hidden argument*/NULL);
		// _timeOut = true;
		__this->set__timeOut_11((bool)1);
		// }
		return;
	}
}
// System.Void CountTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountTimer__ctor_m70A12D9FB3F230A6DB790DCC873D72985EEA89BC (CountTimer_t630AA7B6744F1468906F629DD6BC32C315C063EE * __this, const RuntimeMethod* method)
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
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mF787127A0B2A0A3EBFA33BAB7050087D66E80F14 (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void GameDataSelect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelect_Awake_m9E06848804F24056000E8A6D97B02A4A5B3F642C (GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583 * __this, const RuntimeMethod* method)
{
	{
		// SelectSequentalBoardData();
		GameDataSelect_SelectSequentalBoardData_mF7FD646A09B33A36FA66B964AF16B3B5C4E2EE90(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDataSelect::SelectSequentalBoardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelect_SelectSequentalBoardData_mF7FD646A09B33A36FA66B964AF16B3B5C4E2EE90 (GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_0;
	memset((&V_0), 0, sizeof(V_0));
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = __this->get_levelData_5();
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0097;
		}

IL_0016:
		{
			// foreach (var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			V_1 = L_3;
			// if(data.categoryName == currentGameData.selectedCategoryName)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4 = V_1;
			String_t* L_5 = L_4.get_categoryName_0();
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_6 = __this->get_currentGameData_4();
			NullCheck(L_6);
			String_t* L_7 = L_6->get_selectedCategoryName_4();
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0097;
			}
		}

IL_0036:
		{
			// var boardIndex = SaveSystems.ReadCategoryCurrentIndexValues(currentGameData.selectedCategoryName);
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_9 = __this->get_currentGameData_4();
			NullCheck(L_9);
			String_t* L_10 = L_9->get_selectedCategoryName_4();
			int32_t L_11;
			L_11 = SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			// if(boardIndex < data.boardData.Count)
			int32_t L_12 = V_2;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_13 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_14 = L_13.get_boardData_1();
			NullCheck(L_14);
			int32_t L_15;
			L_15 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_14, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			if ((((int32_t)L_12) >= ((int32_t)L_15)))
			{
				goto IL_006e;
			}
		}

IL_0055:
		{
			// currentGameData.selectedBoardData = data.boardData[boardIndex];
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_16 = __this->get_currentGameData_4();
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_17 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_18 = L_17.get_boardData_1();
			int32_t L_19 = V_2;
			NullCheck(L_18);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_20;
			L_20 = List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
			NullCheck(L_16);
			L_16->set_selectedBoardData_5(L_20);
			// }
			goto IL_0097;
		}

IL_006e:
		{
			// var randomIndex = Random.Range(0, data.boardData.Count);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_21 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_22 = L_21.get_boardData_1();
			NullCheck(L_22);
			int32_t L_23;
			L_23 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_22, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			int32_t L_24;
			L_24 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_23, /*hidden argument*/NULL);
			V_3 = L_24;
			// currentGameData.selectedBoardData = data.boardData[randomIndex];
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_25 = __this->get_currentGameData_4();
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_26 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_27 = L_26.get_boardData_1();
			int32_t L_28 = V_3;
			NullCheck(L_27);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_29;
			L_29 = List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
			NullCheck(L_25);
			L_25->set_selectedBoardData_5(L_29);
		}

IL_0097:
		{
			// foreach (var data in levelData.data)
			bool L_30;
			L_30 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_0016;
			}
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(165)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void GameDataSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelect__ctor_mBB22A5BC027569D9503437E608D99D095EA64090 (GameDataSelect_t32CF4FB346F762179E55AAB2FE35B66C73C02583 * __this, const RuntimeMethod* method)
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
// System.Void GameEvents::add_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_0 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_1 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_2 = NULL;
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = V_0;
		V_1 = L_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_2 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)CastclassSealed((RuntimeObject*)L_4, EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var));
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_5 = V_2;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_6 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *>((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnEnableSquareSelection_0()), L_5, L_6);
		V_0 = L_7;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_8 = V_0;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_8) == ((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_0 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_1 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_2 = NULL;
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = V_0;
		V_1 = L_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_2 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)CastclassSealed((RuntimeObject*)L_4, EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var));
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_5 = V_2;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_6 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *>((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnEnableSquareSelection_0()), L_5, L_6);
		V_0 = L_7;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_8 = V_0;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_8) == ((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::EnableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnEnableSquareSelection != null)
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnEnableSquareSelection();
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		NullCheck(L_1);
		EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_0 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_1 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_2 = NULL;
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = V_0;
		V_1 = L_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_2 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)CastclassSealed((RuntimeObject*)L_4, DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var));
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_5 = V_2;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_6 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *>((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnDisableSquareSelection_1()), L_5, L_6);
		V_0 = L_7;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_8 = V_0;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_8) == ((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_0 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_1 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_2 = NULL;
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = V_0;
		V_1 = L_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_2 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)CastclassSealed((RuntimeObject*)L_4, DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var));
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_5 = V_2;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_6 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *>((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnDisableSquareSelection_1()), L_5, L_6);
		V_0 = L_7;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_8 = V_0;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_8) == ((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::DisableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnDisableSquareSelection != null)
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnDisableSquareSelection();
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		NullCheck(L_1);
		DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_0 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_1 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_2 = NULL;
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = V_0;
		V_1 = L_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)CastclassSealed((RuntimeObject*)L_4, SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var));
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_5 = V_2;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_6 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *>((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnSelectSquare_2()), L_5, L_6);
		V_0 = L_7;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_8 = V_0;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_8) == ((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_0 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_1 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_2 = NULL;
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = V_0;
		V_1 = L_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)CastclassSealed((RuntimeObject*)L_4, SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var));
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_5 = V_2;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_6 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *>((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnSelectSquare_2()), L_5, L_6);
		V_0 = L_7;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_8 = V_0;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_8) == ((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSelectSquare != null)
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// OnSelectSquare(position);
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		NullCheck(L_1);
		SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_0 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_1 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_2 = NULL;
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_2 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var));
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_5 = V_2;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_6 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *>((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCheckSquare_3()), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_8 = V_0;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_8) == ((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_0 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_1 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_2 = NULL;
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_2 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var));
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_5 = V_2;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_6 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *>((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCheckSquare_3()), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_8 = V_0;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_8) == ((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2 (String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCheckSquare != null)
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnCheckSquare(letter, squarePosition, squareIndex);
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		String_t* L_2 = ___letter0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___squarePosition1;
		int32_t L_4 = ___squareIndex2;
		NullCheck(L_1);
		CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCleaerSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCleaerSelection_m0DC33DC58D231B1431E30CEB8FC58C1EA74A090B (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_0 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_1 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_2 = NULL;
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCleaerSelection_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = V_0;
		V_1 = L_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_2 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)CastclassSealed((RuntimeObject*)L_4, ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var));
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_5 = V_2;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_6 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *>((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCleaerSelection_4()), L_5, L_6);
		V_0 = L_7;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_8 = V_0;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_8) == ((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCleaerSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCleaerSelection_mC7A45AD73C1D104F76A9725FD70C66AA5CEFA315 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_0 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_1 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_2 = NULL;
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCleaerSelection_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = V_0;
		V_1 = L_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_2 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)CastclassSealed((RuntimeObject*)L_4, ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var));
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_5 = V_2;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_6 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *>((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCleaerSelection_4()), L_5, L_6);
		V_0 = L_7;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_8 = V_0;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_8) == ((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCleaerSelection != null)
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCleaerSelection_4();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnCleaerSelection();
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCleaerSelection_4();
		NullCheck(L_1);
		ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_0 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_1 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_2 = NULL;
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = V_0;
		V_1 = L_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_2 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)CastclassSealed((RuntimeObject*)L_4, CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var));
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_5 = V_2;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_6 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *>((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCorrectWord_5()), L_5, L_6);
		V_0 = L_7;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_8 = V_0;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_8) == ((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_0 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_1 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_2 = NULL;
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = V_0;
		V_1 = L_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_2 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)CastclassSealed((RuntimeObject*)L_4, CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var));
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_5 = V_2;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_6 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *>((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCorrectWord_5()), L_5, L_6);
		V_0 = L_7;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_8 = V_0;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_8) == ((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288 (String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(OnCorrectWord != null)
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnCorrectWord(word, squareIndexes);
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		String_t* L_2 = ___word0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = ___squareIndexes1;
		NullCheck(L_1);
		CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_0 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_1 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_2 = NULL;
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		V_0 = L_0;
	}

IL_0006:
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = V_0;
		V_1 = L_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_2 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)CastclassSealed((RuntimeObject*)L_4, BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var));
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_5 = V_2;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_6 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_7;
		L_7 = InterlockedCompareExchangeImpl<BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *>((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnBoardCompleted_6()), L_5, L_6);
		V_0 = L_7;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_8 = V_0;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_9 = V_1;
		if ((!(((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_8) == ((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_0 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_1 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_2 = NULL;
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		V_0 = L_0;
	}

IL_0006:
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = V_0;
		V_1 = L_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_2 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)CastclassSealed((RuntimeObject*)L_4, BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var));
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_5 = V_2;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_6 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_7;
		L_7 = InterlockedCompareExchangeImpl<BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *>((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnBoardCompleted_6()), L_5, L_6);
		V_0 = L_7;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_8 = V_0;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_9 = V_1;
		if ((!(((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_8) == ((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::BoardCompletedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnBoardCompleted != null)
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnBoardCompleted();
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		NullCheck(L_1);
		BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_0 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_1 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_2 = NULL;
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		V_0 = L_0;
	}

IL_0006:
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = V_0;
		V_1 = L_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_2 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)CastclassSealed((RuntimeObject*)L_4, UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var));
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = V_2;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_6 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_7;
		L_7 = InterlockedCompareExchangeImpl<UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *>((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnUnlockNextCategory_7()), L_5, L_6);
		V_0 = L_7;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_8 = V_0;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_8) == ((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_0 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_1 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_2 = NULL;
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		V_0 = L_0;
	}

IL_0006:
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = V_0;
		V_1 = L_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_2 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)CastclassSealed((RuntimeObject*)L_4, UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var));
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = V_2;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_6 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_7;
		L_7 = InterlockedCompareExchangeImpl<UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *>((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnUnlockNextCategory_7()), L_5, L_6);
		V_0 = L_7;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_8 = V_0;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_8) == ((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::UnlockNextCategoryMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnUnlockNextCategory != null)
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnUnlockNextCategory();
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		NullCheck(L_1);
		UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_0 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_1 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_2 = NULL;
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		V_0 = L_0;
	}

IL_0006:
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = V_0;
		V_1 = L_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)CastclassSealed((RuntimeObject*)L_4, LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var));
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_5 = V_2;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_6 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_7;
		L_7 = InterlockedCompareExchangeImpl<LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *>((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnLoadNextLevel_8()), L_5, L_6);
		V_0 = L_7;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_8 = V_0;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_9 = V_1;
		if ((!(((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_8) == ((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_0 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_1 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_2 = NULL;
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		V_0 = L_0;
	}

IL_0006:
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = V_0;
		V_1 = L_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)CastclassSealed((RuntimeObject*)L_4, LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var));
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_5 = V_2;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_6 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_7;
		L_7 = InterlockedCompareExchangeImpl<LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *>((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnLoadNextLevel_8()), L_5, L_6);
		V_0 = L_7;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_8 = V_0;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_9 = V_1;
		if ((!(((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_8) == ((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::LoadNextLevelMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnLoadNextLevel != null)
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnLoadNextLevel();
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		NullCheck(L_1);
		LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_0 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_1 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_2 = NULL;
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		V_0 = L_0;
	}

IL_0006:
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = V_0;
		V_1 = L_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_2 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)CastclassSealed((RuntimeObject*)L_4, GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var));
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_5 = V_2;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_6 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *>((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnGameOver_9()), L_5, L_6);
		V_0 = L_7;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_8 = V_0;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_8) == ((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_0 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_1 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_2 = NULL;
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		V_0 = L_0;
	}

IL_0006:
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = V_0;
		V_1 = L_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_2 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)CastclassSealed((RuntimeObject*)L_4, GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var));
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_5 = V_2;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_6 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *>((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnGameOver_9()), L_5, L_6);
		V_0 = L_7;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_8 = V_0;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_8) == ((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::GameOverMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnGameOver != null)
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnGameOver();
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		NullCheck(L_1);
		GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnToggleSound(GameEvents/ToggleSound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnToggleSound_mFF32F60351CD03F43682E4B5FACEB1793EA473BD (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleSound_t95DC195479161739D464E187F2264F185C673FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_0 = NULL;
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_1 = NULL;
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_2 = NULL;
	{
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSound_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_1 = V_0;
		V_1 = L_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_2 = V_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)CastclassSealed((RuntimeObject*)L_4, ToggleSound_t95DC195479161739D464E187F2264F185C673FB0_il2cpp_TypeInfo_var));
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_5 = V_2;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_6 = V_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *>((ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnToggleSound_10()), L_5, L_6);
		V_0 = L_7;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_8 = V_0;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)L_8) == ((RuntimeObject*)(ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnToggleSound(GameEvents/ToggleSound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnToggleSound_m978B2DEBAFCFE02066022A7B6C5512C930A8384B (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleSound_t95DC195479161739D464E187F2264F185C673FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_0 = NULL;
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_1 = NULL;
	ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * V_2 = NULL;
	{
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSound_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_1 = V_0;
		V_1 = L_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_2 = V_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)CastclassSealed((RuntimeObject*)L_4, ToggleSound_t95DC195479161739D464E187F2264F185C673FB0_il2cpp_TypeInfo_var));
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_5 = V_2;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_6 = V_1;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *>((ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnToggleSound_10()), L_5, L_6);
		V_0 = L_7;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_8 = V_0;
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)L_8) == ((RuntimeObject*)(ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::OnToggleSoundMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_OnToggleSoundMethod_m0E4C5EE1324DFF04D03F8DF3CD5E53D5D6341319 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnToggleSound != null)
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSound_10();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnToggleSound();
		ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSound_10();
		NullCheck(L_1);
		ToggleSound_Invoke_m23D091E2A1C0D9396DBEE11670334F051310EE36(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
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
// System.Void GameLevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelData__ctor_m33420F54BFD1C356542154FA830A7738E0BB47FF (GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void GameOverScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_Start_mFDDF72E824C00B16DC7A6A96B73561A8D22D5C20 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdsButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_AdsButton_5();
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1;
		L_1 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_1);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_1, (bool)0, /*hidden argument*/NULL);
		// gameOverScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameOverScreen_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// GameEvents.OnGameOver += ShowGameOverScreen;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_3 = (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)il2cpp_codegen_object_new(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A(L_3, __this, (intptr_t)((intptr_t)GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverScreen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_OnDisable_m0358A531ABDBA5902761A1EF865D70E7DE68AB3E (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnGameOver -= ShowGameOverScreen;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)il2cpp_codegen_object_new(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A(L_0, __this, (intptr_t)((intptr_t)GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverScreen::ShowGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_ShowGameOverScreen_mAABCAF9DB50EA55BA8170833293DBA1094E85597 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(PanelDelay());
		RuntimeObject* L_0;
		L_0 = GameOverScreen_PanelDelay_m1B1F57B3E45F5EF98772F1912C6E24C4A5A85590(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// AdsButton.GetComponent<Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_AdsButton_5();
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_3);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameOverScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverScreen_PanelDelay_m1B1F57B3E45F5EF98772F1912C6E24C4A5A85590 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * L_0 = (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 *)il2cpp_codegen_object_new(U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62_il2cpp_TypeInfo_var);
		U3CPanelDelayU3Ed__5__ctor_mD8938DC850BE1C8118353E3F008CDDC9065DD43F(L_0, 0, /*hidden argument*/NULL);
		U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameOverScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen__ctor_mE9F89EF0E4A9BFE845256528F4FDE19F075BCD95 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
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
// System.Void GameUtility::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_LoadScene_m8FED8B166F5DCB07B301244433CA47835AA034E2 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_Exit_m1E8880007E56C45B659555C4B040A86A5FE16DDC (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::InstagramUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_InstagramUrl_m263ECC5EFF508C25EF568B2221B9016DD8056781 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6245206B0E8E9943409B34A70E5297CF3E6C52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://www.instagram.com/guvensrii/?hl=tr");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteralAE6245206B0E8E9943409B34A70E5297CF3E6C52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::LinkedlnUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_LinkedlnUrl_m368D2896832CA560672B59189A748F01FA11C7CD (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE287F534BCA47A81041120BEC61541E7012AACF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://www.linkedin.com/in/g�ven-sar�-1934b2149/");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteralBE287F534BCA47A81041120BEC61541E7012AACF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::ClosePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_ClosePanel_m058328F0B0B0FAFEA729A9DE8433B39FC4F81D12 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settigsPanel.GetComponent<RectTransform>().DOScale(1f, 0.5f).SetEase(Ease.InElastic);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_settigsPanel_4();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_2;
		L_2 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_1, (1.0f), (0.5f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3;
		L_3 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_2, ((int32_t)23), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// StartCoroutine(AnimPanels());
		RuntimeObject* L_4;
		L_4 = GameUtility_AnimPanels_mDAC63BD49C87E1B2535D67C445EE9BFEC45DF03D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::OpenPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_OpenPanel_m4260C1EDB84B88432A19900E0197B80CFB86CD18 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settigsPanel.GetComponent<RectTransform>().DOScale(1.2f, 1f).SetEase(Ease.InOutElastic);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_settigsPanel_4();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_2;
		L_2 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_1, (1.20000005f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3;
		L_3 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_2, ((int32_t)25), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// settigsPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_settigsPanel_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameUtility::AnimPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameUtility_AnimPanels_mDAC63BD49C87E1B2535D67C445EE9BFEC45DF03D (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * L_0 = (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A *)il2cpp_codegen_object_new(U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A_il2cpp_TypeInfo_var);
		U3CAnimPanelsU3Ed__7__ctor_m70E7A35DC7B74AF8B59DF0232BF31FE1B2E1A612(L_0, 0, /*hidden argument*/NULL);
		U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameUtility::MuteToggleMainMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_MuteToggleMainMusic_mFEC13FFBB9DCE17C06DE0F6024A4E4223C8C4390 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.instance.ToggleMainMusic();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		SoundManager_ToggleMainMusic_mCFB21056E7E31FD17A75AE7FE911A50B54663F27(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::MuteSoundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_MuteSoundMusic_m260D479F54F6848158FECF75AA05D10FC5E80C09 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.instance.ToggleSound();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		SoundManager_ToggleSound_m2E28AC533EBDF2CD8162634FD7A35B9D6DCBDF24(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility__ctor_mDF2F962B53BE7238ED6559B86238939367BB5CC3 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
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
// System.Int32 GridSquare::get_SquareIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_get_SquareIndex_m2428AE36524626F71A239B640308DA769C82EC3B (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = __this->get_U3CSquareIndexU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void GridSquare::set_SquareIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_set_SquareIndex_m88495923BF8116BF8D162DD74A782B57174BE352 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSquareIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// _index = index;
		int32_t L_0 = ___index0;
		__this->set__index_11(L_0);
		// }
		return;
	}
}
// System.Int32 GridSquare::GetIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_GetIndex_m2F76A7FC9D0A3F3F3A25BDE9E3B59FC9B094725E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// return _index;
		int32_t L_0 = __this->get__index_11();
		return L_0;
	}
}
// System.Void GridSquare::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_Start_m0B84CD678F279BDB356334B692F125D2517D44F1 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// _correct = false;
		__this->set__correct_12((bool)0);
		// _displayedImage = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set__displayedImage_8(L_0);
		// _source = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__source_13(L_1);
		// }
		return;
	}
}
// System.Void GridSquare::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnable_m81BA16D575F91335603CFC5EB9DEA65BCF19B1F3 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquareSelection += OnEnableSquareSelection;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)il2cpp_codegen_object_new(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD(L_0, __this, (intptr_t)((intptr_t)GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864(L_0, /*hidden argument*/NULL);
		// GameEvents.OnDisableSquareSelection += OnDisableSquareSelection;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)il2cpp_codegen_object_new(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399(L_1, __this, (intptr_t)((intptr_t)GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628(L_1, /*hidden argument*/NULL);
		// GameEvents.OnSelectSquare += SelectSquare;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)il2cpp_codegen_object_new(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864(L_2, __this, (intptr_t)((intptr_t)GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843(L_2, /*hidden argument*/NULL);
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_3, __this, (intptr_t)((intptr_t)GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisable_m7DC4A697B2DF06F2BA7B3BC8B2A3BEE568E03AFC (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquareSelection -= OnEnableSquareSelection;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)il2cpp_codegen_object_new(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD(L_0, __this, (intptr_t)((intptr_t)GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C(L_0, /*hidden argument*/NULL);
		// GameEvents.OnDisableSquareSelection -= OnDisableSquareSelection;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)il2cpp_codegen_object_new(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399(L_1, __this, (intptr_t)((intptr_t)GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81(L_1, /*hidden argument*/NULL);
		// GameEvents.OnSelectSquare -= SelectSquare;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)il2cpp_codegen_object_new(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864(L_2, __this, (intptr_t)((intptr_t)GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262(L_2, /*hidden argument*/NULL);
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_3, __this, (intptr_t)((intptr_t)GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_selected && squareIndexes.Contains(_index))
		bool L_0 = __this->get__selected_9();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___squareIndexes1;
		int32_t L_2 = __this->get__index_11();
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_1, L_2, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// _correct = true;
		__this->set__correct_12((bool)1);
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_5 = __this->get__correctLetterData_7();
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_image_1();
		NullCheck(L_4);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// }
		return;
	}
}
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// _clicked = true;
		__this->set__clicked_10((bool)1);
		// _selected = false;
		__this->set__selected_9((bool)0);
		// }
		return;
	}
}
// System.Void GridSquare::OnDisableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// if (_correct == true)
		bool L_0 = __this->get__correct_12();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_2 = __this->get__correctLetterData_7();
		NullCheck(L_2);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_image_1();
		NullCheck(L_1);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// _displayedImage.sprite = _normalLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_5 = __this->get__normalLetterData_5();
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_image_1();
		NullCheck(L_4);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::SelectSquare(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SelectSquare_m3E0CC32E0B71496A233D24D37C82BC3C5B97ACFC (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// if (this.gameObject.transform.position == position)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_6 = __this->get__selectedLetterData_6();
		NullCheck(L_6);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = L_6->get_image_1();
		NullCheck(L_5);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___normalLetterData0, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___selectedLetterData1, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___correctLetterData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _normalLetterData = normalLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___normalLetterData0;
		__this->set__normalLetterData_5(L_0);
		// _selectedLetterData = selectedLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_1 = ___selectedLetterData1;
		__this->set__selectedLetterData_6(L_1);
		// _correctLetterData = correctLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_2 = ___correctLetterData2;
		__this->set__correctLetterData_7(L_2);
		// GetComponent<SpriteRenderer>().sprite = normalLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_4 = ___normalLetterData0;
		NullCheck(L_4);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = L_4->get_image_1();
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseDown_m2C26127DCE1414F3600EDFD0216EFEF2F99FB745 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// OnEnableSquareSelection();
		GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596(__this, /*hidden argument*/NULL);
		// GameEvents.EnableSquareSelectionMethod();
		GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19(/*hidden argument*/NULL);
		// CheckSquare();
		GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E(__this, /*hidden argument*/NULL);
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_1 = __this->get__selectedLetterData_6();
		NullCheck(L_1);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = L_1->get_image_1();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseEnter_m83CDC0C22AEA59606D728B10BC8A5A04A1FA6770 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// CheckSquare();
		GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseUp_m2D5F21FFF6009A3FE46F82BF3B058FF3AD81FCD1 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// GameEvents.ClearSelectionMethod();
		GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783(/*hidden argument*/NULL);
		// GameEvents.DisableSquareSelectionMethod();
		GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::CheckSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_selected == false && _clicked == true)
		bool L_0 = __this->get__selected_9();
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		bool L_1 = __this->get__clicked_10();
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// _selected = true;
		__this->set__selected_9((bool)1);
		// GameEvents.CheckSquareMethod(_normalLetterData.letter, gameObject.transform.position, _index);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_2 = __this->get__normalLetterData_5();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_letter_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get__index_11();
		GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2(L_3, L_6, L_7, /*hidden argument*/NULL);
		// if (SoundManager.instance.IsSoundMuted() == false)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_8 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_8);
		bool L_9;
		L_9 = SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		// _source.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get__source_13();
		NullCheck(L_10);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void GridSquare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare__ctor_mFF3DD134AD63D7534FE89FF26C1D6623D7426798 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// private int _index = -1;
		__this->set__index_11((-1));
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
// System.Int32 SaveSystems::ReadCategoryCurrentIndexValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030 (String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var value = -1;
		V_0 = (-1);
		// if (PlayerPrefs.HasKey(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// value = PlayerPrefs.GetInt(name);
		String_t* L_2 = ___name0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0011:
	{
		// return value;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void SaveSystems::SaveCategoryData(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystems_SaveCategoryData_mCBC4C233543FD36CBE3CDE5C795E00FFA99D88E2 (String_t* ___categoryName0, int32_t ___currentIndex1, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.SetInt(categoryName, currentIndex);
		String_t* L_0 = ___categoryName0;
		int32_t L_1 = ___currentIndex1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_0, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveSystems::ClearGameData(GameLevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystems_ClearGameData_mD24F63B97794EF9B71C6891E9B03F8D0DBD9C47A (GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = ___levelData0;
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			// foreach (var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			// PlayerPrefs.SetInt(data.categoryName, -1);
			String_t* L_4 = L_3.get_categoryName_0();
			PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_4, (-1), /*hidden argument*/NULL);
		}

IL_0020:
		{
			// foreach (var data in levelData.data)
			bool L_5;
			L_5 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// PlayerPrefs.SetInt(levelData.data[0].categoryName, 0);
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_6 = ___levelData0;
		NullCheck(L_6);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_7 = L_6->get_data_4();
		NullCheck(L_7);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_8;
		L_8 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_7, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_9 = L_8.get_categoryName_0();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_9, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveSystems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystems__ctor_mD5B19429F228EEF7814B576D1BA03F97C6EB9345 (SaveSystems_t752B5853C0A1AFC9FBE2A29507B8A6F8F04BBE5B * __this, const RuntimeMethod* method)
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
// System.Void SeachingWordsList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_Start_mF861CA9A3B425FEC0EA23AEE8319AE6AE3517D38 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _wordsNumber = currentGameData.selectedBoardData.SearcingWords.Count;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * L_2 = L_1->get_SearcingWords_11();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_inline(L_2, /*hidden argument*/List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_RuntimeMethod_var);
		__this->set__wordsNumber_11(L_3);
		// if (_wordsNumber < _colums)
		int32_t L_4 = __this->get__wordsNumber_11();
		int32_t L_5 = __this->get__colums_9();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		// _rows = 1;
		__this->set__rows_10(1);
		goto IL_0038;
	}

IL_0032:
	{
		// CalculateColumsAndRowsNumbers();
		SeachingWordsList_CalculateColumsAndRowsNumbers_m54F80781D2F9514F6DA78930394482BFF57F8CF5(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// CreateWordsObject();
		SeachingWordsList_CreateWordsObject_m09B232186166C154BF5D62B980FEB795A361743A(__this, /*hidden argument*/NULL);
		// SetWordsPosition();
		SeachingWordsList_SetWordsPosition_m162CB7150A90F5718CC7E0969D4B3B53CE76E259(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SeachingWordsList::CalculateColumsAndRowsNumbers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_CalculateColumsAndRowsNumbers_m54F80781D2F9514F6DA78930394482BFF57F8CF5 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// _colums++;
		int32_t L_0 = __this->get__colums_9();
		__this->set__colums_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// _rows = _wordsNumber / _colums;
		int32_t L_1 = __this->get__wordsNumber_11();
		int32_t L_2 = __this->get__colums_9();
		__this->set__rows_10(((int32_t)((int32_t)L_1/(int32_t)L_2)));
		// } while (_rows >= maxRows);
		int32_t L_3 = __this->get__rows_10();
		int32_t L_4 = __this->get_maxRows_8();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0000;
		}
	}
	{
		// if (_colums > maxColums)
		int32_t L_5 = __this->get__colums_9();
		int32_t L_6 = __this->get_maxColums_7();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_005c;
		}
	}
	{
		// _colums = maxColums;
		int32_t L_7 = __this->get_maxColums_7();
		__this->set__colums_9(L_7);
		// _rows = _wordsNumber / _colums;
		int32_t L_8 = __this->get__wordsNumber_11();
		int32_t L_9 = __this->get__colums_9();
		__this->set__rows_10(((int32_t)((int32_t)L_8/(int32_t)L_9)));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean SeachingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeachingWordsList_TryIncreaseColumnNumber_m2D534BE708734D0757BE96D2EEADB1D1136750D4 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	{
		// _colums++;
		int32_t L_0 = __this->get__colums_9();
		__this->set__colums_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// _rows = _wordsNumber / _colums;
		int32_t L_1 = __this->get__wordsNumber_11();
		int32_t L_2 = __this->get__colums_9();
		__this->set__rows_10(((int32_t)((int32_t)L_1/(int32_t)L_2)));
		// if (_colums > maxColums)
		int32_t L_3 = __this->get__colums_9();
		int32_t L_4 = __this->get_maxColums_7();
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		// _colums = maxColums;
		int32_t L_5 = __this->get_maxColums_7();
		__this->set__colums_9(L_5);
		// _rows = _wordsNumber / _colums;
		int32_t L_6 = __this->get__wordsNumber_11();
		int32_t L_7 = __this->get__colums_9();
		__this->set__rows_10(((int32_t)((int32_t)L_6/(int32_t)L_7)));
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// if (_wordsNumber % _colums > 0)
		int32_t L_8 = __this->get__wordsNumber_11();
		int32_t L_9 = __this->get__colums_9();
		if ((((int32_t)((int32_t)((int32_t)L_8%(int32_t)L_9))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// _rows++;
		int32_t L_10 = __this->get__rows_10();
		__this->set__rows_10(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_006e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void SeachingWordsList::CreateWordsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_CreateWordsObject_m09B232186166C154BF5D62B980FEB795A361743A (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCA86DCFA33C632A1B2A480E34FEDE1E9F46B47DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var squareScale = GetVectorSquareScale(new Vector3(1f, 1f, 0.1f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = SeachingWordsList_GetVectorSquareScale_mC5FCE99923B0BE82D66F05391408774428BFAAF9(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (var index = 0; index < _wordsNumber; index++)
		V_1 = 0;
		goto IL_00ca;
	}

IL_0022:
	{
		// _words.Add(Instantiate(searchingWordPrefab) as GameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get__words_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_searchingWordPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_2, L_4, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// _words[index].transform.SetParent(this.transform);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get__words_12();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_8, L_9, /*hidden argument*/NULL);
		// _words[index].GetComponent<RectTransform>().localScale = squareScale;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get__words_12();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_12);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13;
		L_13 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_12, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		NullCheck(L_13);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
		// _words[index].GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get__words_12();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_17);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18;
		L_18 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_18, L_19, /*hidden argument*/NULL);
		// _words[index].GetComponent<SearchingWord>().SetWord(currentGameData.selectedBoardData.SearcingWords[index].Word);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get__words_12();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_22);
		SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * L_23;
		L_23 = GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9(L_22, /*hidden argument*/GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var);
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
		NullCheck(L_24);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
		NullCheck(L_25);
		List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * L_26 = L_25->get_SearcingWords_11();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * L_28;
		L_28 = List_1_get_Item_mCA86DCFA33C632A1B2A480E34FEDE1E9F46B47DE_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_mCA86DCFA33C632A1B2A480E34FEDE1E9F46B47DE_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Word_1();
		NullCheck(L_23);
		SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC(L_23, L_29, /*hidden argument*/NULL);
		// for (var index = 0; index < _wordsNumber; index++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ca:
	{
		// for (var index = 0; index < _wordsNumber; index++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get__wordsNumber_11();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 SeachingWordsList::GetVectorSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SeachingWordsList_GetVectorSquareScale_mC5FCE99923B0BE82D66F05391408774428BFAAF9 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&V_0)->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&V_0)->get_address_of_y_3();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		// if (finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->set_x_2(L_13);
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->set_y_3(L_14);
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		bool L_17;
		L_17 = SeachingWordsList_ShouldScaleDown_m5C5E0A8F3F0336A1F7AC513D086DA3BB1DDC1EF2(__this, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		return L_18;
	}
}
// System.Boolean SeachingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeachingWordsList_ShouldScaleDown_m5C5E0A8F3F0336A1F7AC513D086DA3BB1DDC1EF2 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var squareRect = searchingWordPrefab.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_searchingWordPrefab_5();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_0 = L_1;
		// var parentRect = this.GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		V_1 = L_2;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.rect.width * targetScale.x + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___targetScale0;
		float L_7 = L_6.get_x_2();
		float L_8 = __this->get_offset_6();
		(&V_2)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), (float)L_8)));
		// squareSize.y = squareRect.rect.height * targetScale.y + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = V_0;
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11;
		L_11 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___targetScale0;
		float L_13 = L_12.get_y_3();
		float L_14 = __this->get_offset_6();
		(&V_2)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), (float)L_14)));
		// var totalSquaresHeight = squareSize.y * _rows;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_2;
		float L_16 = L_15.get_y_1();
		int32_t L_17 = __this->get__rows_10();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)((float)L_17))));
		// if (totalSquaresHeight > parentRect.rect.height)
		float L_18 = V_3;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = V_1;
		NullCheck(L_19);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		L_20 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21;
		L_21 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_18) > ((float)L_21))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00aa;
	}

IL_008f:
	{
		// if (TryIncreaseColumnNumber())
		bool L_22;
		L_22 = SeachingWordsList_TryIncreaseColumnNumber_m2D534BE708734D0757BE96D2EEADB1D1136750D4(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// totalSquaresHeight = squareSize.y * _rows;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_2;
		float L_24 = L_23.get_y_1();
		int32_t L_25 = __this->get__rows_10();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_24, (float)((float)((float)L_25))));
		// }
		goto IL_00aa;
	}

IL_00a8:
	{
		// return true;
		return (bool)1;
	}

IL_00aa:
	{
		// while (totalSquaresHeight > parentRect.rect.height)
		float L_26 = V_3;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = V_1;
		NullCheck(L_27);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		L_28 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((((float)L_26) > ((float)L_29)))
		{
			goto IL_008f;
		}
	}

IL_00bc:
	{
		// var totalSquareWidth = squareSize.x * _colums;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
		float L_31 = L_30.get_x_0();
		int32_t L_32 = __this->get__colums_9();
		// if (totalSquareWidth > parentRect.rect.width)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = V_1;
		NullCheck(L_33);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		L_34 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		float L_35;
		L_35 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32))))) > ((float)L_35))))
		{
			goto IL_00dd;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00dd:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SeachingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList_SetWordsPosition_m162CB7150A90F5718CC7E0969D4B3B53CE76E259 (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__words_12();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_1, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_0 = L_2;
		// var wordOffSet = new Vector2
		// {
		//     x = squareRect.rect.width * squareRect.transform.localScale.x + offset,
		//     y = squareRect.rect.height * squareRect.transform.localScale.y + offset
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_6 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = V_0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_offset_6();
		(&V_5)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9)), (float)L_10)));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = V_0;
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14 = V_0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		float L_18 = __this->get_offset_6();
		(&V_5)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_17)), (float)L_18)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_5;
		V_1 = L_19;
		// int columnNumber = 0;
		V_2 = 0;
		// int rowNumber = 0;
		V_3 = 0;
		// var startPosition = GetFirstSquarePosition();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = SeachingWordsList_GetFirstSquarePosition_m7DA2237447531AF5BAAE2A4B3DBAD414A155D33A(__this, /*hidden argument*/NULL);
		V_4 = L_20;
		// foreach (var word in _words )
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_21 = __this->get__words_12();
		NullCheck(L_21);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_22;
		L_22 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_21, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_7 = L_22;
	}

IL_0092:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ee;
		}

IL_0094:
		{
			// foreach (var word in _words )
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
			L_23 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// if(columnNumber + 1 > _colums)
			int32_t L_24 = V_2;
			int32_t L_25 = __this->get__colums_9();
			G_B3_0 = L_23;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))) <= ((int32_t)L_25)))
			{
				G_B4_0 = L_23;
				goto IL_00ac;
			}
		}

IL_00a6:
		{
			// columnNumber = 0;
			V_2 = 0;
			// rowNumber++;
			int32_t L_26 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
			G_B4_0 = G_B3_0;
		}

IL_00ac:
		{
			// var positionX = startPosition.x + wordOffSet.x * columnNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_4;
			float L_28 = L_27.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_1;
			float L_30 = L_29.get_x_0();
			int32_t L_31 = V_2;
			V_8 = ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)L_30, (float)((float)((float)L_31))))));
			// var positionY = startPosition.y - wordOffSet.y * rowNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_4;
			float L_33 = L_32.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_1;
			float L_35 = L_34.get_y_1();
			int32_t L_36 = V_3;
			V_9 = ((float)il2cpp_codegen_subtract((float)L_33, (float)((float)il2cpp_codegen_multiply((float)L_35, (float)((float)((float)L_36))))));
			// word.GetComponent<RectTransform>().localPosition = new Vector2(positionX, positionY);
			NullCheck(G_B4_0);
			RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_37;
			L_37 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(G_B4_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
			float L_38 = V_8;
			float L_39 = V_9;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
			memset((&L_40), 0, sizeof(L_40));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), L_38, L_39, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_37, L_41, /*hidden argument*/NULL);
			// columnNumber++;
			int32_t L_42 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00ee:
		{
			// foreach (var word in _words )
			bool L_43;
			L_43 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_0094;
			}
		}

IL_00f7:
		{
			IL2CPP_LEAVE(0x107, FINALLY_00f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f9;
	}

FINALLY_00f9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(249)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(249)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x107, IL_0107)
	}

IL_0107:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 SeachingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SeachingWordsList_GetFirstSquarePosition_m7DA2237447531AF5BAAE2A4B3DBAD414A155D33A (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_1 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.0f), L_2, /*hidden argument*/NULL);
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get__words_12();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_1 = L_5;
		// var parentRect = this.GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6;
		L_6 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		V_2 = L_6;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.rect.width * squareRect.transform.localScale.x + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = V_1;
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		float L_14 = __this->get_offset_6();
		(&V_3)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_13)), (float)L_14)));
		// squareSize.y = squareRect.rect.height * squareRect.transform.localScale.y + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = V_1;
		NullCheck(L_15);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17;
		L_17 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_3();
		float L_22 = __this->get_offset_6();
		(&V_3)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_21)), (float)L_22)));
		// var shiftBy = (parentRect.rect.width - (squareSize.x * _colums)) / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = V_2;
		NullCheck(L_23);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		L_24 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		float L_25;
		L_25 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_3;
		float L_27 = L_26.get_x_0();
		int32_t L_28 = __this->get__colums_9();
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_28))))))/(float)(2.0f)));
		// startPosition.x = ((parentRect.rect.width - squareSize.x) / 2) * (-1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_29 = V_2;
		NullCheck(L_29);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_30;
		L_30 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		float L_31;
		L_31 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_3;
		float L_33 = L_32.get_x_0();
		(&V_0)->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_33))/(float)(2.0f))), (float)(-1.0f))));
		// startPosition.x += shiftBy;
		float* L_34 = (&V_0)->get_address_of_x_0();
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37 = V_4;
		*((float*)L_35) = (float)((float)il2cpp_codegen_add((float)L_36, (float)L_37));
		// startPosition.y = (parentRect.rect.height - squareSize.y) / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_38 = V_2;
		NullCheck(L_38);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_39;
		L_39 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		float L_40;
		L_40 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_3;
		float L_42 = L_41.get_y_1();
		(&V_0)->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_40, (float)L_42))/(float)(2.0f))));
		// return startPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_0;
		return L_43;
	}
}
// System.Void SeachingWordsList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeachingWordsList__ctor_m2F4B087A03439C02AB9AF01FC5EE91CADAA04ACF (SeachingWordsList_t5FA1391ACBE3B3EB997CA6A009337521EB8A190A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxColums = 5;
		__this->set_maxColums_7(5);
		// public int maxRows = 4;
		__this->set_maxRows_8(4);
		// private int _colums = 2;
		__this->set__colums_9(2);
		// private List<GameObject> _words = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set__words_12(L_0);
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
// System.Void SearchingWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_Start_mC96263F691630D45F97BDA2042A75FEDE924776A (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _source = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__source_6(L_0);
		// }
		return;
	}
}
// System.Void SearchingWord::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnEnable_mA0584F339FFA06ECAB05441C2CC76F6E275E1A24 (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_0, __this, (intptr_t)((intptr_t)SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnDisable_mBF96794A92CC340C10E45A1D97A80CC62C4060EA (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_0, __this, (intptr_t)((intptr_t)SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, const RuntimeMethod* method)
{
	{
		// _word = word;
		String_t* L_0 = ___word0;
		__this->set__word_5(L_0);
		// displayedText.text = word;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_displayedText_4();
		String_t* L_2 = ___word0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SearchingWord::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(word == _word)
		String_t* L_0 = ___word0;
		String_t* L_1 = __this->get__word_5();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		// if (SoundManager.instance.IsSoundMuted() == false)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_3);
		bool L_4;
		L_4 = SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// _source.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get__source_6();
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// gameObject.GetComponent<RectTransform>().DOMoveY(-1.5f, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_8;
		L_8 = ShortcutExtensions_DOMoveY_mB1957C5B502EF9A2ACADF4432D02D1C9606607FD(L_7, (-1.5f), (0.5f), (bool)0, /*hidden argument*/NULL);
		// gameObject.GetComponent<RectTransform>().DOScale(1.5f, 1f).SetEase(Ease.InBounce);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_9, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11;
		L_11 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_10, (1.5f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_12;
		L_12 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_11, ((int32_t)29), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// gameObject.GetComponent<CanvasGroup>().DOFade(0f,1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_14;
		L_14 = GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A(L_13, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_15;
		L_15 = DOTweenModuleUI_DOFade_mBE8F5B25D6DAB090178C1AE0A97896F09D42136C(L_14, (0.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void SearchingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord__ctor_m27168B0CD0410701BFF768E430228233D0653FEF (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
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
// System.Void SelectPuzzleButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_Start_m41E025EA8632AF3A909151F884D0A02138B78CFA (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// _levelLocked = false;
		__this->set__levelLocked_9((bool)0);
		// var button = GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		V_0 = L_0;
		// button.onClick.AddListener(OnButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = V_0;
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// UpdateButtonInformation();
		SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED(__this, /*hidden argument*/NULL);
		// if (_levelLocked)
		bool L_4 = __this->get__levelLocked_9();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = V_0;
		NullCheck(L_5);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = V_0;
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_Update_m228414E40781D8A43A40D8BE68880886FFEEF9E7 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::UpdateButtonInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_2;
	memset((&V_2), 0, sizeof(V_2));
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B13_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B14_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B16_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B15_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B17_0 = NULL;
	float G_B18_0 = 0.0f;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B18_1 = NULL;
	{
		// var currentIndex = -1;
		V_0 = (-1);
		// var totalBoards = 0;
		V_1 = 0;
		// foreach (var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = __this->get_levelData_5();
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_001a:
		{
			// foreach (var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			V_3 = L_3;
			// if (data.categoryName == gameObject.name)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4 = V_3;
			String_t* L_5 = L_4.get_categoryName_0();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7;
			L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00bf;
			}
		}

IL_003d:
		{
			// currentIndex = SaveSystems.ReadCategoryCurrentIndexValues(gameObject.name);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
			int32_t L_11;
			L_11 = SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030(L_10, /*hidden argument*/NULL);
			V_0 = L_11;
			// totalBoards = data.boardData.Count;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_12 = V_3;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_13 = L_12.get_boardData_1();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_13, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			V_1 = L_14;
			// if(levelData.data[0].categoryName==gameObject.name && currentIndex < 0)
			GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_15 = __this->get_levelData_5();
			NullCheck(L_15);
			List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_16 = L_15->get_data_4();
			NullCheck(L_16);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_17;
			L_17 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_16, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
			String_t* L_18 = L_17.get_categoryName_0();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
			L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
			bool L_21;
			L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00bf;
			}
		}

IL_0082:
		{
			int32_t L_22 = V_0;
			if ((((int32_t)L_22) >= ((int32_t)0)))
			{
				goto IL_00bf;
			}
		}

IL_0086:
		{
			// SaveSystems.SaveCategoryData(levelData.data[0].categoryName, 0);
			GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_23 = __this->get_levelData_5();
			NullCheck(L_23);
			List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_24 = L_23->get_data_4();
			NullCheck(L_24);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_25;
			L_25 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_24, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
			String_t* L_26 = L_25.get_categoryName_0();
			SaveSystems_SaveCategoryData_mCBC4C233543FD36CBE3CDE5C795E00FFA99D88E2(L_26, 0, /*hidden argument*/NULL);
			// currentIndex = SaveSystems.ReadCategoryCurrentIndexValues(gameObject.name);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
			int32_t L_29;
			L_29 = SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030(L_28, /*hidden argument*/NULL);
			V_0 = L_29;
			// totalBoards = data.boardData.Count;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_30 = V_3;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_31 = L_30.get_boardData_1();
			NullCheck(L_31);
			int32_t L_32;
			L_32 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_31, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			V_1 = L_32;
		}

IL_00bf:
		{
			// foreach (var data in levelData.data)
			bool L_33;
			L_33 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_001a;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDB, FINALLY_00cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(205)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
	}

IL_00db:
	{
		// if (currentIndex == -1)
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e6;
		}
	}
	{
		// _levelLocked = true;
		__this->set__levelLocked_9((bool)1);
	}

IL_00e6:
	{
		// categoryText.text = _levelLocked ? string.Empty : (currentIndex.ToString() + "/" + totalBoards.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = __this->get_categoryText_6();
		bool L_36 = __this->get__levelLocked_9();
		G_B12_0 = L_35;
		if (L_36)
		{
			G_B13_0 = L_35;
			goto IL_010e;
		}
	}
	{
		String_t* L_37;
		L_37 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_37, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_38, /*hidden argument*/NULL);
		G_B14_0 = L_39;
		G_B14_1 = G_B12_0;
		goto IL_0113;
	}

IL_010e:
	{
		String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_40;
		G_B14_1 = G_B13_0;
	}

IL_0113:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B14_1, G_B14_0);
		// progressBarFilling.fillAmount = (currentIndex > 0 && totalBoards > 0) ? ((float) currentIndex / (float) totalBoards) : 0f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_progressBarFilling_7();
		int32_t L_42 = V_0;
		G_B15_0 = L_41;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			G_B16_0 = L_41;
			goto IL_0126;
		}
	}
	{
		int32_t L_43 = V_1;
		G_B16_0 = G_B15_0;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B17_0 = G_B15_0;
			goto IL_012d;
		}
	}

IL_0126:
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_0132;
	}

IL_012d:
	{
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		G_B18_0 = ((float)((float)((float)((float)L_44))/(float)((float)((float)L_45))));
		G_B18_1 = G_B17_0;
	}

IL_0132:
	{
		NullCheck(G_B18_1);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(G_B18_1, G_B18_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameData.selectedCategoryName = gameObject.name;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_gameData_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_selectedCategoryName_4(L_2);
		// SceneManager.LoadScene(gameSceneName);
		String_t* L_3 = __this->get_gameSceneName_8();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton__ctor_mD345BF6E24AB90F00AD1338C25438742C761D216 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string gameSceneName = "GameScene";
		__this->set_gameSceneName_8(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__audioSource_7(L_0);
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get__audioSource_7();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ToggleMainMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleMainMusic_mCFB21056E7E31FD17A75AE7FE911A50B54663F27 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// _muteMainMusic = !_muteMainMusic;
		bool L_0 = __this->get__muteMainMusic_4();
		__this->set__muteMainMusic_4((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (_muteMainMusic)
		bool L_1 = __this->get__muteMainMusic_4();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get__audioSource_7();
		NullCheck(L_2);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get__audioSource_7();
		NullCheck(L_3);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleSound_m2E28AC533EBDF2CD8162634FD7A35B9D6DCBDF24 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// _muteSounds = !_muteSounds;
		bool L_0 = __this->get__muteSounds_5();
		__this->set__muteSounds_5((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// GameEvents.OnToggleSoundMethod();
		GameEvents_OnToggleSoundMethod_m0E4C5EE1324DFF04D03F8DF3CD5E53D5D6341319(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SoundManager::IsSoundMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteSounds;
		bool L_0 = __this->get__muteSounds_5();
		return L_0;
	}
}
// System.Boolean SoundManager::IsMainMusicMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsMainMusicMuted_mBF02DD30650A616DCECD188E046D78A948ED048C (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteMainMusic;
		bool L_0 = __this->get__muteMainMusic_4();
		return L_0;
	}
}
// System.Void SoundManager::SilienceMainMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SilienceMainMusic_m424A9735B1BA7924BE27D69BA526578E88117FA5 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, bool ___silience0, const RuntimeMethod* method)
{
	{
		// if (_muteMainMusic == false)
		bool L_0 = __this->get__muteMainMusic_4();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (silience)
		bool L_1 = ___silience0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _audioSource.volume = 0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get__audioSource_7();
		NullCheck(L_2);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_2, (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		// _audioSource.volume = 1f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get__audioSource_7();
		NullCheck(L_3);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_3, (1.0f), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
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
// System.Void SoundToggleBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleBtn_Start_mB3EE4645858BCC815433153FD5B5BCF90342DB7E (SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set__image_7(L_0);
		// _image.sprite = onSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get__image_7();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_onSprite_5();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// ToggleButton();
		SoundToggleBtn_ToggleButton_m5182F32CD1371A0AFCC555C03E1F059DE84C0960(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundToggleBtn::ToggleButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleBtn_ToggleButton_m5182F32CD1371A0AFCC555C03E1F059DE84C0960 (SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var muted = false;
		V_0 = (bool)0;
		// if (type == ButtonTypes.MainMusic)
		int32_t L_0 = __this->get_type_4();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// muted = SoundManager.instance.IsMainMusicMuted();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_1);
		bool L_2;
		L_2 = SoundManager_IsMainMusicMuted_mBF02DD30650A616DCECD188E046D78A948ED048C_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0022;
	}

IL_0017:
	{
		// muted = SoundManager.instance.IsSoundMuted();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_3);
		bool L_4;
		L_4 = SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0022:
	{
		// if (muted)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// _image.sprite = offSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get__image_7();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_offSprite_6();
		NullCheck(L_6);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// _image.sprite = onSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get__image_7();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = __this->get_onSprite_5();
		NullCheck(L_8);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundToggleBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleBtn__ctor_mBCA206146D9C1689F46C3A2C17E0DA23A2DDE36A (SoundToggleBtn_t83F1D51B5F77D08F44804B8D937AED6332F54545 * __this, const RuntimeMethod* method)
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
// System.Void UnlockLevelScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelScreen_Start_m054F2FCB861D4F3526CD5B90A93B774CD2DC225C (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// winScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_winScreen_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory += OnUnlockNextCategory;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_1, __this, (intptr_t)((intptr_t)UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E(L_1, /*hidden argument*/NULL);
		// _source = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__source_8(L_2);
		// }
		return;
	}
}
// System.Void UnlockLevelScreen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelScreen_OnDisable_mDC300B4429CBD1578F964E454EFCD5302793C9BF (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnUnlockNextCategory -= OnUnlockNextCategory;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_0, __this, (intptr_t)((intptr_t)UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnlockLevelScreen::OnUnlockNextCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelScreen_OnUnlockNextCategory_mA2328294222C7E70F1B2BFCD6380C9271E1854E3 (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool captureNext = false;
		V_0 = (bool)0;
		// foreach (var writing in categoryNames)
		List_1_tDD29283408B50139FB6E7EA6F3B6F5A76DBAC5BC * L_0 = __this->get_categoryNames_5();
		NullCheck(L_0);
		Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C  L_1;
		L_1 = List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC(L_0, /*hidden argument*/List_1_GetEnumerator_m55C06677AB82E218DEF279B116FC2AEDEFADD7AC_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_0010:
		{
			// foreach (var writing in categoryNames)
			CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  L_2;
			L_2 = Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_inline((Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_RuntimeMethod_var);
			V_2 = L_2;
			// if (captureNext)
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0035;
			}
		}

IL_001b:
		{
			// categoryText.text = writing.CategoryNameText.text;
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_categoryText_7();
			CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  L_5 = V_2;
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5.get_CategoryNameText_1();
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
			// captureNext = false;
			V_0 = (bool)0;
			// break;
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}

IL_0035:
		{
			// if (writing.name == currentGameData.selectedCategoryName)
			CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  L_8 = V_2;
			String_t* L_9 = L_8.get_name_0();
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_10 = __this->get_currentGameData_4();
			NullCheck(L_10);
			String_t* L_11 = L_10->get_selectedCategoryName_4();
			bool L_12;
			L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_004f;
			}
		}

IL_004d:
		{
			// captureNext = true;
			V_0 = (bool)1;
		}

IL_004f:
		{
			// foreach (var writing in categoryNames)
			bool L_13;
			L_13 = Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226((Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5CFB2AB52612AAA3316A3EE6AFE7535BE2237226_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0010;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A((Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4B6B1DF832C026E106040EEFB3F23392CE99E88A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// SoundManager.instance._audioSource.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_14 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_14);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = L_14->get__audioSource_7();
		NullCheck(L_15);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_15, /*hidden argument*/NULL);
		// StartCoroutine(PanelDelay());
		RuntimeObject* L_16;
		L_16 = UnlockLevelScreen_PanelDelay_m5F686D577D6A1531ABB4682E911E0AC4F2AE8BFE(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnlockLevelScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnlockLevelScreen_PanelDelay_m5F686D577D6A1531ABB4682E911E0AC4F2AE8BFE (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * L_0 = (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB *)il2cpp_codegen_object_new(U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB_il2cpp_TypeInfo_var);
		U3CPanelDelayU3Ed__9__ctor_m363DA65E598743CAA96BAF07E0DB8824265742E5(L_0, 0, /*hidden argument*/NULL);
		U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnlockLevelScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelScreen__ctor_m472DE9BCDC66EF9C261931DEF3EF3DCB25297F6F (UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * __this, const RuntimeMethod* method)
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
// System.Void WinScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_Start_m433C14CB8EDFF82D42C712D93BDCE4DA20158254 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// winPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_winPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// _source = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__source_5(L_1);
		// }
		return;
	}
}
// System.Void WinScreen::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_OnEnable_mF2269DAA9513934122FEE8319402A2E671ECB3FB (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted += ShowWinScreen;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinScreen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_OnDisable_m89BB625DF6F100DEDD4F1E503EF2E78BD2D2DBBF (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted -= ShowWinScreen;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinScreen::ShowWinScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_ShowWinScreen_mC5790DF3D58CB07208599ECF1732ADD6C9285768 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.instance._audioSource.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = L_0->get__audioSource_7();
		NullCheck(L_1);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_1, /*hidden argument*/NULL);
		// StartCoroutine(PanelDelay());
		RuntimeObject* L_2;
		L_2 = WinScreen_PanelDelay_mA1113C16B5CF23E439204256D80ABE52873CF680(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinScreen::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_LoadNextLevel_mEC35A0D4C064E3CF19C9814BBD8C695BC63A7691 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.LoadNextLevelMethod();
		GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50(/*hidden argument*/NULL);
		// SoundManager.instance._audioSource.Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = L_0->get__audioSource_7();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WinScreen::PanelDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinScreen_PanelDelay_mA1113C16B5CF23E439204256D80ABE52873CF680 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * L_0 = (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC *)il2cpp_codegen_object_new(U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC_il2cpp_TypeInfo_var);
		U3CPanelDelayU3Ed__7__ctor_m906387F7B886B4470AB8F68BCDBAC42111F1F1C4(L_0, 0, /*hidden argument*/NULL);
		U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void WinScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen__ctor_m6D01D26820E170F5597F514EA1236B4ED50AB005 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
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
// System.Void WordChecker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnEnable_m5737A19417A5C9B7910446A7D772AD791F20DABE (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare += SquareSelected;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)il2cpp_codegen_object_new(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6(L_0, __this, (intptr_t)((intptr_t)WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2(L_0, /*hidden argument*/NULL);
		// GameEvents.OnCleaerSelection += ClearSelection;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)il2cpp_codegen_object_new(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642(L_1, __this, (intptr_t)((intptr_t)WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCleaerSelection_m0DC33DC58D231B1431E30CEB8FC58C1EA74A090B(L_1, /*hidden argument*/NULL);
		// GameEvents.OnLoadNextLevel += LoadNextGameLevel;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)il2cpp_codegen_object_new(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942(L_2, __this, (intptr_t)((intptr_t)WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnDisable_m4B07689658DADDD459C2C75CF59E0B24A06DD6DA (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare -= SquareSelected;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)il2cpp_codegen_object_new(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6(L_0, __this, (intptr_t)((intptr_t)WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE(L_0, /*hidden argument*/NULL);
		// GameEvents.OnCleaerSelection -= ClearSelection;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)il2cpp_codegen_object_new(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642(L_1, __this, (intptr_t)((intptr_t)WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCleaerSelection_mC7A45AD73C1D104F76A9725FD70C66AA5CEFA315(L_1, /*hidden argument*/NULL);
		// GameEvents.OnLoadNextLevel -= LoadNextGameLevel;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)il2cpp_codegen_object_new(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942(L_2, __this, (intptr_t)((intptr_t)WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::LoadNextGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Start_m46916234D92D81CD242F90C877D346BE144AF68B (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	{
		// _assignedPoints = 0;
		__this->set__assignedPoints_7(0);
		// _completedWords = 0;
		__this->set__completedWords_8(0);
		// }
		return;
	}
}
// System.Void WordChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Update_m62F24878877CB9F2EE8E3EA014933F2230D59986 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_assignedPoints>0 && Application.isEditor)
		int32_t L_0 = __this->get__assignedPoints_7();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_013e;
		}
	}
	{
		// Debug.DrawRay(_rayUp.origin,_rayUp.direction*4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_2 = __this->get_address_of__rayUp_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_2, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_4 = __this->get_address_of__rayUp_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_3, L_6, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayDown.origin,_rayDown.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_7 = __this->get_address_of__rayDown_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_7, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_9 = __this->get_address_of__rayDown_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_8, L_11, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayLeft.origin, _rayLeft.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_12 = __this->get_address_of__rayLeft_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_12, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_14 = __this->get_address_of__rayLeft_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_13, L_16, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayRight.origin, _rayRight.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_17 = __this->get_address_of__rayRight_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_17, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_19 = __this->get_address_of__rayRight_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_18, L_21, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayDiagonalLeftUp.origin, _rayDiagonalLeftUp.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_22 = __this->get_address_of__rayDiagonalLeftUp_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_22, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_24 = __this->get_address_of__rayDiagonalLeftUp_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_23, L_26, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayDiagonalLeftDown.origin, _rayDiagonalLeftDown.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_27 = __this->get_address_of__rayDiagonalLeftDown_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_27, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_29 = __this->get_address_of__rayDiagonalLeftDown_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_28, L_31, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayDiagonalRightUp.origin, _rayDiagonalRightUp.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_32 = __this->get_address_of__rayDiagonalRightUp_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_32, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_34 = __this->get_address_of__rayDiagonalRightUp_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_33, L_36, /*hidden argument*/NULL);
		// Debug.DrawRay(_rayDiagonalRightDown.origin, _rayDiagonalRightDown.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_37 = __this->get_address_of__rayDiagonalRightDown_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_37, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_39 = __this->get_address_of__rayDiagonalRightDown_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, (4.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_38, L_41, /*hidden argument*/NULL);
	}

IL_013e:
	{
		// }
		return;
	}
}
// System.Void WordChecker::SquareSelected(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_assignedPoints == 0)
		int32_t L_0 = __this->get__assignedPoints_7();
		if (L_0)
		{
			goto IL_01dd;
		}
	}
	{
		// _rayStartPosition = squarePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___squarePosition1;
		__this->set__rayStartPosition_18(L_1);
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = __this->get__correctSquareList_19();
		int32_t L_3 = ___squareIndex2;
		NullCheck(L_2);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_2, L_3, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// _word += letter;
		String_t* L_4 = __this->get__word_6();
		String_t* L_5 = ___letter0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, L_5, /*hidden argument*/NULL);
		__this->set__word_6(L_6);
		// _rayUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___squarePosition1;
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___squarePosition1;
		float L_10 = L_9.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_15), L_12, L_14, /*hidden argument*/NULL);
		__this->set__rayUp_9(L_15);
		// _rayDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___squarePosition1;
		float L_17 = L_16.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___squarePosition1;
		float L_19 = L_18.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_22, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_24), L_21, L_23, /*hidden argument*/NULL);
		__this->set__rayDown_10(L_24);
		// _rayLeft = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, 0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___squarePosition1;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___squarePosition1;
		float L_28 = L_27.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_29), L_26, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_33), L_30, L_32, /*hidden argument*/NULL);
		__this->set__rayLeft_11(L_33);
		// _rayRight = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, 0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ___squarePosition1;
		float L_35 = L_34.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ___squarePosition1;
		float L_37 = L_36.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), L_35, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_38, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_40, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_42), L_39, L_41, /*hidden argument*/NULL);
		__this->set__rayRight_12(L_42);
		// _rayDiagonalLeftUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, 1f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___squarePosition1;
		float L_44 = L_43.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = ___squarePosition1;
		float L_46 = L_45.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_47), L_44, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_47, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_49, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_51), L_48, L_50, /*hidden argument*/NULL);
		__this->set__rayDiagonalLeftUp_14(L_51);
		// _rayDiagonalLeftDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = ___squarePosition1;
		float L_53 = L_52.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = ___squarePosition1;
		float L_55 = L_54.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_56), L_53, L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_56, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_58), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_58, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_60), L_57, L_59, /*hidden argument*/NULL);
		__this->set__rayDiagonalLeftDown_15(L_60);
		// _rayDiagonalRightUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = ___squarePosition1;
		float L_62 = L_61.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = ___squarePosition1;
		float L_64 = L_63.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_65), L_62, L_64, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_67, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_69), L_66, L_68, /*hidden argument*/NULL);
		__this->set__rayDiagonalRightUp_16(L_69);
		// _rayDiagonalRightDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = ___squarePosition1;
		float L_71 = L_70.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = ___squarePosition1;
		float L_73 = L_72.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_74), L_71, L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_74, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_76), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_76, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_78), L_75, L_77, /*hidden argument*/NULL);
		__this->set__rayDiagonalRightDown_17(L_78);
		// }
		goto IL_0268;
	}

IL_01dd:
	{
		// else if (_assignedPoints == 1)
		int32_t L_79 = __this->get__assignedPoints_7();
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_022f;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_80 = __this->get__correctSquareList_19();
		int32_t L_81 = ___squareIndex2;
		NullCheck(L_80);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_80, L_81, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// _currentRay = SelectRay(_rayStartPosition, squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = __this->get__rayStartPosition_18();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		L_83 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = ___squarePosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		L_85 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_84, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_86;
		L_86 = WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192(__this, L_83, L_85, /*hidden argument*/NULL);
		__this->set__currentRay_13(L_86);
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = ___squarePosition1;
		GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791(L_87, /*hidden argument*/NULL);
		// _word += letter;
		String_t* L_88 = __this->get__word_6();
		String_t* L_89 = ___letter0;
		String_t* L_90;
		L_90 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_88, L_89, /*hidden argument*/NULL);
		__this->set__word_6(L_90);
		// CheckWord();
		WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331(__this, /*hidden argument*/NULL);
		// }
		goto IL_0268;
	}

IL_022f:
	{
		// if (IsPointOnTheRay(_currentRay, squarePosition))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_91 = __this->get__currentRay_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92 = ___squarePosition1;
		bool L_93;
		L_93 = WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F(__this, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0268;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_94 = __this->get__correctSquareList_19();
		int32_t L_95 = ___squareIndex2;
		NullCheck(L_94);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_94, L_95, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = ___squarePosition1;
		GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791(L_96, /*hidden argument*/NULL);
		// _word += letter;
		String_t* L_97 = __this->get__word_6();
		String_t* L_98 = ___letter0;
		String_t* L_99;
		L_99 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_97, L_98, /*hidden argument*/NULL);
		__this->set__word_6(L_99);
		// CheckWord();
		WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331(__this, /*hidden argument*/NULL);
	}

IL_0268:
	{
		// _assignedPoints++;
		int32_t L_100 = __this->get__assignedPoints_7();
		__this->set__assignedPoints_7(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1)));
		// }
		return;
	}
}
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5A9159EFBE0D5B6B505347DB60EF9F19FC0E107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m17581B1CA2912C8D1A263C8A928491B0804071BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4C4538A398E0F470C57C3F0CD14B4933E079E1F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0486DD11A00771959FE4C76DC81AF875A9AF5552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var searcingWord in currentGameData.selectedBoardData.SearcingWords)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * L_2 = L_1->get_SearcingWords_11();
		NullCheck(L_2);
		Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B  L_3;
		L_3 = List_1_GetEnumerator_m0486DD11A00771959FE4C76DC81AF875A9AF5552(L_2, /*hidden argument*/List_1_GetEnumerator_m0486DD11A00771959FE4C76DC81AF875A9AF5552_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0018:
		{
			// foreach (var searcingWord in currentGameData.selectedBoardData.SearcingWords)
			SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * L_4;
			L_4 = Enumerator_get_Current_m4C4538A398E0F470C57C3F0CD14B4933E079E1F2_inline((Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4C4538A398E0F470C57C3F0CD14B4933E079E1F2_RuntimeMethod_var);
			V_1 = L_4;
			// if (_word == searcingWord.Word  && searcingWord.Found==false)
			String_t* L_5 = __this->get__word_6();
			SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = L_6->get_Word_1();
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_007f;
			}
		}

IL_0033:
		{
			SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = L_9->get_Found_0();
			if (L_10)
			{
				goto IL_007f;
			}
		}

IL_003b:
		{
			// searcingWord.Found = true;
			SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * L_11 = V_1;
			NullCheck(L_11);
			L_11->set_Found_0((bool)1);
			// GameEvents.CorrectWordMethod(_word, _correctSquareList);
			String_t* L_12 = __this->get__word_6();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = __this->get__correctSquareList_19();
			GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288(L_12, L_13, /*hidden argument*/NULL);
			// _completedWords++;
			int32_t L_14 = __this->get__completedWords_8();
			__this->set__completedWords_8(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
			// _word = string.Empty;
			String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set__word_6(L_15);
			// _correctSquareList.Clear();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = __this->get__correctSquareList_19();
			NullCheck(L_16);
			List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_16, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
			// CheckBoardCompleted();
			WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1(__this, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}

IL_007f:
		{
			// foreach (var searcingWord in currentGameData.selectedBoardData.SearcingWords)
			bool L_17;
			L_17 = Enumerator_MoveNext_m17581B1CA2912C8D1A263C8A928491B0804071BD((Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m17581B1CA2912C8D1A263C8A928491B0804071BD_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0018;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC5A9159EFBE0D5B6B505347DB60EF9F19FC0E107((Enumerator_t7369EBADECA4BE8279273E142F05ACA625FD446B *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC5A9159EFBE0D5B6B505347DB60EF9F19FC0E107_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___currentRay0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var hits = Physics.RaycastAll(currentRay, 100.0f);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = ___currentRay0;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_1;
		L_1 = Physics_RaycastAll_m72947571EFB0EFB34E48340AA2EC0C8030D27C50(L_0, (100.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < hits.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		// if (hits[i].transform.position == point)
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___point1;
		bool L_7;
		L_7 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// for (int i = 0; i < hits.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < hits.Length; i++)
		int32_t L_9 = V_1;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var direction = (secondPosition - firstPosition).normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___secondPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___firstPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_3;
		// float tolerance = 0.01f;
		V_1 = (0.00999999978f);
		// if (Mathf.Abs(direction.x) < tolerance && Mathf.Abs(direction.y - 1f) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		float L_6;
		L_6 = fabsf(L_5);
		float L_7 = V_1;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_003f;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_9, (float)(1.0f))));
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_003f;
		}
	}
	{
		// return _rayUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12 = __this->get__rayUp_9();
		return L_12;
	}

IL_003f:
	{
		// if (Mathf.Abs(direction.x) < tolerance && Mathf.Abs(direction.y - (1f)) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = V_1;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0068;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		float L_18 = L_17.get_y_1();
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract((float)L_18, (float)(1.0f))));
		float L_20 = V_1;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0068;
		}
	}
	{
		// return _rayDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_21 = __this->get__rayDown_10();
		return L_21;
	}

IL_0068:
	{
		// if (Mathf.Abs(direction.x - (-1f)) < tolerance && Mathf.Abs(direction.y) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_0;
		float L_23 = L_22.get_x_0();
		float L_24;
		L_24 = fabsf(((float)il2cpp_codegen_subtract((float)L_23, (float)(-1.0f))));
		float L_25 = V_1;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_0091;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_0;
		float L_27 = L_26.get_y_1();
		float L_28;
		L_28 = fabsf(L_27);
		float L_29 = V_1;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0091;
		}
	}
	{
		// return _rayLeft;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_30 = __this->get__rayLeft_11();
		return L_30;
	}

IL_0091:
	{
		// if (Mathf.Abs(direction.x - 1f) < tolerance && Mathf.Abs(direction.y) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_0;
		float L_32 = L_31.get_x_0();
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract((float)L_32, (float)(1.0f))));
		float L_34 = V_1;
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_00ba;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_0;
		float L_36 = L_35.get_y_1();
		float L_37;
		L_37 = fabsf(L_36);
		float L_38 = V_1;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_00ba;
		}
	}
	{
		// return _rayRight;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_39 = __this->get__rayRight_12();
		return L_39;
	}

IL_00ba:
	{
		// if (direction.x < 0f && direction.y > 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = V_0;
		float L_41 = L_40.get_x_0();
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_0;
		float L_43 = L_42.get_y_1();
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		// return _rayDiagonalLeftUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_44 = __this->get__rayDiagonalLeftUp_14();
		return L_44;
	}

IL_00db:
	{
		// if (direction.x < 0f && direction.y < 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_0;
		float L_46 = L_45.get_x_0();
		if ((!(((float)L_46) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_0;
		float L_48 = L_47.get_y_1();
		if ((!(((float)L_48) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		// return _rayDiagonalLeftDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_49 = __this->get__rayDiagonalLeftDown_15();
		return L_49;
	}

IL_00fc:
	{
		// if (direction.x > 0f && direction.y > 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = V_0;
		float L_51 = L_50.get_x_0();
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_0;
		float L_53 = L_52.get_y_1();
		if ((!(((float)L_53) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		// return _rayDiagonalRightUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_54 = __this->get__rayDiagonalRightUp_16();
		return L_54;
	}

IL_011d:
	{
		// if (direction.x > 0f && direction.y < 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_0;
		float L_56 = L_55.get_x_0();
		if ((!(((float)L_56) > ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_0;
		float L_58 = L_57.get_y_1();
		if ((!(((float)L_58) < ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		// return _rayDiagonalRightDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_59 = __this->get__rayDiagonalRightDown_17();
		return L_59;
	}

IL_013e:
	{
		// return _rayDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_60 = __this->get__rayDown_10();
		return L_60;
	}
}
// System.Void WordChecker::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _assignedPoints = 0;
		__this->set__assignedPoints_7(0);
		// _correctSquareList.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get__correctSquareList_19();
		NullCheck(L_0);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_0, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// _word = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__word_6(L_1);
		// }
		return;
	}
}
// System.Void WordChecker::CheckBoardCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C433B9EC7A9BF0F5418E3D47FC9B6A13DB79078);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// bool loadNextCategory = false;
		V_0 = (bool)0;
		// if (currentGameData.selectedBoardData.SearcingWords.Count == _completedWords)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_tF5C421F7AC16696EABFD6CDA58630115085FC1BD * L_2 = L_1->get_SearcingWords_11();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_inline(L_2, /*hidden argument*/List_1_get_Count_m2E9D876DA5C65BBDE3447F982083519BF8F0D986_RuntimeMethod_var);
		int32_t L_4 = __this->get__completedWords_8();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0135;
		}
	}
	{
		// var categoryName = currentGameData.selectedCategoryName;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_5 = __this->get_currentGameData_4();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_selectedCategoryName_4();
		V_1 = L_6;
		// var currentBoardIndex = SaveSystems.ReadCategoryCurrentIndexValues(categoryName);
		String_t* L_7 = V_1;
		int32_t L_8;
		L_8 = SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// var nextBoardIndex = -1;
		V_3 = (-1);
		// var currentCategoryIndex = 0;
		V_4 = 0;
		// bool readNextLevelName = false;
		V_5 = (bool)0;
		// for (int index = 0; index < gameLevelData.data.Count; index++)
		V_7 = 0;
		goto IL_0092;
	}

IL_0042:
	{
		// if (readNextLevelName)
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// nextBoardIndex = SaveSystems.ReadCategoryCurrentIndexValues(gameLevelData.data[index].categoryName);
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_10 = __this->get_gameLevelData_5();
		NullCheck(L_10);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_11 = L_10->get_data_4();
		int32_t L_12 = V_7;
		NullCheck(L_11);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_13;
		L_13 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_14 = L_13.get_categoryName_0();
		int32_t L_15;
		L_15 = SaveSystems_ReadCategoryCurrentIndexValues_mF1D9A600E8F83F3EFA3562BF83F2DF0289551030(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// readNextLevelName = false;
		V_5 = (bool)0;
	}

IL_0066:
	{
		// if (gameLevelData.data[index].categoryName == categoryName)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_16 = __this->get_gameLevelData_5();
		NullCheck(L_16);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_17 = L_16->get_data_4();
		int32_t L_18 = V_7;
		NullCheck(L_17);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_19;
		L_19 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_20 = L_19.get_categoryName_0();
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		// readNextLevelName = true;
		V_5 = (bool)1;
		// currentCategoryIndex = index;
		int32_t L_23 = V_7;
		V_4 = L_23;
	}

IL_008c:
	{
		// for (int index = 0; index < gameLevelData.data.Count; index++)
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0092:
	{
		// for (int index = 0; index < gameLevelData.data.Count; index++)
		int32_t L_25 = V_7;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_26 = __this->get_gameLevelData_5();
		NullCheck(L_26);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_27 = L_26->get_data_4();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline(L_27, /*hidden argument*/List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_0042;
		}
	}
	{
		// var currentLevelSize = gameLevelData.data[currentCategoryIndex].boardData.Count;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_29 = __this->get_gameLevelData_5();
		NullCheck(L_29);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_30 = L_29->get_data_4();
		int32_t L_31 = V_4;
		NullCheck(L_30);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_32;
		L_32 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_33 = L_32.get_boardData_1();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_33, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		V_6 = L_34;
		// if(currentBoardIndex < currentLevelSize)
		int32_t L_35 = V_2;
		int32_t L_36 = V_6;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00cd;
		}
	}
	{
		// currentBoardIndex += 1;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00cd:
	{
		// SaveSystems.SaveCategoryData(categoryName, currentBoardIndex);
		String_t* L_38 = V_1;
		int32_t L_39 = V_2;
		SaveSystems_SaveCategoryData_mCBC4C233543FD36CBE3CDE5C795E00FFA99D88E2(L_38, L_39, /*hidden argument*/NULL);
		// if (currentBoardIndex >= currentLevelSize)
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0128;
		}
	}
	{
		// currentCategoryIndex++;
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		// if (currentCategoryIndex < gameLevelData.data.Count) // �f this is not the last category
		int32_t L_43 = V_4;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_44 = __this->get_gameLevelData_5();
		NullCheck(L_44);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_45 = L_44->get_data_4();
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline(L_45, /*hidden argument*/List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		if ((((int32_t)L_43) >= ((int32_t)L_46)))
		{
			goto IL_012d;
		}
	}
	{
		// categoryName = gameLevelData.data[currentCategoryIndex].categoryName;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_47 = __this->get_gameLevelData_5();
		NullCheck(L_47);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_48 = L_47->get_data_4();
		int32_t L_49 = V_4;
		NullCheck(L_48);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_50;
		L_50 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_48, L_49, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_51 = L_50.get_categoryName_0();
		V_1 = L_51;
		// currentBoardIndex = 0;
		V_2 = 0;
		// loadNextCategory = true;
		V_0 = (bool)1;
		// if(nextBoardIndex <= 0)
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		// SaveSystems.SaveCategoryData(categoryName, currentBoardIndex);
		String_t* L_53 = V_1;
		int32_t L_54 = V_2;
		SaveSystems_SaveCategoryData_mCBC4C233543FD36CBE3CDE5C795E00FFA99D88E2(L_53, L_54, /*hidden argument*/NULL);
		// }
		goto IL_012d;
	}

IL_011c:
	{
		// SceneManager.LoadScene("CategoryScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7C433B9EC7A9BF0F5418E3D47FC9B6A13DB79078, /*hidden argument*/NULL);
		// }
		goto IL_012d;
	}

IL_0128:
	{
		// GameEvents.BoardCompletedMethod();
		GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23(/*hidden argument*/NULL);
	}

IL_012d:
	{
		// if (loadNextCategory)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_0135;
		}
	}
	{
		// GameEvents.UnlockNextCategoryMethod();
		GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44(/*hidden argument*/NULL);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void WordChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker__ctor_m43FC5FB866F4EFDFAD199C06E494DDF7235D2AAB (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> _correctSquareList = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set__correctSquareList_19(L_0);
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
// System.Void WordsGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_Start_m4B05CAED96B51A234DBB2EC2759941006604135B (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	{
		// SpawnGridSquares();
		WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16(__this, /*hidden argument*/NULL);
		// SetSquaresPosition();
		WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordsGrid::SetSquaresPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__squareList_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_2);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3;
		L_3 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get__squareList_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_6, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_1 = L_7;
		// var offset = new Vector2
		// {
		//     x = (squareRect.width * squareTransform.localScale.x + squareOffset) * 0.01f,
		//     y = (squareRect.height * squareTransform.localScale.y + squareOffset) * 0.01f,
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		float L_8;
		L_8 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = __this->get_squareOffset_7();
		(&V_6)->set_x_0(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_11)), (float)L_12)), (float)(0.00999999978f))));
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		float L_17 = __this->get_squareOffset_7();
		(&V_6)->set_y_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_16)), (float)L_17)), (float)(0.00999999978f))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_6;
		V_2 = L_18;
		// var startPosition = GetFirstSquarePosition();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB(__this, /*hidden argument*/NULL);
		V_3 = L_19;
		// int columnNumber = 0;
		V_4 = 0;
		// int rowNumber = 0;
		V_5 = 0;
		// foreach (var square in _squareList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get__squareList_9();
		NullCheck(L_20);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_21;
		L_21 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_20, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_7 = L_21;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010d;
		}

IL_00a3:
		{
			// foreach (var square in _squareList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
			L_22 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// if (rowNumber + 1 > currentGameData.selectedBoardData.Rows)
			int32_t L_23 = V_5;
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
			NullCheck(L_24);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
			NullCheck(L_25);
			int32_t L_26 = L_25->get_Rows_9();
			G_B3_0 = L_22;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))) <= ((int32_t)L_26)))
			{
				G_B4_0 = L_22;
				goto IL_00c9;
			}
		}

IL_00c0:
		{
			// columnNumber++;
			int32_t L_27 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
			// rowNumber = 0;
			V_5 = 0;
			G_B4_0 = G_B3_0;
		}

IL_00c9:
		{
			// var positionX = startPosition.x + offset.x * columnNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_3;
			float L_29 = L_28.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
			float L_31 = L_30.get_x_0();
			int32_t L_32 = V_4;
			V_8 = ((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32))))));
			// var positionY = startPosition.y - offset.y * rowNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_3;
			float L_34 = L_33.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_2;
			float L_36 = L_35.get_y_1();
			int32_t L_37 = V_5;
			V_9 = ((float)il2cpp_codegen_subtract((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)((float)((float)L_37))))));
			// square.GetComponent<Transform>().position = new Vector2(positionX, positionY);
			NullCheck(G_B4_0);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
			L_38 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(G_B4_0, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
			float L_39 = V_8;
			float L_40 = V_9;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
			memset((&L_41), 0, sizeof(L_41));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), L_39, L_40, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_41, /*hidden argument*/NULL);
			NullCheck(L_38);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_38, L_42, /*hidden argument*/NULL);
			// rowNumber++;
			int32_t L_43 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_010d:
		{
			// foreach (var square in _squareList)
			bool L_44;
			L_44 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_00a3;
			}
		}

IL_0116:
		{
			IL2CPP_LEAVE(0x126, FINALLY_0118);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0118;
	}

FINALLY_0118:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(280)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(280)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x126, IL_0126)
	}

IL_0126:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.0f), L_2, /*hidden argument*/NULL);
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get__squareList_9();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_4);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6;
		L_6 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get__squareList_9();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_8, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_9, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_2 = L_10;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.width * squareTransform.localScale.x;
		float L_11;
		L_11 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_2;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		(&V_3)->set_x_0(((float)il2cpp_codegen_multiply((float)L_11, (float)L_14)));
		// squareSize.y = squareRect.height * squareTransform.localScale.y;
		float L_15;
		L_15 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_2;
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		(&V_3)->set_y_1(((float)il2cpp_codegen_multiply((float)L_15, (float)L_18)));
		// var midWidthPosition = (((currentGameData.selectedBoardData.Colums - 1) * squareSize.x) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_19 = __this->get_currentGameData_4();
		NullCheck(L_19);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_20 = L_19->get_selectedBoardData_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_Colums_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_3;
		float L_23 = L_22.get_x_0();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))), (float)L_23))/(float)(2.0f))), (float)(0.00999999978f)));
		// var midWidthHeight = (((currentGameData.selectedBoardData.Rows - 1) * squareSize.y) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
		NullCheck(L_24);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Rows_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_3;
		float L_28 = L_27.get_y_1();
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))), (float)L_28))/(float)(2.0f))), (float)(0.00999999978f)));
		// startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
		float L_29 = V_4;
		G_B1_0 = (&V_0);
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_0);
			goto IL_00ee;
		}
	}
	{
		float L_30 = V_4;
		G_B3_0 = L_30;
		G_B3_1 = G_B1_0;
		goto IL_00f6;
	}

IL_00ee:
	{
		float L_31 = V_4;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_31, (float)(-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00f6:
	{
		G_B3_1->set_x_0(G_B3_0);
		// startPosition.y += midWidthHeight;
		float* L_32 = (&V_0)->get_address_of_y_1();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		float L_35 = V_5;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add((float)L_34, (float)L_35));
		// return startPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_0;
		return L_36;
	}
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7D8D77B27322582696119B9D09FA75671AA502);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * V_5 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_6 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_7 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_8 = NULL;
	{
		// if (currentGameData != null)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0208;
		}
	}
	{
		// var squareScale = GetSquareScale(new Vector3(1.5f, 1.5f, 0.1f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.5f), (1.5f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// foreach (var squares in currentGameData.selectedBoardData.Board)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_4 = __this->get_currentGameData_4();
		NullCheck(L_4);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_5 = L_4->get_selectedBoardData_5();
		NullCheck(L_5);
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_6 = L_5->get_Board_10();
		V_1 = L_6;
		V_2 = 0;
		goto IL_01ff;
	}

IL_0044:
	{
		// foreach (var squares in currentGameData.selectedBoardData.Board)
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// foreach (var squareLetter in squares.Row)
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10->get_Row_1();
		V_3 = L_11;
		V_4 = 0;
		goto IL_01f1;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_12 = (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6(L_12, /*hidden argument*/NULL);
		V_5 = L_12;
		// foreach (var squareLetter in squares.Row)
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_13 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		L_13->set_squareLetter_0(L_17);
		// var normalLetterData = alphabetData.AlphabetNormal.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_18 = __this->get_alphabetData_6();
		NullCheck(L_18);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_19 = L_18->get_AlphabetNormal_5();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_20 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_21 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_19);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_22;
		L_22 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_19, L_21, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_6 = L_22;
		// var selectedLetterData = alphabetData.AlphabetHighlighted.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_23 = __this->get_alphabetData_6();
		NullCheck(L_23);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_24 = L_23->get_AlphabetHighlighted_6();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_25 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_26 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_24);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_27;
		L_27 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_24, L_26, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_7 = L_27;
		// var correctLetterData = alphabetData.AlphabetWrong.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_28 = __this->get_alphabetData_6();
		NullCheck(L_28);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_29 = L_28->get_AlphabetWrong_7();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_30 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_31 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_31, L_30, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_29);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_32;
		L_32 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_29, L_31, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_8 = L_32;
		// if (normalLetterData.image == null || selectedLetterData.image == null)
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_33 = V_6;
		NullCheck(L_33);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_34 = L_33->get_image_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00e2;
		}
	}
	{
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_36 = V_7;
		NullCheck(L_36);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_37 = L_36->get_image_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00fd;
		}
	}

IL_00e2:
	{
		// Debug.LogError("All fields in your array should have some letters. Press fill up  with random button in your board data to add random letter. Letter :" + squareLetter);
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_39 = V_5;
		NullCheck(L_39);
		String_t* L_40 = L_39->get_squareLetter_0();
		String_t* L_41;
		L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1C7D8D77B27322582696119B9D09FA75671AA502, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_41, /*hidden argument*/NULL);
		// }
		goto IL_01eb;
	}

IL_00fd:
	{
		// _squareList.Add(Instantiate(gridSquarePrefab));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_42 = __this->get__squareList_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_gridSquarePrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_43, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_42, L_44, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetSprite(normalLetterData, correctLetterData, selectedLetterData);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_45 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_46 = __this->get__squareList_9();
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_46, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_48);
		GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * L_49;
		L_49 = GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7(L_48, /*hidden argument*/GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_50 = V_6;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_51 = V_8;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_52 = V_7;
		NullCheck(L_49);
		GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374(L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].transform.SetParent(this.transform);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_53 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_54 = __this->get__squareList_9();
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_54, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_53, ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_57, L_58, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].GetComponent<Transform>().position = new Vector3(0f, 0f, 0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_59 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_60 = __this->get__squareList_9();
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_60, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_59);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_59, ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_62, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_64), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_63, L_64, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].transform.localScale = squareScale;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_66 = __this->get__squareList_9();
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_66, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68;
		L_68 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_65, ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_68);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_0;
		NullCheck(L_69);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_69, L_70, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetIndex(_squareList.Count - 1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_71 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_72 = __this->get__squareList_9();
		NullCheck(L_72);
		int32_t L_73;
		L_73 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_72, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_71);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_71, ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_74);
		GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * L_75;
		L_75 = GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7(L_74, /*hidden argument*/GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_76 = __this->get__squareList_9();
		NullCheck(L_76);
		int32_t L_77;
		L_77 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_76, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_75);
		GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline(L_75, ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_01eb:
	{
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01f1:
	{
		// foreach (var squareLetter in squares.Row)
		int32_t L_79 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_3;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_01ff:
	{
		// foreach (var squares in currentGameData.selectedBoardData.Board)
		int32_t L_82 = V_2;
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_83 = V_1;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_0208:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&V_0)->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&V_0)->get_address_of_y_3();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		// if (finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->set_x_2(L_13);
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->set_y_3(L_14);
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		bool L_17;
		L_17 = WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670(__this, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		return L_18;
	}
}
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	{
		// var squareRect = gridSquarePrefab.GetComponent<SpriteRenderer>().sprite.rect;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gridSquarePrefab_5();
		NullCheck(L_0);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var startPositon = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = (squareRect.width + targetScale.x) + squareOffset;
		float L_4;
		L_4 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___targetScale0;
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_squareOffset_7();
		(&V_1)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_4, (float)L_6)), (float)L_7)));
		// squareSize.y = (squareRect.height + targetScale.y) + squareOffset;
		float L_8;
		L_8 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___targetScale0;
		float L_10 = L_9.get_y_3();
		float L_11 = __this->get_squareOffset_7();
		(&V_1)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_8, (float)L_10)), (float)L_11)));
		// var midWidthPosition = ((currentGameData.selectedBoardData.Colums * squareSize.x) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_12 = __this->get_currentGameData_4();
		NullCheck(L_12);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_13 = L_12->get_selectedBoardData_5();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_Colums_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		float L_16 = L_15.get_x_0();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_14)), (float)L_16))/(float)(2.0f))), (float)(0.00999999978f)));
		// var midWidthHeight = ((currentGameData.selectedBoardData.Rows + squareSize.y) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_17 = __this->get_currentGameData_4();
		NullCheck(L_17);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_18 = L_17->get_selectedBoardData_5();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_Rows_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		float L_21 = L_20.get_y_1();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)((float)((float)L_19)), (float)L_21))/(float)(2.0f))), (float)(0.00999999978f)));
		// startPositon.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
		float L_22 = V_3;
		G_B1_0 = (&V_2);
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_2);
			goto IL_00c8;
		}
	}
	{
		float L_23 = V_3;
		G_B3_0 = L_23;
		G_B3_1 = G_B1_0;
		goto IL_00cf;
	}

IL_00c8:
	{
		float L_24 = V_3;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_24, (float)(-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00cf:
	{
		G_B3_1->set_x_0(G_B3_0);
		// startPositon.y = midWidthHeight;
		float L_25 = V_4;
		(&V_2)->set_y_1(L_25);
		// return (startPositon.x < GetHalfScreenWidth() * -1 || startPositon.y > topPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_2;
		float L_27 = L_26.get_x_0();
		float L_28;
		L_28 = WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1(__this, /*hidden argument*/NULL);
		if ((((float)L_27) < ((float)((float)il2cpp_codegen_multiply((float)L_28, (float)(-1.0f))))))
		{
			goto IL_0100;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_2;
		float L_30 = L_29.get_y_1();
		float L_31 = __this->get_topPosition_8();
		return (bool)((((float)L_30) > ((float)L_31))? 1 : 0);
	}

IL_0100:
	{
		return (bool)1;
	}
}
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float height = Camera.main.orthographicSize * 2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f)));
		// float width = (1.7f * height) * Screen.width / Screen.height;
		float L_2 = V_0;
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		// return width / 2;
		return ((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(1.70000005f), (float)L_2)), (float)((float)((float)L_3))))/(float)((float)((float)L_4))))/(float)(2.0f)));
	}
}
// System.Void WordsGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid__ctor_m4EAFCE122954E87908D2CEB7119F96DFFDE8017B (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _squareList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set__squareList_9(L_0);
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
// System.Void AlphabetData/LetterData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterData__ctor_mDAAB3E949209FD6380AE1E8F2C61DDDEC826DAEC (LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * __this, const RuntimeMethod* method)
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
// System.Void BoardData/BoardRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m3A5692E705DE90995605D0A03D9BF5D8CEB8CF41 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method)
{
	{
		// public BoardRow()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// public BoardRow(int size)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// CreateRow(size);
		int32_t L_0 = ___size0;
		BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Size = size;
		int32_t L_0 = ___size0;
		__this->set_Size_0(L_0);
		// Row = new string[Size];
		int32_t L_1 = __this->get_Size_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_Row_1(L_2);
		// ClearRow();
		BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Size; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Row[i] = "";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_Row_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 0; i < Size; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < Size; i++)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_Size_0();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Void BoardData/SearcingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearcingWord__ctor_mBA1FC3EB7E2CC4CA19C7CFA1E1D1A832E45BE420 (SearcingWord_t9145835F30824FD1C4B13E156325B689C45BDA3C * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/BoardCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/BoardCompleted::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/BoardCompleted::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoardCompleted_BeginInvoke_mD0A695590AAE7C2BFBB1E076AF81705B216F273A (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/BoardCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_EndInvoke_mBCE10A81144DB389C8C085304C2F4E00CA3B757C (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___letter0' to native representation
	char* ____letter0_marshaled = NULL;
	____letter0_marshaled = il2cpp_codegen_marshal_string(___letter0);

	// Native function invocation
	il2cppPInvokeFunc(____letter0_marshaled, ___squarePosition1, ___squareIndex2);

	// Marshaling cleanup of parameter '___letter0' native representation
	il2cpp_codegen_marshal_free(____letter0_marshaled);
	____letter0_marshaled = NULL;

}
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						GenericVirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, ___letter0, ___squarePosition1, ___squareIndex2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___letter0, ___squarePosition1, ___squareIndex2);
					else
						VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___letter0, ___squarePosition1, ___squareIndex2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						GenericVirtActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						VirtActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/CheckSquare::BeginInvoke(System.String,UnityEngine.Vector3,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckSquare_BeginInvoke_mAB7A30AD53370A4215D313F7E1DFA9AC332A9165 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___letter0;
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___squarePosition1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___squareIndex2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GameEvents/CheckSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_EndInvoke_m12860D545CDED617BBF1376601937FDCC30E59B9 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/ClearSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClearSelection_BeginInvoke_m0DA56E40B9EB7AB1FD54FF7FCAFDAF68B732C150 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/ClearSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_EndInvoke_mF409D6D0EB1633FE9D6F989012BBC2F9E6469EE2 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___word0, ___squareIndexes1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, ___word0, ___squareIndexes1);
					else
						GenericVirtActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, ___word0, ___squareIndexes1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___word0, ___squareIndexes1);
					else
						VirtActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___word0, ___squareIndexes1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, targetThis, ___word0, ___squareIndexes1);
					else
						GenericVirtActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, targetThis, ___word0, ___squareIndexes1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___word0, ___squareIndexes1);
					else
						VirtActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___word0, ___squareIndexes1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___word0, ___squareIndexes1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/CorrectWord::BeginInvoke(System.String,System.Collections.Generic.List`1<System.Int32>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorrectWord_BeginInvoke_m08DEBACAA1C9A4A6C2F2ACF882033C7A55536AD2 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___word0;
	__d_args[1] = ___squareIndexes1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GameEvents/CorrectWord::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_EndInvoke_m92F398065E87D77FB9602486983CAD6468C641B9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/DisableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/DisableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/DisableSquareSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisableSquareSelection_BeginInvoke_m441469DD5B694E533C6FF4EAD009F95A0A4C294C (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/DisableSquareSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_EndInvoke_mF51E9EB7FF687DEA87A359AB3B6FDE96F8CDF867 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/EnableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/EnableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/EnableSquareSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnableSquareSelection_BeginInvoke_mD6A68DD75C568269975DB9FB0E61CA2DD590F2EB (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/EnableSquareSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_EndInvoke_mF661F4431C9949DF3F76ADE1A62384D57A310269 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/GameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/GameOver::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/GameOver::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_BeginInvoke_mCA5CE6EE48C606BF0DE15193C0F63FB8E40193C3 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/GameOver::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_EndInvoke_m3D65902582B59D94FC49E2AA552887F84CEBE1C5 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/LoadNextLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/LoadNextLevel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/LoadNextLevel::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadNextLevel_BeginInvoke_mF6B7E9602D4E1C4BBFF1FB7BD31104EA463ED4C8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/LoadNextLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_EndInvoke_mA1EAD2872B55DECF2C8869EF7ED0AFDD6C52AF95 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/SelectSquare::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectSquare_BeginInvoke_m086704DDE835DE0498037907C58D0AF0299BE65F (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GameEvents/SelectSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_EndInvoke_m480A61CB93CBC60CD9A16BF1F8231D4550E59E3C (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/ToggleSound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSound__ctor_m888391263C7140C523539CDC1EA65957429D0595 (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/ToggleSound::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSound_Invoke_m23D091E2A1C0D9396DBEE11670334F051310EE36 (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/ToggleSound::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleSound_BeginInvoke_m9CE4282D4C743E571DADECAFF470D5EF05713BEE (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/ToggleSound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSound_EndInvoke_m1CB289392A2D1C1EFE3EB5A842A3F8BF51F60A46 (ToggleSound_t95DC195479161739D464E187F2264F185C673FB0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/UnlockNextCategory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/UnlockNextCategory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/UnlockNextCategory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnlockNextCategory_BeginInvoke_mBE5923C5DDEF4A3540C41889A64FCB8401E421FE (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/UnlockNextCategory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_EndInvoke_m1AC3D96C5C33449FC5C7E82A23EE39B4D5AE68FF (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke_back(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke_cleanup(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com_back(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com_cleanup(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled)
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
// System.Void GameOverScreen/<PanelDelay>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__5__ctor_mD8938DC850BE1C8118353E3F008CDDC9065DD43F (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameOverScreen/<PanelDelay>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__5_System_IDisposable_Dispose_mC8D7AFABD851470F9338716D8EC1AA8F1737E73A (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameOverScreen/<PanelDelay>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPanelDelayU3Ed__5_MoveNext_m1F633DBA5CF175EE4857142D7ADABE1C0B2FF40A (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameOverScreen.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
		GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameOverScreen_4();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_8;
		L_8 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_7, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9;
		L_9 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_8, ((int32_t)30), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// gameOverScreen.SetActive(true);
		GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_gameOverScreen_4();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameOverScreen/<PanelDelay>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC67A5EE00F3AB78EF20872971512934F5C36DC43 (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameOverScreen/<PanelDelay>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__5_System_Collections_IEnumerator_Reset_mA93FACC396C16D999F8EF9502F18312644100AB0 (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPanelDelayU3Ed__5_System_Collections_IEnumerator_Reset_mA93FACC396C16D999F8EF9502F18312644100AB0_RuntimeMethod_var)));
	}
}
// System.Object GameOverScreen/<PanelDelay>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__5_System_Collections_IEnumerator_get_Current_mC4152BEB0AB3AA79E6A4E9AF6DEECE5268885552 (U3CPanelDelayU3Ed__5_t81771419EDF837B4C1202E6C6FADED133E1B6E62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameUtility/<AnimPanels>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimPanelsU3Ed__7__ctor_m70E7A35DC7B74AF8B59DF0232BF31FE1B2E1A612 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameUtility/<AnimPanels>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimPanelsU3Ed__7_System_IDisposable_Dispose_m05177ED22BAD706AAA14CAFC44D91965C76CBA04 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameUtility/<AnimPanels>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimPanelsU3Ed__7_MoveNext_mEEE0AB42B726A97C13FFD96122E33DE75373AB45 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// settigsPanel.SetActive(false);
		GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_settigsPanel_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameUtility/<AnimPanels>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimPanelsU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD52FF1F333D50F29C2CC91AE4A05D0425F4700A9 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameUtility/<AnimPanels>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimPanelsU3Ed__7_System_Collections_IEnumerator_Reset_mD0E58D6988C32D266FB5BA2B8D6B33CEBFB1AA55 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimPanelsU3Ed__7_System_Collections_IEnumerator_Reset_mD0E58D6988C32D266FB5BA2B8D6B33CEBFB1AA55_RuntimeMethod_var)));
	}
}
// System.Object GameUtility/<AnimPanels>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimPanelsU3Ed__7_System_Collections_IEnumerator_get_Current_mF0281290A3194E782F1FF80337B7ECBBADA47D59 (U3CAnimPanelsU3Ed__7_t5C7E0AC748B422BAAEAE680878A95567ED7C530A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnlockLevelScreen/<PanelDelay>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__9__ctor_m363DA65E598743CAA96BAF07E0DB8824265742E5 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnlockLevelScreen/<PanelDelay>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__9_System_IDisposable_Dispose_m063A35C9F8DB88D0E64928FEAD0CA4DB2B61F9F8 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnlockLevelScreen/<PanelDelay>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPanelDelayU3Ed__9_MoveNext_mE474A7AEB70200902E157AEDC3421E898D0D6D27 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// winScreen.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
		UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_winScreen_6();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_8;
		L_8 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_7, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9;
		L_9 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_8, ((int32_t)30), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// winScreen.SetActive(true);
		UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_winScreen_6();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// if (SoundManager.instance.IsSoundMuted() == false)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_12 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_12);
		bool L_13;
		L_13 = SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0083;
		}
	}
	{
		// _source.Play();
		UnlockLevelScreen_tB46CE7AF6990109B859C87BD431363AE42094F32 * L_14 = V_1;
		NullCheck(L_14);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = L_14->get__source_8();
		NullCheck(L_15);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_15, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnlockLevelScreen/<PanelDelay>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB75ED7E4DB5CEBAE4E4A6F0C366295D71DB0E9B7 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnlockLevelScreen/<PanelDelay>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__9_System_Collections_IEnumerator_Reset_m39A69DB2A80CDB8F639FB046FD39D7605F57E9F9 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPanelDelayU3Ed__9_System_Collections_IEnumerator_Reset_m39A69DB2A80CDB8F639FB046FD39D7605F57E9F9_RuntimeMethod_var)));
	}
}
// System.Object UnlockLevelScreen/<PanelDelay>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__9_System_Collections_IEnumerator_get_Current_m70514477DC9D1A84640638115C0FCAA5A0CCABD9 (U3CPanelDelayU3Ed__9_t35BFCBDD5F72DC26065E1F4205F15655A6E92CCB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: UnlockLevelScreen/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_pinvoke(const CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8& unmarshaled, CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___CategoryNameText_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CategoryNameText' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CategoryNameText_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_pinvoke_back(const CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_pinvoke& marshaled, CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8& unmarshaled)
{
	Exception_t* ___CategoryNameText_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CategoryNameText' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CategoryNameText_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnlockLevelScreen/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_pinvoke_cleanup(CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnlockLevelScreen/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_com(const CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8& unmarshaled, CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_com& marshaled)
{
	Exception_t* ___CategoryNameText_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CategoryNameText' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CategoryNameText_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_com_back(const CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_com& marshaled, CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8& unmarshaled)
{
	Exception_t* ___CategoryNameText_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CategoryNameText' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CategoryNameText_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnlockLevelScreen/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshal_com_cleanup(CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8_marshaled_com& marshaled)
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
// System.Void WinScreen/<PanelDelay>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__7__ctor_m906387F7B886B4470AB8F68BCDBAC42111F1F1C4 (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WinScreen/<PanelDelay>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__7_System_IDisposable_Dispose_m77FF506DE17924747B5E3E10B4CFBDBAE5D70B2A (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WinScreen/<PanelDelay>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPanelDelayU3Ed__7_MoveNext_m2525314DDCCCE6287000753AE7EDA45A417C7D85 (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// winPanel.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
		WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_winPanel_4();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_8;
		L_8 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_7, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9;
		L_9 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_8, ((int32_t)30), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// winPanel.SetActive(true);
		WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_winPanel_4();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// if (SoundManager.instance.IsSoundMuted() == false)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_12 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_12);
		bool L_13;
		L_13 = SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0083;
		}
	}
	{
		// _source.Play();
		WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * L_14 = V_1;
		NullCheck(L_14);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = L_14->get__source_5();
		NullCheck(L_15);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_15, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// }
		return (bool)0;
	}
}
// System.Object WinScreen/<PanelDelay>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m586E143C9256D12565B9FCD4754B79A665EDA2B9 (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WinScreen/<PanelDelay>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPanelDelayU3Ed__7_System_Collections_IEnumerator_Reset_m05247750DD5C252AFF9D88813AFDED8B1AE4E97B (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPanelDelayU3Ed__7_System_Collections_IEnumerator_Reset_m05247750DD5C252AFF9D88813AFDED8B1AE4E97B_RuntimeMethod_var)));
	}
}
// System.Object WinScreen/<PanelDelay>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPanelDelayU3Ed__7_System_Collections_IEnumerator_get_Current_mC3DD757FF43ACAAF75EEFF93BCA88F0C1F6F1C25 (U3CPanelDelayU3Ed__7_t3F4D70479A67E89A2F232ED86CF65CDA2AC6FACC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__0(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var normalLetterData = alphabetData.AlphabetNormal.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__1(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var selectedLetterData = alphabetData.AlphabetHighlighted.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__2(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var correctLetterData = alphabetData.AlphabetWrong.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsSoundMuted_m56B59BDF14D2C1FE40D967F663B9DCF3C49880CE_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteSounds;
		bool L_0 = __this->get__muteSounds_5();
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsMainMusicMuted_mBF02DD30650A616DCECD188E046D78A948ED048C_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteMainMusic;
		bool L_0 = __this->get__muteMainMusic_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// _index = index;
		int32_t L_0 = ___index0;
		__this->set__index_11(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	{
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_0 = (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )__this->get_current_3();
		return (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* L_2 = (CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18*)__this->get__items_1();
		int32_t L_3 = ___index0;
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18*)L_2, (int32_t)L_3);
		return (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  Enumerator_get_Current_m9D2567BB66E877C49F5A03DC0CF2F840DF6E4F30_gshared_inline (Enumerator_tAE3365B6832A80112953F747D9E469D96BBEBB5C * __this, const RuntimeMethod* method)
{
	{
		CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8  L_0 = (CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8 )__this->get_current_3();
		return (CategoryNames_t09D838F906247D051E834E074DFADDD4ECD03CB8 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
