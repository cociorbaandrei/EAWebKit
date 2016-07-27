/*
 * Copyright (C) 2010, 2012 Apple Inc. All rights reserved.
 * Copyright (C) 2010 INdT - Instituto Nokia de Tecnologia
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2011, 2012, 2014 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PlatformStrategiesEA_h
#define PlatformStrategiesEA_h

#include <CookiesStrategy.h>
#include <DatabaseStrategy.h>
#include <LoaderStrategy.h>
#include <PlatformStrategies.h>
#include <PluginStrategy.h>
#include <SharedWorkerStrategy.h>
#include <StorageStrategy.h>
#include <VisitedLinkStrategy.h>

namespace WebCore {
class PasteboardStrategy;
}

class PlatformStrategiesEA : public WebCore::PlatformStrategies, private WebCore::CookiesStrategy, private WebCore::DatabaseStrategy, private WebCore::LoaderStrategy, private WebCore::PluginStrategy, private WebCore::SharedWorkerStrategy, private WebCore::StorageStrategy, private WebCore::VisitedLinkStrategy {
public:
    static void initialize();

private:
    PlatformStrategiesEA();

    // WebCore::PlatformStrategies
    virtual WebCore::CookiesStrategy* createCookiesStrategy() OVERRIDE;
    virtual WebCore::DatabaseStrategy* createDatabaseStrategy() OVERRIDE;
    virtual WebCore::LoaderStrategy* createLoaderStrategy() OVERRIDE;
    virtual WebCore::PasteboardStrategy* createPasteboardStrategy() OVERRIDE;
    virtual WebCore::PluginStrategy* createPluginStrategy() OVERRIDE;
    virtual WebCore::SharedWorkerStrategy* createSharedWorkerStrategy() OVERRIDE;
    virtual WebCore::StorageStrategy* createStorageStrategy() OVERRIDE;
    virtual WebCore::VisitedLinkStrategy* createVisitedLinkStrategy() OVERRIDE;
    
    // WebCore::CookiesStrategy
    virtual String cookiesForDOM(const WebCore::NetworkStorageSession&, const WebCore::URL& firstParty, const WebCore::URL&) OVERRIDE;
    virtual void setCookiesFromDOM(const WebCore::NetworkStorageSession&, const WebCore::URL& firstParty, const WebCore::URL&, const String&) OVERRIDE;
    virtual bool cookiesEnabled(const WebCore::NetworkStorageSession&, const WebCore::URL& firstParty, const WebCore::URL&) OVERRIDE;
    virtual String cookieRequestHeaderFieldValue(const WebCore::NetworkStorageSession&, const WebCore::URL& firstParty, const WebCore::URL&) OVERRIDE;
    virtual bool getRawCookies(const WebCore::NetworkStorageSession&, const WebCore::URL& firstParty, const WebCore::URL&, Vector<WebCore::Cookie>&) OVERRIDE;
    virtual void deleteCookie(const WebCore::NetworkStorageSession&, const WebCore::URL&, const String&) OVERRIDE;

    // WebCore::DatabaseStrategy
    // - Using default implementation.

    // WebCore::PluginStrategy
    virtual void refreshPlugins() OVERRIDE;
    virtual void getPluginInfo(const WebCore::Page*, Vector<WebCore::PluginInfo>&) OVERRIDE;

    // WebCore::VisitedLinkStrategy
    virtual bool isLinkVisited(WebCore::Page*, WebCore::LinkHash, const WebCore::URL& baseURL, const WTF::AtomicString& attributeURL) OVERRIDE;
    virtual void addVisitedLink(WebCore::Page*, WebCore::LinkHash) OVERRIDE;
};

#endif // PlatformStrategiesEA_h