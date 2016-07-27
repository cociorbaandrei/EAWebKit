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

#ifndef JSMediaStreamAudioDestinationNode_h
#define JSMediaStreamAudioDestinationNode_h

#if ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)

#include "JSAudioNode.h"
#include "JSDOMBinding.h"
#include "MediaStreamAudioDestinationNode.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSMediaStreamAudioDestinationNode : public JSAudioNode {
public:
    typedef JSAudioNode Base;
    static JSMediaStreamAudioDestinationNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamAudioDestinationNode> impl)
    {
        JSMediaStreamAudioDestinationNode* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamAudioDestinationNode>(globalObject->vm().heap)) JSMediaStreamAudioDestinationNode(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    MediaStreamAudioDestinationNode& impl() const
    {
        return static_cast<MediaStreamAudioDestinationNode&>(Base::impl());
    }
protected:
    JSMediaStreamAudioDestinationNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MediaStreamAudioDestinationNode>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, MediaStreamAudioDestinationNode*);

class JSMediaStreamAudioDestinationNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSMediaStreamAudioDestinationNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamAudioDestinationNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamAudioDestinationNodePrototype>(vm.heap)) JSMediaStreamAudioDestinationNodePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamAudioDestinationNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSMediaStreamAudioDestinationNodeConstructor : public DOMConstructorObject {
private:
    JSMediaStreamAudioDestinationNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamAudioDestinationNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamAudioDestinationNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamAudioDestinationNodeConstructor>(vm.heap)) JSMediaStreamAudioDestinationNodeConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Attributes

JSC::JSValue jsMediaStreamAudioDestinationNodeStream(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamAudioDestinationNodeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)

#endif