#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_43_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_43_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_34.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_39.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_40.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_42.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public ydk::Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public ydk::Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public ydk::Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public ydk::Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public ydk::Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public ydk::Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public ydk::Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public ydk::Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public ydk::Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public ydk::Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public ydk::Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public ydk::Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public ydk::Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint32RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray> > uint32_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray : public ydk::Entity
{
    public:
        Uint32RngArray();
        ~Uint32RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public ydk::Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NasPortArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public ydk::Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_id; //type: MatchNasPortSubIdEn
        ydk::YLeaf operator_; //type: MatchLogicalOperatorEn
        ydk::YLeaf value_; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public ydk::Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public ydk::Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public ydk::Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public ydk::Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex : public ydk::Entity
{
    public:
        RemoteIdRegex();
        ~RemoteIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public ydk::Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public ydk::Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public ydk::Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public ydk::Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public ydk::Entity
{
    public:
        SrcAddrIpv6();
        ~SrcAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public ydk::Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public ydk::Entity
{
    public:
        SrcAddrMac();
        ~SrcAddrMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacAddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray> > mac_addr_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public ydk::Entity
{
    public:
        MacAddrArray();
        ~MacAddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public ydk::Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort : public ydk::Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public ydk::Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public ydk::Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf match_any; //type: boolean

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public ydk::Entity
{
    public:
        TimerRegexp();
        ~TimerRegexp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName : public ydk::Entity
{
    public:
        TunnelName();
        ~TunnelName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex : public ydk::Entity
{
    public:
        TunnelNameRegex();
        ~TunnelNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain : public ydk::Entity
{
    public:
        UnauthDomain();
        ~UnauthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex : public ydk::Entity
{
    public:
        UnauthDomainRegex();
        ~UnauthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername : public ydk::Entity
{
    public:
        UnauthUsername();
        ~UnauthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex : public ydk::Entity
{
    public:
        UnauthUsernameRegex();
        ~UnauthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName : public ydk::Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex : public ydk::Entity
{
    public:
        UserNameRegex();
        ~UserNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public ydk::Entity
{
    public:
        VendorId();
        ~VendorId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public ydk::Entity
{
    public:
        VendorIdRegex();
        ~VendorIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanIdArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray> > vlan_id_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public ydk::Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf mask; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public ydk::Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns : public ydk::Entity
{
    public:
        ExceedActns();
        ~ExceedActns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoliceActionArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray> > police_action_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray : public ydk::Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PoliceActionTypeEn
        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark> mark;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MarkTypeEn
        ydk::YLeaf mark_flags; //type: uint32
        ydk::YLeaf value_; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst : public ydk::Entity
{
    public:
        PeakBurst();
        ~PeakBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate : public ydk::Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns : public ydk::Entity
{
    public:
        ViolateActns();
        ~ViolateActns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoliceActionArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray> > police_action_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray : public ydk::Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PoliceActionTypeEn
        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark> mark;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MarkTypeEn
        ydk::YLeaf mark_flags; //type: uint32
        ydk::YLeaf value_; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg : public ydk::Entity
{
    public:
        PrepaidCfg();
        ~PrepaidCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prepaid_config_profile_name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio : public ydk::Entity
{
    public:
        Prio();
        ~Prio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prio_lvl; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa : public ydk::Entity
{
    public:
        ProxyAaa();
        ~ProxyAaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_list_name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sn_type; //type: DpssSnidTypeEn
        ydk::YLeaf sn_index; //type: uint32
        ydk::YLeaf sn_name; //type: string
        ydk::YLeaf app_id; //type: uint32
        ydk::YLeaf local_id; //type: uint32
        ydk::YLeaf vsnode_type; //type: VsvcServiceTypeT

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit : public ydk::Entity
{
    public:
        Qlimit();
        ~Qlimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActionQlimitInfoArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray> > action_qlimit_info_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray : public ydk::Entity
{
    public:
        ActionQlimitInfoArray();
        ~ActionQlimitInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: QlimitTypeEn
        ydk::YLeaf qlimit_flags; //type: uint32
        class Qlim; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim
        class AtmclpQlim; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim
        class MatchValues; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim> atmclp_qlim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues> match_values;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim> qlim;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim : public ydk::Entity
{
    public:
        AtmclpQlim();
        ~AtmclpQlim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues : public ydk::Entity
{
    public:
        MatchValues();
        ~MatchValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim : public ydk::Entity
{
    public:
        Qlim();
        ~Qlim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp : public ydk::Entity
{
    public:
        QueryAncp();
        ~QueryAncp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf type; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_metric_type; //type: PolicyActionEn
        ydk::YLeaf min_sequential; //type: uint32
        ydk::YLeaf max_dropout; //type: uint32
        ydk::YLeaf max_misorder; //type: uint32
        ydk::YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pt; //type: uint32
        ydk::YLeaf frequency; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K : public ydk::Entity
{
    public:
        RtpJ2K();
        ~RtpJ2K();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_metric_type; //type: PolicyActionEn
        ydk::YLeaf min_sequential; //type: uint32
        ydk::YLeaf max_dropout; //type: uint32
        ydk::YLeaf max_misorder; //type: uint32
        ydk::YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pt; //type: uint32
        ydk::YLeaf frequency; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr : public ydk::Entity
{
    public:
        RtpMmr();
        ~RtpMmr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_metric_type; //type: PolicyActionEn
        ydk::YLeaf min_sequential; //type: uint32
        ydk::YLeaf max_dropout; //type: uint32
        ydk::YLeaf max_misorder; //type: uint32
        ydk::YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pt; //type: uint32
        ydk::YLeaf frequency; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice : public ydk::Entity
{
    public:
        RtpVoice();
        ~RtpVoice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_metric_type; //type: PolicyActionEn
        ydk::YLeaf min_sequential; //type: uint32
        ydk::YLeaf max_dropout; //type: uint32
        ydk::YLeaf max_misorder; //type: uint32
        ydk::YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pt; //type: uint32
        ydk::YLeaf frequency; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc : public ydk::Entity
{
    public:
        ServFunc();
        ~ServFunc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf service_index; //type: uint8
        ydk::YLeaf meta_name; //type: string
        ydk::YLeaf vs_index; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer : public ydk::Entity
{
    public:
        SetTimer();
        ~SetTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_name; //type: string
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf absolute_time; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag : public ydk::Entity
{
    public:
        Sfrag();
        ~Sfrag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bw; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw
        class Be; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be> be;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw> bw;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be : public ydk::Entity
{
    public:
        Be();
        ~Be();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw : public ydk::Entity
{
    public:
        Bw();
        ~Bw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer : public ydk::Entity
{
    public:
        StopTimer();
        ~StopTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle : public ydk::Entity
{
    public:
        TimeoutIdle();
        ~TimeoutIdle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secs; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActionWredInfo; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo> > action_wred_info;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo : public ydk::Entity
{
    public:
        ActionWredInfo();
        ~ActionWredInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: WredTypeEn
        ydk::YLeaf wred_flags; //type: uint32
        ydk::YLeaf probability; //type: uint32
        class MatchRanges; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges
        class MinThreshold; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold
        class MaxThreshold; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges> match_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold> min_threshold;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges : public ydk::Entity
{
    public:
        MatchRanges();
        ~MatchRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold : public ydk::Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold : public ydk::Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnitType

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode : public ydk::Entity
{
    public:
        ClEncode();
        ~ClEncode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enc; //type: PolicyObjEncEn
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf hd; //type: uint64
        ydk::YLeaf idx; //type: uint8
        class InlineCmap; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap> inline_cmap;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap : public ydk::Entity
{
    public:
        InlineCmap();
        ~InlineCmap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: ClassMapModeEn
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf match_count; //type: uint32
        class MatchInfop; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop> match_infop;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop : public ydk::Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassMatchInfoSt; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt> > class_match_info_st;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt : public ydk::Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint32
        class MatchData; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData> match_data;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData : public ydk::Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MatchTypeEn
        ydk::YLeaf mpls_top_eos; //type: uint8
        ydk::YLeaf fragment_type; //type: uint8
        ydk::YLeaf authen_status; //type: MatchAuthenStatusEn
        ydk::YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEn
        class Ipv4Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public ydk::Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain : public ydk::Entity
{
    public:
        AuthDomain();
        ~AuthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex : public ydk::Entity
{
    public:
        AuthDomainRegex();
        ~AuthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername : public ydk::Entity
{
    public:
        AuthUsername();
        ~AuthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex : public ydk::Entity
{
    public:
        AuthUsernameRegex();
        ~AuthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public ydk::Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex : public ydk::Entity
{
    public:
        CircuitIdRegex();
        ~CircuitIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public ydk::Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public ydk::Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public ydk::Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public ydk::Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId : public ydk::Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex : public ydk::Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public ydk::Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public ydk::Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public ydk::Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray> > domain_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public ydk::Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf format_name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public ydk::Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray> > domain_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public ydk::Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf format_name; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public ydk::Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public ydk::Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public ydk::Entity
{
    public:
        DstAddrIpv6();
        ~DstAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public ydk::Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: uint32

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public ydk::Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public ydk::Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public ydk::Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public ydk::Entity
{
    public:
        Ethertype();
        ~Ethertype();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public ydk::Entity
{
    public:
        FlowKeyData();
        ~FlowKeyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_count; //type: uint16
        ydk::YLeaf idle_timeout; //type: uint16
        class FlowKeys; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys : public ydk::Entity
{
    public:
        FlowKeys();
        ~FlowKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keys; //type: string
        ydk::YLeaf num; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public ydk::Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray> > uint8_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public ydk::Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public ydk::Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray> > uint16_rng_array;
        
}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientOutput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_43_ */

