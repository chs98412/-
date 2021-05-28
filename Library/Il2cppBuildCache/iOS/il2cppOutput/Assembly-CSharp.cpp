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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy_move
struct Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameDirector
struct GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HomeManager
struct HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D;
// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312;
// IntroManager
struct IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Movement2D
struct Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PangAction
struct PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781;
// Firebase.Database.Query
struct Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// UnityEngine.Experimental.U2D.Animation.SpriteResolver
struct SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// StageDirector
struct StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// baseVillain
struct baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC;
// boss
struct boss_t7103983475D183857493FCA2A27B2EE9F5FB1906;
// coin
struct coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0;
// coinpoint
struct coinpoint_t15C116EFAB0F08663361AA501BAA7201C0979E13;
// createAcc
struct createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1;
// life
struct life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140;
// loadingScene
struct loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595;
// loginButton
struct loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088;
// mainCam
struct mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA;
// mainbullet
struct mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139;
// maincharac
struct maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878;
// monsterDirector
struct monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066;
// pumpkinVillain
struct pumpkinVillain_tDDD57E1CEF1358FE7DB029E92E32108D4507AA37;
// pumpkinbullet
struct pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015;
// score
struct score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0;
// shopManager
struct shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A;
// showtime
struct showtime_t1870F3498DFC66F1E9E6AAC3A2CB2DF499AE9941;
// test1
struct test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8;
// villain
struct villain_t36822447411B12AFA160394514518E023B217EF9;
// villainbullet
struct villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53;
// villaintest
struct villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC;
// villaintest1
struct villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Enemy_move/<CircleFire>d__15
struct U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// IntroManager/<DelayTime>d__3
struct U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// createAcc/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B;
// createAcc/User
struct User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33;
// loginButton/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945;
// test1/Rank
struct Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D;
// villaintest/<Fade>d__12
struct U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB;
// villaintest/<Fadeinout>d__14
struct U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B;
// villaintest/<randomPosition>d__13
struct U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA;
IL2CPP_EXTERN_C String_t* _stringLiteral04CA4D387B77ECEE2040BD9095D4D1F9367DF75D;
IL2CPP_EXTERN_C String_t* _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral07CA0A175EFD1E0F8E0D4D195D2192C81908506C;
IL2CPP_EXTERN_C String_t* _stringLiteral087E27DCB4243AE7198BDAB977D499B94DE873B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0;
IL2CPP_EXTERN_C String_t* _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral14F60CD08E7FCE2AA0675DD451AE3FF73C76CF39;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral173A065602D2168DAFC7152C6DC10A29F321DFA7;
IL2CPP_EXTERN_C String_t* _stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA43511766BB4606252F94AFA68DFFB1B75EF47;
IL2CPP_EXTERN_C String_t* _stringLiteral1CB13E17177673B2B7E554B1DB98D541268EBCE7;
IL2CPP_EXTERN_C String_t* _stringLiteral21876620373FA9BF34BDCF8E62CFCB833D1CC292;
IL2CPP_EXTERN_C String_t* _stringLiteral24BA63AD9541A609A85810D39D39173A61892C52;
IL2CPP_EXTERN_C String_t* _stringLiteral24C37B01D08EB541DD2BD128ED0053B9A7599F52;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral284BBF7B811E286391AE82799A57BC72D90BA838;
IL2CPP_EXTERN_C String_t* _stringLiteral28AED19FD8D38E6833B6290B18C0DABE36F2BAB4;
IL2CPP_EXTERN_C String_t* _stringLiteral2B94B165661F00B412449BA02B959ADB3DE172A5;
IL2CPP_EXTERN_C String_t* _stringLiteral30EB9E5172A4A7996D52BEC0948DEA1832B922EE;
IL2CPP_EXTERN_C String_t* _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0E2CF4CEC631E8A11039AEF6208E2587580E31;
IL2CPP_EXTERN_C String_t* _stringLiteral3D49E2B14630B791BC89266157757946907F3DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589;
IL2CPP_EXTERN_C String_t* _stringLiteral44415D89E35210070F6F3BE8461E20645E5EA896;
IL2CPP_EXTERN_C String_t* _stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4949474A6FEC1FA9647289C5172F9549A96542B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5044762E5528B8D5EB03C33C6A3A3686E8235EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3A1F502D13E67AD0DA81BCFCFF87C3997E2A43;
IL2CPP_EXTERN_C String_t* _stringLiteral6190AFADEC29E0B4A376FEE659746A9381185C42;
IL2CPP_EXTERN_C String_t* _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2D2EF4F61A973856ABFDBCBB6EAB0CBD71473D;
IL2CPP_EXTERN_C String_t* _stringLiteral7132CC08E26B96532D936EB2BE27D46B199C82B8;
IL2CPP_EXTERN_C String_t* _stringLiteral72DB1DA581625C76BBD21E51DDBB608A4F6BD925;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86F80691DF7F9A3F8AB4630C3306F30D1D8FC3C1;
IL2CPP_EXTERN_C String_t* _stringLiteral883C2A7AE4A3CD6AE78DF0BF47B336C7520ADAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321;
IL2CPP_EXTERN_C String_t* _stringLiteral8F7AC2C4ADB561EE5EF41C4CB4DA4DED174E6E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A;
IL2CPP_EXTERN_C String_t* _stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9F64BF4E49CCC9CEFCE9E25B7A6141DBCC8965ED;
IL2CPP_EXTERN_C String_t* _stringLiteralA626F6778A2ACA3D5AD9C13B083DD1F1FF8DD1F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA78EE5AF8FD8F5B039CE0F3571C5E1F2267854E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BB85A430D8328591E272BB9059F0A50341192A;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54;
IL2CPP_EXTERN_C String_t* _stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB092E0F83AD882F3BB03008FE46F425614A1884;
IL2CPP_EXTERN_C String_t* _stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82;
IL2CPP_EXTERN_C String_t* _stringLiteralB0697C935DA564D24D0B0969CF24CD9DD39DD859;
IL2CPP_EXTERN_C String_t* _stringLiteralB169712174C7C20B791683A04E2066D4473D0E77;
IL2CPP_EXTERN_C String_t* _stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB03DE05BDBE3C283351E4F7707C13DCCEFB8DAD;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC46A9977AF0071EEB5BF4DA377B83F295ADD4A;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF9BFEB5BEF0A6364E3CE2D1CA6E76591A3B41B;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC547C30C479D0738626BE6AF255075272A6E233D;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralC8378523EDFAA871B6C606D5AFC8D3072C71A0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralD10359AB7D9D7837F92632E47638CD3C0E78C4BF;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D4D16E320C94D5713F4A4148995443BAB0383A;
IL2CPP_EXTERN_C String_t* _stringLiteralD3697086EF03AE732F06962C4701CBF5768BEF79;
IL2CPP_EXTERN_C String_t* _stringLiteralD82BFE1630B06A79ACB023E1411E6733A594738C;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7989F70DA36159D876618B4F19AACD041468AF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7D9C3C1898789F3C0154DCD7942347C62EAE00;
IL2CPP_EXTERN_C String_t* _stringLiteralE56DE241F168484D1F1B546ECFB115BDE78D2C1C;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AA0920EAD9819E7087C0522AA165ACE82074D9;
IL2CPP_EXTERN_C String_t* _stringLiteralEE72A997B28A8254DBD885C36C77EFF1AA2C42D5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEFFC7F90724642BD7F9978EE300C69400212EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD879156742A02FE792D5979276986ADA723270D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMovement2D_t6185D866A0397535255C298ECCC8A8769B7F8869_m94312A76206FE2984A62FB13036C82B09C2F33E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCircleFireU3Ed__15_System_Collections_IEnumerator_Reset_m6E7AB7094DDE60A49C2A3C904EB6E7E335092D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayTimeU3Ed__3_System_Collections_IEnumerator_Reset_m55C1777F9EC0166847B4E36375F5E6E9DD15840C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__12_System_Collections_IEnumerator_Reset_m8FAF69AE23E5CDF21D9392EC67E07CBCDE7A84C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeinoutU3Ed__14_System_Collections_IEnumerator_Reset_mC216A7FD09AFCE2810B875CD74C9247457DBA6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CInfoU3Eb__0_m4CF1799549B39E217756BE5245C7779B5ED4726D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CIDCheckU3Eb__0_m2735FC5A6270E7BFEF9825D0E95356B0E6A700C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CrandomPositionU3Ed__13_System_Collections_IEnumerator_Reset_mE01E4018126C5064C54B2CA0D2696122E8DCCEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* loadingScene_U3CVecU3Eb__7_0_mD02FBE1AC8F3193FC96E5859CDD47007B2C45F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* score_U3CStartU3Eb__4_0_m5ED6BA3A1B4B4939ECABA9E0A2E7ED4B4808D759_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Firebase.Database.DataSnapshot
struct DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_1;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSnapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D, ___database_1)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}
};


// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___U3CAppU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_internalDatabase_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___internalDatabase_2)); }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * get_internalDatabase_2() const { return ___internalDatabase_2; }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 ** get_address_of_internalDatabase_2() { return &___internalDatabase_2; }
	inline void set_internalDatabase_2(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * value)
	{
		___internalDatabase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___U3CAppU3Ek__BackingField_4)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_U3CAppU3Ek__BackingField_4() const { return ___U3CAppU3Ek__BackingField_4; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_U3CAppU3Ek__BackingField_4() { return &___U3CAppU3Ek__BackingField_4; }
	inline void set_U3CAppU3Ek__BackingField_4(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___U3CAppU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_4), (void*)value);
	}
};

struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * ___databases_5;

public:
	inline static int32_t get_offset_of_databases_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields, ___databases_5)); }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * get_databases_5() const { return ___databases_5; }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 ** get_address_of_databases_5() { return &___databases_5; }
	inline void set_databases_5(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * value)
	{
		___databases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_5), (void*)value);
	}
};


// Firebase.Database.Query
struct Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___internalQuery_0)); }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___database_1)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___valueListener_2)); }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___childListener_3)); }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
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

// Enemy_move/<CircleFire>d__15
struct U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD  : public RuntimeObject
{
public:
	// System.Int32 Enemy_move/<CircleFire>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy_move/<CircleFire>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy_move Enemy_move/<CircleFire>d__15::<>4__this
	Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * ___U3CU3E4__this_2;
	// System.Single Enemy_move/<CircleFire>d__15::<attckRate>5__2
	float ___U3CattckRateU3E5__2_3;
	// System.Int32 Enemy_move/<CircleFire>d__15::<count>5__3
	int32_t ___U3CcountU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD, ___U3CU3E4__this_2)); }
	inline Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CattckRateU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD, ___U3CattckRateU3E5__2_3)); }
	inline float get_U3CattckRateU3E5__2_3() const { return ___U3CattckRateU3E5__2_3; }
	inline float* get_address_of_U3CattckRateU3E5__2_3() { return &___U3CattckRateU3E5__2_3; }
	inline void set_U3CattckRateU3E5__2_3(float value)
	{
		___U3CattckRateU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD, ___U3CcountU3E5__3_4)); }
	inline int32_t get_U3CcountU3E5__3_4() const { return ___U3CcountU3E5__3_4; }
	inline int32_t* get_address_of_U3CcountU3E5__3_4() { return &___U3CcountU3E5__3_4; }
	inline void set_U3CcountU3E5__3_4(int32_t value)
	{
		___U3CcountU3E5__3_4 = value;
	}
};


// IntroManager/<DelayTime>d__3
struct U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712  : public RuntimeObject
{
public:
	// System.Int32 IntroManager/<DelayTime>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IntroManager/<DelayTime>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single IntroManager/<DelayTime>d__3::time
	float ___time_2;
	// IntroManager IntroManager/<DelayTime>d__3::<>4__this
	IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712, ___U3CU3E4__this_3)); }
	inline IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// createAcc/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B  : public RuntimeObject
{
public:
	// createAcc createAcc/<>c__DisplayClass15_0::<>4__this
	createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * ___U3CU3E4__this_0;
	// System.Boolean createAcc/<>c__DisplayClass15_0::exist
	bool ___exist_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B, ___U3CU3E4__this_0)); }
	inline createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_exist_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B, ___exist_1)); }
	inline bool get_exist_1() const { return ___exist_1; }
	inline bool* get_address_of_exist_1() { return &___exist_1; }
	inline void set_exist_1(bool value)
	{
		___exist_1 = value;
	}
};


// createAcc/User
struct User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33  : public RuntimeObject
{
public:
	// System.String createAcc/User::Name
	String_t* ___Name_0;
	// System.String createAcc/User::PASSWORD
	String_t* ___PASSWORD_1;
	// System.String createAcc/User::closet
	String_t* ___closet_2;
	// System.Int32 createAcc/User::pangpangColor
	int32_t ___pangpangColor_3;
	// System.Int32 createAcc/User::score
	int32_t ___score_4;
	// System.Int32 createAcc/User::totalCoin
	int32_t ___totalCoin_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_PASSWORD_1() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___PASSWORD_1)); }
	inline String_t* get_PASSWORD_1() const { return ___PASSWORD_1; }
	inline String_t** get_address_of_PASSWORD_1() { return &___PASSWORD_1; }
	inline void set_PASSWORD_1(String_t* value)
	{
		___PASSWORD_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PASSWORD_1), (void*)value);
	}

	inline static int32_t get_offset_of_closet_2() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___closet_2)); }
	inline String_t* get_closet_2() const { return ___closet_2; }
	inline String_t** get_address_of_closet_2() { return &___closet_2; }
	inline void set_closet_2(String_t* value)
	{
		___closet_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closet_2), (void*)value);
	}

	inline static int32_t get_offset_of_pangpangColor_3() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___pangpangColor_3)); }
	inline int32_t get_pangpangColor_3() const { return ___pangpangColor_3; }
	inline int32_t* get_address_of_pangpangColor_3() { return &___pangpangColor_3; }
	inline void set_pangpangColor_3(int32_t value)
	{
		___pangpangColor_3 = value;
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_totalCoin_5() { return static_cast<int32_t>(offsetof(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33, ___totalCoin_5)); }
	inline int32_t get_totalCoin_5() const { return ___totalCoin_5; }
	inline int32_t* get_address_of_totalCoin_5() { return &___totalCoin_5; }
	inline void set_totalCoin_5(int32_t value)
	{
		___totalCoin_5 = value;
	}
};


// loginButton/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945  : public RuntimeObject
{
public:
	// System.String loginButton/<>c__DisplayClass12_0::inputID
	String_t* ___inputID_0;
	// System.String loginButton/<>c__DisplayClass12_0::inputPassword
	String_t* ___inputPassword_1;
	// loginButton loginButton/<>c__DisplayClass12_0::<>4__this
	loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_inputID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945, ___inputID_0)); }
	inline String_t* get_inputID_0() const { return ___inputID_0; }
	inline String_t** get_address_of_inputID_0() { return &___inputID_0; }
	inline void set_inputID_0(String_t* value)
	{
		___inputID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputID_0), (void*)value);
	}

	inline static int32_t get_offset_of_inputPassword_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945, ___inputPassword_1)); }
	inline String_t* get_inputPassword_1() const { return ___inputPassword_1; }
	inline String_t** get_address_of_inputPassword_1() { return &___inputPassword_1; }
	inline void set_inputPassword_1(String_t* value)
	{
		___inputPassword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputPassword_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945, ___U3CU3E4__this_2)); }
	inline loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// test1/Rank
struct Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D  : public RuntimeObject
{
public:
	// System.String test1/Rank::name
	String_t* ___name_0;
	// System.Int32 test1/Rank::score
	int32_t ___score_1;
	// System.Int32 test1/Rank::timestamp
	int32_t ___timestamp_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D, ___timestamp_2)); }
	inline int32_t get_timestamp_2() const { return ___timestamp_2; }
	inline int32_t* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(int32_t value)
	{
		___timestamp_2 = value;
	}
};


// villaintest/<Fade>d__12
struct U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB  : public RuntimeObject
{
public:
	// System.Int32 villaintest/<Fade>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object villaintest/<Fade>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// villaintest villaintest/<Fade>d__12::<>4__this
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * ___U3CU3E4__this_2;
	// System.Single villaintest/<Fade>d__12::start
	float ___start_3;
	// System.Single villaintest/<Fade>d__12::end
	float ___end_4;
	// System.Single villaintest/<Fade>d__12::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// System.Single villaintest/<Fade>d__12::<percent>5__3
	float ___U3CpercentU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___U3CU3E4__this_2)); }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___start_3)); }
	inline float get_start_3() const { return ___start_3; }
	inline float* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(float value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___U3CcurrentTimeU3E5__2_5)); }
	inline float get_U3CcurrentTimeU3E5__2_5() const { return ___U3CcurrentTimeU3E5__2_5; }
	inline float* get_address_of_U3CcurrentTimeU3E5__2_5() { return &___U3CcurrentTimeU3E5__2_5; }
	inline void set_U3CcurrentTimeU3E5__2_5(float value)
	{
		___U3CcurrentTimeU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CpercentU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB, ___U3CpercentU3E5__3_6)); }
	inline float get_U3CpercentU3E5__3_6() const { return ___U3CpercentU3E5__3_6; }
	inline float* get_address_of_U3CpercentU3E5__3_6() { return &___U3CpercentU3E5__3_6; }
	inline void set_U3CpercentU3E5__3_6(float value)
	{
		___U3CpercentU3E5__3_6 = value;
	}
};


// villaintest/<Fadeinout>d__14
struct U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B  : public RuntimeObject
{
public:
	// System.Int32 villaintest/<Fadeinout>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object villaintest/<Fadeinout>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// villaintest villaintest/<Fadeinout>d__14::<>4__this
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B, ___U3CU3E4__this_2)); }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// villaintest/<randomPosition>d__13
struct U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117  : public RuntimeObject
{
public:
	// System.Int32 villaintest/<randomPosition>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object villaintest/<randomPosition>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// villaintest villaintest/<randomPosition>d__13::<>4__this
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117, ___U3CU3E4__this_2)); }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C  : public Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C
{
public:
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___internalReference_4)); }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___list_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_list_0() const { return ___list_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___current_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_3() const { return ___current_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_3 = value;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
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


// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087, ___m_result_40)); }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * get_m_result_40() const { return ___m_result_40; }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E  : public MulticastDelegate_t
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


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// GameDirector
struct GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields
{
public:
	// System.Int32[] GameDirector::closet
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___closet_4;
	// System.Int32 GameDirector::stagelevel
	int32_t ___stagelevel_5;
	// System.Int32 GameDirector::nowBody
	int32_t ___nowBody_6;
	// System.Int32 GameDirector::totalCoin
	int32_t ___totalCoin_7;
	// System.String GameDirector::ID
	String_t* ___ID_8;

public:
	inline static int32_t get_offset_of_closet_4() { return static_cast<int32_t>(offsetof(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields, ___closet_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_closet_4() const { return ___closet_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_closet_4() { return &___closet_4; }
	inline void set_closet_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___closet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closet_4), (void*)value);
	}

	inline static int32_t get_offset_of_stagelevel_5() { return static_cast<int32_t>(offsetof(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields, ___stagelevel_5)); }
	inline int32_t get_stagelevel_5() const { return ___stagelevel_5; }
	inline int32_t* get_address_of_stagelevel_5() { return &___stagelevel_5; }
	inline void set_stagelevel_5(int32_t value)
	{
		___stagelevel_5 = value;
	}

	inline static int32_t get_offset_of_nowBody_6() { return static_cast<int32_t>(offsetof(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields, ___nowBody_6)); }
	inline int32_t get_nowBody_6() const { return ___nowBody_6; }
	inline int32_t* get_address_of_nowBody_6() { return &___nowBody_6; }
	inline void set_nowBody_6(int32_t value)
	{
		___nowBody_6 = value;
	}

	inline static int32_t get_offset_of_totalCoin_7() { return static_cast<int32_t>(offsetof(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields, ___totalCoin_7)); }
	inline int32_t get_totalCoin_7() const { return ___totalCoin_7; }
	inline int32_t* get_address_of_totalCoin_7() { return &___totalCoin_7; }
	inline void set_totalCoin_7(int32_t value)
	{
		___totalCoin_7 = value;
	}

	inline static int32_t get_offset_of_ID_8() { return static_cast<int32_t>(offsetof(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields, ___ID_8)); }
	inline String_t* get_ID_8() const { return ___ID_8; }
	inline String_t** get_address_of_ID_8() { return &___ID_8; }
	inline void set_ID_8(String_t* value)
	{
		___ID_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ID_8), (void*)value);
	}
};


// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HomeManager
struct HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject HomeManager::HomePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HomePanel_4;
	// UnityEngine.GameObject HomeManager::GamePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GamePanel_5;
	// UnityEngine.GameObject HomeManager::SettingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SettingPanel_6;
	// UnityEngine.GameObject HomeManager::ShopPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShopPanel_7;
	// UnityEngine.GameObject HomeManager::lockbtn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lockbtn_8;
	// UnityEngine.GameObject HomeManager::pang
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pang_9;
	// System.Boolean HomeManager::iscalc
	bool ___iscalc_10;

public:
	inline static int32_t get_offset_of_HomePanel_4() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___HomePanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HomePanel_4() const { return ___HomePanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HomePanel_4() { return &___HomePanel_4; }
	inline void set_HomePanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HomePanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HomePanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_GamePanel_5() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___GamePanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GamePanel_5() const { return ___GamePanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GamePanel_5() { return &___GamePanel_5; }
	inline void set_GamePanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GamePanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GamePanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_SettingPanel_6() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___SettingPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SettingPanel_6() const { return ___SettingPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SettingPanel_6() { return &___SettingPanel_6; }
	inline void set_SettingPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SettingPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_ShopPanel_7() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___ShopPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShopPanel_7() const { return ___ShopPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShopPanel_7() { return &___ShopPanel_7; }
	inline void set_ShopPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShopPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShopPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_lockbtn_8() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___lockbtn_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lockbtn_8() const { return ___lockbtn_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lockbtn_8() { return &___lockbtn_8; }
	inline void set_lockbtn_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lockbtn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockbtn_8), (void*)value);
	}

	inline static int32_t get_offset_of_pang_9() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___pang_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pang_9() const { return ___pang_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pang_9() { return &___pang_9; }
	inline void set_pang_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pang_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pang_9), (void*)value);
	}

	inline static int32_t get_offset_of_iscalc_10() { return static_cast<int32_t>(offsetof(HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18, ___iscalc_10)); }
	inline bool get_iscalc_10() const { return ___iscalc_10; }
	inline bool* get_address_of_iscalc_10() { return &___iscalc_10; }
	inline void set_iscalc_10(bool value)
	{
		___iscalc_10 = value;
	}
};


// IntroManager
struct IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject IntroManager::StartPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StartPanel_4;
	// UnityEngine.GameObject IntroManager::IntroPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___IntroPanel_5;

public:
	inline static int32_t get_offset_of_StartPanel_4() { return static_cast<int32_t>(offsetof(IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54, ___StartPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StartPanel_4() const { return ___StartPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StartPanel_4() { return &___StartPanel_4; }
	inline void set_StartPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StartPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_IntroPanel_5() { return static_cast<int32_t>(offsetof(IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54, ___IntroPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_IntroPanel_5() const { return ___IntroPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_IntroPanel_5() { return &___IntroPanel_5; }
	inline void set_IntroPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___IntroPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntroPanel_5), (void*)value);
	}
};


// Movement2D
struct Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Movement2D::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector3 Movement2D::moveDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveDirection_5;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_moveDirection_5() { return static_cast<int32_t>(offsetof(Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869, ___moveDirection_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveDirection_5() const { return ___moveDirection_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveDirection_5() { return &___moveDirection_5; }
	inline void set_moveDirection_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveDirection_5 = value;
	}
};


// PangAction
struct PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PangAction::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// System.Single PangAction::chardir
	float ___chardir_5;
	// System.Single PangAction::moveX
	float ___moveX_6;
	// System.Single PangAction::moveY
	float ___moveY_7;
	// UnityEngine.Rigidbody2D PangAction::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_8;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_chardir_5() { return static_cast<int32_t>(offsetof(PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781, ___chardir_5)); }
	inline float get_chardir_5() const { return ___chardir_5; }
	inline float* get_address_of_chardir_5() { return &___chardir_5; }
	inline void set_chardir_5(float value)
	{
		___chardir_5 = value;
	}

	inline static int32_t get_offset_of_moveX_6() { return static_cast<int32_t>(offsetof(PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781, ___moveX_6)); }
	inline float get_moveX_6() const { return ___moveX_6; }
	inline float* get_address_of_moveX_6() { return &___moveX_6; }
	inline void set_moveX_6(float value)
	{
		___moveX_6 = value;
	}

	inline static int32_t get_offset_of_moveY_7() { return static_cast<int32_t>(offsetof(PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781, ___moveY_7)); }
	inline float get_moveY_7() const { return ___moveY_7; }
	inline float* get_address_of_moveY_7() { return &___moveY_7; }
	inline void set_moveY_7(float value)
	{
		___moveY_7 = value;
	}

	inline static int32_t get_offset_of_rigid_8() { return static_cast<int32_t>(offsetof(PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781, ___rigid_8)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_8() const { return ___rigid_8; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_8() { return &___rigid_8; }
	inline void set_rigid_8(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_8), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.Animation.SpriteResolver
struct SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_CategoryHash
	float ___m_CategoryHash_4;
	// System.Single UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_labelHash
	float ___m_labelHash_5;
	// System.Int32 UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_CategoryHashInt
	int32_t ___m_CategoryHashInt_6;
	// System.Int32 UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_LabelHashInt
	int32_t ___m_LabelHashInt_7;
	// System.Int32 UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_PreviousCategoryHash
	int32_t ___m_PreviousCategoryHash_8;
	// System.Int32 UnityEngine.Experimental.U2D.Animation.SpriteResolver::m_PreviouslabelHash
	int32_t ___m_PreviouslabelHash_9;

public:
	inline static int32_t get_offset_of_m_CategoryHash_4() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_CategoryHash_4)); }
	inline float get_m_CategoryHash_4() const { return ___m_CategoryHash_4; }
	inline float* get_address_of_m_CategoryHash_4() { return &___m_CategoryHash_4; }
	inline void set_m_CategoryHash_4(float value)
	{
		___m_CategoryHash_4 = value;
	}

	inline static int32_t get_offset_of_m_labelHash_5() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_labelHash_5)); }
	inline float get_m_labelHash_5() const { return ___m_labelHash_5; }
	inline float* get_address_of_m_labelHash_5() { return &___m_labelHash_5; }
	inline void set_m_labelHash_5(float value)
	{
		___m_labelHash_5 = value;
	}

	inline static int32_t get_offset_of_m_CategoryHashInt_6() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_CategoryHashInt_6)); }
	inline int32_t get_m_CategoryHashInt_6() const { return ___m_CategoryHashInt_6; }
	inline int32_t* get_address_of_m_CategoryHashInt_6() { return &___m_CategoryHashInt_6; }
	inline void set_m_CategoryHashInt_6(int32_t value)
	{
		___m_CategoryHashInt_6 = value;
	}

	inline static int32_t get_offset_of_m_LabelHashInt_7() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_LabelHashInt_7)); }
	inline int32_t get_m_LabelHashInt_7() const { return ___m_LabelHashInt_7; }
	inline int32_t* get_address_of_m_LabelHashInt_7() { return &___m_LabelHashInt_7; }
	inline void set_m_LabelHashInt_7(int32_t value)
	{
		___m_LabelHashInt_7 = value;
	}

	inline static int32_t get_offset_of_m_PreviousCategoryHash_8() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_PreviousCategoryHash_8)); }
	inline int32_t get_m_PreviousCategoryHash_8() const { return ___m_PreviousCategoryHash_8; }
	inline int32_t* get_address_of_m_PreviousCategoryHash_8() { return &___m_PreviousCategoryHash_8; }
	inline void set_m_PreviousCategoryHash_8(int32_t value)
	{
		___m_PreviousCategoryHash_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslabelHash_9() { return static_cast<int32_t>(offsetof(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956, ___m_PreviouslabelHash_9)); }
	inline int32_t get_m_PreviouslabelHash_9() const { return ___m_PreviouslabelHash_9; }
	inline int32_t* get_address_of_m_PreviouslabelHash_9() { return &___m_PreviouslabelHash_9; }
	inline void set_m_PreviouslabelHash_9(int32_t value)
	{
		___m_PreviouslabelHash_9 = value;
	}
};


