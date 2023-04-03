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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Note[]
struct NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GManager
struct GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Judge
struct Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492;
// Light
struct Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC;
// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1;
// Notes
struct Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED;
// NotesManager
struct NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ScoreText
struct ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD;
// SelectManager
struct SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// keeper
struct keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral048699FC14DC686FD11875B5B14FD4E8776E3D75;
IL2CPP_EXTERN_C String_t* _stringLiteral0A42CDA571AD764048591433299D1BC98BD31C35;
IL2CPP_EXTERN_C String_t* _stringLiteral14FC2B4DC62E58A87920FD5F4C0BFEBA205DAB54;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral2689BE333CAB7CBF8534AABCCA56454CDEBD8C1D;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3093A22B0BB57757793BB7AFF14E5E9FAA82B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9B9516DE7B489B11C7D6879A8DD0F48EF5EB89;
IL2CPP_EXTERN_C String_t* _stringLiteral43B8377F07BEBBBD0468BF6C9BB96FDFB41562F9;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADF1F897ED2B5161730230C7719CF7669C5B2F7;
IL2CPP_EXTERN_C String_t* _stringLiteral50F969303923D1238199D06CE26B362FCE839B02;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27;
IL2CPP_EXTERN_C String_t* _stringLiteral5B33300815BF6E4A5D53BDF54D09041ED7AB1836;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979;
IL2CPP_EXTERN_C String_t* _stringLiteral6231798C32EF67DC9320506BAC8039CE24ABA367;
IL2CPP_EXTERN_C String_t* _stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73;
IL2CPP_EXTERN_C String_t* _stringLiteral70C0A458861C59D6F101EC42B1282F9B40A42E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral7562ABC9624DDED25DAC1ACEB34317C1F345B767;
IL2CPP_EXTERN_C String_t* _stringLiteral777D0F010EC90321CFF7EE55FDF50A711DAFC554;
IL2CPP_EXTERN_C String_t* _stringLiteral7F24013C925FC083B15F9B4B2580AD59F8D8397C;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE716643EBDF06F9C8513F20226AF6C07D7CA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral83DCEACA68C25E34A3DA3DDC2388C170B713B0B4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2603E099D62AF04BB07DBC32F720CDA2C1F8AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8E1D905CE8CEBBCD73EE8489914DBD4354B0203C;
IL2CPP_EXTERN_C String_t* _stringLiteral98AC9A61618BF8C75413C3AEF9CAE10782DE26B5;
IL2CPP_EXTERN_C String_t* _stringLiteralABED93E63EB4678A0FAC89BB23D76FE46997D91A;
IL2CPP_EXTERN_C String_t* _stringLiteralB67D83B221559B41FF777C3CCFFBFFE4A7C2D1DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1366BA1B524B8C759171DBC28AAA1E255DC87AF;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FA00D4C1DC1B39532B3E336772B3B0395E71C4;
IL2CPP_EXTERN_C String_t* _stringLiteralCD2C7F553397FA326B2D3B1DAA0B2E48B8F1B82A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51;
IL2CPP_EXTERN_C String_t* _stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF71661CEFB181FF6DF4984D086197E60A8BCAA08;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE  : public RuntimeObject
{
	// System.String Data::name
	String_t* ___name_0;
	// System.Int32 Data::maxBlock
	int32_t ___maxBlock_1;
	// System.Int32 Data::BPM
	int32_t ___BPM_2;
	// System.Int32 Data::offset
	int32_t ___offset_3;
	// Note[] Data::notes
	NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* ___notes_4;
};

// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1  : public RuntimeObject
{
	// System.Int32 Note::type
	int32_t ___type_0;
	// System.Int32 Note::num
	int32_t ___num_1;
	// System.Int32 Note::block
	int32_t ___block_2;
	// System.Int32 Note::LPB
	int32_t ___LPB_3;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// GManager
struct GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GManager::text_combo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___text_combo_4;
	// UnityEngine.GameObject GManager::text_max
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___text_max_5;
	// UnityEngine.GameObject GManager::text_score
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___text_score_6;
	// UnityEngine.UI.Text GManager::combo_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___combo_text_7;
	// UnityEngine.UI.Text GManager::Max_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Max_text_8;
	// UnityEngine.UI.Text GManager::score_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_text_9;
	// System.Int32 GManager::songID
	int32_t ___songID_11;
	// System.Single GManager::noteSpeed
	float ___noteSpeed_12;
	// System.Boolean GManager::Start
	bool ___Start_13;
	// System.Single GManager::StartTime
	float ___StartTime_14;
	// System.Int32 GManager::combo
	int32_t ___combo_15;
	// System.Int32 GManager::max_combo
	int32_t ___max_combo_16;
	// System.Int32 GManager::score
	int32_t ___score_17;
	// System.Int32 GManager::perfect
	int32_t ___perfect_18;
	// System.Int32 GManager::great
	int32_t ___great_19;
	// System.Int32 GManager::good
	int32_t ___good_20;
	// System.Int32 GManager::bad
	int32_t ___bad_21;
	// System.Int32 GManager::miss
	int32_t ___miss_22;
};

struct GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields
{
	// GManager GManager::instance
	GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* ___instance_10;
};

// Judge
struct Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Judge::MessageObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___MessageObj_4;
	// NotesManager Judge::notesManager
	NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* ___notesManager_5;
	// System.Int32 Judge::sumNotes
	int32_t ___sumNotes_6;
	// UnityEngine.AudioSource Judge::audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio_7;
	// UnityEngine.AudioClip Judge::perfect
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___perfect_8;
	// UnityEngine.AudioClip Judge::great
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___great_9;
	// UnityEngine.AudioClip Judge::good
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___good_10;
	// UnityEngine.GameObject Judge::clear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___clear_11;
};

// Light
struct Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Light::speed
	float ___speed_4;
	// System.Int32 Light::line
	int32_t ___line_5;
	// UnityEngine.GameObject Light::line_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___line_obj_6;
	// UnityEngine.Vector3 Light::pos_1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_1_7;
	// UnityEngine.Vector3 Light::pos_2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_2_8;
	// UnityEngine.Vector3 Light::pos_3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_3_9;
	// UnityEngine.Vector3 Light::pos_4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_4_10;
	// UnityEngine.Renderer Light::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_11;
	// System.Single Light::alfa
	float ___alfa_12;
};

// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MusicManager::audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio_4;
	// UnityEngine.AudioClip MusicManager::Music
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___Music_5;
	// System.String MusicManager::songName
	String_t* ___songName_6;
	// System.Boolean MusicManager::played
	bool ___played_7;
	// UnityEngine.GameObject MusicManager::Space
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Space_8;
};

// Notes
struct Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Notes::note_speed
	float ___note_speed_4;
	// System.Boolean Notes::start
	bool ___start_5;
};

// NotesManager
struct NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NotesManager::noteNum
	int32_t ___noteNum_4;
	// System.String NotesManager::songName
	String_t* ___songName_5;
	// System.Collections.Generic.List`1<System.Int32> NotesManager::LaneNum
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___LaneNum_6;
	// System.Collections.Generic.List`1<System.Int32> NotesManager::NoteType
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NoteType_7;
	// System.Collections.Generic.List`1<System.Single> NotesManager::NotesTime
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___NotesTime_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NotesManager::NotesObj
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___NotesObj_9;
	// System.Single NotesManager::NotesSpeed
	float ___NotesSpeed_10;
	// UnityEngine.GameObject NotesManager::noteObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___noteObj_11;
};

