#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>
struct IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5;
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext[]
struct ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1;
// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB;
// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE;
// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423;
// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1;
// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4;
// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4;
IL2CPP_EXTERN_C String_t* _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93;
IL2CPP_EXTERN_C String_t* _stringLiteral161567E318CEB965509FE84CE4198A12E62440AF;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973;
IL2CPP_EXTERN_C String_t* _stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160;
IL2CPP_EXTERN_C String_t* _stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029;
IL2CPP_EXTERN_C String_t* _stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B;
IL2CPP_EXTERN_C String_t* _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338;
IL2CPP_EXTERN_C const RuntimeMethod* BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD  : public RuntimeObject
{
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09  : public RuntimeObject
{
};

// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2  : public RuntimeObject
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_0;
};

// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CValueU3Ek__BackingField_1;
};

// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CParentU3Ek__BackingField_0;
};

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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>
struct Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>
struct Enumerator_t597C435D76D0912631AF7909B79461C347020E0C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
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

// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::_children
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____children_1;
};

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::_children
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____children_1;
};

// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CPatternU3Ek__BackingField_1;
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3COptionsU3Ek__BackingField_2;
};

// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Object Newtonsoft.Json.Bson.BsonValue::_value
	RuntimeObject* ____value_1;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::_type
	int8_t ____type_2;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920__padding[52];
	};
};

// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
};

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// System.Boolean Newtonsoft.Json.Bson.BsonString::<IncludeLength>k__BackingField
	bool ___U3CIncludeLengthU3Ek__BackingField_3;
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

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_12;
};

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423  : public JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765
{
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____reader_19;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* ____stack_20;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_21;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_22;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_23;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_24;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ____currentContext_25;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_26;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_27;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_28;
};

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456  : public JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____root_13;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____parent_14;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_15;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___E92B39D8233061927D9ACDE54665E68E7535635A_4;
};

// <PrivateImplementationDetails>

// System.IO.BinaryReader

// System.IO.BinaryReader

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields
{
	// System.Text.Encoding Newtonsoft.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter

// Newtonsoft.Json.Bson.BsonObjectId

// Newtonsoft.Json.Bson.BsonObjectId

// Newtonsoft.Json.Bson.BsonProperty

// Newtonsoft.Json.Bson.BsonProperty

// Newtonsoft.Json.Bson.BsonToken

// Newtonsoft.Json.Bson.BsonToken

// System.Globalization.CultureInfo
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

// System.Globalization.CultureInfo

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Newtonsoft.Json.Bson.BsonReader/ContainerContext

// Newtonsoft.Json.Bson.BsonReader/ContainerContext

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Newtonsoft.Json.Bson.BsonArray

// Newtonsoft.Json.Bson.BsonArray

// Newtonsoft.Json.Bson.BsonObject

// Newtonsoft.Json.Bson.BsonObject

// Newtonsoft.Json.Bson.BsonRegex

// Newtonsoft.Json.Bson.BsonRegex

// Newtonsoft.Json.Bson.BsonValue

// Newtonsoft.Json.Bson.BsonValue

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Decimal

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.SByte

// System.SByte

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// System.Text.UTF8Encoding

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// Newtonsoft.Json.Bson.BsonBinary

// Newtonsoft.Json.Bson.BsonBinary

// Newtonsoft.Json.Bson.BsonString

// Newtonsoft.Json.Bson.BsonString

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTempate_1;
};

// Newtonsoft.Json.JsonWriter

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange1_15;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange2_16;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange3_17;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange4_18;
};

// Newtonsoft.Json.Bson.BsonReader

// Newtonsoft.Json.Bson.BsonWriter

// Newtonsoft.Json.Bson.BsonWriter

// System.ArgumentException

// System.ArgumentException

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonWriterException

// Newtonsoft.Json.JsonWriterException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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


// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___0_encoderShouldEmitUTF8Identifier, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___0_newToken, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___0_newToken, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___0_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_newContext, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___0_type, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Count()
inline int32_t List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Item(System.Int32)
inline ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98 (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::Add(T)
inline void List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___0_binaryType, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884 (int64_t ___0_javaScriptTicks, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, int32_t ___1_kind, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_value, int32_t ___1_startIndex, int32_t ___2_charCount, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___0_b, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___0_value, bool ___1_includeLength, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::Add(T)
inline void List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::GetEnumerator()
inline Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011 (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::.ctor()
inline void List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::Add(T)
inline void List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::GetEnumerator()
inline Enumerator_t597C435D76D0912631AF7909B79461C347020E0C List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	Enumerator_t597C435D76D0912631AF7909B79461C347020E0C il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::.ctor()
inline void List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1 (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::set_IncludeLength(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___0_name, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___1_token, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, String_t* ___1_message, Exception_t* ___2_ex, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::UpdateScopeWithFinishedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___0_tokenBeingWritten, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__cctor_mA6BEC2932FB2A544F7527BCB1401C139932B39B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0), (void*)L_0);
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
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_28;
		return L_0;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0;
		L_0 = BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691(__this, NULL);
		__this->____currentElementType_23 = L_0;
		String_t* L_1;
		L_1 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->____bsonReaderState_24;
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0033_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_003c_1;
				}
				case 3:
				{
					goto IL_003c_1;
				}
				case 4:
				{
					goto IL_0045_1;
				}
				case 5:
				{
					goto IL_0045_1;
				}
				case 6:
				{
					goto IL_0045_1;
				}
				case 7:
				{
					goto IL_0045_1;
				}
				case 8:
				{
					goto IL_0045_1;
				}
			}
		}
		{
			goto IL_004e_1;
		}

IL_0033_1:
		{
			bool L_2;
			L_2 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
			V_0 = L_2;
			goto IL_006f_1;
		}

IL_003c_1:
		{
			bool L_3;
			L_3 = BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4(__this, NULL);
			V_0 = L_3;
			goto IL_006f_1;
		}

IL_0045_1:
		{
			bool L_4;
			L_4 = BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E(__this, NULL);
			V_0 = L_4;
			goto IL_006f_1;
		}

IL_004e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			int32_t L_6 = __this->____bsonReaderState_24;
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_7);
			String_t* L_9;
			L_9 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338)), L_5, L_8, NULL);
			JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_10;
			L_10 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var)));
		}

IL_006f_1:
		{
			bool L_11 = V_0;
			if (L_11)
			{
				goto IL_007d_1;
			}
		}
		{
			JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
			V_2 = (bool)0;
			goto IL_008d;
		}

IL_007d_1:
		{
			V_2 = (bool)1;
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.IO.EndOfStreamException)
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_008d:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	bool G_B10_0 = false;
	bool G_B8_0 = false;
	bool G_B9_0 = false;
	{
		int32_t L_0 = __this->____bsonReaderState_24;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_00b7;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0028:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029, NULL);
		__this->____bsonReaderState_24 = 5;
		return (bool)1;
	}

IL_003d:
	{
		int32_t L_2;
		L_2 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		String_t* L_3;
		L_3 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_3, NULL);
		__this->____bsonReaderState_24 = 6;
		return (bool)1;
	}

IL_005b:
	{
		int32_t L_4;
		L_4 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0072;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93, NULL);
		return (bool)1;
	}

IL_0072:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_24 = 7;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, 3, NULL);
		V_1 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_1;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_1;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_009c:
	{
		bool L_9;
		L_9 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
		bool L_10 = L_9;
		G_B8_0 = L_10;
		if (!L_10)
		{
			G_B10_0 = L_10;
			goto IL_00b6;
		}
	}
	{
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, __this);
		G_B9_0 = G_B8_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			G_B10_0 = G_B8_0;
			goto IL_00b6;
		}
	}
	{
		__this->____bsonReaderState_24 = 8;
		G_B10_0 = G_B9_0;
	}

IL_00b6:
	{
		return G_B10_0;
	}

IL_00b7:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_24 = 0;
		return (bool)1;
	}