// StageDirector
struct StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject StageDirector::villain1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain1_6;
	// UnityEngine.GameObject StageDirector::villain2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain2_7;
	// UnityEngine.GameObject StageDirector::villain3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain3_8;
	// UnityEngine.GameObject StageDirector::villain4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain4_9;
	// UnityEngine.GameObject StageDirector::villain5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain5_10;
	// UnityEngine.GameObject StageDirector::villain6
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain6_11;
	// UnityEngine.GameObject StageDirector::MonsterDirector
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MonsterDirector_12;
	// System.Int32 StageDirector::finNum
	int32_t ___finNum_14;

public:
	inline static int32_t get_offset_of_villain1_6() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain1_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain1_6() const { return ___villain1_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain1_6() { return &___villain1_6; }
	inline void set_villain1_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain1_6), (void*)value);
	}

	inline static int32_t get_offset_of_villain2_7() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain2_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain2_7() const { return ___villain2_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain2_7() { return &___villain2_7; }
	inline void set_villain2_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain2_7), (void*)value);
	}

	inline static int32_t get_offset_of_villain3_8() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain3_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain3_8() const { return ___villain3_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain3_8() { return &___villain3_8; }
	inline void set_villain3_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain3_8), (void*)value);
	}

	inline static int32_t get_offset_of_villain4_9() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain4_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain4_9() const { return ___villain4_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain4_9() { return &___villain4_9; }
	inline void set_villain4_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain4_9), (void*)value);
	}

	inline static int32_t get_offset_of_villain5_10() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain5_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain5_10() const { return ___villain5_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain5_10() { return &___villain5_10; }
	inline void set_villain5_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain5_10), (void*)value);
	}

	inline static int32_t get_offset_of_villain6_11() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___villain6_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain6_11() const { return ___villain6_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain6_11() { return &___villain6_11; }
	inline void set_villain6_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain6_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain6_11), (void*)value);
	}

	inline static int32_t get_offset_of_MonsterDirector_12() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___MonsterDirector_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MonsterDirector_12() const { return ___MonsterDirector_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MonsterDirector_12() { return &___MonsterDirector_12; }
	inline void set_MonsterDirector_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MonsterDirector_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MonsterDirector_12), (void*)value);
	}

	inline static int32_t get_offset_of_finNum_14() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7, ___finNum_14)); }
	inline int32_t get_finNum_14() const { return ___finNum_14; }
	inline int32_t* get_address_of_finNum_14() { return &___finNum_14; }
	inline void set_finNum_14(int32_t value)
	{
		___finNum_14 = value;
	}
};

struct StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields
{
public:
	// System.Int32 StageDirector::stageNumber
	int32_t ___stageNumber_4;
	// System.Int32 StageDirector::acc
	int32_t ___acc_5;
	// System.Int32 StageDirector::killCount
	int32_t ___killCount_13;

public:
	inline static int32_t get_offset_of_stageNumber_4() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields, ___stageNumber_4)); }
	inline int32_t get_stageNumber_4() const { return ___stageNumber_4; }
	inline int32_t* get_address_of_stageNumber_4() { return &___stageNumber_4; }
	inline void set_stageNumber_4(int32_t value)
	{
		___stageNumber_4 = value;
	}

	inline static int32_t get_offset_of_acc_5() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields, ___acc_5)); }
	inline int32_t get_acc_5() const { return ___acc_5; }
	inline int32_t* get_address_of_acc_5() { return &___acc_5; }
	inline void set_acc_5(int32_t value)
	{
		___acc_5 = value;
	}

	inline static int32_t get_offset_of_killCount_13() { return static_cast<int32_t>(offsetof(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields, ___killCount_13)); }
	inline int32_t get_killCount_13() const { return ___killCount_13; }
	inline int32_t* get_address_of_killCount_13() { return &___killCount_13; }
	inline void set_killCount_13(int32_t value)
	{
		___killCount_13 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// baseVillain
struct baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single baseVillain::villainMoveTimer
	float ___villainMoveTimer_4;
	// System.Single baseVillain::villainMoveRate
	float ___villainMoveRate_5;
	// System.Single baseVillain::villanFootStep
	float ___villanFootStep_6;
	// System.Single baseVillain::villainShootTimer
	float ___villainShootTimer_7;
	// System.Single baseVillain::villainShootRate
	float ___villainShootRate_8;
	// UnityEngine.GameObject baseVillain::villainbullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villainbullet_9;
	// UnityEngine.GameObject baseVillain::maincharac
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharac_10;
	// UnityEngine.UI.Image baseVillain::HP
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___HP_11;
	// UnityEngine.GameObject baseVillain::coin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coin_12;
	// UnityEngine.GameObject baseVillain::life
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___life_13;
	// System.Int32 baseVillain::direc_temp_x
	int32_t ___direc_temp_x_14;
	// System.Int32 baseVillain::direc_temp_y
	int32_t ___direc_temp_y_15;
	// System.Int32 baseVillain::direc
	int32_t ___direc_16;

public:
	inline static int32_t get_offset_of_villainMoveTimer_4() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villainMoveTimer_4)); }
	inline float get_villainMoveTimer_4() const { return ___villainMoveTimer_4; }
	inline float* get_address_of_villainMoveTimer_4() { return &___villainMoveTimer_4; }
	inline void set_villainMoveTimer_4(float value)
	{
		___villainMoveTimer_4 = value;
	}

	inline static int32_t get_offset_of_villainMoveRate_5() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villainMoveRate_5)); }
	inline float get_villainMoveRate_5() const { return ___villainMoveRate_5; }
	inline float* get_address_of_villainMoveRate_5() { return &___villainMoveRate_5; }
	inline void set_villainMoveRate_5(float value)
	{
		___villainMoveRate_5 = value;
	}

	inline static int32_t get_offset_of_villanFootStep_6() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villanFootStep_6)); }
	inline float get_villanFootStep_6() const { return ___villanFootStep_6; }
	inline float* get_address_of_villanFootStep_6() { return &___villanFootStep_6; }
	inline void set_villanFootStep_6(float value)
	{
		___villanFootStep_6 = value;
	}

	inline static int32_t get_offset_of_villainShootTimer_7() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villainShootTimer_7)); }
	inline float get_villainShootTimer_7() const { return ___villainShootTimer_7; }
	inline float* get_address_of_villainShootTimer_7() { return &___villainShootTimer_7; }
	inline void set_villainShootTimer_7(float value)
	{
		___villainShootTimer_7 = value;
	}

	inline static int32_t get_offset_of_villainShootRate_8() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villainShootRate_8)); }
	inline float get_villainShootRate_8() const { return ___villainShootRate_8; }
	inline float* get_address_of_villainShootRate_8() { return &___villainShootRate_8; }
	inline void set_villainShootRate_8(float value)
	{
		___villainShootRate_8 = value;
	}

	inline static int32_t get_offset_of_villainbullet_9() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___villainbullet_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villainbullet_9() const { return ___villainbullet_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villainbullet_9() { return &___villainbullet_9; }
	inline void set_villainbullet_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villainbullet_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villainbullet_9), (void*)value);
	}

	inline static int32_t get_offset_of_maincharac_10() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___maincharac_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharac_10() const { return ___maincharac_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharac_10() { return &___maincharac_10; }
	inline void set_maincharac_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharac_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharac_10), (void*)value);
	}

	inline static int32_t get_offset_of_HP_11() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___HP_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_HP_11() const { return ___HP_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_HP_11() { return &___HP_11; }
	inline void set_HP_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___HP_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HP_11), (void*)value);
	}

	inline static int32_t get_offset_of_coin_12() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___coin_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coin_12() const { return ___coin_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coin_12() { return &___coin_12; }
	inline void set_coin_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coin_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coin_12), (void*)value);
	}

	inline static int32_t get_offset_of_life_13() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___life_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_life_13() const { return ___life_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_life_13() { return &___life_13; }
	inline void set_life_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___life_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life_13), (void*)value);
	}

	inline static int32_t get_offset_of_direc_temp_x_14() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___direc_temp_x_14)); }
	inline int32_t get_direc_temp_x_14() const { return ___direc_temp_x_14; }
	inline int32_t* get_address_of_direc_temp_x_14() { return &___direc_temp_x_14; }
	inline void set_direc_temp_x_14(int32_t value)
	{
		___direc_temp_x_14 = value;
	}

	inline static int32_t get_offset_of_direc_temp_y_15() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___direc_temp_y_15)); }
	inline int32_t get_direc_temp_y_15() const { return ___direc_temp_y_15; }
	inline int32_t* get_address_of_direc_temp_y_15() { return &___direc_temp_y_15; }
	inline void set_direc_temp_y_15(int32_t value)
	{
		___direc_temp_y_15 = value;
	}

	inline static int32_t get_offset_of_direc_16() { return static_cast<int32_t>(offsetof(baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC, ___direc_16)); }
	inline int32_t get_direc_16() const { return ___direc_16; }
	inline int32_t* get_address_of_direc_16() { return &___direc_16; }
	inline void set_direc_16(int32_t value)
	{
		___direc_16 = value;
	}
};


// coin
struct coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// coinpoint
struct coinpoint_t15C116EFAB0F08663361AA501BAA7201C0979E13  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// createAcc
struct createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.InputField createAcc::nameInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___nameInput_4;
	// UnityEngine.UI.InputField createAcc::password1
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___password1_5;
	// UnityEngine.UI.InputField createAcc::password2
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___password2_6;
	// UnityEngine.UI.InputField createAcc::IDCreate
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___IDCreate_7;
	// UnityEngine.UI.Text createAcc::passwordCK
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___passwordCK_8;
	// UnityEngine.UI.Text createAcc::IDCk
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___IDCk_9;
	// UnityEngine.GameObject createAcc::createAccpanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___createAccpanel_10;
	// Firebase.Database.DatabaseReference createAcc::<reference>k__BackingField
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___U3CreferenceU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_nameInput_4() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___nameInput_4)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_nameInput_4() const { return ___nameInput_4; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_nameInput_4() { return &___nameInput_4; }
	inline void set_nameInput_4(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___nameInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_password1_5() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___password1_5)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_password1_5() const { return ___password1_5; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_password1_5() { return &___password1_5; }
	inline void set_password1_5(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___password1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password1_5), (void*)value);
	}

	inline static int32_t get_offset_of_password2_6() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___password2_6)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_password2_6() const { return ___password2_6; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_password2_6() { return &___password2_6; }
	inline void set_password2_6(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___password2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password2_6), (void*)value);
	}

	inline static int32_t get_offset_of_IDCreate_7() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___IDCreate_7)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_IDCreate_7() const { return ___IDCreate_7; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_IDCreate_7() { return &___IDCreate_7; }
	inline void set_IDCreate_7(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___IDCreate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IDCreate_7), (void*)value);
	}

	inline static int32_t get_offset_of_passwordCK_8() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___passwordCK_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_passwordCK_8() const { return ___passwordCK_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_passwordCK_8() { return &___passwordCK_8; }
	inline void set_passwordCK_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___passwordCK_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passwordCK_8), (void*)value);
	}

	inline static int32_t get_offset_of_IDCk_9() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___IDCk_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_IDCk_9() const { return ___IDCk_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_IDCk_9() { return &___IDCk_9; }
	inline void set_IDCk_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___IDCk_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IDCk_9), (void*)value);
	}

	inline static int32_t get_offset_of_createAccpanel_10() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___createAccpanel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_createAccpanel_10() const { return ___createAccpanel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_createAccpanel_10() { return &___createAccpanel_10; }
	inline void set_createAccpanel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___createAccpanel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createAccpanel_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreferenceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1, ___U3CreferenceU3Ek__BackingField_11)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_U3CreferenceU3Ek__BackingField_11() const { return ___U3CreferenceU3Ek__BackingField_11; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_U3CreferenceU3Ek__BackingField_11() { return &___U3CreferenceU3Ek__BackingField_11; }
	inline void set_U3CreferenceU3Ek__BackingField_11(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___U3CreferenceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreferenceU3Ek__BackingField_11), (void*)value);
	}
};


// life
struct life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// loadingScene
struct loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Firebase.Database.DatabaseReference loadingScene::<reference>k__BackingField
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___U3CreferenceU3Ek__BackingField_4;
	// System.Int32 loadingScene::finish
	int32_t ___finish_5;

public:
	inline static int32_t get_offset_of_U3CreferenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595, ___U3CreferenceU3Ek__BackingField_4)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_U3CreferenceU3Ek__BackingField_4() const { return ___U3CreferenceU3Ek__BackingField_4; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_U3CreferenceU3Ek__BackingField_4() { return &___U3CreferenceU3Ek__BackingField_4; }
	inline void set_U3CreferenceU3Ek__BackingField_4(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___U3CreferenceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreferenceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_finish_5() { return static_cast<int32_t>(offsetof(loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595, ___finish_5)); }
	inline int32_t get_finish_5() const { return ___finish_5; }
	inline int32_t* get_address_of_finish_5() { return &___finish_5; }
	inline void set_finish_5(int32_t value)
	{
		___finish_5 = value;
	}
};


// loginButton
struct loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.InputField loginButton::ID
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___ID_5;
	// UnityEngine.UI.InputField loginButton::password
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___password_6;
	// UnityEngine.UI.Text loginButton::loginresult
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___loginresult_7;
	// UnityEngine.GameObject loginButton::createAccpanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___createAccpanel_8;
	// System.Int32 loginButton::loginSuccess
	int32_t ___loginSuccess_9;
	// System.Int32 loginButton::finish
	int32_t ___finish_10;
	// Firebase.Database.DatabaseReference loginButton::<reference>k__BackingField
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___U3CreferenceU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_ID_5() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___ID_5)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_ID_5() const { return ___ID_5; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_ID_5() { return &___ID_5; }
	inline void set_ID_5(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___ID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ID_5), (void*)value);
	}

	inline static int32_t get_offset_of_password_6() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___password_6)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_password_6() const { return ___password_6; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_password_6() { return &___password_6; }
	inline void set_password_6(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___password_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_6), (void*)value);
	}

	inline static int32_t get_offset_of_loginresult_7() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___loginresult_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_loginresult_7() const { return ___loginresult_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_loginresult_7() { return &___loginresult_7; }
	inline void set_loginresult_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___loginresult_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loginresult_7), (void*)value);
	}

	inline static int32_t get_offset_of_createAccpanel_8() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___createAccpanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_createAccpanel_8() const { return ___createAccpanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_createAccpanel_8() { return &___createAccpanel_8; }
	inline void set_createAccpanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___createAccpanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createAccpanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_loginSuccess_9() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___loginSuccess_9)); }
	inline int32_t get_loginSuccess_9() const { return ___loginSuccess_9; }
	inline int32_t* get_address_of_loginSuccess_9() { return &___loginSuccess_9; }
	inline void set_loginSuccess_9(int32_t value)
	{
		___loginSuccess_9 = value;
	}

	inline static int32_t get_offset_of_finish_10() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___finish_10)); }
	inline int32_t get_finish_10() const { return ___finish_10; }
	inline int32_t* get_address_of_finish_10() { return &___finish_10; }
	inline void set_finish_10(int32_t value)
	{
		___finish_10 = value;
	}

	inline static int32_t get_offset_of_U3CreferenceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088, ___U3CreferenceU3Ek__BackingField_11)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_U3CreferenceU3Ek__BackingField_11() const { return ___U3CreferenceU3Ek__BackingField_11; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_U3CreferenceU3Ek__BackingField_11() { return &___U3CreferenceU3Ek__BackingField_11; }
	inline void set_U3CreferenceU3Ek__BackingField_11(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___U3CreferenceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreferenceU3Ek__BackingField_11), (void*)value);
	}
};

struct loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> loginButton::positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions_4;

public:
	inline static int32_t get_offset_of_positions_4() { return static_cast<int32_t>(offsetof(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields, ___positions_4)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_positions_4() const { return ___positions_4; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_positions_4() { return &___positions_4; }
	inline void set_positions_4(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___positions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_4), (void*)value);
	}
};


// mainCam
struct mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject mainCam::maincharac
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharac_4;

public:
	inline static int32_t get_offset_of_maincharac_4() { return static_cast<int32_t>(offsetof(mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA, ___maincharac_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharac_4() const { return ___maincharac_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharac_4() { return &___maincharac_4; }
	inline void set_maincharac_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharac_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharac_4), (void*)value);
	}
};


// mainbullet
struct mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// maincharac
struct maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single maincharac::curTime
	float ___curTime_4;
	// System.Single maincharac::coolTime
	float ___coolTime_5;
	// System.Int32 maincharac::count
	int32_t ___count_6;
	// UnityEngine.GameObject maincharac::mainbullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainbullet_7;
	// UnityEngine.GameObject maincharac::villain
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain_8;
	// System.Single maincharac::x
	float ___x_9;
	// System.Single maincharac::y
	float ___y_10;
	// System.Single maincharac::angle
	float ___angle_11;
	// System.Single maincharac::distance
	float ___distance_15;
	// UnityEngine.GameObject maincharac::closeMonster
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___closeMonster_16;
	// System.Int32 maincharac::lifepoint
	int32_t ___lifepoint_17;
	// System.Single maincharac::dis
	float ___dis_18;
	// UnityEngine.UI.Image maincharac::mainHP
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___mainHP_19;
	// UnityEngine.GameObject maincharac::monsterDirec
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monsterDirec_20;

public:
	inline static int32_t get_offset_of_curTime_4() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___curTime_4)); }
	inline float get_curTime_4() const { return ___curTime_4; }
	inline float* get_address_of_curTime_4() { return &___curTime_4; }
	inline void set_curTime_4(float value)
	{
		___curTime_4 = value;
	}

	inline static int32_t get_offset_of_coolTime_5() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___coolTime_5)); }
	inline float get_coolTime_5() const { return ___coolTime_5; }
	inline float* get_address_of_coolTime_5() { return &___coolTime_5; }
	inline void set_coolTime_5(float value)
	{
		___coolTime_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of_mainbullet_7() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___mainbullet_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainbullet_7() const { return ___mainbullet_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainbullet_7() { return &___mainbullet_7; }
	inline void set_mainbullet_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainbullet_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainbullet_7), (void*)value);
	}

	inline static int32_t get_offset_of_villain_8() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___villain_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain_8() const { return ___villain_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain_8() { return &___villain_8; }
	inline void set_villain_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain_8), (void*)value);
	}

	inline static int32_t get_offset_of_x_9() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___x_9)); }
	inline float get_x_9() const { return ___x_9; }
	inline float* get_address_of_x_9() { return &___x_9; }
	inline void set_x_9(float value)
	{
		___x_9 = value;
	}

	inline static int32_t get_offset_of_y_10() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___y_10)); }
	inline float get_y_10() const { return ___y_10; }
	inline float* get_address_of_y_10() { return &___y_10; }
	inline void set_y_10(float value)
	{
		___y_10 = value;
	}

	inline static int32_t get_offset_of_angle_11() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___angle_11)); }
	inline float get_angle_11() const { return ___angle_11; }
	inline float* get_address_of_angle_11() { return &___angle_11; }
	inline void set_angle_11(float value)
	{
		___angle_11 = value;
	}

	inline static int32_t get_offset_of_distance_15() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___distance_15)); }
	inline float get_distance_15() const { return ___distance_15; }
	inline float* get_address_of_distance_15() { return &___distance_15; }
	inline void set_distance_15(float value)
	{
		___distance_15 = value;
	}

	inline static int32_t get_offset_of_closeMonster_16() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___closeMonster_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_closeMonster_16() const { return ___closeMonster_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_closeMonster_16() { return &___closeMonster_16; }
	inline void set_closeMonster_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___closeMonster_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeMonster_16), (void*)value);
	}

	inline static int32_t get_offset_of_lifepoint_17() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___lifepoint_17)); }
	inline int32_t get_lifepoint_17() const { return ___lifepoint_17; }
	inline int32_t* get_address_of_lifepoint_17() { return &___lifepoint_17; }
	inline void set_lifepoint_17(int32_t value)
	{
		___lifepoint_17 = value;
	}

	inline static int32_t get_offset_of_dis_18() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___dis_18)); }
	inline float get_dis_18() const { return ___dis_18; }
	inline float* get_address_of_dis_18() { return &___dis_18; }
	inline void set_dis_18(float value)
	{
		___dis_18 = value;
	}

	inline static int32_t get_offset_of_mainHP_19() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___mainHP_19)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_mainHP_19() const { return ___mainHP_19; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_mainHP_19() { return &___mainHP_19; }
	inline void set_mainHP_19(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___mainHP_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainHP_19), (void*)value);
	}

	inline static int32_t get_offset_of_monsterDirec_20() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878, ___monsterDirec_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monsterDirec_20() const { return ___monsterDirec_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monsterDirec_20() { return &___monsterDirec_20; }
	inline void set_monsterDirec_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monsterDirec_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterDirec_20), (void*)value);
	}
};

struct maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields
{
public:
	// System.Int32 maincharac::coinPoint
	int32_t ___coinPoint_12;
	// System.Int32 maincharac::lifePoint
	int32_t ___lifePoint_13;
	// UnityEngine.SpriteRenderer maincharac::maincolor
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___maincolor_14;

public:
	inline static int32_t get_offset_of_coinPoint_12() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields, ___coinPoint_12)); }
	inline int32_t get_coinPoint_12() const { return ___coinPoint_12; }
	inline int32_t* get_address_of_coinPoint_12() { return &___coinPoint_12; }
	inline void set_coinPoint_12(int32_t value)
	{
		___coinPoint_12 = value;
	}

	inline static int32_t get_offset_of_lifePoint_13() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields, ___lifePoint_13)); }
	inline int32_t get_lifePoint_13() const { return ___lifePoint_13; }
	inline int32_t* get_address_of_lifePoint_13() { return &___lifePoint_13; }
	inline void set_lifePoint_13(int32_t value)
	{
		___lifePoint_13 = value;
	}

	inline static int32_t get_offset_of_maincolor_14() { return static_cast<int32_t>(offsetof(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields, ___maincolor_14)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_maincolor_14() const { return ___maincolor_14; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_maincolor_14() { return &___maincolor_14; }
	inline void set_maincolor_14(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___maincolor_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincolor_14), (void*)value);
	}
};


// monsterDirector
struct monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject monsterDirector::villain1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain1_4;
	// UnityEngine.GameObject monsterDirector::villain2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain2_5;
	// UnityEngine.GameObject monsterDirector::villain3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain3_6;
	// UnityEngine.GameObject monsterDirector::villain4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain4_7;
	// UnityEngine.GameObject monsterDirector::villain5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain5_8;
	// UnityEngine.GameObject monsterDirector::villain6
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villain6_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> monsterDirector::List_villains
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___List_villains_10;

public:
	inline static int32_t get_offset_of_villain1_4() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain1_4() const { return ___villain1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain1_4() { return &___villain1_4; }
	inline void set_villain1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain1_4), (void*)value);
	}

	inline static int32_t get_offset_of_villain2_5() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain2_5() const { return ___villain2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain2_5() { return &___villain2_5; }
	inline void set_villain2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain2_5), (void*)value);
	}

	inline static int32_t get_offset_of_villain3_6() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain3_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain3_6() const { return ___villain3_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain3_6() { return &___villain3_6; }
	inline void set_villain3_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain3_6), (void*)value);
	}

	inline static int32_t get_offset_of_villain4_7() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain4_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain4_7() const { return ___villain4_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain4_7() { return &___villain4_7; }
	inline void set_villain4_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain4_7), (void*)value);
	}

	inline static int32_t get_offset_of_villain5_8() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain5_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain5_8() const { return ___villain5_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain5_8() { return &___villain5_8; }
	inline void set_villain5_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain5_8), (void*)value);
	}

	inline static int32_t get_offset_of_villain6_9() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___villain6_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villain6_9() const { return ___villain6_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villain6_9() { return &___villain6_9; }
	inline void set_villain6_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villain6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villain6_9), (void*)value);
	}

	inline static int32_t get_offset_of_List_villains_10() { return static_cast<int32_t>(offsetof(monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066, ___List_villains_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_List_villains_10() const { return ___List_villains_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_List_villains_10() { return &___List_villains_10; }
	inline void set_List_villains_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___List_villains_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___List_villains_10), (void*)value);
	}
};


// pumpkinbullet
struct pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single pumpkinbullet::bulletDis
	float ___bulletDis_4;
	// UnityEngine.Vector3 pumpkinbullet::firstPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___firstPos_5;
	// System.Single pumpkinbullet::speed
	float ___speed_6;
	// System.Single pumpkinbullet::boomTimer
	float ___boomTimer_7;
	// System.Single pumpkinbullet::boomTime
	float ___boomTime_8;
	// System.Int32 pumpkinbullet::boomReady
	int32_t ___boomReady_9;
	// UnityEngine.GameObject pumpkinbullet::maincharHP
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharHP_10;
	// UnityEngine.Vector2 pumpkinbullet::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_11;

public:
	inline static int32_t get_offset_of_bulletDis_4() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___bulletDis_4)); }
	inline float get_bulletDis_4() const { return ___bulletDis_4; }
	inline float* get_address_of_bulletDis_4() { return &___bulletDis_4; }
	inline void set_bulletDis_4(float value)
	{
		___bulletDis_4 = value;
	}

	inline static int32_t get_offset_of_firstPos_5() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___firstPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_firstPos_5() const { return ___firstPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_firstPos_5() { return &___firstPos_5; }
	inline void set_firstPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___firstPos_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_boomTimer_7() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___boomTimer_7)); }
	inline float get_boomTimer_7() const { return ___boomTimer_7; }
	inline float* get_address_of_boomTimer_7() { return &___boomTimer_7; }
	inline void set_boomTimer_7(float value)
	{
		___boomTimer_7 = value;
	}

	inline static int32_t get_offset_of_boomTime_8() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___boomTime_8)); }
	inline float get_boomTime_8() const { return ___boomTime_8; }
	inline float* get_address_of_boomTime_8() { return &___boomTime_8; }
	inline void set_boomTime_8(float value)
	{
		___boomTime_8 = value;
	}

	inline static int32_t get_offset_of_boomReady_9() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___boomReady_9)); }
	inline int32_t get_boomReady_9() const { return ___boomReady_9; }
	inline int32_t* get_address_of_boomReady_9() { return &___boomReady_9; }
	inline void set_boomReady_9(int32_t value)
	{
		___boomReady_9 = value;
	}

	inline static int32_t get_offset_of_maincharHP_10() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___maincharHP_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharHP_10() const { return ___maincharHP_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharHP_10() { return &___maincharHP_10; }
	inline void set_maincharHP_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharHP_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharHP_10), (void*)value);
	}

	inline static int32_t get_offset_of_size_11() { return static_cast<int32_t>(offsetof(pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015, ___size_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_11() const { return ___size_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_11() { return &___size_11; }
	inline void set_size_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_11 = value;
	}
};


// score
struct score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Firebase.Database.DatabaseReference score::<reference>k__BackingField
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___U3CreferenceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CreferenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0, ___U3CreferenceU3Ek__BackingField_4)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_U3CreferenceU3Ek__BackingField_4() const { return ___U3CreferenceU3Ek__BackingField_4; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_U3CreferenceU3Ek__BackingField_4() { return &___U3CreferenceU3Ek__BackingField_4; }
	inline void set_U3CreferenceU3Ek__BackingField_4(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___U3CreferenceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreferenceU3Ek__BackingField_4), (void*)value);
	}
};


// shopManager
struct shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Experimental.U2D.Animation.SpriteResolver shopManager::spriteResolver
	SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * ___spriteResolver_4;
	// UnityEngine.GameObject shopManager::head
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___head_5;
	// UnityEngine.GameObject shopManager::popUp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___popUp_6;
	// UnityEngine.GameObject shopManager::lockbtn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lockbtn_7;
	// UnityEngine.GameObject shopManager::child
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___child_8;
	// System.String shopManager::nowBody
	String_t* ___nowBody_9;