// ScoreText
struct ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ScoreText::combo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___combo_4;
	// UnityEngine.GameObject ScoreText::perfect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___perfect_5;
	// UnityEngine.GameObject ScoreText::great
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___great_6;
	// UnityEngine.GameObject ScoreText::good
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___good_7;
	// UnityEngine.GameObject ScoreText::miss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___miss_8;
	// UnityEngine.GameObject ScoreText::score
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___score_9;
	// UnityEngine.GameObject ScoreText::GameManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameManager_10;
	// UnityEngine.GameObject ScoreText::keeper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___keeper_11;
	// UnityEngine.UI.Text ScoreText::combo_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___combo_text_12;
	// UnityEngine.UI.Text ScoreText::perfect_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___perfect_text_13;
	// UnityEngine.UI.Text ScoreText::great_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___great_text_14;
	// UnityEngine.UI.Text ScoreText::good_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___good_text_15;
	// UnityEngine.UI.Text ScoreText::miss_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___miss_text_16;
	// UnityEngine.UI.Text ScoreText::score_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_text_17;
	// System.Int32 ScoreText::t_combo
	int32_t ___t_combo_18;
	// System.Int32 ScoreText::t_perfect
	int32_t ___t_perfect_19;
	// System.Int32 ScoreText::t_great
	int32_t ___t_great_20;
	// System.Int32 ScoreText::t_good
	int32_t ___t_good_21;
	// System.Int32 ScoreText::t_miss
	int32_t ___t_miss_22;
	// System.Single ScoreText::t_score
	float ___t_score_23;
};

// SelectManager
struct SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SelectManager::music_text
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___music_text_4;
	// UnityEngine.GameObject SelectManager::my_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___my_obj_5;
	// System.String SelectManager::music_name
	String_t* ___music_name_6;
};

struct SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_StaticFields
{
	// SelectManager SelectManager::send
	SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* ___send_7;
};

// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// keeper
struct keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String keeper::soundname
	String_t* ___soundname_5;
	// System.Boolean keeper::next
	bool ___next_6;
};

struct keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields
{
	// keeper keeper::k_instance
	keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* ___k_instance_4;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Note[]
struct NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76  : public RuntimeArray
{
	ALIGN_FIELD (8) Note_tA2285A184DB020998838A4973465183177E99DE1* m_Items[1];

	inline Note_tA2285A184DB020998838A4973465183177E99DE1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Note_tA2285A184DB020998838A4973465183177E99DE1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Note_tA2285A184DB020998838A4973465183177E99DE1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Note_tA2285A184DB020998838A4973465183177E99DE1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Note_tA2285A184DB020998838A4973465183177E99DE1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Note_tA2285A184DB020998838A4973465183177E99DE1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// System.Single Judge::GetABS(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, float ___num0, const RuntimeMethod* method) ;
// System.Void Judge::Judgement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, float ___timeLag0, const RuntimeMethod* method) ;
// System.Void Judge::message(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, int32_t ___judge0, const RuntimeMethod* method) ;
// System.Void Judge::deleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void Light::colorChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105 (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.String keeper::MusicName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* keeper_MusicName_m29F99B4AF9D3E54838E0F273BAD6C9C746633449_inline (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NotesManager::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesManager_Load_m5C1A7293E300FF7A091828F212C304AF8B7350B4 (NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* __this, String_t* ___SongName0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// T UnityEngine.JsonUtility::FromJson<Data>(System.String)
inline Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.String SelectManager::SendName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SelectManager_SendName_mC0F0928BD01AE8C70CF5B882B3B9FBF01CD012EE_inline (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void GManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GManager_Awake_m77BB7F908C5FF435DCD9DDD3AECC3602ACC069B2 (GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_0 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_002b:
	{
		// combo_text = text_combo.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___text_combo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_4, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___combo_text_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combo_text_7), (void*)L_5);
		// Max_text = text_max.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___text_max_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___Max_text_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Max_text_8), (void*)L_7);
		// score_text = text_score.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___text_score_6;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9;
		L_9 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_8, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___score_text_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_text_9), (void*)L_9);
		// }
		return;
	}
}
// System.Void GManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GManager_Update_m455BD96111CD0522DF073F3F0C12A23ADF57547A (GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B33300815BF6E4A5D53BDF54D09041ED7AB1836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral777D0F010EC90321CFF7EE55FDF50A711DAFC554);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F24013C925FC083B15F9B4B2580AD59F8D8397C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(max_combo < combo)
		int32_t L_0 = __this->___max_combo_16;
		int32_t L_1 = __this->___combo_15;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		// max_combo = combo;
		int32_t L_2 = __this->___combo_15;
		__this->___max_combo_16 = L_2;
	}

IL_001a:
	{
		// Debug.Log("Combo = " + combo);
		int32_t* L_3 = (&__this->___combo_15);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral777D0F010EC90321CFF7EE55FDF50A711DAFC554, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// combo_text.text = ("Combo : " + combo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___combo_text_7;
		int32_t* L_7 = (&__this->___combo_15);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// Max_text.text = ("Max combo : " + max_combo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___Max_text_8;
		int32_t* L_11 = (&__this->___max_combo_16);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7F24013C925FC083B15F9B4B2580AD59F8D8397C, L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// score_text.text = ("score : " + score);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___score_text_9;
		int32_t* L_15 = (&__this->___score_17);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5B33300815BF6E4A5D53BDF54D09041ED7AB1836, L_16, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		// }
		return;
	}
}
// System.Void GManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GManager__ctor_mC625D5DCBC2A2C263EC223075C416920E0FED9FD (GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* __this, const RuntimeMethod* method) 
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
// System.Void Judge::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_Start_m42662C2BE61A0D929A0CB42BDFCC21F49FB16129 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audio_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_7), (void*)L_0);
		// sumNotes = notesManager.noteNum - 4;
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_1 = __this->___notesManager_5;
		int32_t L_2 = L_1->___noteNum_4;
		__this->___sumNotes_6 = ((int32_t)il2cpp_codegen_subtract(L_2, 4));
		// }
		return;
	}
}
// System.Void Judge::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_Update_m5FFB6A18378BC8CCAC2CC88C024BD6938BDD800C (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FE716643EBDF06F9C8513F20226AF6C07D7CA6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("sumNotes = "+ sumNotes);
		int32_t* L_0 = (&__this->___sumNotes_6);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7FE716643EBDF06F9C8513F20226AF6C07D7CA6D, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// if(GManager.instance.Start)
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_3 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		bool L_4 = L_3->___Start_13;
		if (!L_4)
		{
			goto IL_0510;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.D))//?Z?L?[???????????
		bool L_5;
		L_5 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (!L_5)
		{
			goto IL_0145;
		}
	}
	{
		// if (notesManager.LaneNum[0] == 0)//???????{?^??????[?????????????????H
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_6 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_6->___LaneNum_6;
		int32_t L_8;
		L_8 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_7, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_007b;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
		float L_9;
		L_9 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_10 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = L_10->___NotesTime_8;
		float L_12;
		L_12 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_11, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_13 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_14 = L_13->___StartTime_14;
		float L_15;
		L_15 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_add(L_12, L_14)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_15, NULL);
		goto IL_0145;
	}