IL_00c8:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00d1;
	}

IL_0018:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		__this->____bsonReaderState_24 = 2;
		return (bool)1;
	}

IL_002d:
	{
		int32_t L_4 = __this->____bsonReaderState_24;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5;
		L_5 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_5, NULL);
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_6 = __this->____bsonReaderState_24;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_7, NULL);
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_8 = __this->____bsonReaderState_24;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_10, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_12;
		L_12 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_007d:
	{
		int32_t L_13 = __this->____bsonReaderState_24;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_009b;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		__this->____bsonReaderState_24 = 3;
		return (bool)1;
	}

IL_009b:
	{
		int32_t L_14 = __this->____bsonReaderState_24;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00b5;
		}
	}
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_24 = 0;
		return (bool)1;
	}

IL_00b5:
	{
		int32_t L_15 = __this->____bsonReaderState_24;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_17, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_19;
		L_19 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_00d1:
	{
		int32_t L_20;
		L_20 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var)), &L_21);
		String_t* L_23;
		L_23 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_22, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_24;
		L_24 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_0086;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_013d;
			}
			case 5:
			{
				goto IL_0094;
			}
			case 6:
			{
				goto IL_013d;
			}
			case 7:
			{
				goto IL_0084;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_0143;
			}
			case 10:
			{
				goto IL_0143;
			}
			case 11:
			{
				goto IL_0143;
			}
			case 12:
			{
				goto IL_0143;
			}
		}
	}
	{
		goto IL_013d;
	}

IL_0046:
	{
		bool L_2 = __this->____readRootValueAsArray_26;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_3 = G_B5_0;
		bool L_3 = __this->____readRootValueAsArray_26;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 3;
	}

IL_005f:
	{
		int32_t L_4 = V_3;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_4, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, G_B8_0, NULL);
		V_4 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_4;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_4;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}

IL_0086:
	{
		int8_t L_9 = __this->____currentElementType_23;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_9, NULL);
		return (bool)1;
	}

IL_0094:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_10 = __this->____currentContext_25;
		V_1 = L_10;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_11 = V_1;
		if (L_11)
		{
			goto IL_00a0;
		}
	}
	{
		return (bool)0;
	}

IL_00a0:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Length_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Position_2;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_00df;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_17 = V_1;
		NullCheck(L_17);
		int8_t L_18 = L_17->___Type_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_00d0;
		}
	}
	{
		String_t* L_19;
		L_19 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		int8_t L_20 = __this->____currentElementType_23;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_20, NULL);
		return (bool)1;
	}

IL_00d0:
	{
		String_t* L_21;
		L_21 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, L_21, NULL);
		return (bool)1;
	}

IL_00df:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___Position_2;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0131;
		}
	}
	{
		uint8_t L_25;
		L_25 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		if (!L_25)
		{
			goto IL_00fc;
		}
	}
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_26;
		L_26 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_00fc:
	{
		BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312(__this, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_27 = __this->____currentContext_25;
		if (!L_27)
		{
			goto IL_0116;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->___Length_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_29, NULL);
	}

IL_0116:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_30 = V_1;
		NullCheck(L_30);
		int8_t L_31 = L_30->___Type_0;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_0123;
		}
	}
	{
		G_B25_0 = ((int32_t)14);
		goto IL_0125;
	}

IL_0123:
	{
		G_B25_0 = ((int32_t)13);
	}

IL_0125:
	{
		V_5 = G_B25_0;
		int32_t L_32 = V_5;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_32, NULL);
		return (bool)1;
	}

IL_0131:
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_33;
		L_33 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_013d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_34 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_0143:
	{
		return (bool)0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_20;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_1 = __this->____stack_20;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_1, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = __this->____stack_20;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_3, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		__this->____currentContext_25 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_25), (void*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL);
		return;
	}