public:
	inline static int32_t get_offset_of_spriteResolver_4() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___spriteResolver_4)); }
	inline SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * get_spriteResolver_4() const { return ___spriteResolver_4; }
	inline SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 ** get_address_of_spriteResolver_4() { return &___spriteResolver_4; }
	inline void set_spriteResolver_4(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * value)
	{
		___spriteResolver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteResolver_4), (void*)value);
	}

	inline static int32_t get_offset_of_head_5() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___head_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_head_5() const { return ___head_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_head_5() { return &___head_5; }
	inline void set_head_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___head_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_5), (void*)value);
	}

	inline static int32_t get_offset_of_popUp_6() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___popUp_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_popUp_6() const { return ___popUp_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_popUp_6() { return &___popUp_6; }
	inline void set_popUp_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___popUp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popUp_6), (void*)value);
	}

	inline static int32_t get_offset_of_lockbtn_7() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___lockbtn_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lockbtn_7() const { return ___lockbtn_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lockbtn_7() { return &___lockbtn_7; }
	inline void set_lockbtn_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lockbtn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockbtn_7), (void*)value);
	}

	inline static int32_t get_offset_of_child_8() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___child_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_child_8() const { return ___child_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_child_8() { return &___child_8; }
	inline void set_child_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___child_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_8), (void*)value);
	}

	inline static int32_t get_offset_of_nowBody_9() { return static_cast<int32_t>(offsetof(shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A, ___nowBody_9)); }
	inline String_t* get_nowBody_9() const { return ___nowBody_9; }
	inline String_t** get_address_of_nowBody_9() { return &___nowBody_9; }
	inline void set_nowBody_9(String_t* value)
	{
		___nowBody_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nowBody_9), (void*)value);
	}
};


// showtime
struct showtime_t1870F3498DFC66F1E9E6AAC3A2CB2DF499AE9941  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// test1
struct test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Firebase.Database.DatabaseReference test1::<reference>k__BackingField
	DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___U3CreferenceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CreferenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8, ___U3CreferenceU3Ek__BackingField_4)); }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * get_U3CreferenceU3Ek__BackingField_4() const { return ___U3CreferenceU3Ek__BackingField_4; }
	inline DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C ** get_address_of_U3CreferenceU3Ek__BackingField_4() { return &___U3CreferenceU3Ek__BackingField_4; }
	inline void set_U3CreferenceU3Ek__BackingField_4(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * value)
	{
		___U3CreferenceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreferenceU3Ek__BackingField_4), (void*)value);
	}
};


// villain
struct villain_t36822447411B12AFA160394514518E023B217EF9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject villain::villainbullet1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villainbullet1_4;
	// UnityEngine.GameObject villain::maincharac
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharac_5;
	// System.Single villain::span
	float ___span_6;
	// System.Single villain::span2
	float ___span2_7;
	// System.Single villain::delta
	float ___delta_8;
	// System.Single villain::delta2
	float ___delta2_9;
	// System.Single villain::villainSpeed
	float ___villainSpeed_10;
	// UnityEngine.GameObject villain::villainHP
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___villainHP_11;
	// System.Single villain::x
	float ___x_12;
	// System.Single villain::y
	float ___y_13;
	// System.Single villain::angle
	float ___angle_14;
	// UnityEngine.GameObject villain::coin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coin_15;
	// UnityEngine.GameObject villain::life
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___life_16;

public:
	inline static int32_t get_offset_of_villainbullet1_4() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___villainbullet1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villainbullet1_4() const { return ___villainbullet1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villainbullet1_4() { return &___villainbullet1_4; }
	inline void set_villainbullet1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villainbullet1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villainbullet1_4), (void*)value);
	}

	inline static int32_t get_offset_of_maincharac_5() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___maincharac_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharac_5() const { return ___maincharac_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharac_5() { return &___maincharac_5; }
	inline void set_maincharac_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharac_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharac_5), (void*)value);
	}

	inline static int32_t get_offset_of_span_6() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___span_6)); }
	inline float get_span_6() const { return ___span_6; }
	inline float* get_address_of_span_6() { return &___span_6; }
	inline void set_span_6(float value)
	{
		___span_6 = value;
	}

	inline static int32_t get_offset_of_span2_7() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___span2_7)); }
	inline float get_span2_7() const { return ___span2_7; }
	inline float* get_address_of_span2_7() { return &___span2_7; }
	inline void set_span2_7(float value)
	{
		___span2_7 = value;
	}

	inline static int32_t get_offset_of_delta_8() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___delta_8)); }
	inline float get_delta_8() const { return ___delta_8; }
	inline float* get_address_of_delta_8() { return &___delta_8; }
	inline void set_delta_8(float value)
	{
		___delta_8 = value;
	}

	inline static int32_t get_offset_of_delta2_9() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___delta2_9)); }
	inline float get_delta2_9() const { return ___delta2_9; }
	inline float* get_address_of_delta2_9() { return &___delta2_9; }
	inline void set_delta2_9(float value)
	{
		___delta2_9 = value;
	}

	inline static int32_t get_offset_of_villainSpeed_10() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___villainSpeed_10)); }
	inline float get_villainSpeed_10() const { return ___villainSpeed_10; }
	inline float* get_address_of_villainSpeed_10() { return &___villainSpeed_10; }
	inline void set_villainSpeed_10(float value)
	{
		___villainSpeed_10 = value;
	}

	inline static int32_t get_offset_of_villainHP_11() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___villainHP_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_villainHP_11() const { return ___villainHP_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_villainHP_11() { return &___villainHP_11; }
	inline void set_villainHP_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___villainHP_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___villainHP_11), (void*)value);
	}

	inline static int32_t get_offset_of_x_12() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___x_12)); }
	inline float get_x_12() const { return ___x_12; }
	inline float* get_address_of_x_12() { return &___x_12; }
	inline void set_x_12(float value)
	{
		___x_12 = value;
	}

	inline static int32_t get_offset_of_y_13() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___y_13)); }
	inline float get_y_13() const { return ___y_13; }
	inline float* get_address_of_y_13() { return &___y_13; }
	inline void set_y_13(float value)
	{
		___y_13 = value;
	}

	inline static int32_t get_offset_of_angle_14() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___angle_14)); }
	inline float get_angle_14() const { return ___angle_14; }
	inline float* get_address_of_angle_14() { return &___angle_14; }
	inline void set_angle_14(float value)
	{
		___angle_14 = value;
	}

	inline static int32_t get_offset_of_coin_15() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___coin_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coin_15() const { return ___coin_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coin_15() { return &___coin_15; }
	inline void set_coin_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coin_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coin_15), (void*)value);
	}

	inline static int32_t get_offset_of_life_16() { return static_cast<int32_t>(offsetof(villain_t36822447411B12AFA160394514518E023B217EF9, ___life_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_life_16() const { return ___life_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_life_16() { return &___life_16; }
	inline void set_life_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___life_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life_16), (void*)value);
	}
};


// villainbullet
struct villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single villainbullet::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// Enemy_move
struct Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770  : public baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC
{
public:
	// UnityEngine.Animator Enemy_move::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_17;
	// UnityEngine.Rigidbody2D Enemy_move::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_18;
	// System.Int32 Enemy_move::nextMove
	int32_t ___nextMove_19;
	// UnityEngine.GameObject Enemy_move::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_20;
	// UnityEngine.GameObject Enemy_move::monsterDirec
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monsterDirec_21;
	// UnityEngine.GameObject Enemy_move::maincharac
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharac_22;
	// System.Int32 Enemy_move::direc_temp_x
	int32_t ___direc_temp_x_23;
	// System.Int32 Enemy_move::direc_temp_y
	int32_t ___direc_temp_y_24;
	// System.Int32 Enemy_move::direc
	int32_t ___direc_25;

public:
	inline static int32_t get_offset_of_animator_17() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___animator_17)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_17() const { return ___animator_17; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_17() { return &___animator_17; }
	inline void set_animator_17(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_17), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_18() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___rigid_18)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_18() const { return ___rigid_18; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_18() { return &___rigid_18; }
	inline void set_rigid_18(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_18), (void*)value);
	}

	inline static int32_t get_offset_of_nextMove_19() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___nextMove_19)); }
	inline int32_t get_nextMove_19() const { return ___nextMove_19; }
	inline int32_t* get_address_of_nextMove_19() { return &___nextMove_19; }
	inline void set_nextMove_19(int32_t value)
	{
		___nextMove_19 = value;
	}

	inline static int32_t get_offset_of_bullet_20() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___bullet_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_20() const { return ___bullet_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_20() { return &___bullet_20; }
	inline void set_bullet_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_20), (void*)value);
	}

	inline static int32_t get_offset_of_monsterDirec_21() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___monsterDirec_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monsterDirec_21() const { return ___monsterDirec_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monsterDirec_21() { return &___monsterDirec_21; }
	inline void set_monsterDirec_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monsterDirec_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterDirec_21), (void*)value);
	}

	inline static int32_t get_offset_of_maincharac_22() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___maincharac_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharac_22() const { return ___maincharac_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharac_22() { return &___maincharac_22; }
	inline void set_maincharac_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharac_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharac_22), (void*)value);
	}

	inline static int32_t get_offset_of_direc_temp_x_23() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___direc_temp_x_23)); }
	inline int32_t get_direc_temp_x_23() const { return ___direc_temp_x_23; }
	inline int32_t* get_address_of_direc_temp_x_23() { return &___direc_temp_x_23; }
	inline void set_direc_temp_x_23(int32_t value)
	{
		___direc_temp_x_23 = value;
	}

	inline static int32_t get_offset_of_direc_temp_y_24() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___direc_temp_y_24)); }
	inline int32_t get_direc_temp_y_24() const { return ___direc_temp_y_24; }
	inline int32_t* get_address_of_direc_temp_y_24() { return &___direc_temp_y_24; }
	inline void set_direc_temp_y_24(int32_t value)
	{
		___direc_temp_y_24 = value;
	}

	inline static int32_t get_offset_of_direc_25() { return static_cast<int32_t>(offsetof(Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770, ___direc_25)); }
	inline int32_t get_direc_25() const { return ___direc_25; }
	inline int32_t* get_address_of_direc_25() { return &___direc_25; }
	inline void set_direc_25(int32_t value)
	{
		___direc_25 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
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


// boss
struct boss_t7103983475D183857493FCA2A27B2EE9F5FB1906  : public baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC
{
public:

public:
};


// pumpkinVillain
struct pumpkinVillain_tDDD57E1CEF1358FE7DB029E92E32108D4507AA37  : public baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC
{
public:

public:
};


// villaintest
struct villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC  : public baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC
{
public:
	// System.Single villaintest::fadeTime
	float ___fadeTime_17;
	// UnityEngine.GameObject villaintest::Head
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Head_18;
	// UnityEngine.GameObject villaintest::l_leg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l_leg_19;
	// UnityEngine.GameObject villaintest::R_leg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___R_leg_20;
	// UnityEngine.GameObject villaintest::l_am
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l_am_21;
	// UnityEngine.GameObject villaintest::R_am
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___R_am_22;
	// UnityEngine.GameObject villaintest::monsterDirec
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monsterDirec_23;
	// UnityEngine.Experimental.U2D.Animation.SpriteResolver villaintest::spriteResolver
	SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * ___spriteResolver_24;

public:
	inline static int32_t get_offset_of_fadeTime_17() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___fadeTime_17)); }
	inline float get_fadeTime_17() const { return ___fadeTime_17; }
	inline float* get_address_of_fadeTime_17() { return &___fadeTime_17; }
	inline void set_fadeTime_17(float value)
	{
		___fadeTime_17 = value;
	}

	inline static int32_t get_offset_of_Head_18() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___Head_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Head_18() const { return ___Head_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Head_18() { return &___Head_18; }
	inline void set_Head_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Head_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Head_18), (void*)value);
	}

	inline static int32_t get_offset_of_l_leg_19() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___l_leg_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l_leg_19() const { return ___l_leg_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l_leg_19() { return &___l_leg_19; }
	inline void set_l_leg_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l_leg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_leg_19), (void*)value);
	}

	inline static int32_t get_offset_of_R_leg_20() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___R_leg_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_R_leg_20() const { return ___R_leg_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_R_leg_20() { return &___R_leg_20; }
	inline void set_R_leg_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___R_leg_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___R_leg_20), (void*)value);
	}

	inline static int32_t get_offset_of_l_am_21() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___l_am_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l_am_21() const { return ___l_am_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l_am_21() { return &___l_am_21; }
	inline void set_l_am_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l_am_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_am_21), (void*)value);
	}

	inline static int32_t get_offset_of_R_am_22() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___R_am_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_R_am_22() const { return ___R_am_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_R_am_22() { return &___R_am_22; }
	inline void set_R_am_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___R_am_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___R_am_22), (void*)value);
	}

	inline static int32_t get_offset_of_monsterDirec_23() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___monsterDirec_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monsterDirec_23() const { return ___monsterDirec_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monsterDirec_23() { return &___monsterDirec_23; }
	inline void set_monsterDirec_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monsterDirec_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterDirec_23), (void*)value);
	}

	inline static int32_t get_offset_of_spriteResolver_24() { return static_cast<int32_t>(offsetof(villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC, ___spriteResolver_24)); }
	inline SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * get_spriteResolver_24() const { return ___spriteResolver_24; }
	inline SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 ** get_address_of_spriteResolver_24() { return &___spriteResolver_24; }
	inline void set_spriteResolver_24(SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * value)
	{
		___spriteResolver_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteResolver_24), (void*)value);
	}
};


// villaintest1
struct villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132  : public baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC
{
public:
	// UnityEngine.GameObject villaintest1::monsterDirec
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monsterDirec_17;
	// UnityEngine.GameObject villaintest1::maincharac
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___maincharac_18;
	// System.Int32 villaintest1::direc_temp_x
	int32_t ___direc_temp_x_19;
	// System.Int32 villaintest1::direc_temp_y
	int32_t ___direc_temp_y_20;
	// System.Int32 villaintest1::direc
	int32_t ___direc_21;

public:
	inline static int32_t get_offset_of_monsterDirec_17() { return static_cast<int32_t>(offsetof(villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132, ___monsterDirec_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monsterDirec_17() const { return ___monsterDirec_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monsterDirec_17() { return &___monsterDirec_17; }
	inline void set_monsterDirec_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monsterDirec_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterDirec_17), (void*)value);
	}

	inline static int32_t get_offset_of_maincharac_18() { return static_cast<int32_t>(offsetof(villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132, ___maincharac_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_maincharac_18() const { return ___maincharac_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_maincharac_18() { return &___maincharac_18; }
	inline void set_maincharac_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___maincharac_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincharac_18), (void*)value);
	}

	inline static int32_t get_offset_of_direc_temp_x_19() { return static_cast<int32_t>(offsetof(villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132, ___direc_temp_x_19)); }
	inline int32_t get_direc_temp_x_19() const { return ___direc_temp_x_19; }
	inline int32_t* get_address_of_direc_temp_x_19() { return &___direc_temp_x_19; }
	inline void set_direc_temp_x_19(int32_t value)
	{
		___direc_temp_x_19 = value;
	}

	inline static int32_t get_offset_of_direc_temp_y_20() { return static_cast<int32_t>(offsetof(villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132, ___direc_temp_y_20)); }
	inline int32_t get_direc_temp_y_20() const { return ___direc_temp_y_20; }
	inline int32_t* get_address_of_direc_temp_y_20() { return &___direc_temp_y_20; }
	inline void set_direc_temp_y_20(int32_t value)
	{
		___direc_temp_y_20 = value;
	}

	inline static int32_t get_offset_of_direc_21() { return static_cast<int32_t>(offsetof(villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132, ___direc_21)); }
	inline int32_t get_direc_21() const { return ___direc_21; }
	inline int32_t* get_address_of_direc_21() { return &___direc_21; }
	inline void set_direc_21(int32_t value)
	{
		___direc_21 = value;
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void Enemy_move::villainmove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_villainmove_m5C88A2F56C4158E1E0DE1D5EDED859CCB70A0720 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Enemy_move::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Think_m726C7D6F32F13B5BD43544F277471503EF0C9318 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void baseVillain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method);
// System.Void Enemy_move/<CircleFire>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCircleFireU3Ed__15__ctor_m7021620862F9363B880A077FADB95C1DCDC283D8 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<monsterDirector>()
inline monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void Enemy_move::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_item_mE20BE17AACD65A8FE8FC530AF12136F9415C7006 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void baseVillain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.IEnumerator IntroManager::DelayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntroManager_DelayTime_m2A47E55A9363266644695660F6B7133871BF6C68 (IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void IntroManager/<DelayTime>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTimeU3Ed__3__ctor_m29E28AE72406ED2F28C8C1BE5E93F2924EE1E48D (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void baseVillain::villainMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_villainMove_mF4AC6F127FBCC633DDEE3100A27E171F98D4ED85 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method);
// System.Void baseVillain::targetShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_targetShoot_m67F2B56BEDEE50DEB9A754D3FEDAA7112A86A2AF (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void coin::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin_endGame1_m3C83EC3049CB9015AF7AA61C150D84F5898D2752 (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void createAcc::IDCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_IDCheck_m30FA973DEC32D478889F0009C20B05CA0068EBB2 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method);
// System.Void createAcc/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m062F07F8E27A672CBB6E7776E1208B280E2F0518 (U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A (const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void createAcc::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void createAcc_set_reference_m3FCDE962D665158D3545C86CDE3CBB2354E14B4B_inline (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference createAcc::get_reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * createAcc_get_reference_m92A854FA6B5A8A0C64414FF8C1BE67A11BC6467F_inline (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677 (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE (Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * __this, Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 *, Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method);
// System.Void createAcc/User::.ctor(System.String,System.String,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m30E0B5B5B3ABE6DF6C8998D6BAEB08C37FD51AF0 (User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33 * __this, String_t* ___Name0, String_t* ___PASSWORD1, String_t* ___closet2, int32_t ___pangpangColor3, int32_t ___score4, int32_t ___totalCoin5, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, String_t* ___pathString0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_SetRawJsonValueAsync_m7F99AA89C17C838E525723F9979575DD673C22E2 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, String_t* ___jsonValue0, const RuntimeMethod* method);
// System.Void life::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life_endGame1_m0A064D6CF969E6DB822E63AB0F380C7800F6FB8A (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void loadingScene::Vec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_Vec_m7293AFD595CD804C160490CD92CB281B8FC5A4B4 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method);
// System.Void loadingScene::enterGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_enterGame_m0631082FAEE9CBC6EB68B12EFF55B38F5DCCB02B (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method);
// System.Void loadingScene::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void loadingScene_set_reference_m3D33996CC5EC5035CE4CE59E54B699A1B10F51DC_inline (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference loadingScene::get_reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loadingScene_get_reference_m7B32EA270A440D073C0A73C0D60693E635B064F1_inline (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6 (Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * (*) (Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_gshared)(__this, method);
}
// System.Void loginButton::HomeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_HomeScene_m08C6E669F4490ABE084B881B1075127201BFE4C1 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method);
// System.Void loginButton/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m035DB666300DC0537AAE999ECC4FEA49B4BAEC34 (U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * __this, const RuntimeMethod* method);
// System.Void loginButton::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void loginButton_set_reference_m60A05B22A0FC66EAB8DD7FAA9C599226C7C31664_inline (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference loginButton::get_reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loginButton_get_reference_m1724EE41183150890AEF6EBCA0EB4914B66E3503_inline (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(!0)
inline int32_t List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
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
// System.Void maincharac::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_endGame1_m4A856D8A2A74EA4D5306E246FFD341E4CC4A00A0 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapBoxAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapBoxAll_m134445FD88A2242662F67A48DB3D19A42D5A9792 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, float ___angle2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void score::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void score_set_reference_mF834291C9AB32E9F41139C877A50321E6765C43F_inline (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference score::get_reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82_inline (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_SetValueAsync_mD4504503AA31C8000522284B7F105154F845E043 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Experimental.U2D.Animation.SpriteResolver>()
inline SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.U2D.Animation.SpriteResolver::SetCategoryAndLabel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37 (SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * __this, String_t* ___category0, String_t* ___label1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void test1::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void test1_set_reference_m77FB56F701CAEFBA4E4D2FEF3177C71D8084C159_inline (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method);
// System.Void test1/Rank::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rank__ctor_mEB420E85337380A4FBE91EA84126E06BAB0BAE14 (Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D * __this, String_t* ___name0, int32_t ___score1, int32_t ___timestamp2, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference test1::get_reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * test1_get_reference_m149874EE55BC7B821A25240410F840B198E2E19E_inline (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * DatabaseReference_Push_m3AA86C70A0F7F786AC717745BEF2E3B076B7DAB5 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseReference::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_get_Key_mA6531C63D64A032F3B299CBBB522E9130BEB005C (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, const RuntimeMethod* method);
// System.Void villain::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_item_m1FD879F35A03A2439A9C133FF4EC2B42BA7E5DC7 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator villaintest::Fadeinout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_Fadeinout_mE9411EE7368AD583D0FF448C8C950E933F3913B2 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method);
// System.Void villaintest::colorchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_colorchange_m28EC171BA434382ABFE333956AAC8132168BE70E (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method);
// System.Void baseVillain::NontargetShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_NontargetShoot_m9C177028C9A5C5C921E03FA7C5A0E21029750058 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method);
// System.Void villaintest/<Fade>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__12__ctor_m8DC0412DBA939D892A7F555381E4C81F1EBAA10D (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void villaintest/<randomPosition>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrandomPositionU3Ed__13__ctor_m8908331E984D7F8D4BD05A72C295F5F369442947 (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void villaintest/<Fadeinout>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeinoutU3Ed__14__ctor_m6948300B32C47186578F5F92D03F81E8EF358E40 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void villaintest::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_item_m78A5960ECEAC1F51A45897389F94840EF7920755 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method);
// System.Void villaintest1::villainmove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_villainmove_mBCBB056B609923AC9C4BA0DD09394AE98D7959E1 (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method);
// System.Void villaintest1::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_item_m0758F05497361AE21C5892C440B4B286D02BBE46 (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Movement2D>()
inline Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * GameObject_GetComponent_TisMovement2D_t6185D866A0397535255C298ECCC8A8769B7F8869_m94312A76206FE2984A62FB13036C82B09C2F33E6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Movement2D::Setup(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement2D_Setup_m5D41BE4BBC7C219DB63AF1E1C4D82BF920A3CDB9_inline (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void createAcc::CreateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_CreateInfo_mCC85046DCD031DD2209F89DDF85F6F13EF8A0964 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator villaintest::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_Fade_m1DFC5DC0ABFBAFBF705C47AF3694465EC081BC28 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, float ___start0, float ___end1, const RuntimeMethod* method);
// System.Collections.IEnumerator villaintest::randomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_randomPosition_m95ED756A9DFA09A0F5C6160BEE1CBB5EC2E6D34D (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.Void Enemy_move::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_update_mC045CB24E1C13BEC6D388FE78FF9B2DC25C69DCE (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	{
		// villainmove();
		Enemy_move_villainmove_m5C88A2F56C4158E1E0DE1D5EDED859CCB70A0720(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Start_m423F7669BBCA95BA628CC79EAAD0C37D2B8EE659 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral883C2A7AE4A3CD6AE78DF0BF47B336C7520ADAC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maincharac = GameObject.Find("maincharac"); //혁순추
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		__this->set_maincharac_22(L_0);
		// StartCoroutine("CircleFire");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral883C2A7AE4A3CD6AE78DF0BF47B336C7520ADAC7, /*hidden argument*/NULL);
		// monsterDirec = GameObject.Find("MonsterDirector");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA, /*hidden argument*/NULL);
		__this->set_monsterDirec_21(L_2);
		// }
		return;
	}
}
// System.Void Enemy_move::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Awake_m143507EE2130AA9064E3DFADBAD1C3CC9093747D (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_17(L_0);
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_18(L_1);
		// Think();
		Enemy_move_Think_m726C7D6F32F13B5BD43544F277471503EF0C9318(__this, /*hidden argument*/NULL);
		// Invoke("Think", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_move::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_FixedUpdate_m78AFB3F423D2B1F90F2D123269EEDBD79792DC2C (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy_move::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Think_m726C7D6F32F13B5BD43544F277471503EF0C9318 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nextMove = Random.Range(-1, 2);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A((-1), 2, /*hidden argument*/NULL);
		__this->set_nextMove_19(L_0);
		// Invoke("Think", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_Update_m1968F79EEAA13618B7AF704BC33B0C3A75DA1C23 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy_move::CircleFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_move_CircleFire_mEC7065DC2761AD869A61C88BE578DE3A48DCFE5B (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * L_0 = (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD *)il2cpp_codegen_object_new(U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD_il2cpp_TypeInfo_var);
		U3CCircleFireU3Ed__15__ctor_m7021620862F9363B880A077FADB95C1DCDC283D8(L_0, 0, /*hidden argument*/NULL);
		U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy_move::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_OnTriggerEnter2D_mF265C02344A730ED5E72A9685E27AD3404373E5C (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698365F79794801DA7B9EBE75E502EC91A241053);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag == "mainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54, /*hidden argument*/NULL);
		// Debug.Log(HP.fillAmount);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_4);
		float L_5;
		L_5 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_4, /*hidden argument*/NULL);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// HP.fillAmount -= 0.1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, ((float)il2cpp_codegen_subtract((float)L_10, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (HP.fillAmount == 0)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_11);
		float L_12;
		L_12 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// StageDirector.killCount += 1;
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_13 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_killCount_13();
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_killCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// monsterDirec.GetComponent<monsterDirector>().List_villains.Remove(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_monsterDirec_21();
		NullCheck(L_14);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_15;
		L_15 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_14, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = L_15->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_18;
		L_18 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_16, L_17, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// item();
		Enemy_move_item_mE20BE17AACD65A8FE8FC530AF12136F9415C7006(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_19, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void Enemy_move::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_item_mE20BE17AACD65A8FE8FC530AF12136F9415C7006 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int item = Random.Range(1, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		// if (item == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// GameObject coinI = Instantiate(coin) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_coin_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// GameObject lifeI = Instantiate(life) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_life_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_move::villainmove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move_villainmove_m5C88A2F56C4158E1E0DE1D5EDED859CCB70A0720 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// villainMoveTimer += Time.deltaTime;
		float L_0 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveTimer_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->set_villainMoveTimer_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (villainMoveTimer > villainMoveRate)
		float L_2 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveTimer_4();
		float L_3 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveRate_5();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_01b6;
		}
	}
	{
		// villainMoveTimer = 0;
		((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->set_villainMoveTimer_4((0.0f));
		// if (maincharac != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_maincharac_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0125;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_maincharac_22();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((!(((float)L_8) < ((float)L_12))))
		{
			goto IL_006f;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		__this->set_direc_temp_x_23(1);
		goto IL_0076;
	}

IL_006f:
	{
		// else direc_temp_x = 2;
		__this->set_direc_temp_x_23(2);
	}

IL_0076:
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_maincharac_22();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		if ((!(((float)L_15) < ((float)L_19))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		__this->set_direc_temp_y_24(3);
		goto IL_00ad;
	}

IL_00a6:
	{
		// else direc_temp_y = 4;
		__this->set_direc_temp_y_24(4);
	}

IL_00ad:
	{
		// if (Mathf.Abs(transform.position.x - maincharac.transform.position.x) < 2 * Mathf.Abs(transform.position.y - maincharac.transform.position.y))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_maincharac_22();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27;
		L_27 = fabsf(((float)il2cpp_codegen_subtract((float)L_22, (float)L_26)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_maincharac_22();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		float L_35;
		L_35 = fabsf(((float)il2cpp_codegen_subtract((float)L_30, (float)L_34)));
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35))))))
		{
			goto IL_0119;
		}
	}
	{
		// direc = direc_temp_y;
		int32_t L_36 = __this->get_direc_temp_y_24();
		__this->set_direc_25(L_36);
		goto IL_0125;
	}

IL_0119:
	{
		// else direc = direc_temp_x;
		int32_t L_37 = __this->get_direc_temp_x_23();
		__this->set_direc_25(L_37);
	}

IL_0125:
	{
		// switch (direc)
		int32_t L_38 = __this->get_direc_25();
		V_0 = L_38;
		int32_t L_39 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0145;
			}
			case 1:
			{
				goto IL_0161;
			}
			case 2:
			{
				goto IL_017e;
			}
			case 3:
			{
				goto IL_019a;
			}
		}
	}
	{
		return;
	}

IL_0145:
	{
		// transform.Translate(villanFootStep, 0, 0);  //오른쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_41 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_40);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_40, L_41, (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0161:
	{
		// transform.Translate(-villanFootStep, 0, 0);  //왼쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_43 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_42);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_42, ((-L_43)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_017e:
	{
		// transform.Translate(0, villanFootStep, 0);   //위쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_45 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_44);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_44, (0.0f), L_45, (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_019a:
	{
		// transform.Translate(0, -villanFootStep, 0);  //아래쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_47 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_46);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_46, (0.0f), ((-L_47)), (0.0f), /*hidden argument*/NULL);
	}

IL_01b6:
	{
		// }
		return;
	}
}
// System.Void Enemy_move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_move__ctor_mCEADD54C6C7E08F578B6A01CE8AB52DC1A03BF45 (Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * __this, const RuntimeMethod* method)
{
	{
		baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC(__this, /*hidden argument*/NULL);
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
// System.Void GameDirector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDirector_Start_m92DAF8BCF048D1F77B51F51BCD4CA47D260F6DC9 (GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameDirector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDirector_Update_m619B224507888150A939D1E0917CA9F27BDB090D (GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameDirector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDirector__ctor_m806FADCD19DEA27E4920565E5FF62352956A937C (GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameDirector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDirector__cctor_m024DC8C4D2D2DE64380DFFCF0B1F6C6D645199BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] closet = new int[5] {0,0,0,0,0};
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)5);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_closet_4(L_0);
		// public static int stagelevel = 1;
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_stagelevel_5(1);
		// public static int nowBody =1;
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(1);
		// public static int totalCoin = 0;
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_totalCoin_7(0);
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
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m55E09F90FA409F47F1A42929F294DC60C06FD5CB (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Update_m9C017FC54A6BA38547A8EBEC17A7CD20236CB14F (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOver::gotoHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_gotoHome_m4A36D63C39C227E3C0306F75BAB6DC0AE1DB2806 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Home");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::Regame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Regame_m57E80DF64D5FF1C0217EC6D42C99018F130D593F (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("loadingScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_mA5E40A40961F188E4CE253D481E8AED893A224E9 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
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
// System.Void HomeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_Start_m802F55C577E7CAFE738C2CAE82F362E52B9083C0 (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	{
		// HomePanel.SetActive(true);        //setActive는 인스펙터에 있는 체크 박스를 조정할 수 있게해줌
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HomePanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GamePanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SettingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingPanel_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// ShopPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ShopPanel_7();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// pang.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pang_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HomeManager::backtohome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_backtohome_m4DCAA6AD5AC31855C2411C9D273DACD2E74D3A7B (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	{
		// HomePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HomePanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GamePanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SettingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingPanel_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// ShopPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ShopPanel_7();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// pang.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pang_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HomeManager::goGamePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_goGamePanel_m0DBF03626C7681260240290B5281E54BFF20CDE6 (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	{
		// HomePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HomePanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GamePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GamePanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// SettingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingPanel_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// ShopPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ShopPanel_7();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// pang.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pang_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HomeManager::goSettingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_goSettingPanel_m75E38BDA1B5918057C6FC40FB207E04F7CBD634A (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	{
		// HomePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HomePanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GamePanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SettingPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingPanel_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// ShopPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ShopPanel_7();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// pang.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pang_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HomeManager::goShopPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_goShopPanel_mAC513BE3F27BB3F600CB61AE67CA91F6ED9B3548 (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// HomePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HomePanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GamePanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SettingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingPanel_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// ShopPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ShopPanel_7();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// pang.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pang_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// if (iscalc)
		bool L_5 = __this->get_iscalc_10();
		if (!L_5)
		{
			goto IL_0098;
		}
	}
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_0094;
	}

IL_0048:
	{
		// Debug.Log(i);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// lockbtn = GameObject.Find("lock" + (i + 1));
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471, L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_11, /*hidden argument*/NULL);
		__this->set_lockbtn_8(L_12);
		// if (GameDirector.closet[i] == 1)
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0090;
		}
	}
	{
		// lockbtn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_lockbtn_8();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// iscalc = false;
		__this->set_iscalc_10((bool)0);
	}

IL_0090:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0094:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)5)))
		{
			goto IL_0048;
		}
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void HomeManager::goShootingGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager_goShootingGame_m2E16D4A5CE30093395E450FC89F49C7C38819FC5 (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("loadingScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HomeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeManager__ctor_m612B15CF824E587DA82A3201A319848CDC3B2519 (HomeManager_tAEB638DFC97EA6137CCA5978573BF7664272FB18 * __this, const RuntimeMethod* method)
{
	{
		// public bool iscalc = true;
		__this->set_iscalc_10((bool)1);
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
// System.Void IntroManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager_Start_mEE7D131DA47D9DB46EF36B199B4921C558D0B2DA (IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DelayTime(2));           //프렘임율에 영향을 받지 않는 서브루틴 구동
		RuntimeObject* L_0;
		L_0 = IntroManager_DelayTime_m2A47E55A9363266644695660F6B7133871BF6C68(__this, (2.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator IntroManager::DelayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntroManager_DelayTime_m2A47E55A9363266644695660F6B7133871BF6C68 (IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * L_0 = (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 *)il2cpp_codegen_object_new(U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712_il2cpp_TypeInfo_var);
		U3CDelayTimeU3Ed__3__ctor_m29E28AE72406ED2F28C8C1BE5E93F2924EE1E48D(L_0, 0, /*hidden argument*/NULL);
		U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->set_time_2(L_3);
		return L_2;
	}
}
// System.Void IntroManager::goHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager_goHome_mF025FF6C444642657322C266A2349EECF31FCBBC (IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AA0920EAD9819E7087C0522AA165ACE82074D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("main1");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE6AA0920EAD9819E7087C0522AA165ACE82074D9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IntroManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager__ctor_m4AA6A59302DF7976FD91092B24897D630BA33860 (IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * __this, const RuntimeMethod* method)
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
// System.Void Movement2D::Setup(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_Setup_m5D41BE4BBC7C219DB63AF1E1C4D82BF920A3CDB9 (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method)
{
	{
		// moveDirection = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___direction0;
		__this->set_moveDirection_5(L_0);
		// }
		return;
	}
}
// System.Void Movement2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_Start_mF820A890801451202CA13404474D67FE9D20AB5F (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Movement2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_Update_m719AAE5A4BFBFD6E3B54DE941656F94C435F38C1 (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, const RuntimeMethod* method)
{
	{
		// transform.position += moveDirection * moveSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_moveDirection_5();
		float L_4 = __this->get_moveSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement2D::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_OnTriggerEnter2D_m6598AD66E85141DF56CC7319035DD88C98E21794 (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag != "villain")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Movement2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D__ctor_m44F4DD82AB168000AD77DE6C6768E9B84176CBF0 (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 0.5f;
		__this->set_moveSpeed_4((0.5f));
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
// System.Void PangAction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PangAction_Awake_m90B35A9CAB6AD175C5EAB8A2D2234839991FD142 (PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_8(L_1);
		// }
		return;
	}
}
// System.Void PangAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PangAction_Start_m28F989FC232623E08CEC89AB2BCA0F63D4C143AD (PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PangAction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PangAction_Update_mE08FB7A33AEA8519A4024ECA61E809939953B9A8 (PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float moveX = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float moveY = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 moveVector = new Vector3(moveX, 0f, 0f);
		float L_2 = V_0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		// animator.SetBool("isRunning", moveVector.magnitude > 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_4();
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_3);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// Vector3 moveVector1 = new Vector3(0f, 0f, moveY);
		float L_5 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		// animator.SetBool("isWalking", moveVector1.magnitude > 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_4();
		float L_7;
		L_7 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)((((float)L_7) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// transform.Translate(new Vector3(moveX, moveY, 0f).normalized * Time.deltaTime * 5f);//trnasfor.Translate : �̵� / speed*Time.deltaTime : ���������� �̵��Ÿ�
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		V_4 = L_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_8, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PangAction::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PangAction_FixedUpdate_mCC085A28C2BEAE93552CA9FD84C822AE01C8CFA9 (PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetAxis("Horizontal")>0)
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// chardir = -1;
		__this->set_chardir_5((-1.0f));
		// }
		goto IL_0029;
	}

IL_001e:
	{
		// chardir = 1;
		__this->set_chardir_5((1.0f));
	}

IL_0029:
	{
		// transform.localScale = new Vector3(chardir * 1f, 1f, 1f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_chardir_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), ((float)il2cpp_codegen_multiply((float)L_2, (float)(1.0f))), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PangAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PangAction__ctor_mB1D0D376D745577C69745D562B53D3005512A743 (PangAction_t186803C0F701ED65462C999E20CD4CDEA7862781 * __this, const RuntimeMethod* method)
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
// System.Void StageDirector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageDirector_Start_m46188CAF42BE4A31D9AF1FE1BF3C5635D1FD424C (StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD82BFE1630B06A79ACB023E1411E6733A594738C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// killCount = 0;
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_killCount_13(0);
		// acc += stageNumber;     //stagenum을 축적해서 더해준다
		int32_t L_0 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_1 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_acc_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// Debug.Log("누적값");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD82BFE1630B06A79ACB023E1411E6733A594738C, /*hidden argument*/NULL);
		// Debug.Log(acc);
		int32_t L_2 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// MonsterDirector = GameObject.Find("MonsterDirector");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA, /*hidden argument*/NULL);
		__this->set_MonsterDirector_12(L_5);
		// finNum = MonsterDirector.GetComponent<monsterDirector>().List_villains.Count;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_MonsterDirector_12();
		NullCheck(L_6);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_7;
		L_7 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_6, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = L_7->get_List_villains_10();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		__this->set_finNum_14(L_9);
		// }
		return;
	}
}
// System.Void StageDirector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageDirector_Update_mF8E933FD0CD3F81430FD41F8CB882830C43BED6B (StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44415D89E35210070F6F3BE8461E20645E5EA896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6190AFADEC29E0B4A376FEE659746A9381185C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7D9C3C1898789F3C0154DCD7942347C62EAE00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("몇마리!!!!!!"+ killCount);
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_address_of_killCount_13()), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral44415D89E35210070F6F3BE8461E20645E5EA896, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// if (killCount == finNum)
		int32_t L_2 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_killCount_13();
		int32_t L_3 = __this->get_finNum_14();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		// Debug.Log("게임끝!!!!!!1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDD7D9C3C1898789F3C0154DCD7942347C62EAE00, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Game1End");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral6190AFADEC29E0B4A376FEE659746A9381185C42, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if (stageNumber == 1)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_4 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// Destroy(villain2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_villain2_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// Destroy(villain3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_villain3_8();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// Destroy(villain4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_villain4_9();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// Destroy(villain5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_villain5_10();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// Destroy(villain6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_villain6_11();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// if (stageNumber == 2)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_10 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00ad;
		}
	}
	{
		// Destroy(villain3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_villain3_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// Destroy(villain4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_villain4_9();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
		// Destroy(villain5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_villain5_10();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		// Destroy(villain6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_villain6_11();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// if (stageNumber == 3)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_15 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00d6;
		}
	}
	{
		// Destroy(villain4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_villain4_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// Destroy(villain5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_villain5_10();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
		// Destroy(villain6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_villain6_11();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// if (stageNumber == 4)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_19 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			goto IL_00f4;
		}
	}
	{
		// Destroy(villain5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_villain5_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
		// Destroy(villain6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_villain6_11();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// if (stageNumber == 5)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_22 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		if ((!(((uint32_t)L_22) == ((uint32_t)5))))
		{
			goto IL_0107;
		}
	}
	{
		// Destroy(villain6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_villain6_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
	}