IL_007b:
	{
		// else if(notesManager.LaneNum[1] == 0)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_16 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = L_16->___LaneNum_6;
		int32_t L_18;
		L_18 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_17, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_00c1;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
		float L_19;
		L_19 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_20 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = L_20->___NotesTime_8;
		float L_22;
		L_22 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_21, 1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_23 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_24 = L_23->___StartTime_14;
		float L_25;
		L_25 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_19, ((float)il2cpp_codegen_add(L_22, L_24)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_25, NULL);
		goto IL_0145;
	}

IL_00c1:
	{
		// else if (notesManager.LaneNum[2] == 0)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_26 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = L_26->___LaneNum_6;
		int32_t L_28;
		L_28 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_27, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_0104;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
		float L_29;
		L_29 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_30 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_31 = L_30->___NotesTime_8;
		float L_32;
		L_32 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_31, 2, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_33 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_34 = L_33->___StartTime_14;
		float L_35;
		L_35 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_29, ((float)il2cpp_codegen_add(L_32, L_34)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_35, NULL);
		goto IL_0145;
	}

IL_0104:
	{
		// else if (notesManager.LaneNum[3] == 0)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_36 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = L_36->___LaneNum_6;
		int32_t L_38;
		L_38 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_37, 3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if (L_38)
		{
			goto IL_0145;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
		float L_39;
		L_39 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_40 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_41 = L_40->___NotesTime_8;
		float L_42;
		L_42 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_41, 3, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_43 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_44 = L_43->___StartTime_14;
		float L_45;
		L_45 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_39, ((float)il2cpp_codegen_add(L_42, L_44)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_45, NULL);
	}

IL_0145:
	{
		// if (Input.GetKeyDown(KeyCode.F))
		bool L_46;
		L_46 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)102), NULL);
		if (!L_46)
		{
			goto IL_0265;
		}
	}
	{
		// if (notesManager.LaneNum[0] == 1)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_47 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = L_47->___LaneNum_6;
		int32_t L_49;
		L_49 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_48, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0198;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
		float L_50;
		L_50 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_51 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_52 = L_51->___NotesTime_8;
		float L_53;
		L_53 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_52, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_54 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_55 = L_54->___StartTime_14;
		float L_56;
		L_56 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_50, ((float)il2cpp_codegen_add(L_53, L_55)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_56, NULL);
		goto IL_0265;
	}

IL_0198:
	{
		// else if(notesManager.LaneNum[1] == 1)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_57 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_58 = L_57->___LaneNum_6;
		int32_t L_59;
		L_59 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_58, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_01df;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
		float L_60;
		L_60 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_61 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_62 = L_61->___NotesTime_8;
		float L_63;
		L_63 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_62, 1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_64 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_65 = L_64->___StartTime_14;
		float L_66;
		L_66 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_60, ((float)il2cpp_codegen_add(L_63, L_65)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_66, NULL);
		goto IL_0265;
	}

IL_01df:
	{
		// else if (notesManager.LaneNum[2] == 1)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_67 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_68 = L_67->___LaneNum_6;
		int32_t L_69;
		L_69 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_68, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_69) == ((uint32_t)1))))
		{
			goto IL_0223;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
		float L_70;
		L_70 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_71 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_72 = L_71->___NotesTime_8;
		float L_73;
		L_73 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_72, 2, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_74 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_75 = L_74->___StartTime_14;
		float L_76;
		L_76 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_70, ((float)il2cpp_codegen_add(L_73, L_75)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_76, NULL);
		goto IL_0265;
	}

IL_0223:
	{
		// else if (notesManager.LaneNum[3] == 1)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_77 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_78 = L_77->___LaneNum_6;
		int32_t L_79;
		L_79 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_78, 3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_0265;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
		float L_80;
		L_80 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_81 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_82 = L_81->___NotesTime_8;
		float L_83;
		L_83 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_82, 3, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_84 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_85 = L_84->___StartTime_14;
		float L_86;
		L_86 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_80, ((float)il2cpp_codegen_add(L_83, L_85)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_86, NULL);
	}

IL_0265:
	{
		// if (Input.GetKeyDown(KeyCode.J))
		bool L_87;
		L_87 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)106), NULL);
		if (!L_87)
		{
			goto IL_0385;
		}
	}
	{
		// if (notesManager.LaneNum[0] == 2)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_88 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_89 = L_88->___LaneNum_6;
		int32_t L_90;
		L_90 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_89, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_02b8;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
		float L_91;
		L_91 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_92 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_93 = L_92->___NotesTime_8;
		float L_94;
		L_94 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_93, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_95 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_96 = L_95->___StartTime_14;
		float L_97;
		L_97 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_91, ((float)il2cpp_codegen_add(L_94, L_96)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_97, NULL);
		goto IL_0385;
	}

IL_02b8:
	{
		// else if(notesManager.LaneNum[1] == 2)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_98 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_99 = L_98->___LaneNum_6;
		int32_t L_100;
		L_100 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_99, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_100) == ((uint32_t)2))))
		{
			goto IL_02ff;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
		float L_101;
		L_101 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_102 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_103 = L_102->___NotesTime_8;
		float L_104;
		L_104 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_103, 1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_105 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_106 = L_105->___StartTime_14;
		float L_107;
		L_107 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_101, ((float)il2cpp_codegen_add(L_104, L_106)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_107, NULL);
		goto IL_0385;
	}

IL_02ff:
	{
		// else if (notesManager.LaneNum[2] == 2)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_108 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_109 = L_108->___LaneNum_6;
		int32_t L_110;
		L_110 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_109, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_110) == ((uint32_t)2))))
		{
			goto IL_0343;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
		float L_111;
		L_111 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_112 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_113 = L_112->___NotesTime_8;
		float L_114;
		L_114 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_113, 2, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_115 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_116 = L_115->___StartTime_14;
		float L_117;
		L_117 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_111, ((float)il2cpp_codegen_add(L_114, L_116)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_117, NULL);
		goto IL_0385;
	}

IL_0343:
	{
		// else if (notesManager.LaneNum[3] == 2)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_118 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_119 = L_118->___LaneNum_6;
		int32_t L_120;
		L_120 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_119, 3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_120) == ((uint32_t)2))))
		{
			goto IL_0385;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
		float L_121;
		L_121 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_122 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_123 = L_122->___NotesTime_8;
		float L_124;
		L_124 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_123, 3, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_125 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_126 = L_125->___StartTime_14;
		float L_127;
		L_127 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_121, ((float)il2cpp_codegen_add(L_124, L_126)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_127, NULL);
	}

IL_0385:
	{
		// if (Input.GetKeyDown(KeyCode.K))
		bool L_128;
		L_128 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)107), NULL);
		if (!L_128)
		{
			goto IL_04a5;
		}
	}
	{
		// if (notesManager.LaneNum[0] == 3)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_129 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_130 = L_129->___LaneNum_6;
		int32_t L_131;
		L_131 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_130, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_131) == ((uint32_t)3))))
		{
			goto IL_03d8;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
		float L_132;
		L_132 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_133 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_134 = L_133->___NotesTime_8;
		float L_135;
		L_135 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_134, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_136 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_137 = L_136->___StartTime_14;
		float L_138;
		L_138 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_132, ((float)il2cpp_codegen_add(L_135, L_137)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_138, NULL);
		goto IL_04a5;
	}