IL_002d:
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_5 = __this->____stack_20;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_6 = __this->____stack_20;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_6, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_5);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_8;
		L_8 = List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		__this->____currentContext_25 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_25), (void*)L_8);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_newContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_20;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = ___0_newContext;
		NullCheck(L_0);
		List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline(L_0, L_1, List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_2 = ___0_newContext;
		__this->____currentContext_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_25), (void*)L_2);
		return;
	}
}
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_19;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	uint8_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	bool V_5 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_11 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_12 = NULL;
	int32_t V_13 = 0;
	RuntimeObject* G_B11_0 = NULL;
	{
		int8_t L_0 = ___0_type;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00c4;
			}
			case 4:
			{
				goto IL_00e9;
			}
			case 5:
			{
				goto IL_010f;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_012d;
			}
			case 8:
			{
				goto IL_014a;
			}
			case 9:
			{
				goto IL_0195;
			}
			case 10:
			{
				goto IL_019e;
			}
			case 11:
			{
				goto IL_01ce;
			}
			case 12:
			{
				goto IL_01dd;
			}
			case 13:
			{
				goto IL_0090;
			}
			case 14:
			{
				goto IL_01ec;
			}
			case 15:
			{
				goto IL_01fb;
			}
			case 16:
			{
				goto IL_020f;
			}
			case 17:
			{
				goto IL_020f;
			}
		}
	}
	{
		goto IL_0222;
	}

IL_0055:
	{
		double L_1;
		L_1 = BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = ((JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*)__this)->____floatParseHandling_10;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		double L_3 = V_0;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C(L_5, L_6, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = L_7;
		RuntimeObject* L_9 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_8);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_9, NULL);
		return;
	}

IL_0082:
	{
		double L_10 = V_0;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_12, NULL);
		return;
	}

IL_0090:
	{
		String_t* L_13;
		L_13 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_13, NULL);
		return;
	}

IL_009f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_14, 3, NULL);
		V_11 = L_14;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_15 = V_11;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_15, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_16 = V_11;
		int32_t L_17;
		L_17 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_16);
		L_16->___Length_1 = L_17;
		return;
	}

IL_00c4:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 2, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_18 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_18, 4, NULL);
		V_12 = L_18;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_19 = V_12;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_19, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_20 = V_12;
		int32_t L_21;
		L_21 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_20);
		L_20->___Length_1 = L_21;
		return;
	}

IL_00e9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF(__this, (&V_1), NULL);
		V_2 = L_22;
		uint8_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)4))))
		{
			goto IL_0103;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		Guid_t L_25;
		memset((&L_25), 0, sizeof(L_25));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_25), L_24, /*hidden argument*/NULL);
		Guid_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Guid_t_il2cpp_TypeInfo_var, &L_26);
		G_B11_0 = L_27;
		goto IL_0104;
	}

IL_0103:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		G_B11_0 = ((RuntimeObject*)(L_28));
	}

IL_0104:
	{
		V_3 = G_B11_0;
		RuntimeObject* L_29 = V_3;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), L_29, NULL);
		return;
	}

IL_010f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)12), NULL);
		return;
	}

IL_0118:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		V_4 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_31, NULL);
		return;
	}

IL_012d:
	{
		uint8_t L_32;
		L_32 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9(L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)10), L_36, NULL);
		return;
	}

IL_014a:
	{
		int64_t L_37;
		L_37 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884(L_37, NULL);
		V_6 = L_38;
		int32_t L_39;
		L_39 = BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline(__this, NULL);
		V_13 = L_39;
		int32_t L_40 = V_13;
		if (!L_40)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_41 = V_13;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0181;
	}

IL_016a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42 = V_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0(L_42, 0, NULL);
		V_7 = L_43;
		goto IL_0185;
	}

IL_0176:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44;
		L_44 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_6), NULL);
		V_7 = L_44;
		goto IL_0185;
	}

IL_0181:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_6;
		V_7 = L_45;
	}

IL_0185:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = V_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47 = L_46;
		RuntimeObject* L_48 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_47);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)16), L_48, NULL);
		return;
	}

IL_0195:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)11), NULL);
		return;
	}