IL_0107:
	{
		// if (stageNumber == 6)
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_24 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_stageNumber_4();
		// }
		return;
	}
}
// System.Void StageDirector::gohome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageDirector_gohome_m7E553674CB0AAE73BAC0D49A418888E9847A9E87 (StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameDirector.totalCoin+= maincharac.coinPoint;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_totalCoin_7();
		int32_t L_1 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_totalCoin_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// acc = 0;
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_acc_5(0);
		// maincharac.coinPoint = 0;
		((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->set_coinPoint_12(0);
		// maincharac.lifePoint = 0;
		((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->set_lifePoint_13(0);
		// SceneManager.LoadScene("Home");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageDirector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageDirector__ctor_mF788A6FF0D36A12CF27FC8CC957F2290A2C5E837 (StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageDirector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageDirector__cctor_mAD345761BCB5BCCAC64A2A17985A1063D6D61E4B (const RuntimeMethod* method)
{
	{
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
// System.Void baseVillain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_Start_m5B2C8B6D8E7EFB172113B8CEC1E7CDC8445426D0 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maincharac = GameObject.Find("maincharac");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		__this->set_maincharac_10(L_0);
		// HP.fillAmount = 1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_HP_11();
		NullCheck(L_1);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void baseVillain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	{
		// HP.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, -3f, 0));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_HP_11();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (-3.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void baseVillain::villainMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_villainMove_mF4AC6F127FBCC633DDEE3100A27E171F98D4ED85 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// villainMoveTimer += Time.deltaTime;
		float L_0 = __this->get_villainMoveTimer_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_villainMoveTimer_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (villainMoveTimer > villainMoveRate)
		float L_2 = __this->get_villainMoveTimer_4();
		float L_3 = __this->get_villainMoveRate_5();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_01b6;
		}
	}
	{
		// villainMoveTimer = 0;
		__this->set_villainMoveTimer_4((0.0f));
		// if (maincharac != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_maincharac_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0125;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_maincharac_10();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((!(((float)L_8) < ((float)L_12))))
		{
			goto IL_006f;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		__this->set_direc_temp_x_14(1);
		goto IL_0076;
	}

IL_006f:
	{
		// else direc_temp_x = 2;
		__this->set_direc_temp_x_14(2);
	}

IL_0076:
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_maincharac_10();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		if ((!(((float)L_15) < ((float)L_19))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		__this->set_direc_temp_y_15(3);
		goto IL_00ad;
	}

IL_00a6:
	{
		// else direc_temp_y = 4;
		__this->set_direc_temp_y_15(4);
	}

IL_00ad:
	{
		// if (Mathf.Abs(transform.position.x - maincharac.transform.position.x) < 2 * Mathf.Abs(transform.position.y - maincharac.transform.position.y))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_maincharac_10();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27;
		L_27 = fabsf(((float)il2cpp_codegen_subtract((float)L_22, (float)L_26)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_maincharac_10();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		float L_35;
		L_35 = fabsf(((float)il2cpp_codegen_subtract((float)L_30, (float)L_34)));
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35))))))
		{
			goto IL_0119;
		}
	}
	{
		// direc = direc_temp_y;
		int32_t L_36 = __this->get_direc_temp_y_15();
		__this->set_direc_16(L_36);
		goto IL_0125;
	}

IL_0119:
	{
		// else direc = direc_temp_x;
		int32_t L_37 = __this->get_direc_temp_x_14();
		__this->set_direc_16(L_37);
	}

IL_0125:
	{
		// switch (direc)
		int32_t L_38 = __this->get_direc_16();
		V_0 = L_38;
		int32_t L_39 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0145;
			}
			case 1:
			{
				goto IL_0161;
			}
			case 2:
			{
				goto IL_017e;
			}
			case 3:
			{
				goto IL_019a;
			}
		}
	}
	{
		return;
	}

IL_0145:
	{
		// transform.Translate(villanFootStep, 0, 0);  //오른쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_41 = __this->get_villanFootStep_6();
		NullCheck(L_40);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_40, L_41, (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0161:
	{
		// transform.Translate(-villanFootStep, 0, 0);  //왼쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_43 = __this->get_villanFootStep_6();
		NullCheck(L_42);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_42, ((-L_43)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_017e:
	{
		// transform.Translate(0, villanFootStep, 0);   //위쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_45 = __this->get_villanFootStep_6();
		NullCheck(L_44);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_44, (0.0f), L_45, (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_019a:
	{
		// transform.Translate(0, -villanFootStep, 0);  //아래쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_47 = __this->get_villanFootStep_6();
		NullCheck(L_46);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_46, (0.0f), ((-L_47)), (0.0f), /*hidden argument*/NULL);
	}

IL_01b6:
	{
		// }
		return;
	}
}
// System.Void baseVillain::targetShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_targetShoot_m67F2B56BEDEE50DEB9A754D3FEDAA7112A86A2AF (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// villainShootTimer += Time.deltaTime;
		float L_0 = __this->get_villainShootTimer_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_villainShootTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (villainShootTimer > villainShootRate)
		float L_2 = __this->get_villainShootTimer_7();
		float L_3 = __this->get_villainShootRate_8();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_016d;
		}
	}
	{
		// villainShootTimer = 0;
		__this->set_villainShootTimer_7((0.0f));
		// GameObject go = Instantiate(villainbullet) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_villainbullet_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_3 = L_5;
		// go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_3;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_10, L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
		// x = transform.position.x - maincharac.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_maincharac_10();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_21));
		// y = transform.position.y - maincharac.transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_maincharac_10();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_24, (float)L_28));
		// angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;
		float L_29 = V_1;
		float L_30;
		L_30 = fabsf(L_29);
		float L_31 = V_0;
		float L_32;
		L_32 = fabsf(L_31);
		float L_33;
		L_33 = atan2f(L_30, L_32);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_33, (float)(57.2957802f)));
		// if (x < 0 && y < 0)
		float L_34 = V_0;
		if ((!(((float)L_34) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		float L_35 = V_1;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		// go.transform.Rotate(0, 0, angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = V_3;
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		float L_38 = V_2;
		NullCheck(L_37);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_37, (0.0f), (0.0f), L_38, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		// else if (x > 0 && y < 0)
		float L_39 = V_0;
		if ((!(((float)L_39) > ((float)(0.0f)))))
		{
			goto IL_0129;
		}
	}
	{
		float L_40 = V_1;
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_0129;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180 - angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_3;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		float L_43 = V_2;
		NullCheck(L_42);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_42, (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_43)), /*hidden argument*/NULL);
		return;
	}

IL_0129:
	{
		// else if (x < 0 && y > 0)
		float L_44 = V_0;
		if ((!(((float)L_44) < ((float)(0.0f)))))
		{
			goto IL_0151;
		}
	}
	{
		float L_45 = V_1;
		if ((!(((float)L_45) > ((float)(0.0f)))))
		{
			goto IL_0151;
		}
	}
	{
		// go.transform.Rotate(0, 0, -angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_3;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		float L_48 = V_2;
		NullCheck(L_47);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_47, (0.0f), (0.0f), ((-L_48)), /*hidden argument*/NULL);
		return;
	}

IL_0151:
	{
		// go.transform.Rotate(0, 0, 180 + angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_3;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		float L_51 = V_2;
		NullCheck(L_50);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_50, (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)(180.0f), (float)L_51)), /*hidden argument*/NULL);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void baseVillain::NontargetShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_NontargetShoot_m9C177028C9A5C5C921E03FA7C5A0E21029750058 (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// villainShootTimer += Time.deltaTime;
		float L_0 = __this->get_villainShootTimer_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_villainShootTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (villainShootTimer > villainShootRate)
		float L_2 = __this->get_villainShootTimer_7();
		float L_3 = __this->get_villainShootRate_8();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_008d;
		}
	}
	{
		// villainShootTimer = 0;
		__this->set_villainShootTimer_7((0.0f));
		// GameObject go = Instantiate(villainbullet) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_villainbullet_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_10, L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
		// angle = Random.Range(1, 361);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)361), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_15));
		// go.transform.Rotate(0, 0, angle);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		float L_17 = V_0;
		NullCheck(L_16);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_16, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void baseVillain::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_OnTriggerEnter2D_mDA4C2522A471BB9ABFC178F44358740355527A9B (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698365F79794801DA7B9EBE75E502EC91A241053);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag == "mainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// HP.fillAmount -= 0.1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_HP_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_5, ((float)il2cpp_codegen_subtract((float)L_6, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void baseVillain::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain_item_m8F07595C22AA50A9E61EC8186B3D9CE5DDBECFBB (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int item = Random.Range(1, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		// if (item == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// GameObject coinI = Instantiate(coin) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_coin_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// GameObject lifeI = Instantiate(life) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_life_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void baseVillain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC (baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC * __this, const RuntimeMethod* method)
{
	{
		// public float villainMoveRate = 1;   //악당의 속도 이거 줄이면 빨라짐
		__this->set_villainMoveRate_5((1.0f));
		// public float villanFootStep = 1;      //줄이면 보폭 줄어든다
		__this->set_villanFootStep_6((1.0f));
		// public float villainShootRate = 1;   //악당의 사격속도 이거 줄이면 빨라짐
		__this->set_villainShootRate_8((1.0f));
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
// System.Void boss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boss_Update_mA86676AF3904A5F34FC5E13A0AF3D056327A45A0 (boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8(__this, /*hidden argument*/NULL);
		// base.villainMove();
		baseVillain_villainMove_mF4AC6F127FBCC633DDEE3100A27E171F98D4ED85(__this, /*hidden argument*/NULL);
		// base.targetShoot();
		baseVillain_targetShoot_m67F2B56BEDEE50DEB9A754D3FEDAA7112A86A2AF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boss__ctor_mD013E0B2664AB85DD6FE562854692E0101E9652E (boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * __this, const RuntimeMethod* method)
{
	{
		baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC(__this, /*hidden argument*/NULL);
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
// System.Void coin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin_Start_m8DF8CE72DDD599CBF7D681397C39B055F69185E2 (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void coin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin_Update_mF9F70EE70368FAD236B07E1C2FA7DCEC363109C6 (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void coin::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin_OnTriggerEnter2D_m45FC2C20CB634E00EDCD605B8F5D16691E1139ED (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30EB9E5172A4A7996D52BEC0948DEA1832B922EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE56DE241F168484D1F1B546ECFB115BDE78D2C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.name == "maincharac")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// maincharac.coinPoint += 1;  //지선수정
		int32_t L_5 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->set_coinPoint_12(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// Debug.Log("누적수");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral30EB9E5172A4A7996D52BEC0948DEA1832B922EE, /*hidden argument*/NULL);
		// Debug.Log(StageDirector.acc);
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_6 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Debug.Log("코인+하트 갯수");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE56DE241F168484D1F1B546ECFB115BDE78D2C1C, /*hidden argument*/NULL);
		// Debug.Log(maincharac.coinPoint + maincharac.lifePoint);
		int32_t L_9 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		int32_t L_10 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_lifePoint_13();
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// if(StageDirector.acc == maincharac.coinPoint+ maincharac.lifePoint)    //축적 값이랑 얻은 코인+하트 값을 비교해서 다음 스테이지로 넘어
		int32_t L_13 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_14 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		int32_t L_15 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_lifePoint_13();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15))))))
		{
			goto IL_007e;
		}
	}
	{
		// endGame1();
		coin_endGame1_m3C83EC3049CB9015AF7AA61C150D84F5898D2752(__this, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void coin::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin_endGame1_m3C83EC3049CB9015AF7AA61C150D84F5898D2752 (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD879156742A02FE792D5979276986ADA723270D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game1End");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralFD879156742A02FE792D5979276986ADA723270D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coin__ctor_mA9BF7FE47CDFBBD517BE113387506C2A2D9250D8 (coin_t686B0E5363370BEF6A733F6E0FAEA479DFC155E0 * __this, const RuntimeMethod* method)
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
// System.Void coinpoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coinpoint_Start_m2EF49BCAE697673CC8A292ED4300A55A6297F466 (coinpoint_t15C116EFAB0F08663361AA501BAA7201C0979E13 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void coinpoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coinpoint_Update_m246C106F75A9204B4BD92276B8BDFC8277604699 (coinpoint_t15C116EFAB0F08663361AA501BAA7201C0979E13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetComponent<Text>().text = GameDirector.totalCoin.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_totalCoin_7()), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void coinpoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coinpoint__ctor_mD7F237D2F3980C40F905CE4D5B7578A84057C6AB (coinpoint_t15C116EFAB0F08663361AA501BAA7201C0979E13 * __this, const RuntimeMethod* method)
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
// Firebase.Database.DatabaseReference createAcc::get_reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * createAcc_get_reference_m92A854FA6B5A8A0C64414FF8C1BE67A11BC6467F (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void createAcc::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_set_reference_m3FCDE962D665158D3545C86CDE3CBB2354E14B4B (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void createAcc::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_Start_m7162BDA3CE665CBDBE5BDDB2F2167BECB5DD6258 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void createAcc::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_Update_mA9341E0880BA10BA7493624CD56799B15EE25F3C (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void createAcc::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_Join_mDCB84CC618910350426EBA3A8E5DF725AE4CCD11 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB092E0F83AD882F3BB03008FE46F425614A1884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDF9BFEB5BEF0A6364E3CE2D1CA6E76591A3B41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD10359AB7D9D7837F92632E47638CD3C0E78C4BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IDCreate.text.Length < 5) IDCk.text = "아이디가 너무 짧습니다";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_IDCreate_7();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)5)))
		{
			goto IL_0024;
		}
	}
	{
		// if (IDCreate.text.Length < 5) IDCk.text = "아이디가 너무 짧습니다";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_IDCk_9();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralD10359AB7D9D7837F92632E47638CD3C0E78C4BF);
		return;
	}

IL_0024:
	{
		// else if (password1.text.Length < 5) passwordCK.text = "비밀번호가 너무 짧습니다";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_password1_5();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)5)))
		{
			goto IL_0048;
		}
	}
	{
		// else if (password1.text.Length < 5) passwordCK.text = "비밀번호가 너무 짧습니다";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_passwordCK_8();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralAB092E0F83AD882F3BB03008FE46F425614A1884);
		return;
	}

IL_0048:
	{
		// if (password1.text == password2.text)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_8 = __this->get_password1_5();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_8, /*hidden argument*/NULL);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10 = __this->get_password2_6();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		// IDCheck();
		createAcc_IDCheck_m30FA973DEC32D478889F0009C20B05CA0068EBB2(__this, /*hidden argument*/NULL);
		return;
	}

IL_006c:
	{
		// else passwordCK.text = "달라";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_passwordCK_8();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralBDF9BFEB5BEF0A6364E3CE2D1CA6E76591A3B41B);
		// }
		return;
	}
}
// System.Void createAcc::IDCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_IDCheck_m30FA973DEC32D478889F0009C20B05CA0068EBB2 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CIDCheckU3Eb__0_m2735FC5A6270E7BFEF9825D0E95356B0E6A700C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * L_0 = (U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_m062F07F8E27A672CBB6E7776E1208B280E2F0518(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// bool exist = false;
		U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_exist_1((bool)0);
		// reference = FirebaseDatabase.DefaultInstance.GetReference("users");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_3;
		L_3 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_3);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_4;
		L_4 = FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85(L_3, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		createAcc_set_reference_m3FCDE962D665158D3545C86CDE3CBB2354E14B4B_inline(__this, L_4, /*hidden argument*/NULL);
		// reference.GetValueAsync().ContinueWith(task =>
		// {
		// 
		// 
		//     if (task.IsCompleted)
		//     { // 성공적으로 데이터를 가져왔으면
		//         DataSnapshot snapshot = task.Result;
		// 
		//         foreach (DataSnapshot data in snapshot.Children)
		//         {
		//             if (data.Key == IDCreate.text)
		//             {
		//                 Debug.Log("중복");
		//                 exist = true;
		//             }
		//             else
		//             {
		//                 exist = false;
		// 
		//             }
		//         }
		//         if (!exist) CreateInfo();
		//     }
		// });
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_5;
		L_5 = createAcc_get_reference_m92A854FA6B5A8A0C64414FF8C1BE67A11BC6467F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_6;
		L_6 = Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8(L_5, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * L_7 = V_0;
		Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * L_8 = (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *)il2cpp_codegen_object_new(Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CIDCheckU3Eb__0_m2735FC5A6270E7BFEF9825D0E95356B0E6A700C8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		NullCheck(L_6);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE(L_6, L_8, /*hidden argument*/Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void createAcc::IDmessaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_IDmessaging_m73905DEE0017C4CC9D5F2D09409434EBD3B107A8 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2D2EF4F61A973856ABFDBCBB6EAB0CBD71473D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IDCk.text = "이미 존재하는 아이디입니다.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_IDCk_9();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral6E2D2EF4F61A973856ABFDBCBB6EAB0CBD71473D);
		// }
		return;
	}
}
// System.Void createAcc::CreateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_CreateInfo_mCC85046DCD031DD2209F89DDF85F6F13EF8A0964 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8378523EDFAA871B6C606D5AFC8D3072C71A0B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// reference = FirebaseDatabase.DefaultInstance.RootReference;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_1;
		L_1 = FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72(L_0, /*hidden argument*/NULL);
		createAcc_set_reference_m3FCDE962D665158D3545C86CDE3CBB2354E14B4B_inline(__this, L_1, /*hidden argument*/NULL);
		// User user = new User(nameInput.text, password1.text, "0;0;0;0;0;0;0", 0, 1, 0);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_nameInput_4();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_password1_5();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_4, /*hidden argument*/NULL);
		User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33 * L_6 = (User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33 *)il2cpp_codegen_object_new(User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33_il2cpp_TypeInfo_var);
		User__ctor_m30E0B5B5B3ABE6DF6C8998D6BAEB08C37FD51AF0(L_6, L_3, L_5, _stringLiteralC8378523EDFAA871B6C606D5AFC8D3072C71A0B9, 0, 1, 0, /*hidden argument*/NULL);
		// string json = JsonUtility.ToJson(user);
		String_t* L_7;
		L_7 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// reference.Child("users").Child(IDCreate.text).SetRawJsonValueAsync(json);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_8;
		L_8 = createAcc_get_reference_m92A854FA6B5A8A0C64414FF8C1BE67A11BC6467F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_9;
		L_9 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10 = __this->get_IDCreate_7();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_12;
		L_12 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_9, L_11, /*hidden argument*/NULL);
		String_t* L_13 = V_0;
		NullCheck(L_12);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = DatabaseReference_SetRawJsonValueAsync_m7F99AA89C17C838E525723F9979575DD673C22E2(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void createAcc::SetcreateAccPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc_SetcreateAccPanel_mD9A25818D263401197935EFC1AE81DB1107EFAED (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	{
		// createAccpanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_createAccpanel_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void createAcc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createAcc__ctor_m94A11D1B1EEE95C5AE6770A9C3260C0E6CDC7868 (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
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
// System.Void life::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life_Start_m114A98A145394B775136402DFABAFC84A7140E06 (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void life::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life_Update_mC1652E2777720EDD5CDE150C21F512D06DE7EA6A (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void life::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life_OnTriggerEnter2D_m739C64FAA0572E1195C22B85CF410C129382C2C0 (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30EB9E5172A4A7996D52BEC0948DEA1832B922EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BB85A430D8328591E272BB9059F0A50341192A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.name == "maincharac")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// maincharac.lifePoint += 1;  //지선수정
		int32_t L_5 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_lifePoint_13();
		((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->set_lifePoint_13(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// Debug.Log("누적수");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral30EB9E5172A4A7996D52BEC0948DEA1832B922EE, /*hidden argument*/NULL);
		// Debug.Log(StageDirector.acc);
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_6 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Debug.Log("코인+하트갯수");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA9BB85A430D8328591E272BB9059F0A50341192A, /*hidden argument*/NULL);
		// Debug.Log(maincharac.coinPoint + maincharac.lifePoint);
		int32_t L_9 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		int32_t L_10 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_lifePoint_13();
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// if (StageDirector.acc == maincharac.coinPoint + maincharac.lifePoint)    //축적 값이랑 얻은 코인+하트 값을 비교해서 다음 스테이지로 넘어
		int32_t L_13 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_acc_5();
		int32_t L_14 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		int32_t L_15 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_lifePoint_13();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15))))))
		{
			goto IL_007e;
		}
	}
	{
		// endGame1();
		life_endGame1_m0A064D6CF969E6DB822E63AB0F380C7800F6FB8A(__this, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void life::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life_endGame1_m0A064D6CF969E6DB822E63AB0F380C7800F6FB8A (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD879156742A02FE792D5979276986ADA723270D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game1End");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralFD879156742A02FE792D5979276986ADA723270D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void life::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void life__ctor_mE837C77BCC2075F368B891C720241020A74C6B42 (life_t6E1408CB761CE2DB358BC37E7BB957AD921BC140 * __this, const RuntimeMethod* method)
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
// Firebase.Database.DatabaseReference loadingScene::get_reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loadingScene_get_reference_m7B32EA270A440D073C0A73C0D60693E635B064F1 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void loadingScene::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_set_reference_m3D33996CC5EC5035CE4CE59E54B699A1B10F51DC (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void loadingScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_Start_m48F05AFF42137B4FC1F83844C71FBFBDEBE08475 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loginButton.positions.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// Vec();
		loadingScene_Vec_m7293AFD595CD804C160490CD92CB281B8FC5A4B4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loadingScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_Update_m05A6D96AE85D164E7AFC49724FAE4B6F4BF1C3B0 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7989F70DA36159D876618B4F19AACD041468AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("끝났나??     "+finish);
		int32_t* L_0 = __this->get_address_of_finish_5();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDD7989F70DA36159D876618B4F19AACD041468AF, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// if (finish == 1) enterGame();
		int32_t L_3 = __this->get_finish_5();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// if (finish == 1) enterGame();
		loadingScene_enterGame_m0631082FAEE9CBC6EB68B12EFF55B38F5DCCB02B(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void loadingScene::Vec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_Vec_m7293AFD595CD804C160490CD92CB281B8FC5A4B4 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&loadingScene_U3CVecU3Eb__7_0_mD02FBE1AC8F3193FC96E5859CDD47007B2C45F01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reference = FirebaseDatabase.DefaultInstance.GetReference("scores");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_1;
		L_1 = FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85(L_0, _stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC, /*hidden argument*/NULL);
		loadingScene_set_reference_m3D33996CC5EC5035CE4CE59E54B699A1B10F51DC_inline(__this, L_1, /*hidden argument*/NULL);
		// reference.GetValueAsync().ContinueWith(task =>
		// {
		// 
		// 
		//     if (task.IsCompleted)
		//     { // 성공적으로 데이터를 가져왔으면
		// 
		//         DataSnapshot snapshot = task.Result;
		//         // 데이터를 출력하고자 할때는 Snapshot 객체 사용함
		//         foreach (DataSnapshot stageinfo in snapshot.Children) //스테이지정보들
		//         {
		// 
		//             if (stageinfo.Key == GameDirector.stagelevel.ToString()) //스테이지 키들
		//             {
		// 
		// 
		//                 foreach (DataSnapshot monster in stageinfo.Children)    //몬스터1,2,3,4,5,6
		//                 {
		// 
		//                     foreach (DataSnapshot pos in monster.Children)
		//                     {
		// 
		//                         Debug.Log("레벨!   "+GameDirector.stagelevel.ToString());
		// 
		// 
		//                         string[] PosTemp;
		//                         PosTemp = pos.Value.ToString().Split(',');
		// 
		// 
		//                         Vector3 PosBaby = new Vector3(float.Parse(PosTemp[0]), float.Parse(PosTemp[1]), 0);
		// 
		//                         loginButton.positions.Add(PosBaby);
		//                         foreach (Vector3 A in loginButton.positions)
		//                         {
		//                             Debug.Log(A);
		//                         }
		// 
		//                     }
		//                 }
		//             }
		//         }
		//         finish = 1;
		//     }
		// 
		// 
		// });
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_2;
		L_2 = loadingScene_get_reference_m7B32EA270A440D073C0A73C0D60693E635B064F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_3;
		L_3 = Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8(L_2, /*hidden argument*/NULL);
		Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * L_4 = (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *)il2cpp_codegen_object_new(Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677(L_4, __this, (intptr_t)((intptr_t)loadingScene_U3CVecU3Eb__7_0_mD02FBE1AC8F3193FC96E5859CDD47007B2C45F01_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		NullCheck(L_3);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE(L_3, L_4, /*hidden argument*/Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void loadingScene::enterGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_enterGame_m0631082FAEE9CBC6EB68B12EFF55B38F5DCCB02B (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C37B01D08EB541DD2BD128ED0053B9A7599F52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Game1");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral24C37B01D08EB541DD2BD128ED0053B9A7599F52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loadingScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene__ctor_m81FE108D5E00A7872DA9AA4BD42117B923E30FB1 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void loadingScene::<Vec>b__7_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingScene_U3CVecU3Eb__7_0_mD02FBE1AC8F3193FC96E5859CDD47007B2C45F01 (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC547C30C479D0738626BE6AF255075272A6E233D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (task.IsCompleted)
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0152;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_2 = ___task0;
		NullCheck(L_2);
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_3;
		L_3 = Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6(L_2, /*hidden argument*/Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		// foreach (DataSnapshot stageinfo in snapshot.Children) //스테이지정보들
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0134;
		}

IL_0021:
		{
			// foreach (DataSnapshot stageinfo in snapshot.Children) //스테이지정보들
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_7;
			L_7 = InterfaceFuncInvoker0< DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			// if (stageinfo.Key == GameDirector.stagelevel.ToString()) //스테이지 키들
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
			String_t* L_10;
			L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_stagelevel_5()), /*hidden argument*/NULL);
			bool L_11;
			L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0134;
			}
		}

IL_0042:
		{
			// foreach (DataSnapshot monster in stageinfo.Children)    //몬스터1,2,3,4,5,6
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var, L_13);
			V_2 = L_14;
		}

IL_004e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_011d;
			}

IL_0053:
			{
				// foreach (DataSnapshot monster in stageinfo.Children)    //몬스터1,2,3,4,5,6
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_16;
				L_16 = InterfaceFuncInvoker0< DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var, L_15);
				// foreach (DataSnapshot pos in monster.Children)
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51(L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var, L_17);
				V_3 = L_18;
			}

IL_0064:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0106;
				}

IL_0069:
				{
					// foreach (DataSnapshot pos in monster.Children)
					RuntimeObject* L_19 = V_3;
					NullCheck(L_19);
					DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_20;
					L_20 = InterfaceFuncInvoker0< DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var, L_19);
					// Debug.Log("레벨!   "+GameDirector.stagelevel.ToString());
					IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
					String_t* L_21;
					L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_stagelevel_5()), /*hidden argument*/NULL);
					String_t* L_22;
					L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC547C30C479D0738626BE6AF255075272A6E233D, L_21, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
					Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
					// PosTemp = pos.Value.ToString().Split(',');
					NullCheck(L_20);
					RuntimeObject * L_23;
					L_23 = DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821(L_20, /*hidden argument*/NULL);
					NullCheck(L_23);
					String_t* L_24;
					L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = L_25;
					NullCheck(L_26);
					(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
					NullCheck(L_24);
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27;
					L_27 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_24, L_26, /*hidden argument*/NULL);
					V_4 = L_27;
					// Vector3 PosBaby = new Vector3(float.Parse(PosTemp[0]), float.Parse(PosTemp[1]), 0);
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = V_4;
					NullCheck(L_28);
					int32_t L_29 = 0;
					String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
					float L_31;
					L_31 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_30, /*hidden argument*/NULL);
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_4;
					NullCheck(L_32);
					int32_t L_33 = 1;
					String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
					float L_35;
					L_35 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_34, /*hidden argument*/NULL);
					Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), L_31, L_35, (0.0f), /*hidden argument*/NULL);
					// loginButton.positions.Add(PosBaby);
					IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
					List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_36 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_5;
					NullCheck(L_36);
					List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_36, L_37, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
					// foreach (Vector3 A in loginButton.positions)
					List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_38 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
					NullCheck(L_38);
					Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  L_39;
					L_39 = List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351(L_38, /*hidden argument*/List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var);
					V_6 = L_39;
				}