IL_03d8:
	{
		// else if(notesManager.LaneNum[1] == 3)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_139 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_140 = L_139->___LaneNum_6;
		int32_t L_141;
		L_141 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_140, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_141) == ((uint32_t)3))))
		{
			goto IL_041f;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
		float L_142;
		L_142 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_143 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_144 = L_143->___NotesTime_8;
		float L_145;
		L_145 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_144, 1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_146 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_147 = L_146->___StartTime_14;
		float L_148;
		L_148 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_142, ((float)il2cpp_codegen_add(L_145, L_147)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_148, NULL);
		goto IL_04a5;
	}

IL_041f:
	{
		// else if (notesManager.LaneNum[2] == 3)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_149 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_150 = L_149->___LaneNum_6;
		int32_t L_151;
		L_151 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_150, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_151) == ((uint32_t)3))))
		{
			goto IL_0463;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
		float L_152;
		L_152 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_153 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_154 = L_153->___NotesTime_8;
		float L_155;
		L_155 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_154, 2, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_156 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_157 = L_156->___StartTime_14;
		float L_158;
		L_158 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_152, ((float)il2cpp_codegen_add(L_155, L_157)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_158, NULL);
		goto IL_04a5;
	}

IL_0463:
	{
		// else if (notesManager.LaneNum[3] == 3)
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_159 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_160 = L_159->___LaneNum_6;
		int32_t L_161;
		L_161 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_160, 3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_161) == ((uint32_t)3))))
		{
			goto IL_04a5;
		}
	}
	{
		// Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
		float L_162;
		L_162 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_163 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_164 = L_163->___NotesTime_8;
		float L_165;
		L_165 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_164, 3, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_166 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_167 = L_166->___StartTime_14;
		float L_168;
		L_168 = Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8(__this, ((float)il2cpp_codegen_subtract(L_162, ((float)il2cpp_codegen_add(L_165, L_167)))), NULL);
		Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974(__this, L_168, NULL);
	}

IL_04a5:
	{
		// if (Time.time > notesManager.NotesTime[0] + 0.21f + GManager.instance.StartTime)
		float L_169;
		L_169 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_170 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_171 = L_170->___NotesTime_8;
		float L_172;
		L_172 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_171, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_173 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_174 = L_173->___StartTime_14;
		if ((!(((float)L_169) > ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_172, (0.209999993f))), L_174))))))
		{
			goto IL_0510;
		}
	}
	{
		// sumNotes -= 1;
		int32_t L_175 = __this->___sumNotes_6;
		__this->___sumNotes_6 = ((int32_t)il2cpp_codegen_subtract(L_175, 1));
		// Debug.Log("Miss");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73, NULL);
		// GManager.instance.miss++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_176 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_177 = L_176;
		int32_t L_178 = L_177->___miss_22;
		L_177->___miss_22 = ((int32_t)il2cpp_codegen_add(L_178, 1));
		// GManager.instance.combo = 0;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_179 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		L_179->___combo_15 = 0;
		// message(3);
		Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505(__this, 3, NULL);
		// deleteData();
		Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683(__this, NULL);
	}

IL_0510:
	{
		// if(sumNotes == 0)
		int32_t L_180 = __this->___sumNotes_6;
		if (L_180)
		{
			goto IL_0542;
		}
	}
	{
		// InvokeRepeating("Clear", 3.0f, 50);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, (3.0f), (50.0f), NULL);
		// InvokeRepeating("ChangeScene", 6.0f,50);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, (6.0f), (50.0f), NULL);
	}

IL_0542:
	{
		// }
		return;
	}
}
// System.Void Judge::Judgement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_Judgement_m915730D8981AF6693A0215C13D8E489899494974 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, float ___timeLag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeLag <= 0.10)
		float L_0 = ___timeLag0;
		if ((!(((double)((double)L_0)) <= ((double)(0.10000000000000001)))))
		{
			goto IL_0071;
		}
	}
	{
		// sumNotes -= 1;
		int32_t L_1 = __this->___sumNotes_6;
		__this->___sumNotes_6 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// GManager.instance.perfect++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_2 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_3 = L_2;
		int32_t L_4 = L_3->___perfect_18;
		L_3->___perfect_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// GManager.instance.combo++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_5 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_6 = L_5;
		int32_t L_7 = L_6->___combo_15;
		L_6->___combo_15 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// GManager.instance.score += 500 * (GManager.instance.combo / 10);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_8 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_9 = L_8;
		int32_t L_10 = L_9->___score_17;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_11 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_12 = L_11->___combo_15;
		L_9->___score_17 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)500), ((int32_t)(L_12/((int32_t)10)))))));
		// message(0);
		Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505(__this, 0, NULL);
		// deleteData();
		Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683(__this, NULL);
		return;
	}

IL_0071:
	{
		// if (timeLag <= 0.15)
		float L_13 = ___timeLag0;
		if ((!(((double)((double)L_13)) <= ((double)(0.14999999999999999)))))
		{
			goto IL_00e2;
		}
	}
	{
		// sumNotes -= 1;
		int32_t L_14 = __this->___sumNotes_6;
		__this->___sumNotes_6 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// GManager.instance.great++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_15 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_16 = L_15;
		int32_t L_17 = L_16->___great_19;
		L_16->___great_19 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// GManager.instance.combo++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_18 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_19 = L_18;
		int32_t L_20 = L_19->___combo_15;
		L_19->___combo_15 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// GManager.instance.score += 300 * (GManager.instance.combo / 10);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_21 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_22 = L_21;
		int32_t L_23 = L_22->___score_17;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_24 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_25 = L_24->___combo_15;
		L_22->___score_17 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(((int32_t)300), ((int32_t)(L_25/((int32_t)10)))))));
		// message(1);
		Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505(__this, 1, NULL);
		// deleteData();
		Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683(__this, NULL);
		return;
	}