IL_019e:
	{
		String_t* L_49;
		L_49 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_8 = L_49;
		String_t* L_50;
		L_50 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_9 = L_50;
		String_t* L_51 = V_8;
		String_t* L_52 = V_9;
		String_t* L_53;
		L_53 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_51, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_52, NULL);
		V_10 = L_53;
		String_t* L_54 = V_10;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_54, NULL);
		return;
	}

IL_01ce:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_24 = 1;
		return;
	}

IL_01dd:
	{
		String_t* L_55;
		L_55 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_55, NULL);
		return;
	}

IL_01ec:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_24 = 4;
		return;
	}

IL_01fb:
	{
		int32_t L_56;
		L_56 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		int64_t L_57 = ((int64_t)L_56);
		RuntimeObject* L_58 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_57);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_58, NULL);
		return;
	}

IL_020f:
	{
		int64_t L_59;
		L_59 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		int64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_60);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_61, NULL);
		return;
	}

IL_0222:
	{
		int8_t L_62 = ___0_type;
		int8_t L_63 = L_62;
		RuntimeObject* L_64 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_63);
		String_t* L_65;
		L_65 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4)), L_64, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_66 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_66, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var)));
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___0_binaryType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		uint8_t* L_1 = ___0_binaryType;
		uint8_t L_2;
		L_2 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		uint8_t* L_3 = ___0_binaryType;
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_5 = __this->____jsonNet35BinaryCompatibility_27;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_6;
		L_6 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_6;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, L_7, NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_000c:
	{
		int32_t L_0 = V_2;
		V_3 = L_0;
		goto IL_001e;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_21;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint8_t L_4 = V_4;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_001e:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = __this->____reader_19;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		uint8_t L_8 = L_7;
		V_4 = L_8;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_0037:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		int32_t L_11 = V_1;
		int32_t L_12 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		if (L_14)
		{
			goto IL_0080;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->____byteBuffer_21;
		int32_t L_17 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->____charBuffer_22;
		NullCheck(L_15);
		int32_t L_19;
		L_19 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_15, L_16, 0, L_17, L_18, 0);
		V_6 = L_19;
		int32_t L_20 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->____charBuffer_22;
		int32_t L_22 = V_6;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, 0, L_22, NULL);
		return L_23;
	}

IL_0080:
	{
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_7 = L_25;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_26;
		L_26 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->____byteBuffer_21;
		int32_t L_28 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->____charBuffer_22;
		NullCheck(L_26);
		int32_t L_30;
		L_30 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_26, L_27, 0, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_29, 0);
		V_8 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t* L_32 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_32, ((int32_t)256), NULL);
		V_0 = L_32;
	}

IL_00b7:
	{
		StringBuilder_t* L_33 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = __this->____charBuffer_22;
		int32_t L_35 = V_8;
		NullCheck(L_33);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_33, L_34, 0, L_35, NULL);
		int32_t L_37 = V_7;
		int32_t L_38 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_38, 1)))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->____byteBuffer_21;
		int32_t L_42 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->____byteBuffer_21;
		int32_t L_44 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_41, ((int32_t)il2cpp_codegen_add(L_42, 1)), (RuntimeArray*)L_43, 0, L_44, NULL);
		goto IL_000c;
	}

IL_00f3:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)128))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_46 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_46, 1)), NULL);
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		return L_48;
	}

IL_010b:
	{
		V_2 = 0;
		goto IL_000c;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_1, NULL);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->____reader_19;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		return L_3;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_length;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_0015:
	{
		int32_t L_2 = ___0_length;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_4)))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___0_length;
		int32_t L_6 = V_1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		goto IL_002d;
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_7));
	}

IL_002d:
	{
		V_3 = G_B6_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = __this->____reader_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____byteBuffer_21;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		V_4 = L_12;
		int32_t L_13 = V_4;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_14 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var)));
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = ___0_length;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_008d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->____byteBuffer_21;
		int32_t L_23 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____charBuffer_22;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_21, L_22, 0, L_23, L_24, 0);
		V_5 = L_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->____charBuffer_22;
		int32_t L_27 = V_5;
		String_t* L_28;
		L_28 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_26, 0, L_27, NULL);
		return L_28;
	}