IL_00da:
				try
				{ // begin try (depth: 4)
					{
						goto IL_00ed;
					}

IL_00dc:
					{
						// foreach (Vector3 A in loginButton.positions)
						Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
						L_40 = Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var);
						// Debug.Log(A);
						Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = L_40;
						RuntimeObject * L_42 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_41);
						IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
						Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
					}

IL_00ed:
					{
						// foreach (Vector3 A in loginButton.positions)
						bool L_43;
						L_43 = Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var);
						if (L_43)
						{
							goto IL_00dc;
						}
					}

IL_00f6:
					{
						IL2CPP_LEAVE(0x106, FINALLY_00f8);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_00f8;
				}

FINALLY_00f8:
				{ // begin finally (depth: 4)
					Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var);
					IL2CPP_END_FINALLY(248)
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(248)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x106, IL_0106)
				}

IL_0106:
				{
					// foreach (DataSnapshot pos in monster.Children)
					RuntimeObject* L_44 = V_3;
					NullCheck(L_44);
					bool L_45;
					L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_44);
					if (L_45)
					{
						goto IL_0069;
					}
				}

IL_0111:
				{
					IL2CPP_LEAVE(0x11D, FINALLY_0113);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0113;
			}

FINALLY_0113:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_46 = V_3;
					if (!L_46)
					{
						goto IL_011c;
					}
				}

IL_0116:
				{
					RuntimeObject* L_47 = V_3;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_47);
				}

IL_011c:
				{
					IL2CPP_END_FINALLY(275)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(275)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x11D, IL_011d)
			}

IL_011d:
			{
				// foreach (DataSnapshot monster in stageinfo.Children)    //몬스터1,2,3,4,5,6
				RuntimeObject* L_48 = V_2;
				NullCheck(L_48);
				bool L_49;
				L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_48);
				if (L_49)
				{
					goto IL_0053;
				}
			}

IL_0128:
			{
				IL2CPP_LEAVE(0x134, FINALLY_012a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_012a;
		}

FINALLY_012a:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_50 = V_2;
				if (!L_50)
				{
					goto IL_0133;
				}
			}

IL_012d:
			{
				RuntimeObject* L_51 = V_2;
				NullCheck(L_51);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_51);
			}

IL_0133:
			{
				IL2CPP_END_FINALLY(298)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(298)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x134, IL_0134)
		}

IL_0134:
		{
			// foreach (DataSnapshot stageinfo in snapshot.Children) //스테이지정보들
			RuntimeObject* L_52 = V_0;
			NullCheck(L_52);
			bool L_53;
			L_53 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_0021;
			}
		}

IL_013f:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_0141);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0141;
	}

FINALLY_0141:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_0;
			if (!L_54)
			{
				goto IL_014a;
			}
		}

IL_0144:
		{
			RuntimeObject* L_55 = V_0;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_55);
		}

IL_014a:
		{
			IL2CPP_END_FINALLY(321)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(321)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14B, IL_014b)
	}

IL_014b:
	{
		// finish = 1;
		__this->set_finish_5(1);
	}

IL_0152:
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
// Firebase.Database.DatabaseReference loginButton::get_reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loginButton_get_reference_m1724EE41183150890AEF6EBCA0EB4914B66E3503 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void loginButton::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_set_reference_m60A05B22A0FC66EAB8DD7FAA9C599226C7C31664 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void loginButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_Update_mB5CDC95885A2A759E258DA9AF8CC4DBA763C1C60 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	{
		// if (finish == 1) HomeScene();
		int32_t L_0 = __this->get_finish_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// if (finish == 1) HomeScene();
		loginButton_HomeScene_m08C6E669F4490ABE084B881B1075127201BFE4C1(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void loginButton::Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_Info_m2D98897C8A63F29AB9DB1A4F6C28918F31E65100 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CInfoU3Eb__0_m4CF1799549B39E217756BE5245C7779B5ED4726D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * L_0 = (U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_m035DB666300DC0537AAE999ECC4FEA49B4BAEC34(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		// string inputID = ID.text;
		U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * L_2 = V_0;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_ID_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_inputID_0(L_4);
		// string inputPassword = password.text;
		U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * L_5 = V_0;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_password_6();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_inputPassword_1(L_7);
		// reference = FirebaseDatabase.DefaultInstance.GetReference("users");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_8;
		L_8 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_8);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_9;
		L_9 = FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		loginButton_set_reference_m60A05B22A0FC66EAB8DD7FAA9C599226C7C31664_inline(__this, L_9, /*hidden argument*/NULL);
		// reference.GetValueAsync().ContinueWith(task =>
		// {
		// 
		// 
		//     if (task.IsCompleted)
		//     { // 성공적으로 데이터를 가져왔으면
		//         DataSnapshot snapshot = task.Result;
		//         // 데이터를 출력하고자 할때는 Snapshot 객체 사용함
		//         foreach (DataSnapshot data in snapshot.Children)
		//         {
		//             if (data.Key == inputID)
		//             {
		//                 Debug.Log("성공1");
		// 
		//                 IDictionary Info = (IDictionary)data.Value;
		// 
		//                 if (Info["PASSWORD"].ToString() == inputPassword)
		//                 {
		// 
		//                     string[] temp;
		//                     temp = Info["closet"].ToString().Split(';');
		//                     for(int i = 0; i < 5; i++)
		//                     {
		//                         GameDirector.closet[i] = int.Parse(temp[i]);
		//                     }
		// 
		//                     Debug.Log("성공");
		// 
		//                     GameDirector.ID = data.Key;
		// 
		// 
		//                     //Debug.Log("이름은??   " + Info["Name"]);
		//                     //Debug.Log("비번은??   " + Info["PASSWORD"]);
		// 
		// 
		//                     GameDirector.stagelevel = int.Parse(Info["score"].ToString());
		//                     GameDirector.nowBody = int.Parse(Info["pangpangColor"].ToString());
		//                     GameDirector.totalCoin = int.Parse(Info["totalCoin"].ToString());
		// 
		// 
		// 
		//                     Debug.Log("팡팡이색은??   " + GameDirector.nowBody.ToString());
		//                     Debug.Log("점수는??   " + GameDirector.stagelevel.ToString());
		// 
		//                     Debug.Log("코인은??   " + GameDirector.totalCoin.ToString());
		//                 }
		//                 else
		//                 {
		//                     Debug.Log("실패");
		// 
		//                 }
		// 
		//             }
		// 
		//         }
		// 
		//         finish = 1;
		// 
		//     }
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// });
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_10;
		L_10 = loginButton_get_reference_m1724EE41183150890AEF6EBCA0EB4914B66E3503_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_11;
		L_11 = Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8(L_10, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * L_12 = V_0;
		Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * L_13 = (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *)il2cpp_codegen_object_new(Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CInfoU3Eb__0_m4CF1799549B39E217756BE5245C7779B5ED4726D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		NullCheck(L_11);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE(L_11, L_13, /*hidden argument*/Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void loginButton::HomeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_HomeScene_m08C6E669F4490ABE084B881B1075127201BFE4C1 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Home");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loginButton::createAccPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton_createAccPanel_m55A1B258548610188F43406D7B7351F8735DFD84 (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	{
		// createAccpanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_createAccpanel_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loginButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton__ctor_mB6AD3B34F30ABD156BBBBE5BE8C803F8641E2DBF (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void loginButton::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loginButton__cctor_m995FB396C31AE538C133F310041F8EE18BAB7EE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<Vector3> positions=new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->set_positions_4(L_0);
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
// System.Void mainCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainCam_Start_m943679581AD4E9C0111B47EE9B45B10FB7B7E1C2 (mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maincharac = GameObject.Find("maincharac");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		__this->set_maincharac_4(L_0);
		// }
		return;
	}
}
// System.Void mainCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainCam_Update_m31A3CC877C2FF980766D83DA541AD7DE07C566BB (mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 playerPos = maincharac.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_maincharac_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// transform.position = new Vector3(playerPos.x, playerPos.y, -10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_5, L_7, (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mainCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainCam__ctor_mF10703A93657206DDC739A78FDD0837F76B6ED90 (mainCam_tB8F8EDA824C761CC1596514F60BB9C13A0ABCFAA * __this, const RuntimeMethod* method)
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
// System.Void mainbullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainbullet_Start_m0596BB8FB581B743A37C1C4CA2925D72C4A2D62B (mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void mainbullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainbullet_Update_m78205A53699F556F46131622C746DAE84787C996 (mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(0.03f,0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, (0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mainbullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainbullet_OnTriggerEnter2D_m80B66DA25AFDB14E55DD34E4FF755BE93CB9EAA0 (mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.name != "maincharac")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void mainbullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainbullet__ctor_m60EF2F355C62D1DA2FE4C0C5ABF939D65727851F (mainbullet_t4CFDC93A871A58B3DBEA04A4C6943AB50D022139 * __this, const RuntimeMethod* method)
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
// System.Void maincharac::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_Start_m4009C4EFBCE26818002ACA982F232C85C8D37E81 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// villain = GameObject.Find("villain");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0, /*hidden argument*/NULL);
		__this->set_villain_8(L_0);
		// mainHP.fillAmount = 1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_mainHP_19();
		NullCheck(L_1);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_1, (1.0f), /*hidden argument*/NULL);
		// maincolor = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->set_maincolor_14(L_2);
		// monsterDirec = GameObject.Find("MonsterDirector");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA, /*hidden argument*/NULL);
		__this->set_monsterDirec_20(L_3);
		// }
		return;
	}
}
// System.Void maincharac::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_Update_mE64CE45963C1B9BCBFE42D36599527A5158CE40D (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// mainHP.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, -1.3f, 0));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_mainHP_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (-1.29999995f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_7, /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.LeftArrow)){
		bool L_8;
		L_8 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)276), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// transform.Translate(-0.1f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_9, (-0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_00dc;
	}

IL_0066:
	{
		// else if (Input.GetKey(KeyCode.RightArrow))
		bool L_10;
		L_10 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)275), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		// transform.Translate(0.1f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_11, (0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_00dc;
	}

IL_008e:
	{
		// else if(Input.GetKey(KeyCode.UpArrow))
		bool L_12;
		L_12 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)273), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b6;
		}
	}
	{
		// transform.Translate(0, 0.1f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_13, (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_00dc;
	}

IL_00b6:
	{
		// else if(Input.GetKey(KeyCode.DownArrow))
		bool L_14;
		L_14 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)274), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00dc;
		}
	}
	{
		// transform.Translate(0, -0.1f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_15, (0.0f), (-0.100000001f), (0.0f), /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// if (curTime <= 0) {
		float L_16 = __this->get_curTime_4();
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_0399;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_17;
		L_17 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_03ab;
		}
	}
	{
		// if (monsterDirec.GetComponent<monsterDirector>().List_villains != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_monsterDirec_20();
		NullCheck(L_18);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_19;
		L_19 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_18, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = L_19->get_List_villains_10();
		if (!L_20)
		{
			goto IL_03ab;
		}
	}
	{
		// curTime = coolTime;
		float L_21 = __this->get_coolTime_5();
		__this->set_curTime_4(L_21);
		// GameObject go = Instantiate(mainbullet) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_mainbullet_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_23;
		// go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), L_28, L_31, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_32, /*hidden argument*/NULL);
		// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_monsterDirec_20();
		NullCheck(L_33);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_34;
		L_34 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_33, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = L_34->get_List_villains_10();
		NullCheck(L_35);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_36;
		L_36 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_35, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_1 = L_36;
	}

IL_0170:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0219;
		}

IL_0175:
		{
			// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
			L_37 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_2 = L_37;
			// if (monsterDirec.GetComponent<monsterDirector>().List_villains.IndexOf(A) == 0)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_monsterDirec_20();
			NullCheck(L_38);
			monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_39;
			L_39 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_38, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
			NullCheck(L_39);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_40 = L_39->get_List_villains_10();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_2;
			NullCheck(L_40);
			int32_t L_42;
			L_42 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_40, L_41, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_01c4;
			}
		}

IL_0195:
		{
			// dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_2;
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
			L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_46);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_47, /*hidden argument*/NULL);
			float L_49;
			L_49 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_48, /*hidden argument*/NULL);
			__this->set_dis_18(L_49);
			// closeMonster = A;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_2;
			__this->set_closeMonster_16(L_50);
			// }
			goto IL_0219;
		}

IL_01c4:
		{
			// if (dis > Vector3.SqrMagnitude(A.transform.position - this.transform.position))
			float L_51 = __this->get_dis_18();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = V_2;
			NullCheck(L_52);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
			L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
			NullCheck(L_53);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
			L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
			L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_55);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
			L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_54, L_56, /*hidden argument*/NULL);
			float L_58;
			L_58 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_57, /*hidden argument*/NULL);
			if ((!(((float)L_51) > ((float)L_58))))
			{
				goto IL_0219;
			}
		}

IL_01ec:
		{
			// dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_2;
			NullCheck(L_59);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
			L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
			NullCheck(L_60);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
			L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_62);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
			L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
			L_64 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_61, L_63, /*hidden argument*/NULL);
			float L_65;
			L_65 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_64, /*hidden argument*/NULL);
			__this->set_dis_18(L_65);
			// closeMonster = A;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = V_2;
			__this->set_closeMonster_16(L_66);
		}

IL_0219:
		{
			// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
			bool L_67;
			L_67 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0175;
			}
		}

IL_0225:
		{
			IL2CPP_LEAVE(0x235, FINALLY_0227);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0227;
	}

FINALLY_0227:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(551)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(551)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x235, IL_0235)
	}

IL_0235:
	{
		// x = transform.position.x - closeMonster.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_closeMonster_16();
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_2();
		__this->set_x_9(((float)il2cpp_codegen_subtract((float)L_70, (float)L_74)));
		// y = transform.position.y - closeMonster.transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = __this->get_closeMonster_16();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_y_3();
		__this->set_y_10(((float)il2cpp_codegen_subtract((float)L_77, (float)L_81)));
		// angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;
		float L_82 = __this->get_y_10();
		float L_83;
		L_83 = fabsf(L_82);
		float L_84 = __this->get_x_9();
		float L_85;
		L_85 = fabsf(L_84);
		float L_86;
		L_86 = atan2f(L_83, L_85);
		__this->set_angle_11(((float)il2cpp_codegen_multiply((float)L_86, (float)(57.2957802f))));
		// if (x < 0 && y < 0)
		float L_87 = __this->get_x_9();
		if ((!(((float)L_87) < ((float)(0.0f)))))
		{
			goto IL_02ea;
		}
	}
	{
		float L_88 = __this->get_y_10();
		if ((!(((float)L_88) < ((float)(0.0f)))))
		{
			goto IL_02ea;
		}
	}
	{
		// go.transform.Rotate(0, 0, angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = V_0;
		NullCheck(L_89);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
		L_90 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_89, /*hidden argument*/NULL);
		float L_91 = __this->get_angle_11();
		NullCheck(L_90);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_90, (0.0f), (0.0f), L_91, /*hidden argument*/NULL);
		return;
	}

IL_02ea:
	{
		// else if (x > 0 && y < 0)
		float L_92 = __this->get_x_9();
		if ((!(((float)L_92) > ((float)(0.0f)))))
		{
			goto IL_0326;
		}
	}
	{
		float L_93 = __this->get_y_10();
		if ((!(((float)L_93) < ((float)(0.0f)))))
		{
			goto IL_0326;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180 - angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = V_0;
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_94, /*hidden argument*/NULL);
		float L_96 = __this->get_angle_11();
		NullCheck(L_95);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_95, (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_96)), /*hidden argument*/NULL);
		return;
	}

IL_0326:
	{
		// else if (x < 0 && y > 0)
		float L_97 = __this->get_x_9();
		if ((!(((float)L_97) < ((float)(0.0f)))))
		{
			goto IL_035d;
		}
	}
	{
		float L_98 = __this->get_y_10();
		if ((!(((float)L_98) > ((float)(0.0f)))))
		{
			goto IL_035d;
		}
	}
	{
		// go.transform.Rotate(0, 0, -angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = V_0;
		NullCheck(L_99);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_100;
		L_100 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_99, /*hidden argument*/NULL);
		float L_101 = __this->get_angle_11();
		NullCheck(L_100);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_100, (0.0f), (0.0f), ((-L_101)), /*hidden argument*/NULL);
		return;
	}

IL_035d:
	{
		// else if (x > 0 && y > 0)
		float L_102 = __this->get_x_9();
		if ((!(((float)L_102) > ((float)(0.0f)))))
		{
			goto IL_03ab;
		}
	}
	{
		float L_103 = __this->get_y_10();
		if ((!(((float)L_103) > ((float)(0.0f)))))
		{
			goto IL_03ab;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180 + angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = V_0;
		NullCheck(L_104);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105;
		L_105 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_104, /*hidden argument*/NULL);
		float L_106 = __this->get_angle_11();
		NullCheck(L_105);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_105, (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)(180.0f), (float)L_106)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0399:
	{
		// curTime -= Time.deltaTime;
		float L_107 = __this->get_curTime_4();
		float L_108;
		L_108 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_curTime_4(((float)il2cpp_codegen_subtract((float)L_107, (float)L_108)));
	}

