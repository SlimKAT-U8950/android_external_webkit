/*
 * Copyright 2009, The Android Open Source Project
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AndroidWebHistoryBridge_h
#define AndroidWebHistoryBridge_h

#include <wtf/RefCounted.h>

namespace WebCore {

class HistoryItem;

class AndroidWebHistoryBridge : public RefCounted<AndroidWebHistoryBridge> {
public:
<<<<<<< HEAD:WebCore/history/android/AndroidWebHistoryBridge.h
    AndroidWebHistoryBridge(HistoryItem* item)
=======
    AndroidWebHistoryBridge()
>>>>>>> webkit.org at r51976:WebCore/history/android/AndroidWebHistoryBridge.h
        : m_scale(100)
        , m_screenWidthScale(100)
        , m_active(false)
<<<<<<< HEAD:WebCore/history/android/AndroidWebHistoryBridge.h
        , m_historyItem(item) { }
=======
        , m_historyItem(0) { }
>>>>>>> webkit.org at r51976:WebCore/history/android/AndroidWebHistoryBridge.h
    virtual ~AndroidWebHistoryBridge() { }
    virtual void updateHistoryItem(HistoryItem* item) = 0;

    void setScale(int s) { m_scale = s; }
    void setScreenWidthScale(int s) { m_screenWidthScale = s; }
    int scale() const { return m_scale; }
    int screenWidthScale() const { return m_screenWidthScale; }
<<<<<<< HEAD:WebCore/history/android/AndroidWebHistoryBridge.h
    void detachHistoryItem() { m_historyItem = 0; }
=======
>>>>>>> webkit.org at r51976:WebCore/history/android/AndroidWebHistoryBridge.h
    HistoryItem* historyItem() const { return m_historyItem; }
    void setActive() { m_active = true; }

protected:
    int m_scale;
    int m_screenWidthScale;
    bool m_active;
    HistoryItem* m_historyItem;
};

} // namespace WebCore

#endif // AndroidWebHistoryBridge_h
