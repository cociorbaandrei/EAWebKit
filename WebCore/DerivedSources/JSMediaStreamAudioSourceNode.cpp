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

#if ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)

#include "JSMediaStreamAudioSourceNode.h"

#include "JSMediaStream.h"
#include "MediaStream.h"
#include "MediaStreamAudioSourceNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaStreamAudioSourceNodeTableValues[] =
{
    { "mediaStream", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamAudioSourceNodeMediaStream), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamAudioSourceNodeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamAudioSourceNodeTable = { 4, 3, JSMediaStreamAudioSourceNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMediaStreamAudioSourceNodeConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamAudioSourceNodeConstructorTable = { 1, 0, JSMediaStreamAudioSourceNodeConstructorTableValues, 0 };
const ClassInfo JSMediaStreamAudioSourceNodeConstructor::s_info = { "MediaStreamAudioSourceNodeConstructor", &Base::s_info, &JSMediaStreamAudioSourceNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSMediaStreamAudioSourceNodeConstructor) };

JSMediaStreamAudioSourceNodeConstructor::JSMediaStreamAudioSourceNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamAudioSourceNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaStreamAudioSourceNodePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSMediaStreamAudioSourceNodeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaStreamAudioSourceNodeConstructor, JSDOMWrapper>(exec, JSMediaStreamAudioSourceNodeConstructorTable, jsCast<JSMediaStreamAudioSourceNodeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSMediaStreamAudioSourceNodePrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamAudioSourceNodePrototypeTable = { 1, 0, JSMediaStreamAudioSourceNodePrototypeTableValues, 0 };
const ClassInfo JSMediaStreamAudioSourceNodePrototype::s_info = { "MediaStreamAudioSourceNodePrototype", &Base::s_info, &JSMediaStreamAudioSourceNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaStreamAudioSourceNodePrototype) };

JSObject* JSMediaStreamAudioSourceNodePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamAudioSourceNode>(vm, globalObject);
}

const ClassInfo JSMediaStreamAudioSourceNode::s_info = { "MediaStreamAudioSourceNode", &Base::s_info, &JSMediaStreamAudioSourceNodeTable, 0 , CREATE_METHOD_TABLE(JSMediaStreamAudioSourceNode) };

JSMediaStreamAudioSourceNode::JSMediaStreamAudioSourceNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamAudioSourceNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSMediaStreamAudioSourceNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaStreamAudioSourceNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaStreamAudioSourceNodePrototype::create(vm, globalObject, JSMediaStreamAudioSourceNodePrototype::createStructure(vm, globalObject, JSAudioNodePrototype::self(vm, globalObject)));
}

bool JSMediaStreamAudioSourceNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaStreamAudioSourceNode* thisObject = jsCast<JSMediaStreamAudioSourceNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaStreamAudioSourceNode, Base>(exec, JSMediaStreamAudioSourceNodeTable, thisObject, propertyName, slot);
}

JSValue jsMediaStreamAudioSourceNodeMediaStream(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStreamAudioSourceNode* castedThis = jsCast<JSMediaStreamAudioSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStreamAudioSourceNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.mediaStream()));
    return result;
}


JSValue jsMediaStreamAudioSourceNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStreamAudioSourceNode* domObject = jsCast<JSMediaStreamAudioSourceNode*>(asObject(slotBase));
    return JSMediaStreamAudioSourceNode::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSMediaStreamAudioSourceNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamAudioSourceNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaStreamAudioSourceNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore26MediaStreamAudioSourceNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaStreamAudioSourceNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaStreamAudioSourceNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaStreamAudioSourceNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore26MediaStreamAudioSourceNodeE[2];
#if COMPILER(CLANG)
    // If this fails MediaStreamAudioSourceNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaStreamAudioSourceNode), MediaStreamAudioSourceNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaStreamAudioSourceNode has subclasses. If MediaStreamAudioSourceNode has subclasses that get passed
    // to toJS() we currently require MediaStreamAudioSourceNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<MediaStreamAudioSourceNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaStreamAudioSourceNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)