IL_03ab:
	{
		// }
		return;
	}
}
// System.Void maincharac::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_OnTriggerEnter2D_m1A7DE774F1EFABAA362FCD47D8DF8DC7E34273F7 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CA4D387B77ECEE2040BD9095D4D1F9367DF75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral087E27DCB4243AE7198BDAB977D499B94DE873B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CB13E17177673B2B7E554B1DB98D541268EBCE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("앋");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral087E27DCB4243AE7198BDAB977D499B94DE873B1, /*hidden argument*/NULL);
		// if (a.gameObject.tag == "villainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral04CA4D387B77ECEE2040BD9095D4D1F9367DF75D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// mainHP.fillAmount -= 0.1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_mainHP_19();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_5, ((float)il2cpp_codegen_subtract((float)L_6, (float)(0.100000001f))), /*hidden argument*/NULL);
		// Debug.Log("적에게 공격 당함");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1CB13E17177673B2B7E554B1DB98D541268EBCE7, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if (mainHP.fillAmount == 0)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_mainHP_19();
		NullCheck(L_7);
		float L_8;
		L_8 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_7, /*hidden argument*/NULL);
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// endGame1();
		maincharac_endGame1_m4A856D8A2A74EA4D5306E246FFD341E4CC4A00A0(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void maincharac::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_endGame1_m4A856D8A2A74EA4D5306E246FFD341E4CC4A00A0 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameOver");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void maincharac::GoLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_GoLeft_mBC60A476F855EA51F8B1217144C058C1928A8D8A (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Translate(-0.9f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, (-0.899999976f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void maincharac::GoRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_GoRight_m8BEB033CE1ED123CBFD8C047B421E98B1EA85DE7 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Translate(0.9f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, (0.899999976f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void maincharac::GoUP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_GoUP_mBE3AAD2D6A2D41CAB896BC5481B4FA31502B3765 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Translate(0, -0.9f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, (0.0f), (-0.899999976f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void maincharac::GoDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_GoDown_m0EDB66135C00D2622793197CC4C8A337A799DDFC (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Translate(0, 0.9f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, (0.0f), (0.899999976f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void maincharac::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac_Attack_mB697978C52A712F36E1661D59FC0A7A109952C93 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// GameObject go = Instantiate(mainbullet) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mainbullet_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_1;
		// go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_monsterDirec_20();
		NullCheck(L_11);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_12;
		L_12 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_11, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = L_12->get_List_villains_10();
		NullCheck(L_13);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_14;
		L_14 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_13, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_1 = L_14;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0100;
		}

IL_005c:
		{
			// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
			L_15 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_2 = L_15;
			// if (monsterDirec.GetComponent<monsterDirector>().List_villains.IndexOf(A) == 0)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_monsterDirec_20();
			NullCheck(L_16);
			monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_17;
			L_17 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_16, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
			NullCheck(L_17);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18 = L_17->get_List_villains_10();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
			NullCheck(L_18);
			int32_t L_20;
			L_20 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_18, L_19, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00ab;
			}
		}

IL_007c:
		{
			// dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_2;
			NullCheck(L_21);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
			L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
			L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_24);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
			L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_23, L_25, /*hidden argument*/NULL);
			float L_27;
			L_27 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_26, /*hidden argument*/NULL);
			__this->set_dis_18(L_27);
			// closeMonster = A;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_2;
			__this->set_closeMonster_16(L_28);
			// }
			goto IL_0100;
		}

IL_00ab:
		{
			// if (dis > Vector3.SqrMagnitude(A.transform.position - this.transform.position))
			float L_29 = __this->get_dis_18();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
			NullCheck(L_30);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
			L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
			NullCheck(L_31);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
			L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_33);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_32, L_34, /*hidden argument*/NULL);
			float L_36;
			L_36 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_35, /*hidden argument*/NULL);
			if ((!(((float)L_29) > ((float)L_36))))
			{
				goto IL_0100;
			}
		}

IL_00d3:
		{
			// dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_2;
			NullCheck(L_37);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
			L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
			L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_40);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_39, L_41, /*hidden argument*/NULL);
			float L_43;
			L_43 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_42, /*hidden argument*/NULL);
			__this->set_dis_18(L_43);
			// closeMonster = A;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_2;
			__this->set_closeMonster_16(L_44);
		}

IL_0100:
		{
			// foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
			bool L_45;
			L_45 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_45)
			{
				goto IL_005c;
			}
		}

IL_010c:
		{
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(270)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
	}

IL_011c:
	{
		// x = transform.position.x - closeMonster.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_closeMonster_16();
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		__this->set_x_9(((float)il2cpp_codegen_subtract((float)L_48, (float)L_52)));
		// y = transform.position.y - closeMonster.transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_closeMonster_16();
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_3();
		__this->set_y_10(((float)il2cpp_codegen_subtract((float)L_55, (float)L_59)));
		// angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;
		float L_60 = __this->get_y_10();
		float L_61;
		L_61 = fabsf(L_60);
		float L_62 = __this->get_x_9();
		float L_63;
		L_63 = fabsf(L_62);
		float L_64;
		L_64 = atan2f(L_61, L_63);
		__this->set_angle_11(((float)il2cpp_codegen_multiply((float)L_64, (float)(57.2957802f))));
		// if (x < 0 && y < 0)
		float L_65 = __this->get_x_9();
		if ((!(((float)L_65) < ((float)(0.0f)))))
		{
			goto IL_01d1;
		}
	}
	{
		float L_66 = __this->get_y_10();
		if ((!(((float)L_66) < ((float)(0.0f)))))
		{
			goto IL_01d1;
		}
	}
	{
		// go.transform.Rotate(0, 0, angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_0;
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		float L_69 = __this->get_angle_11();
		NullCheck(L_68);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_68, (0.0f), (0.0f), L_69, /*hidden argument*/NULL);
		return;
	}

IL_01d1:
	{
		// else if (x > 0 && y < 0)
		float L_70 = __this->get_x_9();
		if ((!(((float)L_70) > ((float)(0.0f)))))
		{
			goto IL_020d;
		}
	}
	{
		float L_71 = __this->get_y_10();
		if ((!(((float)L_71) < ((float)(0.0f)))))
		{
			goto IL_020d;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180 - angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = V_0;
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		float L_74 = __this->get_angle_11();
		NullCheck(L_73);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_73, (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_74)), /*hidden argument*/NULL);
		return;
	}

IL_020d:
	{
		// else if (x < 0 && y > 0)
		float L_75 = __this->get_x_9();
		if ((!(((float)L_75) < ((float)(0.0f)))))
		{
			goto IL_0244;
		}
	}
	{
		float L_76 = __this->get_y_10();
		if ((!(((float)L_76) > ((float)(0.0f)))))
		{
			goto IL_0244;
		}
	}
	{
		// go.transform.Rotate(0, 0, -angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = V_0;
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		float L_79 = __this->get_angle_11();
		NullCheck(L_78);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_78, (0.0f), (0.0f), ((-L_79)), /*hidden argument*/NULL);
		return;
	}

IL_0244:
	{
		// else if (x > 0 && y > 0)
		float L_80 = __this->get_x_9();
		if ((!(((float)L_80) > ((float)(0.0f)))))
		{
			goto IL_027f;
		}
	}
	{
		float L_81 = __this->get_y_10();
		if ((!(((float)L_81) > ((float)(0.0f)))))
		{
			goto IL_027f;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180 + angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = V_0;
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		float L_84 = __this->get_angle_11();
		NullCheck(L_83);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_83, (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)(180.0f), (float)L_84)), /*hidden argument*/NULL);
	}

IL_027f:
	{
		// }
		return;
	}
}
// System.Void maincharac::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maincharac__ctor_m979572E5FDA6F9AA6B2D5FA3CB6380047B26F5D4 (maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878 * __this, const RuntimeMethod* method)
{
	{
		// public float coolTime = 1.0f;
		__this->set_coolTime_5((1.0f));
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
// System.Void monsterDirector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void monsterDirector_Start_m5263622BBEA88D0B0A81EB5E4449EF602ABD455B (monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	int32_t V_8 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	int32_t V_10 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_11 = NULL;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0064;
	}

IL_0004:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_3 = L_2.get_x_2();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_4 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_7 = L_6.get_y_3();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// GameObject vill = Instantiate(villain1) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_villain1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_9;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_15, L_16, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0060:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 3; i < 6; i++)
		V_2 = 3;
		goto IL_00cc;
	}

IL_006c:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_19 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_22 = L_21.get_x_2();
		if ((((float)L_22) == ((float)(0.0f))))
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_23 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_26 = L_25.get_y_3();
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_00c8;
		}
	}
	{
		// GameObject vill = Instantiate(villain2) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_villain2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_3 = L_28;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_3;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_31 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_32 = V_2;
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_31, L_32, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_30);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_30, L_33, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_34 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_3;
		NullCheck(L_34);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_34, L_35, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_00c8:
	{
		// for (int i = 3; i < 6; i++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00cc:
	{
		// for (int i = 3; i < 6; i++)
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) < ((int32_t)6)))
		{
			goto IL_006c;
		}
	}
	{
		// for (int i = 6; i < 9; i++)
		V_4 = 6;
		goto IL_013d;
	}

IL_00d5:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_38 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_39 = V_4;
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_41 = L_40.get_x_2();
		if ((((float)L_41) == ((float)(0.0f))))
		{
			goto IL_0137;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_42 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_43 = V_4;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_45 = L_44.get_y_3();
		if ((((float)L_45) == ((float)(0.0f))))
		{
			goto IL_0137;
		}
	}
	{
		// GameObject vill = Instantiate(villain3) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_villain3_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_5 = L_47;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_5;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_50 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_51 = V_4;
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_50, L_51, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_52, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_53 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = V_5;
		NullCheck(L_53);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_53, L_54, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0137:
	{
		// for (int i = 6; i < 9; i++)
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_013d:
	{
		// for (int i = 6; i < 9; i++)
		int32_t L_56 = V_4;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)9))))
		{
			goto IL_00d5;
		}
	}
	{
		// for (int i = 9; i < 12; i++)
		V_6 = ((int32_t)9);
		goto IL_01b1;
	}

IL_0149:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_57 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_58 = V_6;
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_60 = L_59.get_x_2();
		if ((((float)L_60) == ((float)(0.0f))))
		{
			goto IL_01ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_61 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_62 = V_6;
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_64 = L_63.get_y_3();
		if ((((float)L_64) == ((float)(0.0f))))
		{
			goto IL_01ab;
		}
	}
	{
		// GameObject vill = Instantiate(villain4) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = __this->get_villain4_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_65, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_7 = L_66;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_7;
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_69 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_70 = V_6;
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_68);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_68, L_71, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_72 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = V_7;
		NullCheck(L_72);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_72, L_73, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_01ab:
	{
		// for (int i = 9; i < 12; i++)
		int32_t L_74 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01b1:
	{
		// for (int i = 9; i < 12; i++)
		int32_t L_75 = V_6;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)12))))
		{
			goto IL_0149;
		}
	}
	{
		// for (int i = 12; i < 15; i++)
		V_8 = ((int32_t)12);
		goto IL_0225;
	}

IL_01bd:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_76 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_77 = V_8;
		NullCheck(L_76);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_76, L_77, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_79 = L_78.get_x_2();
		if ((((float)L_79) == ((float)(0.0f))))
		{
			goto IL_021f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_80 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_81 = V_8;
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_80, L_81, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_83 = L_82.get_y_3();
		if ((((float)L_83) == ((float)(0.0f))))
		{
			goto IL_021f;
		}
	}
	{
		// GameObject vill = Instantiate(villain5) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_villain5_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85;
		L_85 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_84, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_9 = L_85;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86 = V_9;
		NullCheck(L_86);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_88 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_89 = V_8;
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_88, L_89, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_87);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_87, L_90, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_91 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = V_9;
		NullCheck(L_91);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_91, L_92, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_021f:
	{
		// for (int i = 12; i < 15; i++)
		int32_t L_93 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0225:
	{
		// for (int i = 12; i < 15; i++)
		int32_t L_94 = V_8;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)15))))
		{
			goto IL_01bd;
		}
	}
	{
		// for (int i = 15; i < 18; i++)
		V_10 = ((int32_t)15);
		goto IL_0299;
	}

