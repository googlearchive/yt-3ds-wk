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

#ifndef JSNotification_h
#define JSNotification_h

#if ENABLE(NOTIFICATIONS)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class Notification;

class JSNotification : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSNotification(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<Notification>);
    virtual ~JSNotification();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    virtual void markChildren(JSC::MarkStack&);

    Notification* impl() const { return m_impl.get(); }

private:
    RefPtr<Notification> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Notification*);
Notification* toNotification(JSC::JSValue);

class JSNotificationPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSNotificationPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNotificationPrototypeFunctionShow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationPrototypeFunctionCancel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsNotificationOndisplay(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSNotificationOndisplay(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsNotificationOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSNotificationOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsNotificationOnclose(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSNotificationOnclose(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsNotificationDir(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSNotificationDir(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsNotificationReplaceId(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSNotificationReplaceId(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);

} // namespace WebCore

#endif // ENABLE(NOTIFICATIONS)

#endif