IL_00e2:
	{
		// if (timeLag <= 0.20)
		float L_26 = ___timeLag0;
		if ((!(((double)((double)L_26)) <= ((double)(0.20000000000000001)))))
		{
			goto IL_014f;
		}
	}
	{
		// sumNotes -= 1;
		int32_t L_27 = __this->___sumNotes_6;
		__this->___sumNotes_6 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		// GManager.instance.good++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_28 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_29 = L_28;
		int32_t L_30 = L_29->___good_20;
		L_29->___good_20 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		// GManager.instance.combo++;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_31 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_32 = L_31;
		int32_t L_33 = L_32->___combo_15;
		L_32->___combo_15 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// GManager.instance.score += 100 * (GManager.instance.combo / 10);
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_34 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_35 = L_34;
		int32_t L_36 = L_35->___score_17;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_37 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_38 = L_37->___combo_15;
		L_35->___score_17 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)il2cpp_codegen_multiply(((int32_t)100), ((int32_t)(L_38/((int32_t)10)))))));
		// message(2);
		Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505(__this, 2, NULL);
		// deleteData();
		Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683(__this, NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Single Judge::GetABS(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Judge_GetABS_m5D45B0E11AC0F683BD84E7DAA1E1031DAAF7ADF8 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, float ___num0, const RuntimeMethod* method) 
{
	{
		// if (num >= 0)
		float L_0 = ___num0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return num;
		float L_1 = ___num0;
		return L_1;
	}

IL_000a:
	{
		// return -num;
		float L_2 = ___num0;
		return ((-L_2));
	}
}
// System.Void Judge::deleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_deleteData_m2910BDC3181AB5997FD0659942D27FD0B5BCB683 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notesManager.NotesTime.RemoveAt(0);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_0 = __this->___notesManager_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = L_0->___NotesTime_8;
		List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93(L_1, 0, List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		// notesManager.LaneNum.RemoveAt(0);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_2 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2->___LaneNum_6;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_3, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// notesManager.NoteType.RemoveAt(0);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_4 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4->___NoteType_7;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_5, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// Destroy(notesManager.NotesObj[0]);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_6 = __this->___notesManager_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = L_6->___NotesObj_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// notesManager.NotesObj.RemoveAt(0);
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_9 = __this->___notesManager_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = L_9->___NotesObj_9;
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_10, 0, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Judge::message(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_message_mC5F355A1A94CE30B1D1752897713F3002BA64505 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, int32_t ___judge0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(MessageObj[judge], new Vector3(notesManager.LaneNum[0] - 1.5f, 0.76f, 0.15f), Quaternion.Euler(45, 0, 0));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___MessageObj_4;
		int32_t L_1 = ___judge0;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* L_4 = __this->___notesManager_5;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4->___LaneNum_6;
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)il2cpp_codegen_subtract(((float)L_6), (1.5f))), (0.75999999f), (0.150000006f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((45.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Judge::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_Clear_m9B09089B824CE0B59586C3463BAE44FC17DEFD69 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
{
	{
		// clear.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___clear_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Judge::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge_ChangeScene_mCC615A2381CCE9BDC49405516B74315FCC8B34C6 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clear.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___clear_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SceneManager.LoadScene("ResultScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralE077CC0B119D1346E096B7B754FEF38CBA042E51, NULL);
		// }
		return;
	}
}
// System.Void Judge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Judge__ctor_mD99F33F3363A7C08F8D81106632795D7399921D6 (Judge_t1154CCE6270635B3CB852CEAA297A9CCF652A492* __this, const RuntimeMethod* method) 
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
// System.Void Light::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_Start_mF24B4A3F33ADB703AC3510106F00CA6BD843C75B (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_11), (void*)L_0);
		// line_obj = this.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		__this->___line_obj_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_obj_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Light::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_Update_m492EE46484BB88A37CE0137FA62D795F0B27E2F6 (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) 
{
	{
		// if (!(rend.material.color.a <= 0))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___rend_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_1, NULL);
		float L_3 = L_2.___a_3;
		if ((((float)L_3) <= ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}
	{
		// rend.material.color = new Color(1.0f,1.0f,1.0f,alfa);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___rend_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		float L_6 = __this->___alfa_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (1.0f), (1.0f), (1.0f), L_6, /*hidden argument*/NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_5, L_7, NULL);
	}

IL_0046:
	{
		// if (line == 1)
		int32_t L_8 = __this->___line_5;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_9;
		L_9 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// colorChange();
		Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105(__this, NULL);
	}

IL_005e:
	{
		// if (line == 2)
		int32_t L_10 = __this->___line_5;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0076;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.F))
		bool L_11;
		L_11 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)102), NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		// colorChange();
		Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105(__this, NULL);
	}

IL_0076:
	{
		// if (line == 3)
		int32_t L_12 = __this->___line_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)3))))
		{
			goto IL_008e;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.J))
		bool L_13;
		L_13 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)106), NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		// colorChange();
		Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105(__this, NULL);
	}

IL_008e:
	{
		// if (line == 4)
		int32_t L_14 = __this->___line_5;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.K))
		bool L_15;
		L_15 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)107), NULL);
		if (!L_15)
		{
			goto IL_00a6;
		}
	}
	{
		// colorChange();
		Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105(__this, NULL);
	}

IL_00a6:
	{
		// alfa -= speed * Time.deltaTime;
		float L_16 = __this->___alfa_12;
		float L_17 = __this->___speed_4;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_12 = ((float)il2cpp_codegen_subtract(L_16, ((float)il2cpp_codegen_multiply(L_17, L_18))));
		// }
		return;
	}
}
// System.Void Light::colorChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_colorChange_m89F147C17E86F643AB437CEC9A2E1033C2090105 (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) 
{
	{
		// alfa = 0.5f;
		__this->___alfa_12 = (0.5f);
		// rend.material.color = new Color(1.0f,1.0f,1.0f,alfa);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___rend_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		float L_2 = __this->___alfa_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (1.0f), (1.0f), (1.0f), L_2, /*hidden argument*/NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Light::posChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_posChange_m1C9A161DBAD706E3DEB1C19B1D2398F7D693A3A4 (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Light::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light__ctor_m59453AD0536B9914FE55BDEE97486AA1C42FD174 (Light_tCD5F794AE0355418831786AD1EBCCB859D0A15AF* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float speed = 2;   //????????
		__this->___speed_4 = (2.0f);
		// [SerializeField] private int line = 1;      //???[??????
		__this->___line_5 = 1;
		// private Vector3 pos_1 = new Vector3(-1.5f, 0.01f, 4.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (-1.5f), (0.00999999978f), (4.0f), /*hidden argument*/NULL);
		__this->___pos_1_7 = L_0;
		// private Vector3 pos_2 = new Vector3(-0.5f, 0.01f, 4.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (-0.5f), (0.00999999978f), (4.0f), /*hidden argument*/NULL);
		__this->___pos_2_8 = L_1;
		// private Vector3 pos_3 = new Vector3(0.5f, 0.01f, 4.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.5f), (0.00999999978f), (4.0f), /*hidden argument*/NULL);
		__this->___pos_3_9 = L_2;
		// private Vector3 pos_4 = new Vector3(1.5f, 0.01f, 4.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (1.5f), (0.00999999978f), (4.0f), /*hidden argument*/NULL);
		__this->___pos_4_10 = L_3;
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
// System.Void MusicManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Awake_mF45ED3B2ACB2D4A6F3EBCB74D93B9329F001A99C (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MusicManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Start_m3E06516484A5F01B8CDCC846C0BBFEDA81499F4B (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1D905CE8CEBBCD73EE8489914DBD4354B0203C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// songName = keeper.k_instance.MusicName();
		keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* L_0 = ((keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields*)il2cpp_codegen_static_fields_for(keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var))->___k_instance_4;
		String_t* L_1;
		L_1 = keeper_MusicName_m29F99B4AF9D3E54838E0F273BAD6C9C746633449_inline(L_0, NULL);
		__this->___songName_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___songName_6), (void*)L_1);
		// audio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audio_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_4), (void*)L_2);
		// Music = (AudioClip)Resources.Load("Musics/" + songName);    //Music??Musics?t?@?C??????songName????????O???????????
		String_t* L_3 = __this->___songName_6;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8E1D905CE8CEBBCD73EE8489914DBD4354B0203C, L_3, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5;
		L_5 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_4, NULL);
		__this->___Music_5 = ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)CastclassSealed((RuntimeObject*)L_5, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Music_5), (void*)((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)CastclassSealed((RuntimeObject*)L_5, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void MusicManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Update_m49A7036316DDBB17AC4A45EB7155F00304C75563 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space) && !played)
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		bool L_1 = __this->___played_7;
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		// Destroy(Space.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Space_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// GManager.instance.Start = true;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_4 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		L_4->___Start_13 = (bool)1;
		// GManager.instance.StartTime = Time.time;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_5 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		float L_6;
		L_6 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		L_5->___StartTime_14 = L_6;
		// played = true;
		__this->___played_7 = (bool)1;
		// audio.PlayOneShot (Music);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audio_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___Music_5;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_8, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void MusicManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager__ctor_m41A178D621B3011F8901EE68A91A5850A5E59904 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
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
// System.Void Notes::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notes_Update_m54F55E5A2F5E177DB7B4EB00613C6361EBD464D9 (Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// start = true;
		__this->___start_5 = (bool)1;
	}