IL_008d:
	{
		int32_t L_29 = V_4;
		int32_t L_30;
		L_30 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), NULL);
		V_6 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___0_length;
		StringBuilder_t* L_33 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_33, L_32, NULL);
		V_0 = L_33;
	}

IL_00a3:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
		L_34 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____byteBuffer_21;
		int32_t L_36 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->____charBuffer_22;
		NullCheck(L_34);
		int32_t L_38;
		L_38 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_34, L_35, 0, ((int32_t)il2cpp_codegen_add(L_36, 1)), L_37, 0);
		V_7 = L_38;
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = __this->____charBuffer_22;
		int32_t L_41 = V_7;
		NullCheck(L_39);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_39, L_40, 0, L_41, NULL);
		int32_t L_43 = V_6;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_44, 1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_45 = V_4;
		int32_t L_46 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____byteBuffer_21;
		int32_t L_48 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->____byteBuffer_21;
		int32_t L_50 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, ((int32_t)il2cpp_codegen_add(L_48, 1)), (RuntimeArray*)L_49, 0, L_50, NULL);
		goto IL_00fc;
	}

IL_00fa:
	{
		V_2 = 0;
	}

IL_00fc:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___0_length;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		return L_54;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_21;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0028;
	}

IL_001e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_002c:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___0_start;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_13))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_14 = ___0_start;
		return L_14;
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_15;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_0) > ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		return 1;
	}

IL_000c:
	{
		uint8_t L_4 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_16;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_4) < ((int32_t)L_7)))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_8 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_16;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_8) > ((int32_t)L_11)))
		{
			goto IL_0022;
		}
	}
	{
		return 2;
	}

IL_0022:
	{
		uint8_t L_12 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_17;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t L_16 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_17;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_16) > ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		return 3;
	}

IL_0038:
	{
		uint8_t L_20 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_18;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_004e;
		}
	}
	{
		uint8_t L_24 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_18;
		NullCheck(L_25);
		int32_t L_26 = 1;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_24) > ((int32_t)L_27)))
		{
			goto IL_004e;
		}
	}
	{
		return 4;
	}

IL_004e:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteBuffer_21;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____byteBuffer_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteBuffer_21), (void*)L_1);
	}

IL_0018:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____charBuffer_22;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_3, ((int32_t)128));
		V_0 = L_4;
		int32_t L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____charBuffer_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charBuffer_22), (void*)L_6);
	}

