// Automatically generated from /home/abaldeva/WebKit-r157437/Source/JavaScriptCore/runtime/DatePrototype.cpp using /home/abaldeva/WebKit-r157437/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct HashTableValue dateTableValues[47] = {
   { "toString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToString), (intptr_t)0 },
   { "toISOString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToISOString), (intptr_t)0 },
   { "toUTCString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToUTCString), (intptr_t)0 },
   { "toDateString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToDateString), (intptr_t)0 },
   { "toTimeString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToTimeString), (intptr_t)0 },
   { "toLocaleString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToLocaleString), (intptr_t)0 },
   { "toLocaleDateString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToLocaleDateString), (intptr_t)0 },
   { "toLocaleTimeString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToLocaleTimeString), (intptr_t)0 },
   { "valueOf", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetTime), (intptr_t)0 },
   { "getTime", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetTime), (intptr_t)0 },
   { "getFullYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetFullYear), (intptr_t)0 },
   { "getUTCFullYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCFullYear), (intptr_t)0 },
   { "toGMTString", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToGMTString), (intptr_t)0 },
   { "getMonth", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetMonth), (intptr_t)0 },
   { "getUTCMonth", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCMonth), (intptr_t)0 },
   { "getDate", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetDate), (intptr_t)0 },
   { "getUTCDate", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCDate), (intptr_t)0 },
   { "getDay", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetDay), (intptr_t)0 },
   { "getUTCDay", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCDay), (intptr_t)0 },
   { "getHours", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetHours), (intptr_t)0 },
   { "getUTCHours", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCHours), (intptr_t)0 },
   { "getMinutes", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetMinutes), (intptr_t)0 },
   { "getUTCMinutes", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCMinutes), (intptr_t)0 },
   { "getSeconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetSeconds), (intptr_t)0 },
   { "getUTCSeconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCSeconds), (intptr_t)0 },
   { "getMilliseconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetMilliSeconds), (intptr_t)0 },
   { "getUTCMilliseconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetUTCMilliseconds), (intptr_t)0 },
   { "getTimezoneOffset", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetTimezoneOffset), (intptr_t)0 },
   { "setTime", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetTime), (intptr_t)1 },
   { "setMilliseconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetMilliSeconds), (intptr_t)1 },
   { "setUTCMilliseconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCMilliseconds), (intptr_t)1 },
   { "setSeconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetSeconds), (intptr_t)2 },
   { "setUTCSeconds", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCSeconds), (intptr_t)2 },
   { "setMinutes", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetMinutes), (intptr_t)3 },
   { "setUTCMinutes", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCMinutes), (intptr_t)3 },
   { "setHours", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetHours), (intptr_t)4 },
   { "setUTCHours", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCHours), (intptr_t)4 },
   { "setDate", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetDate), (intptr_t)1 },
   { "setUTCDate", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCDate), (intptr_t)1 },
   { "setMonth", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetMonth), (intptr_t)2 },
   { "setUTCMonth", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCMonth), (intptr_t)2 },
   { "setFullYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetFullYear), (intptr_t)3 },
   { "setUTCFullYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetUTCFullYear), (intptr_t)3 },
   { "setYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncSetYear), (intptr_t)1 },
   { "getYear", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncGetYear), (intptr_t)0 },
   { "toJSON", DontEnum|Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(dateProtoFuncToJSON), (intptr_t)1 },
   { 0, 0, NoIntrinsic, 0, 0 }
};

extern const struct HashTable dateTable =
    { 134, 127, dateTableValues, 0 };
} // namespace