IL_0010:
	{
		// if(start)
		bool L_1 = __this->___start_5;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// transform.position -= transform.forward * note_speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = __this->___note_speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_11, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Notes::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notes_OnTriggerEnter_m2068EBD33480279B4EBC02EFDD96F4318BF07A22 (Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Destroy")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Notes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notes__ctor_m92DB278560A9FAD3CFFC80F35D42D428BDE7F215 (Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED* __this, const RuntimeMethod* method) 
{
	{
		// float note_speed = 15.0f;
		__this->___note_speed_4 = (15.0f);
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
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
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
// System.Void Note::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note__ctor_m604E0FF46514DBA4F0DDAB63C417950327839F44 (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
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
// System.Void NotesManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesManager_OnEnable_mF888337D3E193367D6131FC3A0D950E4C4A426CA (NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1366BA1B524B8C759171DBC28AAA1E255DC87AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// noteNum = 0;
		__this->___noteNum_4 = 0;
		// songName = keeper.k_instance.MusicName();               //?v???C?????????o??
		keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* L_0 = ((keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields*)il2cpp_codegen_static_fields_for(keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var))->___k_instance_4;
		String_t* L_1;
		L_1 = keeper_MusicName_m29F99B4AF9D3E54838E0F273BAD6C9C746633449_inline(L_0, NULL);
		__this->___songName_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___songName_5), (void*)L_1);
		// NotesSpeed = 15.0f;
		__this->___NotesSpeed_10 = (15.0f);
		// Load(songName);
		String_t* L_2 = __this->___songName_5;
		NotesManager_Load_m5C1A7293E300FF7A091828F212C304AF8B7350B4(__this, L_2, NULL);
		// Debug.Log("notesSpeed = " + NotesSpeed);
		float* L_3 = (&__this->___NotesSpeed_10);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC1366BA1B524B8C759171DBC28AAA1E255DC87AF, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// }
		return;
	}
}
// System.Void NotesManager::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesManager_Load_m5C1A7293E300FF7A091828F212C304AF8B7350B4 (NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* __this, String_t* ___SongName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DCEACA68C25E34A3DA3DDC2388C170B713B0B4);
		s_Il2CppMethodInitialized = true;
	}
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// string inputString = Resources.Load<TextAsset>(SongName).ToString();
		String_t* L_0 = ___SongName0;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1;
		L_1 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A(L_0, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		// Data inputJson = JsonUtility.FromJson<Data>(inputString);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_3;
		L_3 = JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8(L_2, JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var);
		V_0 = L_3;
		// noteNum = inputJson.notes.Length;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_4 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_5 = L_4->___notes_4;
		__this->___noteNum_4 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		// for (int i = 0; i < inputJson.notes.Length; i++)
		V_1 = 0;
		goto IL_0116;
	}

