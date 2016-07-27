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
#include "JSTransitionEvent.h"

#include "JSDictionary.h"
#include "TransitionEvent.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSTransitionEventTableValues[] =
{
    { "propertyName", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventPropertyName), (intptr_t)0 },
    { "elapsedTime", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventElapsedTime), (intptr_t)0 },
    { "pseudoElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventPseudoElement), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTransitionEventTable = { 9, 7, JSTransitionEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTransitionEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTransitionEventConstructorTable = { 1, 0, JSTransitionEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSTransitionEventConstructor::constructJSTransitionEvent(ExecState* exec)
{
    JSTransitionEventConstructor* jsConstructor = jsCast<JSTransitionEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    TransitionEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillTransitionEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<TransitionEvent> event = TransitionEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillTransitionEventInit(TransitionEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("propertyName", eventInit.propertyName))
        return false;
    if (!dictionary.tryGetProperty("elapsedTime", eventInit.elapsedTime))
        return false;
    if (!dictionary.tryGetProperty("pseudoElement", eventInit.pseudoElement))
        return false;
    return true;
}

const ClassInfo JSTransitionEventConstructor::s_info = { "TransitionEventConstructor", &Base::s_info, &JSTransitionEventConstructorTable, 0, CREATE_METHOD_TABLE(JSTransitionEventConstructor) };

JSTransitionEventConstructor::JSTransitionEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTransitionEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSTransitionEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSTransitionEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTransitionEventConstructor, JSDOMWrapper>(exec, JSTransitionEventConstructorTable, jsCast<JSTransitionEventConstructor*>(object), propertyName, slot);
}

ConstructType JSTransitionEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSTransitionEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSTransitionEventPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTransitionEventPrototypeTable = { 1, 0, JSTransitionEventPrototypeTableValues, 0 };
const ClassInfo JSTransitionEventPrototype::s_info = { "TransitionEventPrototype", &Base::s_info, &JSTransitionEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSTransitionEventPrototype) };

JSObject* JSTransitionEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTransitionEvent>(vm, globalObject);
}

const ClassInfo JSTransitionEvent::s_info = { "TransitionEvent", &Base::s_info, &JSTransitionEventTable, 0 , CREATE_METHOD_TABLE(JSTransitionEvent) };

JSTransitionEvent::JSTransitionEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TransitionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSTransitionEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSTransitionEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSTransitionEventPrototype::create(vm, globalObject, JSTransitionEventPrototype::createStructure(vm, globalObject, JSEventPrototype::self(vm, globalObject)));
}

bool JSTransitionEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTransitionEvent* thisObject = jsCast<JSTransitionEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSTransitionEvent, Base>(exec, JSTransitionEventTable, thisObject, propertyName, slot);
}

JSValue jsTransitionEventPropertyName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTransitionEvent* castedThis = jsCast<JSTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TransitionEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.propertyName());
    return result;
}


JSValue jsTransitionEventElapsedTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTransitionEvent* castedThis = jsCast<JSTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TransitionEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.elapsedTime());
    return result;
}


JSValue jsTransitionEventPseudoElement(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTransitionEvent* castedThis = jsCast<JSTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TransitionEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pseudoElement());
    return result;
}


JSValue jsTransitionEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTransitionEvent* domObject = jsCast<JSTransitionEvent*>(asObject(slotBase));
    return JSTransitionEvent::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSTransitionEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTransitionEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}