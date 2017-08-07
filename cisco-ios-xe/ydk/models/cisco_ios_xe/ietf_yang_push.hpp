#ifndef _IETF_YANG_PUSH_
#define _IETF_YANG_PUSH_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_event_notifications.hpp"

namespace cisco_ios_xe {
namespace ietf_yang_push {

class Http2 : public ietf::ietf_event_notifications::Transport, virtual ydk::Identity
{
    public:
        Http2();
        ~Http2();


}; // Http2

class ErrorDataNotAuthorized : public ietf::ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorDataNotAuthorized();
        ~ErrorDataNotAuthorized();


}; // ErrorDataNotAuthorized

class CustomStream : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        CustomStream();
        ~CustomStream();


}; // CustomStream

class YangPush : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        YangPush();
        ~YangPush();


}; // YangPush

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