IL_0026:
	{
		// float interval = 60 / (inputJson.BPM * (float)inputJson.notes[i].LPB);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_6 = V_0;
		int32_t L_7 = L_6->___BPM_2;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_8 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_9 = L_8->___notes_4;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = L_12->___LPB_3;
		// float beatSec = interval * (float)inputJson.notes[i].LPB;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_14 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_15 = L_14->___notes_4;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = L_18->___LPB_3;
		// float time = (beatSec * inputJson.notes[i].num / (float)inputJson.notes[i].LPB) + inputJson.offset * 0.01f;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_20 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_21 = L_20->___notes_4;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = L_24->___num_1;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_26 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_27 = L_26->___notes_4;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = L_30->___LPB_3;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_32 = V_0;
		int32_t L_33 = L_32->___offset_3;
		V_2 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((60.0f)/((float)il2cpp_codegen_multiply(((float)L_7), ((float)L_13))))), ((float)L_19))), ((float)L_25)))/((float)L_31))), ((float)il2cpp_codegen_multiply(((float)L_33), (0.00999999978f)))));
		// NotesTime.Add(time);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_34 = __this->___NotesTime_8;
		float L_35 = V_2;
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_34, L_35, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// LaneNum.Add(inputJson.notes[i].block);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_36 = __this->___LaneNum_6;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_37 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_38 = L_37->___notes_4;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = L_41->___block_2;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_36, L_42, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// NoteType.Add(inputJson.notes[i].type);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_43 = __this->___NoteType_7;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_44 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_45 = L_44->___notes_4;
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = L_48->___type_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_43, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// float z = NotesTime[i] * NotesSpeed;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_50 = __this->___NotesTime_8;
		int32_t L_51 = V_1;
		float L_52;
		L_52 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_50, L_51, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_53 = __this->___NotesSpeed_10;
		V_3 = ((float)il2cpp_codegen_multiply(L_52, L_53));
		// NotesObj.Add(Instantiate(noteObj, new Vector3(inputJson.notes[i].block - 1.5f, 0.3f, z), Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_54 = __this->___NotesObj_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___noteObj_11;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_56 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_57 = L_56->___notes_4;
		int32_t L_58 = V_1;
		int32_t L_59 = L_58;
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61 = L_60->___block_2;
		float L_62 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), ((float)il2cpp_codegen_subtract(((float)L_61), (1.5f))), (0.300000012f), L_62, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		L_64 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65;
		L_65 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_55, L_63, L_64, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_54, L_65, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Debug.Log("create notes");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral83DCEACA68C25E34A3DA3DDC2388C170B713B0B4, NULL);
		// for (int i = 0; i < inputJson.notes.Length; i++)
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0116:
	{
		// for (int i = 0; i < inputJson.notes.Length; i++)
		int32_t L_67 = V_1;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_68 = V_0;
		NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* L_69 = L_68->___notes_4;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NotesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesManager__ctor_m7161F3BE720203BEF6CE17BEEC8CFE439A905DE7 (NotesManager_tD186238281AC6C6DD083D5617258C11C9270050A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> LaneNum = new List<int>();                 //?????????????
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___LaneNum_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LaneNum_6), (void*)L_0);
		// public List<int> NoteType = new List<int>();                //?m?[?c????
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___NoteType_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NoteType_7), (void*)L_1);
		// public List<float> NotesTime = new List<float>();           //??????d???^?C?~???O
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_2, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___NotesTime_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NotesTime_8), (void*)L_2);
		// public List<GameObject> NotesObj = new List<GameObject>();  //?I?u?W?F?N?g
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___NotesObj_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NotesObj_9), (void*)L_3);
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
// System.Void ScoreText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_Awake_m2F98FF313F81DD790B8215F189F4D2590633757C (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7562ABC9624DDED25DAC1ACEB34317C1F345B767);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager = GameObject.Find("GameManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		__this->___GameManager_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GameManager_10), (void*)L_0);
		// keeper = GameObject.Find("name_keeper");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral7562ABC9624DDED25DAC1ACEB34317C1F345B767, NULL);
		__this->___keeper_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keeper_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void ScoreText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_Start_m759AA9DD807E404A8F9D0B78E47F557B8148BC0B (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14FC2B4DC62E58A87920FD5F4C0BFEBA205DAB54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2689BE333CAB7CBF8534AABCCA56454CDEBD8C1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B8377F07BEBBBD0468BF6C9BB96FDFB41562F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C0A458861C59D6F101EC42B1282F9B40A42E3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67D83B221559B41FF777C3CCFFBFFE4A7C2D1DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD2C7F553397FA326B2D3B1DAA0B2E48B8F1B82A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// t_combo = GManager.instance.max_combo;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_0 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_1 = L_0->___max_combo_16;
		__this->___t_combo_18 = L_1;
		// t_perfect = GManager.instance.perfect;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_2 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_3 = L_2->___perfect_18;
		__this->___t_perfect_19 = L_3;
		// t_great = GManager.instance.combo;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_4 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_5 = L_4->___combo_15;
		__this->___t_great_20 = L_5;
		// t_good = GManager.instance.combo;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_6 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_7 = L_6->___combo_15;
		__this->___t_good_21 = L_7;
		// t_miss = GManager.instance.miss;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_8 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_9 = L_8->___miss_22;
		__this->___t_miss_22 = L_9;
		// t_score = GManager.instance.score;
		GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219* L_10 = ((GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_StaticFields*)il2cpp_codegen_static_fields_for(GManager_t92A53F8FBDE5266A305FDDFECE3FB015197CD219_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_11 = L_10->___score_17;
		__this->___t_score_23 = ((float)L_11);
		// combo_text = combo.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___combo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13;
		L_13 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_12, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___combo_text_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combo_text_12), (void*)L_13);
		// perfect_text = perfect.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___perfect_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15;
		L_15 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_14, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___perfect_text_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___perfect_text_13), (void*)L_15);
		// great_text = great.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___great_6;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17;
		L_17 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_16, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___great_text_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___great_text_14), (void*)L_17);
		// good_text = good.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___good_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19;
		L_19 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_18, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___good_text_15 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___good_text_15), (void*)L_19);
		// miss_text = miss.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___miss_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21;
		L_21 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_20, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___miss_text_16 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___miss_text_16), (void*)L_21);
		// score_text = score.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___score_9;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23;
		L_23 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_22, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___score_text_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_text_17), (void*)L_23);
		// combo_text.text = ("MaxCombo    : " + t_combo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___combo_text_12;
		int32_t* L_25 = (&__this->___t_combo_18);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral70C0A458861C59D6F101EC42B1282F9B40A42E3C, L_26, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		// perfect_text.text = ("Perfect     : " + t_perfect);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___perfect_text_13;
		int32_t* L_29 = (&__this->___t_perfect_19);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14FC2B4DC62E58A87920FD5F4C0BFEBA205DAB54, L_30, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_31);
		// great_text.text = ("Great       : " + t_great);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___great_text_14;
		int32_t* L_33 = (&__this->___t_great_20);
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_33, NULL);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral43B8377F07BEBBBD0468BF6C9BB96FDFB41562F9, L_34, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_35);
		// good_text.text = ("Good        : " + t_good);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___good_text_15;
		int32_t* L_37 = (&__this->___t_good_21);
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCD2C7F553397FA326B2D3B1DAA0B2E48B8F1B82A, L_38, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
		// miss_text.text = ("Miss        : " + t_miss);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___miss_text_16;
		int32_t* L_41 = (&__this->___t_miss_22);
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_41, NULL);
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2689BE333CAB7CBF8534AABCCA56454CDEBD8C1D, L_42, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_43);
		// score_text.text = ("Score       : " + t_score);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___score_text_17;
		float* L_45 = (&__this->___t_score_23);
		String_t* L_46;
		L_46 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_45, NULL);
		String_t* L_47;
		L_47 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB67D83B221559B41FF777C3CCFFBFFE4A7C2D1DB, L_46, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_47);
		// Destroy(GameManager.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___GameManager_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_49, NULL);
		// Destroy(keeper.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___keeper_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_50, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_51, NULL);
		// }
		return;
	}
}
// System.Void ScoreText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_Update_m5F66D7E895842DC4557DB6D696FDD54081D21168 (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyUp(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("TitleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ScoreText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText__ctor_m26E347F37A18A125ED309A7D70B55CB275E11687 (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
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
// System.Void keeper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void keeper_Awake_m46CFE65EB5C7023FB004A6BC15E998DBC8E1D4E9 (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(k_instance == null)
		keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* L_0 = ((keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields*)il2cpp_codegen_static_fields_for(keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var))->___k_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// k_instance = this;
		((keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields*)il2cpp_codegen_static_fields_for(keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var))->___k_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_StaticFields*)il2cpp_codegen_static_fields_for(keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E_il2cpp_TypeInfo_var))->___k_instance_4), (void*)__this);
	}

IL_0013:
	{
		// next = true;
		__this->___next_6 = (bool)1;
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		// }
		return;
	}
}
// System.Void keeper::GetMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void keeper_GetMusic_mBE04D2B81AFAECA737BC1688779D6E0CAB47E5A6 (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF71661CEFB181FF6DF4984D086197E60A8BCAA08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundname = SelectManager.send.SendName();
		SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* L_0 = ((SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_StaticFields*)il2cpp_codegen_static_fields_for(SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var))->___send_7;
		String_t* L_1;
		L_1 = SelectManager_SendName_mC0F0928BD01AE8C70CF5B882B3B9FBF01CD012EE_inline(L_0, NULL);
		__this->___soundname_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___soundname_5), (void*)L_1);
		// Debug.Log("Get "+ soundname);
		String_t* L_2 = __this->___soundname_5;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF71661CEFB181FF6DF4984D086197E60A8BCAA08, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// if(soundname == (""))
		String_t* L_4 = __this->___soundname_5;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// soundname = ("ENGRAM");
		__this->___soundname_5 = _stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___soundname_5), (void*)_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
	}