IL_003c:
	{
		return;
	}
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_19;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		return L_1;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		return L_1;
	}
}
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_19;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		return L_1;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_19;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(11 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_0);
		return (int8_t)(L_1);
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_0 = __this->____currentContext_25;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_2;
		int32_t L_3 = ___0_count;
		NullCheck(L_1);
		L_1->___Position_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_19;
		int32_t L_2 = ___0_count;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__cctor_m0DD14E39C1F1B4DE1A4C13B0DEFAE390C729627F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)127));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_15), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)223));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_16), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)239));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_17), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)244));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_18 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_18), (void*)L_10);
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
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___0_type, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int8_t L_0 = ___0_type;
		__this->___Type_0 = L_0;
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
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
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
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___0_name, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_1;
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_1 = (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*)il2cpp_codegen_object_new(BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C(L_1, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_2 = L_1;
		String_t* L_3 = ___0_name;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)0, NULL);
		NullCheck(L_2);
		BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline(L_2, L_4, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_5 = L_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___1_token;
		NullCheck(L_5);
		BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline(L_0, L_5, List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___1_token;
		NullCheck(L_7);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_7, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonObject_get_Type_m970C3BD8AC7D9844A62BE0C687DCF270E784D8ED (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(3);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_1;
		NullCheck(L_0);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_1;
		L_1 = List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011(L_0, List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_System_Collections_IEnumerable_GetEnumerator_m6C7320F7B08967EF6FF0D1EB4681408550A44D7C (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*)il2cpp_codegen_object_new(List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E(L_0, List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		__this->____children_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_1), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_1;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___0_token;
		NullCheck(L_0);
		List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline(L_0, L_1, List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___0_token;
		NullCheck(L_2);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_2, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonArray::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonArray_get_Type_mCC68071DB9C64C070101B2633053632727FB9382 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(4);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_1;
		NullCheck(L_0);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_1;
		L_1 = List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE(L_0, List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_System_Collections_IEnumerable_GetEnumerator_m36E9AA3609FC3571D00A9C885C12A578D15432D7 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*)il2cpp_codegen_object_new(List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1(L_0, List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		__this->____children_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_1), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		RuntimeObject* L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		int8_t L_1 = ___1_type;
		__this->____type_2 = L_1;
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonValue_get_Type_m02508F5B41591FB05A329FB62FF25DBC56BC200A (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->____type_2;
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
// System.Void Newtonsoft.Json.Bson.BsonString::set_IncludeLength(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIncludeLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___0_value, bool ___1_includeLength, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_0, 2, NULL);
		bool L_1 = ___1_includeLength;
		BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline(__this, L_1, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CPatternU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		String_t* L_0 = ___0_pattern;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_1 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_1, L_0, (bool)0, NULL);
		BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline(__this, L_1, NULL);
		String_t* L_2 = ___1_options;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)0, NULL);
		BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline(__this, L_3, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonRegex::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonRegex_get_Type_mE72E10F4DBAAC4714F12F2DC916E927A1EE72C3A (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(((int32_t)11));
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
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
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
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		int8_t L_1 = ___1_type;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_2 = (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)il2cpp_codegen_object_new(BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(L_2, L_0, L_1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_14;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = __this->____parent_14;
		if (!((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)IsInstClass((RuntimeObject*)L_1, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = __this->____parent_14;
		String_t* L_3 = __this->____propertyName_15;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_4 = ___0_token;
		NullCheck(((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_2, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var)));
		BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79(((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_2, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var)), L_3, L_4, NULL);
		__this->____propertyName_15 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_15), (void*)(String_t*)NULL);
		return;
	}

IL_0034:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_5 = __this->____parent_14;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___0_token;
		NullCheck(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_5, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)));
		BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_5, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)), L_6, NULL);
		return;
	}

IL_0046:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___0_token;
		NullCheck(L_7);
		int8_t L_8;
		L_8 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_7);
		if ((((int32_t)L_8) == ((int32_t)3)))
		{
			goto IL_007a;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_9 = ___0_token;
		NullCheck(L_9);
		int8_t L_10;
		L_10 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_9);
		if ((((int32_t)L_10) == ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_12 = ___0_token;
		NullCheck(L_12);
		int8_t L_13;
		L_13 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_12);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973)), L_11, L_15, NULL);
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_17;
		L_17 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, L_16, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var)));
	}

IL_007a:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_18 = ___0_token;
		__this->____parent_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_14), (void*)L_18);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_19 = ___0_token;
		__this->____root_13 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_13), (void*)L_19);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_001f;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_2;
		L_2 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161567E318CEB965509FE84CE4198A12E62440AF)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var)));
	}

IL_001f:
	{
		JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804(__this, NULL);
		JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A(__this, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_value;
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, (RuntimeObject*)L_3, 7, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m5A72DD206C8BA845F9F2B6AAC9BF61AC6480B71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_pattern;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0, NULL);
		JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804(__this, NULL);
		JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A(__this, ((int32_t)12), NULL);
		String_t* L_1 = ___0_pattern;
		String_t* L_2 = ___1_options;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_3 = (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)il2cpp_codegen_object_new(BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99(L_3, L_1, L_2, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
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
// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonObjectId_get_Value_mEBD0BBDDA460C3B1ECFFBD7B64C709172C7F14CD (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8 (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var)));
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_value;
		BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline(__this, L_3, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIncludeLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CPatternU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
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
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
