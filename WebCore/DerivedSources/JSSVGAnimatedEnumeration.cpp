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

#if ENABLE(SVG)

#include "JSSVGAnimatedEnumeration.h"

#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimatedEnumerationTableValues[] =
{
    { "baseVal", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedEnumerationBaseVal), (intptr_t)setJSSVGAnimatedEnumerationBaseVal },
    { "animVal", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedEnumerationAnimVal), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedEnumerationConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimatedEnumerationTable = { 8, 7, JSSVGAnimatedEnumerationTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimatedEnumerationConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimatedEnumerationConstructorTable = { 1, 0, JSSVGAnimatedEnumerationConstructorTableValues, 0 };
const ClassInfo JSSVGAnimatedEnumerationConstructor::s_info = { "SVGAnimatedEnumerationConstructor", &Base::s_info, &JSSVGAnimatedEnumerationConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimatedEnumerationConstructor) };

JSSVGAnimatedEnumerationConstructor::JSSVGAnimatedEnumerationConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedEnumerationConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimatedEnumerationPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimatedEnumerationConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedEnumerationConstructor, JSDOMWrapper>(exec, JSSVGAnimatedEnumerationConstructorTable, jsCast<JSSVGAnimatedEnumerationConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedEnumerationPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimatedEnumerationPrototypeTable = { 1, 0, JSSVGAnimatedEnumerationPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedEnumerationPrototype::s_info = { "SVGAnimatedEnumerationPrototype", &Base::s_info, &JSSVGAnimatedEnumerationPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimatedEnumerationPrototype) };

JSObject* JSSVGAnimatedEnumerationPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedEnumeration>(vm, globalObject);
}

const ClassInfo JSSVGAnimatedEnumeration::s_info = { "SVGAnimatedEnumeration", &Base::s_info, &JSSVGAnimatedEnumerationTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimatedEnumeration) };

JSSVGAnimatedEnumeration::JSSVGAnimatedEnumeration(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedEnumeration> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGAnimatedEnumeration::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGAnimatedEnumeration::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedEnumerationPrototype::create(vm, globalObject, JSSVGAnimatedEnumerationPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSVGAnimatedEnumeration::destroy(JSC::JSCell* cell)
{
    JSSVGAnimatedEnumeration* thisObject = static_cast<JSSVGAnimatedEnumeration*>(cell);
    thisObject->JSSVGAnimatedEnumeration::~JSSVGAnimatedEnumeration();
}

JSSVGAnimatedEnumeration::~JSSVGAnimatedEnumeration()
{
    releaseImplIfNotNull();
}

bool JSSVGAnimatedEnumeration::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimatedEnumeration* thisObject = jsCast<JSSVGAnimatedEnumeration*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGAnimatedEnumeration, Base>(exec, JSSVGAnimatedEnumerationTable, thisObject, propertyName, slot);
}

JSValue jsSVGAnimatedEnumerationBaseVal(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimatedEnumeration* castedThis = jsCast<JSSVGAnimatedEnumeration*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedEnumeration& impl = castedThis->impl();
    JSValue result = jsNumber(impl.baseVal());
    return result;
}


JSValue jsSVGAnimatedEnumerationAnimVal(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimatedEnumeration* castedThis = jsCast<JSSVGAnimatedEnumeration*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedEnumeration& impl = castedThis->impl();
    JSValue result = jsNumber(impl.animVal());
    return result;
}


JSValue jsSVGAnimatedEnumerationConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimatedEnumeration* domObject = jsCast<JSSVGAnimatedEnumeration*>(asObject(slotBase));
    return JSSVGAnimatedEnumeration::getConstructor(exec->vm(), domObject->globalObject());
}

void JSSVGAnimatedEnumeration::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGAnimatedEnumeration* thisObject = jsCast<JSSVGAnimatedEnumeration*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSSVGAnimatedEnumeration, Base>(exec, propertyName, value, JSSVGAnimatedEnumerationTable, thisObject, slot);
}

void setJSSVGAnimatedEnumerationBaseVal(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGAnimatedEnumeration* castedThis = jsCast<JSSVGAnimatedEnumeration*>(thisObject);
    SVGAnimatedEnumeration& impl = castedThis->impl();
    ExceptionCode ec = 0;
    unsigned short nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setBaseVal(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSSVGAnimatedEnumeration::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedEnumerationConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSSVGAnimatedEnumeration* jsSVGAnimatedEnumeration)
{
    if (jsSVGAnimatedEnumeration->hasCustomProperties())
        return true;
    return false;
}

bool JSSVGAnimatedEnumerationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSVGAnimatedEnumeration* jsSVGAnimatedEnumeration = jsCast<JSSVGAnimatedEnumeration*>(handle.get().asCell());
    if (!isObservable(jsSVGAnimatedEnumeration))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGAnimatedEnumerationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGAnimatedEnumeration* jsSVGAnimatedEnumeration = jsCast<JSSVGAnimatedEnumeration*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGAnimatedEnumeration->impl(), jsSVGAnimatedEnumeration);
    jsSVGAnimatedEnumeration->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedEnumeration* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGAnimatedEnumeration>(exec, impl))
        return result;
    ReportMemoryCost<SVGAnimatedEnumeration>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGAnimatedEnumeration>(exec, globalObject, impl);
}

SVGAnimatedEnumeration* toSVGAnimatedEnumeration(JSC::JSValue value)
{
    return value.inherits(JSSVGAnimatedEnumeration::info()) ? &jsCast<JSSVGAnimatedEnumeration*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