IL_0042:
	{
		// if(next)
		bool L_6 = __this->___next_6;
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		// Invoke("Next", 1.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, (1.0f), NULL);
		// next = false;
		__this->___next_6 = (bool)0;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.String keeper::MusicName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* keeper_MusicName_m29F99B4AF9D3E54838E0F273BAD6C9C746633449 (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	{
		// return soundname;
		String_t* L_0 = __this->___soundname_5;
		return L_0;
	}
}
// System.Void keeper::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void keeper_Next_mA9493A2E276DC4A2BB28C5387DE91DF8EC6E3C24 (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// }
		return;
	}
}
// System.Void keeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void keeper__ctor_mC4378F318D336618C750528744F54F92156AFA48 (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string soundname = "ENGRAM";
		__this->___soundname_5 = _stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___soundname_5), (void*)_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
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
// System.Void SelectManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectManager_Awake_m85E4056D7448FEF3F3EADD96978AC9679EFEA90C (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(send == null)
		SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* L_0 = ((SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_StaticFields*)il2cpp_codegen_static_fields_for(SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var))->___send_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// send = this;
		((SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_StaticFields*)il2cpp_codegen_static_fields_for(SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var))->___send_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_StaticFields*)il2cpp_codegen_static_fields_for(SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88_il2cpp_TypeInfo_var))->___send_7), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SelectManager::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectManager_Select_mC8D391D67FECC9B98E2E3DB0AEBC3E9FC1B86D73 (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, int32_t ___num0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral048699FC14DC686FD11875B5B14FD4E8776E3D75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A42CDA571AD764048591433299D1BC98BD31C35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9B9516DE7B489B11C7D6879A8DD0F48EF5EB89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADF1F897ED2B5161730230C7719CF7669C5B2F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F969303923D1238199D06CE26B362FCE839B02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6231798C32EF67DC9320506BAC8039CE24ABA367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2603E099D62AF04BB07DBC32F720CDA2C1F8AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98AC9A61618BF8C75413C3AEF9CAE10782DE26B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABED93E63EB4678A0FAC89BB23D76FE46997D91A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FA00D4C1DC1B39532B3E336772B3B0395E71C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(num == 1)
		int32_t L_0 = ___num0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// music_name = ("bass_line");
		__this->___music_name_6 = _stringLiteral048699FC14DC686FD11875B5B14FD4E8776E3D75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral048699FC14DC686FD11875B5B14FD4E8776E3D75);
		// Debug.Log(music_name);
		String_t* L_1 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
	}

IL_001a:
	{
		// if(num == 2)
		int32_t L_2 = ___num0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// music_name = ("flamewhip");
		__this->___music_name_6 = _stringLiteral50F969303923D1238199D06CE26B362FCE839B02;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral50F969303923D1238199D06CE26B362FCE839B02);
		// Debug.Log(music_name);
		String_t* L_3 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
	}

IL_0034:
	{
		// if(num == 3)
		int32_t L_4 = ___num0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_004e;
		}
	}
	{
		// music_name = ("ENGRAM");
		__this->___music_name_6 = _stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteralC3CFD5011EF464C2D05E06255E77DE6E2AE98921);
		// Debug.Log(music_name);
		String_t* L_5 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
	}

IL_004e:
	{
		// if (num == 4)
		int32_t L_6 = ___num0;
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0068;
		}
	}
	{
		// music_name = ("paqqin");
		__this->___music_name_6 = _stringLiteral6231798C32EF67DC9320506BAC8039CE24ABA367;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral6231798C32EF67DC9320506BAC8039CE24ABA367);
		// Debug.Log(music_name);
		String_t* L_7 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
	}

IL_0068:
	{
		// if(num == 5)
		int32_t L_8 = ___num0;
		if ((!(((uint32_t)L_8) == ((uint32_t)5))))
		{
			goto IL_0082;
		}
	}
	{
		// music_name = ("MARENOL");
		__this->___music_name_6 = _stringLiteral4ADF1F897ED2B5161730230C7719CF7669C5B2F7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral4ADF1F897ED2B5161730230C7719CF7669C5B2F7);
		// Debug.Log(music_name);
		String_t* L_9 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
	}

IL_0082:
	{
		// if (num == 6)
		int32_t L_10 = ___num0;
		if ((!(((uint32_t)L_10) == ((uint32_t)6))))
		{
			goto IL_009c;
		}
	}
	{
		// music_name = ("Garakuta_Doll_Play");
		__this->___music_name_6 = _stringLiteral0A42CDA571AD764048591433299D1BC98BD31C35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral0A42CDA571AD764048591433299D1BC98BD31C35);
		// Debug.Log(music_name);
		String_t* L_11 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
	}

IL_009c:
	{
		// if (num == 7)
		int32_t L_12 = ___num0;
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			goto IL_00b6;
		}
	}
	{
		// music_name = ("Parallellalla");
		__this->___music_name_6 = _stringLiteral8D2603E099D62AF04BB07DBC32F720CDA2C1F8AD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral8D2603E099D62AF04BB07DBC32F720CDA2C1F8AD);
		// Debug.Log(music_name);
		String_t* L_13 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
	}

IL_00b6:
	{
		// if (num == 8)
		int32_t L_14 = ___num0;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_00d0;
		}
	}
	{
		// music_name = ("CometCoaster");
		__this->___music_name_6 = _stringLiteral98AC9A61618BF8C75413C3AEF9CAE10782DE26B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral98AC9A61618BF8C75413C3AEF9CAE10782DE26B5);
		// Debug.Log(music_name);
		String_t* L_15 = __this->___music_name_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
	}

IL_00d0:
	{
		// if(num == 9)
		int32_t L_16 = ___num0;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00ea;
		}
	}
	{
		// music_name = ("CITRUSMONSTER");
		__this->___music_name_6 = _stringLiteralC8FA00D4C1DC1B39532B3E336772B3B0395E71C4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteralC8FA00D4C1DC1B39532B3E336772B3B0395E71C4);
		// Debug.Log("music_name");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralABED93E63EB4678A0FAC89BB23D76FE46997D91A, NULL);
	}

IL_00ea:
	{
		// if(num == 10)
		int32_t L_17 = ___num0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0104;
		}
	}
	{
		// music_name = ("Haunted waltz on tape");
		__this->___music_name_6 = _stringLiteral3E9B9516DE7B489B11C7D6879A8DD0F48EF5EB89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___music_name_6), (void*)_stringLiteral3E9B9516DE7B489B11C7D6879A8DD0F48EF5EB89);
		// Debug.Log("Haunted waltz on tape");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3E9B9516DE7B489B11C7D6879A8DD0F48EF5EB89, NULL);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.String SelectManager::SendName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SelectManager_SendName_mC0F0928BD01AE8C70CF5B882B3B9FBF01CD012EE (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, const RuntimeMethod* method) 
{
	{
		// return music_name;
		String_t* L_0 = __this->___music_name_6;
		return L_0;
	}
}
// System.Void SelectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectManager__ctor_m85D96126C7AB69D7F0B36F24E01FA927F252D3BD (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, const RuntimeMethod* method) 
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
// System.Void Title::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_Start_m7C4287FBCE727AF724A391DCD73B245F4F83F842 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Title::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_Update_m85F2F516B7B340E4129F6C6971A716CE410025AF (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3093A22B0BB57757793BB7AFF14E5E9FAA82B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyUp(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("SelectScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral2C3093A22B0BB57757793BB7AFF14E5E9FAA82B1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_mD048B1928FB56935584ECB8B23993B2F8ED77772 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* keeper_MusicName_m29F99B4AF9D3E54838E0F273BAD6C9C746633449_inline (keeper_t06ACF3E75596079EAF6890E0DFD65161E83C159E* __this, const RuntimeMethod* method) 
{
	{
		// return soundname;
		String_t* L_0 = __this->___soundname_5;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SelectManager_SendName_mC0F0928BD01AE8C70CF5B882B3B9FBF01CD012EE_inline (SelectManager_t47F98B89CDE8CD3359BF849A2981EA48E4FF7A88* __this, const RuntimeMethod* method) 
{
	{
		// return music_name;
		String_t* L_0 = __this->___music_name_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
