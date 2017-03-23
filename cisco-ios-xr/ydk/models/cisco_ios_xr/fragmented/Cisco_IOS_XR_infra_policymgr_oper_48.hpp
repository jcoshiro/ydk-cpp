#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_48_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_48_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_45.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_46.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_47.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt : public Entity
{
    public:
        PolicyActionInfoSt();
        ~PolicyActionInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seq; //type: uint16
        YLeaf flags; //type: uint16

        class Actp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp> actp;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp : public Entity
{
    public:
        Actp();
        ~Actp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicyActionEnum
        YLeaf data_p; //type: uint32

        class Mark; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark
        class Mark2; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2
        class Wred; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred
        class Encap; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap
        class Prio; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio
        class Bwrem; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem
        class MinBw; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw
        class AuthenAaa; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa
        class CollectId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId
        class DecodeId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId
        class SetTimer; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer
        class StopTimer; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer
        class AcctAaaList; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList
        class QueryAncp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp
        class PrepaidCfg; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg
        class TimeoutIdle; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle
        class ProxyAaa; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa
        class ActTemplate; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate
        class DeactTemplate; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate
        class Qlimit; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit
        class AccountingEventAaa; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa
        class AuthorizeId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId
        class AfmReact; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact
        class Httpr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr
        class Punt; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt
        class Copy; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy
        class Sfrag; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag
        class Redirect; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect
        class OutIntf; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf
        class ServFunc; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc
        class Police; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police
        class Shape; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape
        class ChildPolicy; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy
        class Cac; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac
        class Pfc; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc
        class FlowParm; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm
        class Ipcbr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr
        class Rtp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp
        class RtpMmr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr
        class RtpJ2K; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K
        class RtpVoice; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice
        class Mdi; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi
        class MdiRtp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp
        class Fmm; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm
        class Pbf; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf
        class Ipv4Nh; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh
        class Ipv6Nh; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa> accounting_event_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList> acct_aaa_list;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate> act_template;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact> afm_react;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa> authen_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId> authorize_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem> bwrem;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac> cac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId> collect_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy> copy;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate> deact_template;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId> decode_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap> encap;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm> flow_parm;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm> fmm;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr> httpr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr> ipcbr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh> ipv4_nh;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh> ipv6_nh;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark> mark;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2> mark2;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi> mdi;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp> mdi_rtp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw> min_bw;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf> out_intf;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf> pbf;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc> pfc;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police> police;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg> prepaid_cfg;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio> prio;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa> proxy_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit> qlimit;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp> query_ancp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp> rtp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K> rtp_j2k;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr> rtp_mmr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice> rtp_voice;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc> serv_func;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer> set_timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag> sfrag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer> stop_timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle> timeout_idle;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred> wred;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionMarkInfo; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo> > action_mark_info;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo : public Entity
{
    public:
        ActionMarkInfo();
        ~ActionMarkInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2 : public Entity
{
    public:
        Mark2();
        ~Mark2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionMark2Info; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info> > action_mark2_info;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info : public Entity
{
    public:
        ActionMark2Info();
        ~ActionMark2Info();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf value_overflow; //type: uint16
        YLeaf type; //type: uint8
        YLeaf mark_flags; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred : public Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionWredInfo; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo> > action_wred_info;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo : public Entity
{
    public:
        ActionWredInfo();
        ~ActionWredInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: WredEnum
        YLeaf wred_flags; //type: uint32
        YLeaf probability; //type: uint32

        class MatchRanges; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges
        class MinThreshold; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold
        class MaxThreshold; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges> match_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold> max_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold> min_threshold;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges : public Entity
{
    public:
        MatchRanges();
        ~MatchRanges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold : public Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold : public Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap : public Entity
{
    public:
        Encap();
        ~Encap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seq; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio : public Entity
{
    public:
        Prio();
        ~Prio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prio_lvl; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem : public Entity
{
    public:
        Bwrem();
        ~Bwrem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bwrem_; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_> bwrem;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_ : public Entity
{
    public:
        Bwrem_();
        ~Bwrem_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw : public Entity
{
    public:
        MinBw();
        ~MinBw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bw; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw> bw;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw : public Entity
{
    public:
        Bw();
        ~Bw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa : public Entity
{
    public:
        AuthenAaa();
        ~AuthenAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string
        YLeaf authen_password; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId : public Entity
{
    public:
        CollectId();
        ~CollectId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: IdentifierEnum
        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId : public Entity
{
    public:
        DecodeId();
        ~DecodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: DecodeIdentifierEnum
        YLeaf format_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer : public Entity
{
    public:
        SetTimer();
        ~SetTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string
        YLeaf duration; //type: uint32
        YLeaf absolute_time; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer : public Entity
{
    public:
        StopTimer();
        ~StopTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList : public Entity
{
    public:
        AcctAaaList();
        ~AcctAaaList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string
        YLeaf secs; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp : public Entity
{
    public:
        QueryAncp();
        ~QueryAncp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg : public Entity
{
    public:
        PrepaidCfg();
        ~PrepaidCfg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prepaid_config_profile_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle : public Entity
{
    public:
        TimeoutIdle();
        ~TimeoutIdle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf secs; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa : public Entity
{
    public:
        ProxyAaa();
        ~ProxyAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate : public Entity
{
    public:
        ActTemplate();
        ~ActTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf template_name; //type: string
        YLeaf aaa_list_name; //type: string
        YLeaf flags; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate : public Entity
{
    public:
        DeactTemplate();
        ~DeactTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf template_name; //type: string
        YLeaf aaa_list_name; //type: string
        YLeaf flags; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit : public Entity
{
    public:
        Qlimit();
        ~Qlimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionQlimitInfoArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray> > action_qlimit_info_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray : public Entity
{
    public:
        ActionQlimitInfoArray();
        ~ActionQlimitInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: QlimitEnum
        YLeaf qlimit_flags; //type: uint32

        class Qlim; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim
        class AtmclpQlim; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim
        class MatchValues; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim> atmclp_qlim;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues> match_values;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim> qlim;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim : public Entity
{
    public:
        Qlim();
        ~Qlim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim : public Entity
{
    public:
        AtmclpQlim();
        ~AtmclpQlim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues : public Entity
{
    public:
        MatchValues();
        ~MatchValues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa : public Entity
{
    public:
        AccountingEventAaa();
        ~AccountingEventAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action; //type: AcctEnum
        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId : public Entity
{
    public:
        AuthorizeId();
        ~AuthorizeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint8
        YLeaf aaa_list_name; //type: string
        YLeaf format_name; //type: string
        YLeaf password; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact : public Entity
{
    public:
        AfmReact();
        ~AfmReact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionAfmonReactInfo; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo> > action_afmon_react_info;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo : public Entity
{
    public:
        ActionAfmonReactInfo();
        ~ActionAfmonReactInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_id; //type: uint32
        YLeaf description; //type: string
        YLeaf trig_num_intvls; //type: uint32
        YLeaf clone_ifh; //type: uint32
        YLeaf notif_actns; //type: uint8
        YLeaf criterion; //type: uint8
        YLeaf trig_type; //type: uint8
        YLeaf trig_relop; //type: uint8
        YLeaf trig_level_1; //type: string
        YLeaf trig_level_2; //type: string
        YLeaf alm_grp_thresh; //type: uint16
        YLeaf alm_type; //type: uint8
        YLeaf alm_severity; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr : public Entity
{
    public:
        Httpr();
        ~Httpr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf redirect_url; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sn_type; //type: DpssSnidEnum
        YLeaf sn_index; //type: uint32
        YLeaf sn_name; //type: string
        YLeaf app_id; //type: uint32
        YLeaf local_id; //type: uint32
        YLeaf vsnode_type; //type: VsvcServiceEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy : public Entity
{
    public:
        Copy();
        ~Copy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_byte; //type: uint32
        YLeaf sn_type; //type: DpssSnidEnum
        YLeaf sn_index; //type: uint32
        YLeaf sn_name; //type: string
        YLeaf app_id; //type: uint32
        YLeaf local_id; //type: uint32
        YLeaf vsnode_type; //type: VsvcServiceEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag : public Entity
{
    public:
        Sfrag();
        ~Sfrag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf type; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf : public Entity
{
    public:
        OutIntf();
        ~OutIntf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_ifname; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc : public Entity
{
    public:
        ServFunc();
        ~ServFunc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_id; //type: uint32
        YLeaf service_index; //type: uint8
        YLeaf meta_name; //type: string
        YLeaf vs_index; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flags; //type: uint32
        YLeaf police_flags; //type: uint32
        YLeaf sbuck_name; //type: string
        YLeaf sbuck_type; //type: SharedBucketEnum

        class Rate; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate
        class Burst; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst
        class PeakRate; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate
        class PeakBurst; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst
        class Cdvt; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt
        class ConformActns; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns
        class ExceedActns; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns
        class ViolateActns; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns
        class ConfclassEncode; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode
        class ConfclassP; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP
        class ExcdclassEncode; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode
        class ExcdclassP; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst> burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt> cdvt;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode> confclass_encode;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP> confclass_p;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns> conform_actns;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode> excdclass_encode;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP> excdclass_p;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns> exceed_actns;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst> peak_burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate> peak_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate> rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns> violate_actns;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst : public Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst : public Entity
{
    public:
        PeakBurst();
        ~PeakBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt : public Entity
{
    public:
        Cdvt();
        ~Cdvt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns : public Entity
{
    public:
        ConformActns();
        ~ConformActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns : public Entity
{
    public:
        ExceedActns();
        ~ExceedActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns : public Entity
{
    public:
        ViolateActns();
        ~ViolateActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode : public Entity
{
    public:
        ConfclassEncode();
        ~ConfclassEncode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enc; //type: PolicyObjEncEnum
        YLeaf class_name; //type: string
        YLeaf hd; //type: uint64
        YLeaf idx; //type: uint8

        class InlineCmap; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap> inline_cmap;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap : public Entity
{
    public:
        InlineCmap();
        ~InlineCmap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: ClassMapModeEnum
        YLeaf flags; //type: uint32
        YLeaf match_count; //type: uint32

        class MatchInfop; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop> match_infop;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop : public Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMatchInfoSt; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt> > class_match_info_st;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt : public Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flags; //type: uint32

        class MatchData; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData> match_data;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData : public Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MatchEnum
        YLeaf mpls_top_eos; //type: uint8
        YLeaf fragment_type; //type: uint8
        YLeaf authen_status; //type: MatchAuthenStatusEnum
        YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEnum

        class Ipv4Dscp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public Entity
{
    public:
        IcmpV4();
        ~IcmpV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf code; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public Entity
{
    public:
        IcmpV6();
        ~IcmpV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf code; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint16
        YLeaf match_any; //type: boolean



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public Entity
{
    public:
        Icmpv4Type();
        ~Icmpv4Type();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public Entity
{
    public:
        Icmpv4Code();
        ~Icmpv4Code();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public Entity
{
    public:
        Icmpv6Type();
        ~Icmpv6Type();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public Entity
{
    public:
        Icmpv6Code();
        ~Icmpv6Code();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint32_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array> > uint32_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array : public Entity
{
    public:
        Uint32_Rng_Array();
        ~Uint32_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint32
        YLeaf max; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_value; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_value; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VlanIdArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray> > vlan_id_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16
        YLeaf mask; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DomainArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray> > domain_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DomainArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray> > domain_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NasPortArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_id; //type: MatchNasPortSubIdEnum
        YLeaf operator_; //type: MatchLogicalOperatorEnum
        YLeaf value_; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddrArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddrArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public Entity
{
    public:
        SrcAddrIpv6();
        ~SrcAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6AddrArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public Entity
{
    public:
        DstAddrIpv6();
        ~DstAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6AddrArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public Entity
{
    public:
        SrcAddrMac();
        ~SrcAddrMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAddrArray; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray> > mac_addr_array;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public Entity
{
    public:
        MacAddrArray();
        ~MacAddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public Entity
{
    public:
        TimerRegexp();
        ~TimerRegexp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::ClassHandles::ClassHandle::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_48_ */