IL_0231:
	{
		// if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_95 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_96 = V_10;
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_95, L_96, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_98 = L_97.get_x_2();
		if ((((float)L_98) == ((float)(0.0f))))
		{
			goto IL_0293;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_99 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_100 = V_10;
		NullCheck(L_99);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_99, L_100, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_102 = L_101.get_y_3();
		if ((((float)L_102) == ((float)(0.0f))))
		{
			goto IL_0293;
		}
	}
	{
		// GameObject vill = Instantiate(villain6) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_103 = __this->get_villain6_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104;
		L_104 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_103, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_11 = L_104;
		// vill.transform.position = loginButton.positions[i];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = V_11;
		NullCheck(L_105);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106;
		L_106 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_107 = ((loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_StaticFields*)il2cpp_codegen_static_fields_for(loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088_il2cpp_TypeInfo_var))->get_positions_4();
		int32_t L_108 = V_10;
		NullCheck(L_107);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_107, L_108, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_106);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_106, L_109, /*hidden argument*/NULL);
		// List_villains.Add(vill);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_110 = __this->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = V_11;
		NullCheck(L_110);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_110, L_111, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0293:
	{
		// for (int i = 15; i < 18; i++)
		int32_t L_112 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_0299:
	{
		// for (int i = 15; i < 18; i++)
		int32_t L_113 = V_10;
		if ((((int32_t)L_113) < ((int32_t)((int32_t)18))))
		{
			goto IL_0231;
		}
	}
	{
		// }
		return;
	}
}
// System.Void monsterDirector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void monsterDirector_Update_m04D403A0FE533459AD5CCBF271A7A83A079F3F5D (monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void monsterDirector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void monsterDirector__ctor_m872F6B8B3E5D7EEA9BEB1E9049C0B8D0C2EC033C (monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> List_villains = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_List_villains_10(L_0);
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
// System.Void pumpkinVillain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinVillain_Start_m1203FF60A1FD51DD019FD58CBF5F581EB6269389 (pumpkinVillain_tDDD57E1CEF1358FE7DB029E92E32108D4507AA37 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void pumpkinVillain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinVillain_Update_mBE9C3CB4899EF9086ED40EB9942785920623D9F9 (pumpkinVillain_tDDD57E1CEF1358FE7DB029E92E32108D4507AA37 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8(__this, /*hidden argument*/NULL);
		// base.villainMove();
		baseVillain_villainMove_mF4AC6F127FBCC633DDEE3100A27E171F98D4ED85(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void pumpkinVillain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinVillain__ctor_m86BBB0FE42ADEF9B5FBD54825ACC9BD75BAF9EC2 (pumpkinVillain_tDDD57E1CEF1358FE7DB029E92E32108D4507AA37 * __this, const RuntimeMethod* method)
{
	{
		baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC(__this, /*hidden argument*/NULL);
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
// System.Void pumpkinbullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinbullet_Start_m89AA75C2DC9C33B47AB3BD1B4E969BCED920239E (pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firstPos = new Vector3(transform.position.x, transform.position.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_2, L_5, (0.0f), /*hidden argument*/NULL);
		__this->set_firstPos_5(L_6);
		// maincharHP = GameObject.Find("Image");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97, /*hidden argument*/NULL);
		__this->set_maincharHP_10(L_7);
		// }
		return;
	}
}
// System.Void pumpkinbullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinbullet_Update_mA7B14D6C27E2A3C7339C8C0BB846D4770C84CBAF (pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// bulletDis = Vector3.Distance(firstPos, transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_firstPos_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_0, L_2, /*hidden argument*/NULL);
		__this->set_bulletDis_4(L_3);
		// if (bulletDis < 5)
		float L_4 = __this->get_bulletDis_4();
		if ((!(((float)L_4) < ((float)(5.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// transform.Translate(speed, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_6();
		NullCheck(L_5);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_5, L_6, (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_0045:
	{
		// boomTimer += Time.deltaTime;
		float L_7 = __this->get_boomTimer_7();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_boomTimer_7(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// if (boomTimer > boomTime)
		float L_9 = __this->get_boomTimer_7();
		float L_10 = __this->get_boomTime_8();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_00e1;
		}
	}
	{
		// boomTimer = 0;
		__this->set_boomTimer_7((0.0f));
		// boomReady = 1;
		__this->set_boomReady_9(1);
		// Collider2D[] hit = Physics2D.OverlapBoxAll(transform.position, size, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_size_11();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_15;
		L_15 = Physics2D_OverlapBoxAll_m134445FD88A2242662F67A48DB3D19A42D5A9792(L_13, L_14, (0.0f), /*hidden argument*/NULL);
		// foreach (Collider2D i in hit){
		V_0 = L_15;
		V_1 = 0;
		goto IL_00d0;
	}

IL_009c:
	{
		// foreach (Collider2D i in hit){
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// if(i.name == "maincharac")
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		// maincharHP.GetComponent<Image>().fillAmount -= 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_maincharHP_10();
		NullCheck(L_22);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = L_23;
		NullCheck(L_24);
		float L_25;
		L_25 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_24);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_24, ((float)il2cpp_codegen_subtract((float)L_25, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_00cc:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00d0:
	{
		// foreach (Collider2D i in hit){
		int32_t L_27 = V_1;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_009c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void pumpkinbullet::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinbullet_OnTriggerStay2D_m3544537D61652A7958BA17E4A0B28BE259292518 (pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BA63AD9541A609A85810D39D39173A61892C52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("아직");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral24BA63AD9541A609A85810D39D39173A61892C52, /*hidden argument*/NULL);
		// if (boomReady == 1) {
		int32_t L_0 = __this->get_boomReady_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// if (a.gameObject.name=="maincharac") //악당 총알인데 악당한테 박아서 사라지는걸 방지
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___a0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// maincharHP.GetComponent<Image>().fillAmount -= 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_maincharHP_10();
		NullCheck(L_5);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = L_6;
		NullCheck(L_7);
		float L_8;
		L_8 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_7, ((float)il2cpp_codegen_subtract((float)L_8, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void pumpkinbullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pumpkinbullet__ctor_mDF4476C297DB1F5B99B93FF6D8AFFB3E8D1A7629 (pumpkinbullet_t393D6CFED5ADE7B2CF53E557E9C81CDDC16A3015 * __this, const RuntimeMethod* method)
{
	{
		// public float boomTime=5;
		__this->set_boomTime_8((5.0f));
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
// Firebase.Database.DatabaseReference score::get_reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void score::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_set_reference_mF834291C9AB32E9F41139C877A50321E6765C43F (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_Start_m0B9F14BAC4C8541EF444230D6DC637B444235D15 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&score_U3CStartU3Eb__4_0_m5ED6BA3A1B4B4939ECABA9E0A2E7ED4B4808D759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.GetComponent<Text>().text = GameDirector.totalCoin.ToString() + " + " + (maincharac.coinPoint * 100).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_totalCoin_7()), /*hidden argument*/NULL);
		int32_t L_2 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)100)));
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// GameDirector.totalCoin = GameDirector.totalCoin + (maincharac.coinPoint * 100);
		int32_t L_5 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_totalCoin_7();
		int32_t L_6 = ((maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_StaticFields*)il2cpp_codegen_static_fields_for(maincharac_tD4564BD6D553CE87CBB237E6083391B23FE2B878_il2cpp_TypeInfo_var))->get_coinPoint_12();
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_totalCoin_7(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)100))))));
		// GameDirector.stagelevel += 1;
		int32_t L_7 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_stagelevel_5();
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_stagelevel_5(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// reference = FirebaseDatabase.DefaultInstance.GetReference("users");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_8;
		L_8 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_8);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_9;
		L_9 = FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		score_set_reference_mF834291C9AB32E9F41139C877A50321E6765C43F_inline(__this, L_9, /*hidden argument*/NULL);
		// reference.GetValueAsync().ContinueWith(task =>
		// {
		// 
		// 
		//     if (task.IsCompleted)
		//     { // 성공적으로 데이터를 가져왔으면
		//         Debug.Log("업데이트");
		//         reference.Child(GameDirector.ID).Child("score").SetValueAsync(GameDirector.stagelevel);
		// 
		//         reference.Child(GameDirector.ID).Child("totalCoin").SetValueAsync(GameDirector.totalCoin);
		// 
		// 
		//     }
		// });
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_10;
		L_10 = score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_11;
		L_11 = Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8(L_10, /*hidden argument*/NULL);
		Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E * L_12 = (Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E *)il2cpp_codegen_object_new(Action_1_t59923C63D61A81C06D1997D5D99E5E1D73C54B8E_il2cpp_TypeInfo_var);
		Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677(L_12, __this, (intptr_t)((intptr_t)score_U3CStartU3Eb__4_0_m5ED6BA3A1B4B4939ECABA9E0A2E7ED4B4808D759_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAB684313B4C516C8AC687B3A5EBC0E755061C677_RuntimeMethod_var);
		NullCheck(L_11);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE(L_11, L_12, /*hidden argument*/Task_1_ContinueWith_m34D16974DD7A9944AA4571A98C255974B32535BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_Update_m0783F5445F04C628605A073E2CB9512E7C5FE404 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void score::gotoHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_gotoHome_mECCB50FCC2DE41EBA349D47730186CB4649A5619 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Home");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void score::gotoLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_gotoLoad_m7B7DE23C0DED3D519494F8B95EBC1CFE3B31360B (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("loadingScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAACD608C3F66CED302D201CD07056C4B022031A4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score__ctor_m4DC7DFAC65C1F8F18C7A436CC4551E15B87061A3 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void score::<Start>b__4_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void score_U3CStartU3Eb__4_0_m5ED6BA3A1B4B4939ECABA9E0A2E7ED4B4808D759 (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F60CD08E7FCE2AA0675DD451AE3FF73C76CF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3697086EF03AE732F06962C4701CBF5768BEF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.IsCompleted)
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.Log("업데이트");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral14F60CD08E7FCE2AA0675DD451AE3FF73C76CF39, /*hidden argument*/NULL);
		// reference.Child(GameDirector.ID).Child("score").SetValueAsync(GameDirector.stagelevel);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_2;
		L_2 = score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		String_t* L_3 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_ID_8();
		NullCheck(L_2);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_4;
		L_4 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_5;
		L_5 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_4, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		int32_t L_6 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_stagelevel_5();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = DatabaseReference_SetValueAsync_mD4504503AA31C8000522284B7F105154F845E043(L_5, L_8, /*hidden argument*/NULL);
		// reference.Child(GameDirector.ID).Child("totalCoin").SetValueAsync(GameDirector.totalCoin);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_10;
		L_10 = score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82_inline(__this, /*hidden argument*/NULL);
		String_t* L_11 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_ID_8();
		NullCheck(L_10);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_12;
		L_12 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_13;
		L_13 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_12, _stringLiteralD3697086EF03AE732F06962C4701CBF5768BEF79, /*hidden argument*/NULL);
		int32_t L_14 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_totalCoin_7();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17;
		L_17 = DatabaseReference_SetValueAsync_mD4504503AA31C8000522284B7F105154F845E043(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0066:
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
// System.Void shopManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_Start_mBDFC23FD289B99C7F4034A1671F75A60F85C2E56 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D49E2B14630B791BC89266157757946907F3DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7AC2C4ADB561EE5EF41C4CB4DA4DED174E6E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F64BF4E49CCC9CEFCE9E25B7A6141DBCC8965ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0697C935DA564D24D0B0969CF24CD9DD39DD859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC46A9977AF0071EEB5BF4DA377B83F295ADD4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCEFFC7F90724642BD7F9978EE300C69400212EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// spriteResolver = head.GetComponent<SpriteResolver>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_head_5();
		NullCheck(L_0);
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_1;
		L_1 = GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		__this->set_spriteResolver_4(L_1);
		// switch (GameDirector.nowBody)
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_006d;
			}
			case 5:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_0039:
	{
		// nowBody = "Pang";
		__this->set_nowBody_9(_stringLiteral8F7AC2C4ADB561EE5EF41C4CB4DA4DED174E6E5D);
		// break;
		goto IL_0085;
	}

IL_0046:
	{
		// nowBody = "hypang";
		__this->set_nowBody_9(_stringLiteral3D49E2B14630B791BC89266157757946907F3DA4);
		// break;
		goto IL_0085;
	}

IL_0053:
	{
		// nowBody = "hspang";
		__this->set_nowBody_9(_stringLiteralFCEFFC7F90724642BD7F9978EE300C69400212EC);
		// break;
		goto IL_0085;
	}

IL_0060:
	{
		// nowBody = "sonpang";
		__this->set_nowBody_9(_stringLiteralBCC46A9977AF0071EEB5BF4DA377B83F295ADD4A);
		// break;
		goto IL_0085;
	}

IL_006d:
	{
		// nowBody = "jspang";
		__this->set_nowBody_9(_stringLiteralB0697C935DA564D24D0B0969CF24CD9DD39DD859);
		// break;
		goto IL_0085;
	}

IL_007a:
	{
		// nowBody = "forespang";
		__this->set_nowBody_9(_stringLiteral9F64BF4E49CCC9CEFCE9E25B7A6141DBCC8965ED);
	}

IL_0085:
	{
		// spriteResolver.SetCategoryAndLabel("Head", nowBody);
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_4 = __this->get_spriteResolver_4();
		String_t* L_5 = __this->get_nowBody_9();
		NullCheck(L_4);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_4, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeOrignpang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeOrignpang_m9C92BB1ED2813EECEDCCB3643D2363A154EE10EE (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7AC2C4ADB561EE5EF41C4CB4DA4DED174E6E5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "Pang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteral8F7AC2C4ADB561EE5EF41C4CB4DA4DED174E6E5D, /*hidden argument*/NULL);
		// GameDirector.nowBody = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(1);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeHypang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeHypang_m9E04EF463FD2D20CB2E7BB2FB80732CD53586D6D (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D49E2B14630B791BC89266157757946907F3DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "hypang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteral3D49E2B14630B791BC89266157757946907F3DA4, /*hidden argument*/NULL);
		// GameDirector.nowBody = 2;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(2);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeHspang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeHspang_mE19DFAB92ABF64AF42FF7A90C84ECD3E2F171EE0 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCEFFC7F90724642BD7F9978EE300C69400212EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "hspang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteralFCEFFC7F90724642BD7F9978EE300C69400212EC, /*hidden argument*/NULL);
		// GameDirector.nowBody = 3;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(3);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeSonpang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeSonpang_m6EA6E4F7ADFAA6D917933D0C9B5375A80A736912 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC46A9977AF0071EEB5BF4DA377B83F295ADD4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "sonpang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteralBCC46A9977AF0071EEB5BF4DA377B83F295ADD4A, /*hidden argument*/NULL);
		// GameDirector.nowBody = 4;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(4);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeJspang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeJspang_mDE93735D1A4098104D5F2C0526573DEEC030C861 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0697C935DA564D24D0B0969CF24CD9DD39DD859);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "jspang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteralB0697C935DA564D24D0B0969CF24CD9DD39DD859, /*hidden argument*/NULL);
		// GameDirector.nowBody = 5;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(5);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::changeForestpang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_changeForestpang_m8C2C9AD4D9ABCB7B7256AEC9AEC7A8456B0A2753 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB169712174C7C20B791683A04E2066D4473D0E77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver.SetCategoryAndLabel("Head", "forestpang");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_0 = __this->get_spriteResolver_4();
		NullCheck(L_0);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_0, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteralB169712174C7C20B791683A04E2066D4473D0E77, /*hidden argument*/NULL);
		// GameDirector.nowBody = 6;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(6);
		// Debug.Log(GameDirector.nowBody);
		int32_t L_1 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_nowBody_6();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_unlock_m8936A73020A19172E981811B8ED60842711ED323 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string ButtonName = EventSystem.current.currentSelectedGameObject.name;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// lockbtn = GameObject.Find(ButtonName);
		String_t* L_3 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_3, /*hidden argument*/NULL);
		__this->set_lockbtn_7(L_4);
		// popUp.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_popUp_6();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::clickYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_clickYes_m9AF31F3E083DA3EBD67C3B785F3D46EBBC412E1F (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21876620373FA9BF34BDCF8E62CFCB833D1CC292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral284BBF7B811E286391AE82799A57BC72D90BA838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B94B165661F00B412449BA02B959ADB3DE172A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4949474A6FEC1FA9647289C5172F9549A96542B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A3A1F502D13E67AD0DA81BCFCFF87C3997E2A43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F80691DF7F9A3F8AB4630C3306F30D1D8FC3C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// Debug.Log(lockbtn.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_lockbtn_7();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// int cost = 0;
		V_0 = 0;
		// switch (lockbtn.name)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_lockbtn_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral21876620373FA9BF34BDCF8E62CFCB833D1CC292, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral2B94B165661F00B412449BA02B959ADB3DE172A5, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral284BBF7B811E286391AE82799A57BC72D90BA838, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral5A3A1F502D13E67AD0DA81BCFCFF87C3997E2A43, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteral4949474A6FEC1FA9647289C5172F9549A96542B1, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00a6;
	}

IL_0067:
	{
		// cost = 10;
		V_0 = ((int32_t)10);
		// GameDirector.closet[0] = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		// break;
		goto IL_00a6;
	}

IL_0074:
	{
		// cost = 10;
		V_0 = ((int32_t)10);
		// GameDirector.closet[1] = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		// break;
		goto IL_00a6;
	}

IL_0081:
	{
		// cost = 20;
		V_0 = ((int32_t)20);
		// GameDirector.closet[2] = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		// break;
		goto IL_00a6;
	}

IL_008e:
	{
		// cost = 20;
		V_0 = ((int32_t)20);
		// GameDirector.closet[3] = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)1);
		// break;
		goto IL_00a6;
	}

IL_009b:
	{
		// cost = 30;
		V_0 = ((int32_t)30);
		// GameDirector.closet[4] = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)1);
	}

IL_00a6:
	{
		// if (GameDirector.totalCoin   < cost)
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		int32_t L_20 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_totalCoin_7();
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_00c4;
		}
	}
	{
		// child.GetComponent<Text>().text = "잔액부족";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_child_8();
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23;
		L_23 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_22, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteral86F80691DF7F9A3F8AB4630C3306F30D1D8FC3C1);
		// }
		return;
	}

IL_00c4:
	{
		// GameDirector.totalCoin -= cost;
		IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		int32_t L_24 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_totalCoin_7();
		int32_t L_25 = V_0;
		((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_totalCoin_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)));
		// lockbtn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_lockbtn_7();
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)0, /*hidden argument*/NULL);
		// popUp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_popUp_6();
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shopManager::clickNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager_clickNo_m572EE3EC78ADE6785E0766826525A3459B01E237 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB03DE05BDBE3C283351E4F7707C13DCCEFB8DAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popUp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_popUp_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// child.GetComponent<Text>().text = "구매하시겠습니까?";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_child_8();
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralBB03DE05BDBE3C283351E4F7707C13DCCEFB8DAD);
		// }
		return;
	}
}
// System.Void shopManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopManager__ctor_m9383EC0C9100692A8E5472AA033F8BEEC51B9C80 (shopManager_tB17BC4DB2BC02C8108CB8A6B882C331CD529579A * __this, const RuntimeMethod* method)
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
// System.Void showtime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void showtime_Start_mC7CC4C6ABC555994E8D661E20994AA1DD08CEF0A (showtime_t1870F3498DFC66F1E9E6AAC3A2CB2DF499AE9941 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void showtime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void showtime_Update_m869935CCDADECB9337ECBBCE52D90898931E80C0 (showtime_t1870F3498DFC66F1E9E6AAC3A2CB2DF499AE9941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5044762E5528B8D5EB03C33C6A3A3686E8235EAB);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.GetComponent<Text>().text = System.DateTime.Now.ToString("yyyy년MM월dd일 "+"HH시mm분ss초 tt");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteral5044762E5528B8D5EB03C33C6A3A3686E8235EAB, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void showtime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void showtime__ctor_mCBD955CCE5F04E3878CF7328728D1E98FF14F698 (showtime_t1870F3498DFC66F1E9E6AAC3A2CB2DF499AE9941 * __this, const RuntimeMethod* method)
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
// Firebase.Database.DatabaseReference test1::get_reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * test1_get_reference_m149874EE55BC7B821A25240410F840B198E2E19E (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void test1::set_reference(Firebase.Database.DatabaseReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test1_set_reference_m77FB56F701CAEFBA4E4D2FEF3177C71D8084C159 (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void test1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test1_Start_mCC94294B726B366FD47FE9FA6BC3E1F2FC0B143A (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA43511766BB4606252F94AFA68DFFB1B75EF47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// reference = FirebaseDatabase.DefaultInstance.RootReference;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A(/*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_1;
		L_1 = FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72(L_0, /*hidden argument*/NULL);
		test1_set_reference_m77FB56F701CAEFBA4E4D2FEF3177C71D8084C159_inline(__this, L_1, /*hidden argument*/NULL);
		// Rank rank = new Rank("최혁순", 100, 1574940551);
		Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D * L_2 = (Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D *)il2cpp_codegen_object_new(Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D_il2cpp_TypeInfo_var);
		Rank__ctor_mEB420E85337380A4FBE91EA84126E06BAB0BAE14(L_2, _stringLiteral1BA43511766BB4606252F94AFA68DFFB1B75EF47, ((int32_t)100), ((int32_t)1574940551), /*hidden argument*/NULL);
		// string json = JsonUtility.ToJson(rank);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// string key = reference.Child("rank").Push().Key;
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_4;
		L_4 = test1_get_reference_m149874EE55BC7B821A25240410F840B198E2E19E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_5;
		L_5 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_4, _stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4, /*hidden argument*/NULL);
		NullCheck(L_5);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_6;
		L_6 = DatabaseReference_Push_m3AA86C70A0F7F786AC717745BEF2E3B076B7DAB5(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = DatabaseReference_get_Key_mA6531C63D64A032F3B299CBBB522E9130BEB005C(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// reference.Child("rank").Child(key).SetRawJsonValueAsync(json);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_8;
		L_8 = test1_get_reference_m149874EE55BC7B821A25240410F840B198E2E19E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_9;
		L_9 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_8, _stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		NullCheck(L_9);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_11;
		L_11 = DatabaseReference_Child_mE0A765A60474B18C36B908672485FC79D8676118(L_9, L_10, /*hidden argument*/NULL);
		String_t* L_12 = V_0;
		NullCheck(L_11);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = DatabaseReference_SetRawJsonValueAsync_m7F99AA89C17C838E525723F9979575DD673C22E2(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void test1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test1__ctor_m8584F9CE2B2CB1B5EC934C5B5A3ABC17AAFDD541 (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, const RuntimeMethod* method)
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
// System.Void villain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_Start_m70CB64CEC2844DA3C6E75E17669F46D45F728089 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA78EE5AF8FD8F5B039CE0F3571C5E1F2267854E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maincharac = GameObject.Find("maincharac");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		__this->set_maincharac_5(L_0);
		// villainHP = GameObject.Find("villainHP");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA78EE5AF8FD8F5B039CE0F3571C5E1F2267854E8, /*hidden argument*/NULL);
		__this->set_villainHP_11(L_1);
		// }
		return;
	}
}
// System.Void villain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_Update_m0D832F67D02485F9C23603B0E5158D2A01811657 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// villainHP.transform.position = Camera.main.WorldToScreenPoint(transform.position + new Vector3(0, -1.3f, 0));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_villainHP_11();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (-1.29999995f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_7, /*hidden argument*/NULL);
		// delta += Time.deltaTime;
		float L_8 = __this->get_delta_8();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_delta_8(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// delta2 += Time.deltaTime;
		float L_10 = __this->get_delta2_9();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_delta2_9(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// if (delta > span)
		float L_12 = __this->get_delta_8();
		float L_13 = __this->get_span_6();
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_020e;
		}
	}
	{
		// delta = 0;
		__this->set_delta_8((0.0f));
		// GameObject go = Instantiate(villainbullet1) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_villainbullet1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_15;
		// go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_20, L_23, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_24, /*hidden argument*/NULL);
		// x = transform.position.x - maincharac.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_maincharac_5();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		__this->set_x_12(((float)il2cpp_codegen_subtract((float)L_27, (float)L_31)));
		// y = transform.position.y - maincharac.transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_maincharac_5();
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_y_3();
		__this->set_y_13(((float)il2cpp_codegen_subtract((float)L_34, (float)L_38)));
		// angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;
		float L_39 = __this->get_y_13();
		float L_40;
		L_40 = fabsf(L_39);
		float L_41 = __this->get_x_12();
		float L_42;
		L_42 = fabsf(L_41);
		float L_43;
		L_43 = atan2f(L_40, L_42);
		__this->set_angle_14(((float)il2cpp_codegen_multiply((float)L_43, (float)(57.2957802f))));
		// if (x < 0 && y < 0)
		float L_44 = __this->get_x_12();
		if ((!(((float)L_44) < ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		float L_45 = __this->get_y_13();
		if ((!(((float)L_45) < ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		// go.transform.Rotate(0, 0, angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_0;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		float L_48 = __this->get_angle_14();
		NullCheck(L_47);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_47, (0.0f), (0.0f), L_48, /*hidden argument*/NULL);
		goto IL_020e;
	}

IL_0178:
	{
		// else if (x > 0 && y < 0)
		float L_49 = __this->get_x_12();
		if ((!(((float)L_49) > ((float)(0.0f)))))
		{
			goto IL_01b5;
		}
	}
	{
		float L_50 = __this->get_y_13();
		if ((!(((float)L_50) < ((float)(0.0f)))))
		{
			goto IL_01b5;
		}
	}
	{
		// go.transform.Rotate(0, 0, 180-angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = V_0;
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		float L_53 = __this->get_angle_14();
		NullCheck(L_52);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_52, (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_53)), /*hidden argument*/NULL);
		goto IL_020e;
	}

IL_01b5:
	{
		// else if (x < 0 && y > 0)
		float L_54 = __this->get_x_12();
		if ((!(((float)L_54) < ((float)(0.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		float L_55 = __this->get_y_13();
		if ((!(((float)L_55) > ((float)(0.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		// go.transform.Rotate(0, 0,-angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = V_0;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		float L_58 = __this->get_angle_14();
		NullCheck(L_57);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_57, (0.0f), (0.0f), ((-L_58)), /*hidden argument*/NULL);
		goto IL_020e;
	}

IL_01ed:
	{
		// go.transform.Rotate(0, 0, 180+angle);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_0;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		float L_61 = __this->get_angle_14();
		NullCheck(L_60);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_60, (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)(180.0f), (float)L_61)), /*hidden argument*/NULL);
	}

IL_020e:
	{
		// if (delta2 > span)
		float L_62 = __this->get_delta2_9();
		float L_63 = __this->get_span_6();
		if ((!(((float)L_62) > ((float)L_63))))
		{
			goto IL_02dd;
		}
	}
	{
		// delta2 = 0;
		__this->set_delta2_9((0.0f));
		// int direc = Random.Range(1, 5);
		int32_t L_64;
		L_64 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		V_1 = L_64;
		// Debug.Log(direc);
		int32_t L_65 = V_1;
		int32_t L_66 = L_65;
		RuntimeObject * L_67 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_66);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_67, /*hidden argument*/NULL);
		int32_t L_68 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0256;
			}
			case 1:
			{
				goto IL_0278;
			}
			case 2:
			{
				goto IL_029a;
			}
			case 3:
			{
				goto IL_02bc;
			}
		}
	}
	{
		return;
	}

IL_0256:
	{
		// transform.Translate(1 * villainSpeed, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_70 = __this->get_villainSpeed_10();
		NullCheck(L_69);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_69, ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_70)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0278:
	{
		// transform.Translate(-1 * villainSpeed, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_72 = __this->get_villainSpeed_10();
		NullCheck(L_71);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_71, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_72)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_029a:
	{
		// transform.Translate(0, 1 * villainSpeed, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_74 = __this->get_villainSpeed_10();
		NullCheck(L_73);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_73, (0.0f), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_74)), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_02bc:
	{
		// transform.Translate(0, -1 * villainSpeed, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_76 = __this->get_villainSpeed_10();
		NullCheck(L_75);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_75, (0.0f), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_76)), (0.0f), /*hidden argument*/NULL);
	}

IL_02dd:
	{
		// }
		return;
	}
}
// System.Void villain::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_OnTriggerEnter2D_mF3B88CE492CD8240B08DB2909AB29404CB2970A5 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698365F79794801DA7B9EBE75E502EC91A241053);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(a.gameObject.tag=="mainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// villainHP.GetComponent<Image>().fillAmount -= 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_villainHP_11();
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_6);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (villainHP.GetComponent<Image>().fillAmount == 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_villainHP_11();
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// item();
		villain_item_m1FD879F35A03A2439A9C133FF4EC2B42BA7E5DC7(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void villain::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_item_m1FD879F35A03A2439A9C133FF4EC2B42BA7E5DC7 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int item = Random.Range(1, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		// if (item == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// GameObject coinI = Instantiate(coin) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_coin_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// GameObject lifeI = Instantiate(life) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_life_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villain::endGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain_endGame1_mA129B874D3CEBB5FE787048F010838FB1173AADD (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD879156742A02FE792D5979276986ADA723270D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game1End");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralFD879156742A02FE792D5979276986ADA723270D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villain__ctor_m249B316D1EFCD21E67C2B97BB4294FE213F922A5 (villain_t36822447411B12AFA160394514518E023B217EF9 * __this, const RuntimeMethod* method)
{
	{
		// public float span = 1;
		__this->set_span_6((1.0f));
		// public float span2 = 0.3f;
		__this->set_span2_7((0.300000012f));
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
// System.Void villainbullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villainbullet_Start_m9CC6D5CA12E24FF1B96D796058FD9535084E4B70 (villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void villainbullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villainbullet_Update_mAE55B830F4CDD37CA05CD53C63BC10482602C320 (villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(speed, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_speed_4();
		NullCheck(L_0);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_0, L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		// if (transform.position.x <= -8.5f || transform.position.x >= 8.5f || transform.position.y <= -5.5f || transform.position.y >= 5.5f) Destroy(gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		if ((((float)L_4) <= ((float)(-8.5f))))
		{
			goto IL_0077;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((((float)L_7) >= ((float)(8.5f))))
		{
			goto IL_0077;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		if ((((float)L_10) <= ((float)(-5.5f))))
		{
			goto IL_0077;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		if ((!(((float)L_13) >= ((float)(5.5f)))))
		{
			goto IL_0082;
		}
	}

IL_0077:
	{
		// if (transform.position.x <= -8.5f || transform.position.x >= 8.5f || transform.position.y <= -5.5f || transform.position.y >= 5.5f) Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void villainbullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villainbullet_OnTriggerEnter2D_m7C7E7EA9B881268BE8E1540B588468E9F4FEF1D5 (villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag != "villain")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral0A5892A1996BE585FB2D46B30BE6867026AD30B0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void villainbullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villainbullet__ctor_mB4DF1D7062B011E73159C610B28B18AF54DB0A6F (villainbullet_t095639FF9F511FE1213D78A19F09F2C23E50BC53 * __this, const RuntimeMethod* method)
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
// System.Void villaintest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_Start_m710C99DADFE8EE8767E2997864C62D2882D902EE (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteResolver = Head.GetComponent<SpriteResolver>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Head_18();
		NullCheck(L_0);
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_1;
		L_1 = GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		__this->set_spriteResolver_24(L_1);
		// monsterDirec = GameObject.Find("MonsterDirector");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA, /*hidden argument*/NULL);
		__this->set_monsterDirec_23(L_2);
		// }
		return;
	}
}
// System.Void villaintest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_Awake_m4889587EA9EE10B8B622E57C7966C55B3485AFDC (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Fadeinout());
		RuntimeObject* L_0;
		L_0 = villaintest_Fadeinout_mE9411EE7368AD583D0FF448C8C950E933F3913B2(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villaintest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_Update_m034E02C69EAC3F90743D901A23ED5D767BBFDBF1 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8(__this, /*hidden argument*/NULL);
		// base.villainMove();
		baseVillain_villainMove_mF4AC6F127FBCC633DDEE3100A27E171F98D4ED85(__this, /*hidden argument*/NULL);
		// colorchange();
		villaintest_colorchange_m28EC171BA434382ABFE333956AAC8132168BE70E(__this, /*hidden argument*/NULL);
		// base.NontargetShoot();
		baseVillain_NontargetShoot_m9C177028C9A5C5C921E03FA7C5A0E21029750058(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villaintest::colorchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_colorchange_m28EC171BA434382ABFE333956AAC8132168BE70E (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07CA0A175EFD1E0F8E0D4D195D2192C81908506C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HP.fillAmount < 0.5)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_0, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_1))) < ((double)(0.5)))))
		{
			goto IL_003d;
		}
	}
	{
		// spriteResolver = Head.GetComponent<SpriteResolver>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Head_18();
		NullCheck(L_2);
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_3;
		L_3 = GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83(L_2, /*hidden argument*/GameObject_GetComponent_TisSpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956_m4F51EFACB52EC7E35C3909327CD5721D317A0D83_RuntimeMethod_var);
		__this->set_spriteResolver_24(L_3);
		// spriteResolver.SetCategoryAndLabel("Head", "pimangred");
		SpriteResolver_t5B3D64444E443E530CC3C9CA5336DED4721F7956 * L_4 = __this->get_spriteResolver_24();
		NullCheck(L_4);
		SpriteResolver_SetCategoryAndLabel_m3A76B2CE2DEB1E9985818996176FC83915C7CF37(L_4, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, _stringLiteral07CA0A175EFD1E0F8E0D4D195D2192C81908506C, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator villaintest::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_Fade_m1DFC5DC0ABFBAFBF705C47AF3694465EC081BC28 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, float ___start0, float ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * L_0 = (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB *)il2cpp_codegen_object_new(U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB_il2cpp_TypeInfo_var);
		U3CFadeU3Ed__12__ctor_m8DC0412DBA939D892A7F555381E4C81F1EBAA10D(L_0, 0, /*hidden argument*/NULL);
		U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * L_2 = L_1;
		float L_3 = ___start0;
		NullCheck(L_2);
		L_2->set_start_3(L_3);
		U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * L_4 = L_2;
		float L_5 = ___end1;
		NullCheck(L_4);
		L_4->set_end_4(L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator villaintest::randomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_randomPosition_m95ED756A9DFA09A0F5C6160BEE1CBB5EC2E6D34D (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * L_0 = (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 *)il2cpp_codegen_object_new(U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117_il2cpp_TypeInfo_var);
		U3CrandomPositionU3Ed__13__ctor_m8908331E984D7F8D4BD05A72C295F5F369442947(L_0, 0, /*hidden argument*/NULL);
		U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator villaintest::Fadeinout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* villaintest_Fadeinout_mE9411EE7368AD583D0FF448C8C950E933F3913B2 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * L_0 = (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B *)il2cpp_codegen_object_new(U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B_il2cpp_TypeInfo_var);
		U3CFadeinoutU3Ed__14__ctor_m6948300B32C47186578F5F92D03F81E8EF358E40(L_0, 0, /*hidden argument*/NULL);
		U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void villaintest::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_OnTriggerEnter2D_m1723183E54C83219C3A22C6CA4CC3E450B0EC7D0 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698365F79794801DA7B9EBE75E502EC91A241053);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag == "mainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54, /*hidden argument*/NULL);
		// Debug.Log(HP.fillAmount);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_4);
		float L_5;
		L_5 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_4, /*hidden argument*/NULL);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// HP.fillAmount -= 0.1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, ((float)il2cpp_codegen_subtract((float)L_10, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (HP.fillAmount == 0)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_11);
		float L_12;
		L_12 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// StageDirector.killCount += 1;
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_13 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_killCount_13();
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_killCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// monsterDirec.GetComponent<monsterDirector>().List_villains.Remove(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_monsterDirec_23();
		NullCheck(L_14);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_15;
		L_15 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_14, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = L_15->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_18;
		L_18 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_16, L_17, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// item();
		villaintest_item_m78A5960ECEAC1F51A45897389F94840EF7920755(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_19, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void villaintest::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest_item_m78A5960ECEAC1F51A45897389F94840EF7920755 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int item = Random.Range(1, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		// if (item == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// GameObject coinI = Instantiate(coin) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_coin_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// GameObject lifeI = Instantiate(life) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_life_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villaintest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest__ctor_mB3A35704EBA1F68C88EB6561F734535DA9BA4D23 (villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * __this, const RuntimeMethod* method)
{
	{
		baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC(__this, /*hidden argument*/NULL);
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
// System.Void villaintest1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_Start_m36C8EFB2B52450A20AD871EEC680FC078845225E (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// monsterDirec = GameObject.Find("MonsterDirector");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0299652C7C28F100EC2C8CBB8BA4082964B997DA, /*hidden argument*/NULL);
		__this->set_monsterDirec_17(L_0);
		// maincharac = GameObject.Find("maincharac");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral929F8E9F42F8538428142D5F8103AA548D6B8F4A, /*hidden argument*/NULL);
		__this->set_maincharac_18(L_1);
		// }
		return;
	}
}
// System.Void villaintest1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_Update_mFB3E90D9E15F028286635FB2B5880EDD4E2BC7DE (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		baseVillain_Update_m0D3945DD5F25EF1D19E0ECB0F245177C81667CC8(__this, /*hidden argument*/NULL);
		// villainmove();
		villaintest1_villainmove_mBCBB056B609923AC9C4BA0DD09394AE98D7959E1(__this, /*hidden argument*/NULL);
		// base.NontargetShoot();
		baseVillain_NontargetShoot_m9C177028C9A5C5C921E03FA7C5A0E21029750058(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villaintest1::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_OnTriggerEnter2D_mB5B791EAEAA2A219A350D3161974FD23B1E256F1 (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698365F79794801DA7B9EBE75E502EC91A241053);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (a.gameObject.tag == "mainbullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral698365F79794801DA7B9EBE75E502EC91A241053, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAAC7ACD6462F7652A393DC8F38DFB5B881736A54, /*hidden argument*/NULL);
		// Debug.Log(HP.fillAmount);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_4);
		float L_5;
		L_5 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_4, /*hidden argument*/NULL);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// HP.fillAmount -= 0.1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, ((float)il2cpp_codegen_subtract((float)L_10, (float)(0.100000001f))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (HP.fillAmount == 0)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_HP_11();
		NullCheck(L_11);
		float L_12;
		L_12 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// StageDirector.killCount += 1;
		IL2CPP_RUNTIME_CLASS_INIT(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var);
		int32_t L_13 = ((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->get_killCount_13();
		((StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_StaticFields*)il2cpp_codegen_static_fields_for(StageDirector_tF0AA127F0B2469920A5E9DF678FD9600057608E7_il2cpp_TypeInfo_var))->set_killCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// monsterDirec.GetComponent<monsterDirector>().List_villains.Remove(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_monsterDirec_17();
		NullCheck(L_14);
		monsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066 * L_15;
		L_15 = GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A(L_14, /*hidden argument*/GameObject_GetComponent_TismonsterDirector_tC982C6D4BC80B459706A98D67F6091F59B357066_m4266577B32F01D8BBB5271424A31E1F29B81783A_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = L_15->get_List_villains_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_18;
		L_18 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_16, L_17, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// item();
		villaintest1_item_m0758F05497361AE21C5892C440B4B286D02BBE46(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_19, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void villaintest1::item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_item_m0758F05497361AE21C5892C440B4B286D02BBE46 (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int item = Random.Range(1, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		// if (item == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// GameObject coinI = Instantiate(coin) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_coin_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// GameObject lifeI = Instantiate(life) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_life_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void villaintest1::villainmove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1_villainmove_mBCBB056B609923AC9C4BA0DD09394AE98D7959E1 (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// villainMoveTimer += Time.deltaTime;
		float L_0 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveTimer_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->set_villainMoveTimer_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (villainMoveTimer > villainMoveRate)
		float L_2 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveTimer_4();
		float L_3 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villainMoveRate_5();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_01b6;
		}
	}
	{
		// villainMoveTimer = 0;
		((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->set_villainMoveTimer_4((0.0f));
		// if (maincharac != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_maincharac_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0125;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_maincharac_18();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((!(((float)L_8) < ((float)L_12))))
		{
			goto IL_006f;
		}
	}
	{
		// if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
		__this->set_direc_temp_x_19(1);
		goto IL_0076;
	}

IL_006f:
	{
		// else direc_temp_x = 2;
		__this->set_direc_temp_x_19(2);
	}

IL_0076:
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_maincharac_18();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		if ((!(((float)L_15) < ((float)L_19))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
		__this->set_direc_temp_y_20(3);
		goto IL_00ad;
	}

IL_00a6:
	{
		// else direc_temp_y = 4;
		__this->set_direc_temp_y_20(4);
	}

IL_00ad:
	{
		// if (Mathf.Abs(transform.position.x - maincharac.transform.position.x) < 2 * Mathf.Abs(transform.position.y - maincharac.transform.position.y))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_maincharac_18();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27;
		L_27 = fabsf(((float)il2cpp_codegen_subtract((float)L_22, (float)L_26)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_maincharac_18();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		float L_35;
		L_35 = fabsf(((float)il2cpp_codegen_subtract((float)L_30, (float)L_34)));
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35))))))
		{
			goto IL_0119;
		}
	}
	{
		// direc = direc_temp_y;
		int32_t L_36 = __this->get_direc_temp_y_20();
		__this->set_direc_21(L_36);
		goto IL_0125;
	}

IL_0119:
	{
		// else direc = direc_temp_x;
		int32_t L_37 = __this->get_direc_temp_x_19();
		__this->set_direc_21(L_37);
	}

IL_0125:
	{
		// switch (direc)
		int32_t L_38 = __this->get_direc_21();
		V_0 = L_38;
		int32_t L_39 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0145;
			}
			case 1:
			{
				goto IL_0161;
			}
			case 2:
			{
				goto IL_017e;
			}
			case 3:
			{
				goto IL_019a;
			}
		}
	}
	{
		return;
	}

IL_0145:
	{
		// transform.Translate(villanFootStep, 0, 0);  //오른쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_41 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_40);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_40, L_41, (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0161:
	{
		// transform.Translate(-villanFootStep, 0, 0);  //왼쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_43 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_42);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_42, ((-L_43)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_017e:
	{
		// transform.Translate(0, villanFootStep, 0);   //위쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_45 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_44);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_44, (0.0f), L_45, (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_019a:
	{
		// transform.Translate(0, -villanFootStep, 0);  //아래쪽 움직임 추후에 애니메이션 적용
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_47 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)__this)->get_villanFootStep_6();
		NullCheck(L_46);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_46, (0.0f), ((-L_47)), (0.0f), /*hidden argument*/NULL);
	}

IL_01b6:
	{
		// }
		return;
	}
}
// System.Void villaintest1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void villaintest1__ctor_m85D7D9077DFFA149159C472EE673EABA7481840D (villaintest1_tD162FC5A9A140B3DCC655175D5196756E0179132 * __this, const RuntimeMethod* method)
{
	{
		baseVillain__ctor_mA4DD11D9F89E2E454111ED33D07500AFC3345FCC(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_move/<CircleFire>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCircleFireU3Ed__15__ctor_m7021620862F9363B880A077FADB95C1DCDC283D8 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy_move/<CircleFire>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCircleFireU3Ed__15_System_IDisposable_Dispose_mD7303CEF45966E4272F3868524DB65C56B3EB811 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy_move/<CircleFire>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCircleFireU3Ed__15_MoveNext_m80DD96B29584642D8CFE0B488CE0F167AAB1A983 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMovement2D_t6185D866A0397535255C298ECCC8A8769B7F8869_m94312A76206FE2984A62FB13036C82B09C2F33E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float attckRate = 5f; //????????
		__this->set_U3CattckRateU3E5__2_3((5.0f));
		// int count = 10;
		__this->set_U3CcountU3E5__3_4(((int32_t)10));
	}

IL_0034:
	{
		// for (int i = 0; i < count; ++i)
		V_2 = 0;
		goto IL_009b;
	}

IL_0038:
	{
		// GameObject clone = Instantiate(bullet, transform.position, Quaternion.identity); //p
		Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_bullet_20();
		Enemy_move_t62619EC4CDEB3C604811B09F0453176EABC52770 * L_6 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// float x = Mathf.Cos(Mathf.PI * 2 * i / count);
		int32_t L_11 = V_2;
		int32_t L_12 = __this->get_U3CcountU3E5__3_4();
		float L_13;
		L_13 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_11))))/(float)((float)((float)L_12)))));
		V_3 = L_13;
		// float y = Mathf.Sin(Mathf.PI * 2 * i / count);
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get_U3CcountU3E5__3_4();
		float L_16;
		L_16 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_14))))/(float)((float)((float)L_15)))));
		V_4 = L_16;
		// clone.GetComponent<Movement2D>().Setup(new Vector3(x, y,0));
		NullCheck(L_10);
		Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * L_17;
		L_17 = GameObject_GetComponent_TisMovement2D_t6185D866A0397535255C298ECCC8A8769B7F8869_m94312A76206FE2984A62FB13036C82B09C2F33E6(L_10, /*hidden argument*/GameObject_GetComponent_TisMovement2D_t6185D866A0397535255C298ECCC8A8769B7F8869_m94312A76206FE2984A62FB13036C82B09C2F33E6_RuntimeMethod_var);
		float L_18 = V_3;
		float L_19 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_18, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Movement2D_Setup_m5D41BE4BBC7C219DB63AF1E1C4D82BF920A3CDB9_inline(L_17, L_20, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_009b:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_22 = V_2;
		int32_t L_23 = __this->get_U3CcountU3E5__3_4();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0038;
		}
	}
	{
		// yield return new WaitForSeconds(attckRate);//attckRate???????? ?????? ?? ????
		float L_24 = __this->get_U3CattckRateU3E5__2_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_25 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_25, L_24, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0034;
	}
}
// System.Object Enemy_move/<CircleFire>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCircleFireU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2A870C644A7511102CCACFFAB09B37B39D5E1B95 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy_move/<CircleFire>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCircleFireU3Ed__15_System_Collections_IEnumerator_Reset_m6E7AB7094DDE60A49C2A3C904EB6E7E335092D0F (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCircleFireU3Ed__15_System_Collections_IEnumerator_Reset_m6E7AB7094DDE60A49C2A3C904EB6E7E335092D0F_RuntimeMethod_var)));
	}
}
// System.Object Enemy_move/<CircleFire>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCircleFireU3Ed__15_System_Collections_IEnumerator_get_Current_mF70EA23ED51DD05459951D4631C9A82BAA8F8972 (U3CCircleFireU3Ed__15_tFF3620232ED9DC161E7C403701C14597C17A0AFD * __this, const RuntimeMethod* method)
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
// System.Void IntroManager/<DelayTime>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTimeU3Ed__3__ctor_m29E28AE72406ED2F28C8C1BE5E93F2924EE1E48D (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IntroManager/<DelayTime>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTimeU3Ed__3_System_IDisposable_Dispose_mD1E1CC64AA77BC053E598A68775CF0B9750CB3A6 (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IntroManager/<DelayTime>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayTimeU3Ed__3_MoveNext_m82124DAD29A7A499D7616DE9BABBA866D2FBE42E (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);  //time 초 동안 멈출 수 있도록 해준다.
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// IntroPanel.SetActive(false);           //object 활성화 하고싶은것을 정해줌
		IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_IntroPanel_5();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// StartPanel.SetActive(true);
		IntroManager_t0830037B4178478802A163C0B16656A3D4EE7B54 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_StartPanel_4();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object IntroManager/<DelayTime>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayTimeU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5FED4D27591F50E9D28D4EB444074C19CD2F5470 (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IntroManager/<DelayTime>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTimeU3Ed__3_System_Collections_IEnumerator_Reset_m55C1777F9EC0166847B4E36375F5E6E9DD15840C (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayTimeU3Ed__3_System_Collections_IEnumerator_Reset_m55C1777F9EC0166847B4E36375F5E6E9DD15840C_RuntimeMethod_var)));
	}
}
// System.Object IntroManager/<DelayTime>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayTimeU3Ed__3_System_Collections_IEnumerator_get_Current_m1C3B14A15AE032C267B6175169B19E29C43F022E (U3CDelayTimeU3Ed__3_t92BDBD301EC96C237A9220643C077E9185C91712 * __this, const RuntimeMethod* method)
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
// System.Void createAcc/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m062F07F8E27A672CBB6E7776E1208B280E2F0518 (U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void createAcc/<>c__DisplayClass15_0::<IDCheck>b__0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CIDCheckU3Eb__0_m2735FC5A6270E7BFEF9825D0E95356B0E6A700C8 (U3CU3Ec__DisplayClass15_0_tAC59EB9B9C6B0DA4DCB2C1EA1B41661CC38E023B * __this, Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72DB1DA581625C76BBD21E51DDBB608A4F6BD925);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (task.IsCompleted)
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_2 = ___task0;
		NullCheck(L_2);
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_3;
		L_3 = Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6(L_2, /*hidden argument*/Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		// foreach (DataSnapshot data in snapshot.Children)
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_001b:
		{
			// foreach (DataSnapshot data in snapshot.Children)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_7;
			L_7 = InterfaceFuncInvoker0< DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var, L_6);
			// if (data.Key == IDCreate.text)
			NullCheck(L_7);
			String_t* L_8;
			L_8 = DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74(L_7, /*hidden argument*/NULL);
			createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * L_9 = __this->get_U3CU3E4__this_0();
			NullCheck(L_9);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10 = L_9->get_IDCreate_7();
			NullCheck(L_10);
			String_t* L_11;
			L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_10, /*hidden argument*/NULL);
			bool L_12;
			L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0050;
			}
		}

