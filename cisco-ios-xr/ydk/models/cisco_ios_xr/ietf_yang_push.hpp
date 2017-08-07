#ifndef _IETF_YANG_PUSH_
#define _IETF_YANG_PUSH_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_event_notifications.hpp"

namespace cisco_ios_xr {
namespace ietf_yang_push {

class YangPush : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        YangPush();
        ~YangPush();


}; // YangPush

class CustomStream : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        CustomStream();
        ~CustomStream();


}; // CustomStream

class ErrorDataNotAuthorized : public ietf::ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorDataNotAuthorized();
        ~ErrorDataNotAuthorized();


}; // ErrorDataNotAuthorized

class Http2 : public ietf::ietf_event_notifications::Transport, virtual ydk::Identity
{
    public:
        Http2();
        ~Http2();


}; // Http2

class ChangeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;

};


}
}

#endif /* _IETF_YANG_PUSH_ */
