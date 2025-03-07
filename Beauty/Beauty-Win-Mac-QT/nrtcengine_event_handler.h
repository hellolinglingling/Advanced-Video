#ifndef NRTCENGINE_EVENT_HANDLER_H
#define NRTCENGINE_EVENT_HANDLER_H

#include "nertc_engine_event_handler_ex.h"

using namespace nertc;

class NRTCEngine;

class NRTCEngine_event_handler : public IRtcEngineEventHandlerEx
{
public:
    NRTCEngine_event_handler(NRTCEngine * engine);
    virtual void onUserVideoStop(uid_t uid) override;

    virtual void onJoinChannel(channel_id_t cid, uid_t uid, NERtcErrorCode result, uint64_t elapsed) override;

    virtual void onUserJoined(uid_t uid, const char * user_name) override;

    virtual void onUserLeft(uid_t uid, NERtcSessionLeaveReason reason) override;

    virtual void onCaptureVideoFrame(void *data,
                                     NERtcVideoType type,
                                     uint32_t width,
                                     uint32_t height,
                                     uint32_t count,
                                     uint32_t offset[kNERtcMaxPlaneCount],
                                     uint32_t stride[kNERtcMaxPlaneCount],
                                     NERtcVideoRotation rotation) override;

private:
    NRTCEngine * m_engine;
};

#endif // NRTCENGINE_EVENT_HANDLER_H