IL_003d:
		{
			// Debug.Log("중복");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral72DB1DA581625C76BBD21E51DDBB608A4F6BD925, /*hidden argument*/NULL);
			// exist = true;
			__this->set_exist_1((bool)1);
			// }
			goto IL_0057;
		}

IL_0050:
		{
			// exist = false;
			__this->set_exist_1((bool)0);
		}

IL_0057:
		{
			// foreach (DataSnapshot data in snapshot.Children)
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001b;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_0;
			if (!L_15)
			{
				goto IL_006a;
			}
		}

IL_0064:
		{
			RuntimeObject* L_16 = V_0;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(97)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
	}

IL_006b:
	{
		// if (!exist) CreateInfo();
		bool L_17 = __this->get_exist_1();
		if (L_17)
		{
			goto IL_007e;
		}
	}
	{
		// if (!exist) CreateInfo();
		createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * L_18 = __this->get_U3CU3E4__this_0();
		NullCheck(L_18);
		createAcc_CreateInfo_mCC85046DCD031DD2209F89DDF85F6F13EF8A0964(L_18, /*hidden argument*/NULL);
	}

IL_007e:
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
// System.Void createAcc/User::.ctor(System.String,System.String,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m30E0B5B5B3ABE6DF6C8998D6BAEB08C37FD51AF0 (User_tA451C705E4E77E15D3ECCC39E739B49EEE840B33 * __this, String_t* ___Name0, String_t* ___PASSWORD1, String_t* ___closet2, int32_t ___pangpangColor3, int32_t ___score4, int32_t ___totalCoin5, const RuntimeMethod* method)
{
	{
		// public User(string Name, string PASSWORD, string closet, int pangpangColor, int score, int totalCoin)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = Name;
		String_t* L_0 = ___Name0;
		__this->set_Name_0(L_0);
		// this.PASSWORD = PASSWORD;
		String_t* L_1 = ___PASSWORD1;
		__this->set_PASSWORD_1(L_1);
		// this.closet = closet;
		String_t* L_2 = ___closet2;
		__this->set_closet_2(L_2);
		// this.pangpangColor = pangpangColor;
		int32_t L_3 = ___pangpangColor3;
		__this->set_pangpangColor_3(L_3);
		// this.score = score;
		int32_t L_4 = ___score4;
		__this->set_score_4(L_4);
		// this.totalCoin = totalCoin;
		int32_t L_5 = ___totalCoin5;
		__this->set_totalCoin_5(L_5);
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
// System.Void loginButton/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m035DB666300DC0537AAE999ECC4FEA49B4BAEC34 (U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void loginButton/<>c__DisplayClass12_0::<Info>b__0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CInfoU3Eb__0_m4CF1799549B39E217756BE5245C7779B5ED4726D (U3CU3Ec__DisplayClass12_0_t1960D700645583FABFF95138F03CF2B0199BE945 * __this, Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral173A065602D2168DAFC7152C6DC10A29F321DFA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28AED19FD8D38E6833B6290B18C0DABE36F2BAB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0E2CF4CEC631E8A11039AEF6208E2587580E31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7132CC08E26B96532D936EB2BE27D46B199C82B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA626F6778A2ACA3D5AD9C13B083DD1F1FF8DD1F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D4D16E320C94D5713F4A4148995443BAB0383A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3697086EF03AE732F06962C4701CBF5768BEF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE72A997B28A8254DBD885C36C77EFF1AA2C42D5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (task.IsCompleted)
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0193;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_2 = ___task0;
		NullCheck(L_2);
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_3;
		L_3 = Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6(L_2, /*hidden argument*/Task_1_get_Result_m10A4F0C402240AA0B17E08F55F482699396BD5E6_RuntimeMethod_var);
		// foreach (DataSnapshot data in snapshot.Children)
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DataSnapshot_get_Children_mEC225E6B02BC0ABBAFD9CDE78FF64F4E51A02B51(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_t7EB7818F7527343DFA06E7A1D07294E0DC43E0DA_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0170;
		}

IL_0021:
		{
			// foreach (DataSnapshot data in snapshot.Children)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_7;
			L_7 = InterfaceFuncInvoker0< DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_tB4A4264852CCE26B2EC9004C0B74F0CA1A069D57_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			// if (data.Key == inputID)
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74(L_8, /*hidden argument*/NULL);
			String_t* L_10 = __this->get_inputID_0();
			bool L_11;
			L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0170;
			}
		}

IL_003e:
		{
			// Debug.Log("성공1");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral173A065602D2168DAFC7152C6DC10A29F321DFA7, /*hidden argument*/NULL);
			// IDictionary Info = (IDictionary)data.Value;
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13;
			L_13 = DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821(L_12, /*hidden argument*/NULL);
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_13, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
			// if (Info["PASSWORD"].ToString() == inputPassword)
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_15;
			L_15 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, _stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			String_t* L_17 = __this->get_inputPassword_1();
			bool L_18;
			L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0166;
			}
		}

IL_0074:
		{
			// temp = Info["closet"].ToString().Split(';');
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			RuntimeObject * L_20;
			L_20 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_19, _stringLiteral7132CC08E26B96532D936EB2BE27D46B199C82B8);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = L_22;
			NullCheck(L_23);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
			NullCheck(L_21);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24;
			L_24 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_21, L_23, /*hidden argument*/NULL);
			V_3 = L_24;
			// for(int i = 0; i < 5; i++)
			V_4 = 0;
			goto IL_00b1;
		}

IL_009a:
		{
			// GameDirector.closet[i] = int.Parse(temp[i]);
			IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = ((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_closet_4();
			int32_t L_26 = V_4;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_3;
			int32_t L_28 = V_4;
			NullCheck(L_27);
			int32_t L_29 = L_28;
			String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
			int32_t L_31;
			L_31 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_30, /*hidden argument*/NULL);
			NullCheck(L_25);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
			// for(int i = 0; i < 5; i++)
			int32_t L_32 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		}

IL_00b1:
		{
			// for(int i = 0; i < 5; i++)
			int32_t L_33 = V_4;
			if ((((int32_t)L_33) < ((int32_t)5)))
			{
				goto IL_009a;
			}
		}

IL_00b6:
		{
			// Debug.Log("성공");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD1D4D16E320C94D5713F4A4148995443BAB0383A, /*hidden argument*/NULL);
			// GameDirector.ID = data.Key;
			DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_34 = V_1;
			NullCheck(L_34);
			String_t* L_35;
			L_35 = DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74(L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var);
			((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_ID_8(L_35);
			// GameDirector.stagelevel = int.Parse(Info["score"].ToString());
			RuntimeObject* L_36 = V_2;
			NullCheck(L_36);
			RuntimeObject * L_37;
			L_37 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_36, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
			NullCheck(L_37);
			String_t* L_38;
			L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
			int32_t L_39;
			L_39 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_38, /*hidden argument*/NULL);
			((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_stagelevel_5(L_39);
			// GameDirector.nowBody = int.Parse(Info["pangpangColor"].ToString());
			RuntimeObject* L_40 = V_2;
			NullCheck(L_40);
			RuntimeObject * L_41;
			L_41 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_40, _stringLiteral28AED19FD8D38E6833B6290B18C0DABE36F2BAB4);
			NullCheck(L_41);
			String_t* L_42;
			L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
			int32_t L_43;
			L_43 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_42, /*hidden argument*/NULL);
			((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_nowBody_6(L_43);
			// GameDirector.totalCoin = int.Parse(Info["totalCoin"].ToString());
			RuntimeObject* L_44 = V_2;
			NullCheck(L_44);
			RuntimeObject * L_45;
			L_45 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_44, _stringLiteralD3697086EF03AE732F06962C4701CBF5768BEF79);
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
			int32_t L_47;
			L_47 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_46, /*hidden argument*/NULL);
			((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->set_totalCoin_7(L_47);
			// Debug.Log("팡팡이색은??   " + GameDirector.nowBody.ToString());
			String_t* L_48;
			L_48 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_nowBody_6()), /*hidden argument*/NULL);
			String_t* L_49;
			L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3A0E2CF4CEC631E8A11039AEF6208E2587580E31, L_48, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_49, /*hidden argument*/NULL);
			// Debug.Log("점수는??   " + GameDirector.stagelevel.ToString());
			String_t* L_50;
			L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_stagelevel_5()), /*hidden argument*/NULL);
			String_t* L_51;
			L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEE72A997B28A8254DBD885C36C77EFF1AA2C42D5, L_50, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_51, /*hidden argument*/NULL);
			// Debug.Log("코인은??   " + GameDirector.totalCoin.ToString());
			String_t* L_52;
			L_52 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_StaticFields*)il2cpp_codegen_static_fields_for(GameDirector_t803D6737950BBF3329B4160FCE23A2D924445449_il2cpp_TypeInfo_var))->get_address_of_totalCoin_7()), /*hidden argument*/NULL);
			String_t* L_53;
			L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA626F6778A2ACA3D5AD9C13B083DD1F1FF8DD1F4, L_52, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_53, /*hidden argument*/NULL);
			// }
			goto IL_0170;
		}

IL_0166:
		{
			// Debug.Log("실패");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8, /*hidden argument*/NULL);
		}

IL_0170:
		{
			// foreach (DataSnapshot data in snapshot.Children)
			RuntimeObject* L_54 = V_0;
			NullCheck(L_54);
			bool L_55;
			L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_54);
			if (L_55)
			{
				goto IL_0021;
			}
		}

IL_017b:
		{
			IL2CPP_LEAVE(0x187, FINALLY_017d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017d;
	}

FINALLY_017d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_56 = V_0;
			if (!L_56)
			{
				goto IL_0186;
			}
		}

IL_0180:
		{
			RuntimeObject* L_57 = V_0;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_57);
		}

IL_0186:
		{
			IL2CPP_END_FINALLY(381)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(381)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x187, IL_0187)
	}

IL_0187:
	{
		// finish = 1;
		loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * L_58 = __this->get_U3CU3E4__this_2();
		NullCheck(L_58);
		L_58->set_finish_10(1);
	}

IL_0193:
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
// System.Void test1/Rank::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rank__ctor_mEB420E85337380A4FBE91EA84126E06BAB0BAE14 (Rank_tCBE739B6E765646B3C56F80C08A682CD3F33F21D * __this, String_t* ___name0, int32_t ___score1, int32_t ___timestamp2, const RuntimeMethod* method)
{
	{
		// public Rank(string name, int score, int timestamp)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		// this.score = score;
		int32_t L_1 = ___score1;
		__this->set_score_1(L_1);
		// this.timestamp = timestamp;
		int32_t L_2 = ___timestamp2;
		__this->set_timestamp_2(L_2);
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
// System.Void villaintest/<Fade>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__12__ctor_m8DC0412DBA939D892A7F555381E4C81F1EBAA10D (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void villaintest/<Fade>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__12_System_IDisposable_Dispose_m75D5EFFB5B6A6CA324F81078676615E40F52CCD0 (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean villaintest/<Fade>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__12_MoveNext_mCEA3DD146599D3530921B75833B4D4258603B9AB (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * V_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01bd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float currentTime = 0.0f;
		__this->set_U3CcurrentTimeU3E5__2_5((0.0f));
		// float percent = 0.0f;
		__this->set_U3CpercentU3E5__3_6((0.0f));
		goto IL_01c4;
	}

IL_003c:
	{
		// currentTime += Time.deltaTime;
		float L_4 = __this->get_U3CcurrentTimeU3E5__2_5();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrentTimeU3E5__2_5(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// percent = currentTime / fadeTime;
		float L_6 = __this->get_U3CcurrentTimeU3E5__2_5();
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_fadeTime_17();
		__this->set_U3CpercentU3E5__3_6(((float)((float)L_6/(float)L_8)));
		// Color color = Head.GetComponent<SpriteRenderer>().color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_Head_18();
		NullCheck(L_10);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_10, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// color.a = Mathf.Lerp(start, end, percent);
		float L_13 = __this->get_start_3();
		float L_14 = __this->get_end_4();
		float L_15 = __this->get_U3CpercentU3E5__3_6();
		float L_16;
		L_16 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_13, L_14, L_15, /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_16);
		// Head.GetComponent<SpriteRenderer>().color = color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_Head_18();
		NullCheck(L_18);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19;
		L_19 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_18, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = V_2;
		NullCheck(L_19);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_19, L_20, /*hidden argument*/NULL);
		// Color color1 = l_leg.GetComponent<SpriteRenderer>().color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_21 = V_1;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_l_leg_19();
		NullCheck(L_22);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_23;
		L_23 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_22, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_23, /*hidden argument*/NULL);
		// color.a = Mathf.Lerp(start, end, percent);
		float L_25 = __this->get_start_3();
		float L_26 = __this->get_end_4();
		float L_27 = __this->get_U3CpercentU3E5__3_6();
		float L_28;
		L_28 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_26, L_27, /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_28);
		// l_leg.GetComponent<SpriteRenderer>().color = color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_29 = V_1;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_l_leg_19();
		NullCheck(L_30);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_31;
		L_31 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_30, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = V_2;
		NullCheck(L_31);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_31, L_32, /*hidden argument*/NULL);
		// Color color2 = l_am.GetComponent<SpriteRenderer>().color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_33 = V_1;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_33->get_l_am_21();
		NullCheck(L_34);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_35;
		L_35 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_34, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_35, /*hidden argument*/NULL);
		// color.a = Mathf.Lerp(start, end, percent);
		float L_37 = __this->get_start_3();
		float L_38 = __this->get_end_4();
		float L_39 = __this->get_U3CpercentU3E5__3_6();
		float L_40;
		L_40 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_37, L_38, L_39, /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_40);
		// l_am.GetComponent<SpriteRenderer>().color = color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_41 = V_1;
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_41->get_l_am_21();
		NullCheck(L_42);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_43;
		L_43 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_42, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = V_2;
		NullCheck(L_43);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_43, L_44, /*hidden argument*/NULL);
		// Color color3 =R_leg.GetComponent<SpriteRenderer>().color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_45 = V_1;
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = L_45->get_R_leg_20();
		NullCheck(L_46);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_47;
		L_47 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_46, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_47);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_47, /*hidden argument*/NULL);
		// color.a = Mathf.Lerp(start, end, percent);
		float L_49 = __this->get_start_3();
		float L_50 = __this->get_end_4();
		float L_51 = __this->get_U3CpercentU3E5__3_6();
		float L_52;
		L_52 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_49, L_50, L_51, /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_52);
		// R_leg.GetComponent<SpriteRenderer>().color = color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_53 = V_1;
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = L_53->get_R_leg_20();
		NullCheck(L_54);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_55;
		L_55 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_54, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56 = V_2;
		NullCheck(L_55);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_55, L_56, /*hidden argument*/NULL);
		// Color color4 = R_am.GetComponent<SpriteRenderer>().color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_57 = V_1;
		NullCheck(L_57);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = L_57->get_R_am_22();
		NullCheck(L_58);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_59;
		L_59 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_58, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_59);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_59, /*hidden argument*/NULL);
		// color.a = Mathf.Lerp(start, end, percent);
		float L_61 = __this->get_start_3();
		float L_62 = __this->get_end_4();
		float L_63 = __this->get_U3CpercentU3E5__3_6();
		float L_64;
		L_64 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_61, L_62, L_63, /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_64);
		// R_am.GetComponent<SpriteRenderer>().color = color;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_65 = V_1;
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = L_65->get_R_am_22();
		NullCheck(L_66);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_67;
		L_67 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_66, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68 = V_2;
		NullCheck(L_67);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_67, L_68, /*hidden argument*/NULL);
		// HP.color = color;              //체력바도 함께 사라지도록 /
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_69 = V_1;
		NullCheck(L_69);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70 = ((baseVillain_t69529E2A6DC0A5DF5E50C96C2D4BAF10F9C643FC *)L_69)->get_HP_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71 = V_2;
		NullCheck(L_70);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_71);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01bd:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01c4:
	{
		// while (percent < 1)
		float L_72 = __this->get_U3CpercentU3E5__3_6();
		if ((((float)L_72) < ((float)(1.0f))))
		{
			goto IL_003c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object villaintest/<Fade>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD07A2A63C9205B655C7D621FDD4C1581C6F4E5BD (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void villaintest/<Fade>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__12_System_Collections_IEnumerator_Reset_m8FAF69AE23E5CDF21D9392EC67E07CBCDE7A84C3 (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__12_System_Collections_IEnumerator_Reset_m8FAF69AE23E5CDF21D9392EC67E07CBCDE7A84C3_RuntimeMethod_var)));
	}
}
// System.Object villaintest/<Fade>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__12_System_Collections_IEnumerator_get_Current_m29ED10E1865DB5CEAF24FDD4064C1C382D4A6604 (U3CFadeU3Ed__12_t90AEA091D4F4FB46FA62629430E8F73830E9A9EB * __this, const RuntimeMethod* method)
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
// System.Void villaintest/<Fadeinout>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeinoutU3Ed__14__ctor_m6948300B32C47186578F5F92D03F81E8EF358E40 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void villaintest/<Fadeinout>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeinoutU3Ed__14_System_IDisposable_Dispose_m7ED15B9F3D173A701D58301104457646DDBA4249 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean villaintest/<Fadeinout>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeinoutU3Ed__14_MoveNext_m1000D9B2996EA3D3709E9F362A12737D40519BE4 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0096;
			}
			case 4:
			{
				goto IL_00c2;
			}
			case 5:
			{
				goto IL_00e2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0035:
	{
		// yield return StartCoroutine(Fade(1, 0));   //Fadeout 점점 사라짐
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_3 = V_1;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = villaintest_Fade_m1DFC5DC0ABFBAFBF705C47AF3694465EC081BC28(L_4, (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return randomPosition();
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = villaintest_randomPosition_m95ED756A9DFA09A0F5C6160BEE1CBB5EC2E6D34D(L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);        //사라지고 나서 바로 나타나는 것이 아니라 잠시 기다렸다가 나타
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0096:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(Fade(0, 1));    //Fadein 점점 나타남
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_10 = V_1;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = villaintest_Fade_m1DFC5DC0ABFBAFBF705C47AF3694465EC081BC28(L_11, (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_10, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_00c2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_00e2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0035;
	}
}
// System.Object villaintest/<Fadeinout>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeinoutU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3682E0134D022283616031B1BFB84CBF3F5CCD32 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void villaintest/<Fadeinout>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeinoutU3Ed__14_System_Collections_IEnumerator_Reset_mC216A7FD09AFCE2810B875CD74C9247457DBA6EC (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeinoutU3Ed__14_System_Collections_IEnumerator_Reset_mC216A7FD09AFCE2810B875CD74C9247457DBA6EC_RuntimeMethod_var)));
	}
}
// System.Object villaintest/<Fadeinout>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeinoutU3Ed__14_System_Collections_IEnumerator_get_Current_mCCFFF9EF1D88D67A344C54BAA356635C1D17C822 (U3CFadeinoutU3Ed__14_t197747698D42C5D2482F95E5B42BD1B57106739B * __this, const RuntimeMethod* method)
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
// System.Void villaintest/<randomPosition>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrandomPositionU3Ed__13__ctor_m8908331E984D7F8D4BD05A72C295F5F369442947 (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void villaintest/<randomPosition>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrandomPositionU3Ed__13_System_IDisposable_Dispose_mF81564E5C45603077C3139F9233A3CD482179E71 (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean villaintest/<randomPosition>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CrandomPositionU3Ed__13_MoveNext_mA9C92C12A33F80DC67C3010CC7CF2C27549AE3AA (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.gameObject.transform.position = new Vector3(Random.Range(15, 45), Random.Range(5, 22.5f), 0.0f);
		villaintest_t7BA4F6574D9FCB1AAC740163239A87EB92E2A0DC * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)15), ((int32_t)45), /*hidden argument*/NULL);
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((5.0f), (22.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_7)), L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_9, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object villaintest/<randomPosition>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CrandomPositionU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D7AD55F334E2613AB1472C00A64FFA669948C1D (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void villaintest/<randomPosition>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrandomPositionU3Ed__13_System_Collections_IEnumerator_Reset_mE01E4018126C5064C54B2CA0D2696122E8DCCEE9 (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CrandomPositionU3Ed__13_System_Collections_IEnumerator_Reset_mE01E4018126C5064C54B2CA0D2696122E8DCCEE9_RuntimeMethod_var)));
	}
}
// System.Object villaintest/<randomPosition>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CrandomPositionU3Ed__13_System_Collections_IEnumerator_get_Current_m247FBC669D6F8ADF44E8F2B6CF96F37084F868E9 (U3CrandomPositionU3Ed__13_t4BEC108A5A3DDA8A926E6D65002043241A3F1117 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_43();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void createAcc_set_reference_m3FCDE962D665158D3545C86CDE3CBB2354E14B4B_inline (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * createAcc_get_reference_m92A854FA6B5A8A0C64414FF8C1BE67A11BC6467F_inline (createAcc_tAB5510A8ED54A7C7B4E835984CBEEE55D9CA69A1 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void loadingScene_set_reference_m3D33996CC5EC5035CE4CE59E54B699A1B10F51DC_inline (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loadingScene_get_reference_m7B32EA270A440D073C0A73C0D60693E635B064F1_inline (loadingScene_t519993F6AD4D77FF4B5D7C73324AA14B33472595 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void loginButton_set_reference_m60A05B22A0FC66EAB8DD7FAA9C599226C7C31664_inline (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * loginButton_get_reference_m1724EE41183150890AEF6EBCA0EB4914B66E3503_inline (loginButton_tFD2ED39CDBDAD408A385B5CCA3AF5F3C6EA85088 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void score_set_reference_mF834291C9AB32E9F41139C877A50321E6765C43F_inline (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * score_get_reference_mDEF9CD5D9123E9E5FB304D28DFC7680BE3962F82_inline (score_t7DE90C33BAE1E0791D8BAB2A9654C4623F0C3CD0 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void test1_set_reference_m77FB56F701CAEFBA4E4D2FEF3177C71D8084C159_inline (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * ___value0, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = ___value0;
		__this->set_U3CreferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * test1_get_reference_m149874EE55BC7B821A25240410F840B198E2E19E_inline (test1_t563E7A8555574B47CE54A5F766C6BC143D5562C8 * __this, const RuntimeMethod* method)
{
	{
		// public DatabaseReference reference { get; set; }
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_0 = __this->get_U3CreferenceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement2D_Setup_m5D41BE4BBC7C219DB63AF1E1C4D82BF920A3CDB9_inline (Movement2D_t6185D866A0397535255C298ECCC8A8769B7F8869 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method)
{
	{
		// moveDirection = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___direction0;
		__this->set_moveDirection_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_current_3();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
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
