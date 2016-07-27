/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(GEOLOCATION)

#include "JSGeolocation.h"

#include "ExceptionCode.h"
#include "Geolocation.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSGeolocationPrototypeTableValues[] =
{
    { "getCurrentPosition", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsGeolocationPrototypeFunctionGetCurrentPosition), (intptr_t)1 },
    { "watchPosition", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsGeolocationPrototypeFunctionWatchPosition), (intptr_t)1 },
    { "clearWatch", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsGeolocationPrototypeFunctionClearWatch), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSGeolocationPrototypeTable = { 9, 7, JSGeolocationPrototypeTableValues, 0 };
const ClassInfo JSGeolocationPrototype::s_info = { "GeolocationPrototype", &Base::s_info, &JSGeolocationPrototypeTable, 0, CREATE_METHOD_TABLE(JSGeolocationPrototype) };

JSObject* JSGeolocationPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSGeolocation>(vm, globalObject);
}

bool JSGeolocationPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSGeolocationPrototype* thisObject = jsCast<JSGeolocationPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSGeolocationPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSGeolocation::s_info = { "Geolocation", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSGeolocation) };

JSGeolocation::JSGeolocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Geolocation> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSGeolocation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSGeolocation::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSGeolocationPrototype::create(vm, globalObject, JSGeolocationPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSGeolocation::destroy(JSC::JSCell* cell)
{
    JSGeolocation* thisObject = static_cast<JSGeolocation*>(cell);
    thisObject->JSGeolocation::~JSGeolocation();
}

JSGeolocation::~JSGeolocation()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionGetCurrentPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSGeolocation::info()))
        return throwVMTypeError(exec);
    JSGeolocation* castedThis = jsCast<JSGeolocation*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSGeolocation::info());
    return JSValue::encode(castedThis->getCurrentPosition(exec));
}

EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionWatchPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSGeolocation::info()))
        return throwVMTypeError(exec);
    JSGeolocation* castedThis = jsCast<JSGeolocation*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSGeolocation::info());
    return JSValue::encode(castedThis->watchPosition(exec));
}

EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionClearWatch(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSGeolocation::info()))
        return throwVMTypeError(exec);
    JSGeolocation* castedThis = jsCast<JSGeolocation*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSGeolocation::info());
    Geolocation& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    int watchID(toInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.clearWatch(watchID);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSGeolocation* jsGeolocation)
{
    if (jsGeolocation->hasCustomProperties())
        return true;
    return false;
}

bool JSGeolocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSGeolocation* jsGeolocation = jsCast<JSGeolocation*>(handle.get().asCell());
    if (!isObservable(jsGeolocation))
        return false;
    Frame* root = jsGeolocation->impl().frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSGeolocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSGeolocation* jsGeolocation = jsCast<JSGeolocation*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsGeolocation->impl(), jsGeolocation);
    jsGeolocation->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Geolocation@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11GeolocationE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Geolocation* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSGeolocation>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Geolocation@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11GeolocationE[2];
#if COMPILER(CLANG)
    // If this fails Geolocation does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Geolocation), Geolocation_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Geolocation has subclasses. If Geolocation has subclasses that get passed
    // to toJS() we currently require Geolocation you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<Geolocation>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSGeolocation>(exec, globalObject, impl);
}

Geolocation* toGeolocation(JSC::JSValue value)
{
    return value.inherits(JSGeolocation::info()) ? &jsCast<JSGeolocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(GEOLOCATION)