#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_3_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_connects; //type: uint32
        ydk::YLeaf received_connects; //type: uint32
        ydk::YLeaf iccp_invalid_connects; //type: uint32
        ydk::YLeaf iccp_config_connect_errors; //type: uint32
        ydk::YLeaf iccp_count_connect_errors; //type: uint32
        ydk::YLeaf sent_wrong_versions; //type: uint32
        ydk::YLeaf received_wrong_versions; //type: uint32
        ydk::YLeaf sent_disconnects; //type: uint32
        ydk::YLeaf received_disconnects; //type: uint32
        ydk::YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents : public ydk::Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_up; //type: uint32
        ydk::YLeaf transport_down; //type: uint32
        ydk::YLeaf transport_unavailable; //type: uint32
        ydk::YLeaf configured_set; //type: uint32
        ydk::YLeaf configured_clear; //type: uint32
        ydk::YLeaf reachability_set; //type: uint32
        ydk::YLeaf reachability_cleared; //type: uint32
        ydk::YLeaf member_status_up; //type: uint32
        ydk::YLeaf member_status_down; //type: uint32
        ydk::YLeaf pe_isolated; //type: uint32
        ydk::YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages : public ydk::Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_buffer_messages; //type: uint32
        ydk::YLeaf received_messages; //type: uint32
        ydk::YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs : public ydk::Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incorrect_length; //type: uint32
        ydk::YLeaf invalid_type; //type: uint32
        ydk::YLeaf invalid_data; //type: uint32
        ydk::YLeaf unknown_bundle; //type: uint32
        ydk::YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config; //type: uint32
        ydk::YLeaf received_config; //type: uint32
        ydk::YLeaf sent_state; //type: uint32
        ydk::YLeaf received_state; //type: uint32
        ydk::YLeaf sent_na_ks; //type: uint32
        ydk::YLeaf received_na_ks; //type: uint32
        ydk::YLeaf sent_sync_requests; //type: uint32
        ydk::YLeaf received_sync_requests; //type: uint32
        ydk::YLeaf sent_state_sync_requests; //type: uint32
        ydk::YLeaf received_state_sync_requests; //type: uint32
        ydk::YLeaf sent_config_sync_requests; //type: uint32
        ydk::YLeaf received_config_sync_requests; //type: uint32
        ydk::YLeaf sent_solicited_sync_data; //type: uint32
        ydk::YLeaf received_solicited_sync_data; //type: uint32
        ydk::YLeaf sent_unsolicited_sync_data; //type: uint32
        ydk::YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem : public ydk::Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters : public ydk::Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_connects; //type: uint32
        ydk::YLeaf received_connects; //type: uint32
        ydk::YLeaf iccp_invalid_connects; //type: uint32
        ydk::YLeaf iccp_config_connect_errors; //type: uint32
        ydk::YLeaf iccp_count_connect_errors; //type: uint32
        ydk::YLeaf sent_wrong_versions; //type: uint32
        ydk::YLeaf received_wrong_versions; //type: uint32
        ydk::YLeaf sent_disconnects; //type: uint32
        ydk::YLeaf received_disconnects; //type: uint32
        ydk::YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents : public ydk::Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_up; //type: uint32
        ydk::YLeaf transport_down; //type: uint32
        ydk::YLeaf transport_unavailable; //type: uint32
        ydk::YLeaf configured_set; //type: uint32
        ydk::YLeaf configured_clear; //type: uint32
        ydk::YLeaf reachability_set; //type: uint32
        ydk::YLeaf reachability_cleared; //type: uint32
        ydk::YLeaf member_status_up; //type: uint32
        ydk::YLeaf member_status_down; //type: uint32
        ydk::YLeaf pe_isolated; //type: uint32
        ydk::YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages : public ydk::Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_buffer_messages; //type: uint32
        ydk::YLeaf received_messages; //type: uint32
        ydk::YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs : public ydk::Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incorrect_length; //type: uint32
        ydk::YLeaf invalid_type; //type: uint32
        ydk::YLeaf invalid_data; //type: uint32
        ydk::YLeaf unknown_bundle; //type: uint32
        ydk::YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config; //type: uint32
        ydk::YLeaf received_config; //type: uint32
        ydk::YLeaf sent_state; //type: uint32
        ydk::YLeaf received_state; //type: uint32
        ydk::YLeaf sent_na_ks; //type: uint32
        ydk::YLeaf received_na_ks; //type: uint32
        ydk::YLeaf sent_sync_requests; //type: uint32
        ydk::YLeaf received_sync_requests; //type: uint32
        ydk::YLeaf sent_state_sync_requests; //type: uint32
        ydk::YLeaf received_state_sync_requests; //type: uint32
        ydk::YLeaf sent_config_sync_requests; //type: uint32
        ydk::YLeaf received_config_sync_requests; //type: uint32
        ydk::YLeaf sent_solicited_sync_data; //type: uint32
        ydk::YLeaf received_solicited_sync_data; //type: uint32
        ydk::YLeaf sent_unsolicited_sync_data; //type: uint32
        ydk::YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs


class BundleInformation::MlacpMemberCounters : public ydk::Entity
{
    public:
        MlacpMemberCounters();
        ~MlacpMemberCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IccpGroups; //type: BundleInformation::MlacpMemberCounters::IccpGroups
        class Members; //type: BundleInformation::MlacpMemberCounters::Members
        class Bundles; //type: BundleInformation::MlacpMemberCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpMemberCounters::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles> bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups> iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members> members;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes> nodes;
        
}; // BundleInformation::MlacpMemberCounters


class BundleInformation::MlacpMemberCounters::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bundle; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle> > bundle;
        
}; // BundleInformation::MlacpMemberCounters::Bundles


class BundleInformation::MlacpMemberCounters::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class BundleItem; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem> bundle_item;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem : public ydk::Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData> > member_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData> > member_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::IccpGroups : public ydk::Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IccpGroup; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iccp_group; //type: uint32
        class IccpGroupItem; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem : public ydk::Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Member; //type: BundleInformation::MlacpMemberCounters::Members::Member

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member> > member;
        
}; // BundleInformation::MlacpMemberCounters::Members


class BundleInformation::MlacpMemberCounters::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf member_interface; //type: string
        class MemberItem; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem> member_item;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem : public ydk::Entity
{
    public:
        MemberItem();
        ~MemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: BundleInformation::MlacpMemberCounters::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node> > node;
        
}; // BundleInformation::MlacpMemberCounters::Nodes


class BundleInformation::MlacpMemberCounters::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        class NodeItem; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem> node_item;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem : public ydk::Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_


class BundleInformation::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtectBundles; //type: BundleInformation::Protect::ProtectBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles> protect_bundles;
        
}; // BundleInformation::Protect


class BundleInformation::Protect::ProtectBundles : public ydk::Entity
{
    public:
        ProtectBundles();
        ~ProtectBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtectBundle; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle> > protect_bundle;
        
}; // BundleInformation::Protect::ProtectBundles


class BundleInformation::Protect::ProtectBundles::ProtectBundle : public ydk::Entity
{
    public:
        ProtectBundle();
        ~ProtectBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class ProtectBundleItem; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem> protect_bundle_item;
        
}; // BundleInformation::Protect::ProtectBundles::ProtectBundle


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem : public ydk::Entity
{
    public:
        ProtectBundleItem();
        ~ProtectBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_handle; //type: string
        ydk::YLeaf interface_up; //type: boolean
        ydk::YLeaf registered; //type: boolean
        ydk::YLeaf slow_path_up; //type: boolean
        ydk::YLeaf slow_path_trigger; //type: boolean
        ydk::YLeaf minimum_active_links; //type: uint32
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf event_type; //type: BmdBagTarget
        ydk::YLeaf time_stamp; //type: uint64
        class MemberInfo; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo> > member_info;
        
}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo : public ydk::Entity
{
    public:
        MemberInfo();
        ~MemberInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf node; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf notification_received; //type: boolean
        ydk::YLeaf slow_path_up; //type: boolean
        ydk::YLeaf time_stamp; //type: uint64

}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo


class BundleInformation::ScheduledActions : public ydk::Entity
{
    public:
        ScheduledActions();
        ~ScheduledActions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ScheduledActionsBundles; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles> scheduled_actions_bundles;
        
}; // BundleInformation::ScheduledActions


class BundleInformation::ScheduledActions::ScheduledActionsBundles : public ydk::Entity
{
    public:
        ScheduledActionsBundles();
        ~ScheduledActionsBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ScheduledActionsBundle; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle> > scheduled_actions_bundle;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle : public ydk::Entity
{
    public:
        ScheduledActionsBundle();
        ~ScheduledActionsBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class ScheduledActionsBundleItem; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem> scheduled_actions_bundle_item;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem : public ydk::Entity
{
    public:
        ScheduledActionsBundleItem();
        ~ScheduledActionsBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        class ScheduledAction; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction> > scheduled_action;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction : public ydk::Entity
{
    public:
        ScheduledAction();
        ~ScheduledAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_action; //type: BmdBagMlacpSchActionItem
        ydk::YLeaf time_remaining; //type: uint64
        ydk::YLeaf action_state; //type: BmdSwitchReason

}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction


class BundleInformation::SystemId : public ydk::Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SystemIdGlobal; //type: BundleInformation::SystemId::SystemIdGlobal
        class SystemIdIccpGroups; //type: BundleInformation::SystemId::SystemIdIccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal> system_id_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups> system_id_iccp_groups;
        
}; // BundleInformation::SystemId


class BundleInformation::SystemId::SystemIdGlobal : public ydk::Entity
{
    public:
        SystemIdGlobal();
        ~SystemIdGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SystemIdGlobalItem; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem> system_id_global_item;
        
}; // BundleInformation::SystemId::SystemIdGlobal


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem : public ydk::Entity
{
    public:
        SystemIdGlobalItem();
        ~SystemIdGlobalItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_ : public ydk::Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr


class BundleInformation::SystemId::SystemIdIccpGroups : public ydk::Entity
{
    public:
        SystemIdIccpGroups();
        ~SystemIdIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SystemIdIccpGroup; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup> > system_id_iccp_group;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup : public ydk::Entity
{
    public:
        SystemIdIccpGroup();
        ~SystemIdIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iccp_group; //type: uint32
        class SystemIdIccpGroupItem; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem> system_id_iccp_group_item;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem : public ydk::Entity
{
    public:
        SystemIdIccpGroupItem();
        ~SystemIdIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_ : public ydk::Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr

class Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Bundles_; //type: Bundles::Bundles_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_> bundles;
        
}; // Bundles


class Bundles::Bundles_ : public ydk::Entity
{
    public:
        Bundles_();
        ~Bundles_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bundle; //type: Bundles::Bundles_::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle> > bundle;
        
}; // Bundles::Bundles_


class Bundles::Bundles_::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class Data; //type: Bundles::Bundles_::Bundle::Data
        class Members; //type: Bundles::Bundles_::Bundle::Members

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members> members;
        
}; // Bundles::Bundles_::Bundle


class Bundles::Bundles_::Bundle::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: Bundles::Bundles_::Bundle::Data::MacAddress
        class BfdConfig; //type: Bundles::Bundles_::Bundle::Data::BfdConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig> > bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::MacAddress> mac_address;
        
}; // Bundles::Bundles_::Bundle::Data


class Bundles::Bundles_::Bundle::Data::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress> destination_address;
        
}; // Bundles::Bundles_::Bundle::Data::BfdConfig


class Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress


class Bundles::Bundles_::Bundle::Data::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Data::MacAddress


class Bundles::Bundles_::Bundle::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: Bundles::Bundles_::Bundle::Members::Member

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member> > member;
        
}; // Bundles::Bundles_::Bundle::Members


class Bundles::Bundles_::Bundle::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf lacp_enabled; //type: string
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: Bundles::Bundles_::Bundle::Members::Member::Counters
        class LinkData; //type: Bundles::Bundles_::Bundle::Members::Member::LinkData
        class MemberMuxData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData
        class MacAddress; //type: Bundles::Bundles_::Bundle::Members::Member::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::LinkData> link_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData> member_mux_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member


class Bundles::Bundles_::Bundle::Members::Member::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // Bundles::Bundles_::Bundle::Members::Member::Counters


class Bundles::Bundles_::Bundle::Members::Member::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // Bundles::Bundles_::Bundle::Members::Member::LinkData


class Bundles::Bundles_::Bundle::Members::Member::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Members::Member::MacAddress


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

class BundlesAdjacency : public ydk::Entity
{
    public:
        BundlesAdjacency();
        ~BundlesAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: BundlesAdjacency::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes> nodes;
        
}; // BundlesAdjacency


class BundlesAdjacency::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: BundlesAdjacency::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node> > node;
        
}; // BundlesAdjacency::Nodes


class BundlesAdjacency::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class Brief; //type: BundlesAdjacency::Nodes::Node::Brief
        class Bundles; //type: BundlesAdjacency::Nodes::Node::Bundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles> bundles;
        
}; // BundlesAdjacency::Nodes::Node


class BundlesAdjacency::Nodes::Node::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData> > bundle_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief


class BundlesAdjacency::Nodes::Node::Brief::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sub_interface_count; //type: uint32
        ydk::YLeaf member_count; //type: uint32
        ydk::YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bundle; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle> > bundle;
        
}; // BundlesAdjacency::Nodes::Node::Bundles


class BundlesAdjacency::Nodes::Node::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        class BundleInfo; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo> bundle_info;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo : public ydk::Entity
{
    public:
        BundleInfo();
        ~BundleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media; //type: BundleMedia1
        ydk::YLeaf max_member_count; //type: uint32
        ydk::YLeaf avoid_rebalance; //type: boolean
        class Brief; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData
        class Member; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData> load_balance_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member> > member;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sub_interface_count; //type: uint32
        ydk::YLeaf member_count; //type: uint32
        ydk::YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_id; //type: uint8
        ydk::YLeaf link_order_number; //type: uint8
        ydk::YLeaf bandwidth; //type: uint8

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData

class LacpBundleMembers : public ydk::Entity
{
    public:
        LacpBundleMembers();
        ~LacpBundleMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: LacpBundleMembers::Nodes
        class Members; //type: LacpBundleMembers::Members

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members> members;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes> nodes;
        
}; // LacpBundleMembers


class LacpBundleMembers::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Member; //type: LacpBundleMembers::Members::Member

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member> > member;
        
}; // LacpBundleMembers::Members


class LacpBundleMembers::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf member_interface; //type: string
        class Data; //type: LacpBundleMembers::Members::Member::Data
        class Counters; //type: LacpBundleMembers::Members::Member::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Data> data;
        
}; // LacpBundleMembers::Members::Member


class LacpBundleMembers::Members::Member::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf time_since_last_lacpdu_received; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf time_since_unexpected_event; //type: uint64
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // LacpBundleMembers::Members::Member::Counters


class LacpBundleMembers::Members::Member::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // LacpBundleMembers::Members::Member::Data


class LacpBundleMembers::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: LacpBundleMembers::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node> > node;
        
}; // LacpBundleMembers::Nodes


class LacpBundleMembers::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        class Counters; //type: LacpBundleMembers::Nodes::Node::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node::Counters> counters;
        
}; // LacpBundleMembers::Nodes::Node


class LacpBundleMembers::Nodes::Node::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wrong_port_count; //type: uint32
        ydk::YLeaf last_wrong_port; //type: uint32
        ydk::YLeaf unknown_port_count; //type: uint32
        ydk::YLeaf undecodable_packets; //type: uint32
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf time_since_unexpected_event; //type: uint64
        ydk::YLeaf time_since_last_updated; //type: uint64

}; // LacpBundleMembers::Nodes::Node::Counters

class LacpBundles : public ydk::Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Bundles; //type: LacpBundles::Bundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles> bundles;
        
}; // LacpBundles


class LacpBundles::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bundle; //type: LacpBundles::Bundles::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle> > bundle;
        
}; // LacpBundles::Bundles


class LacpBundles::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class Data; //type: LacpBundles::Bundles::Bundle::Data
        class Members; //type: LacpBundles::Bundles::Bundle::Members

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members> members;
        
}; // LacpBundles::Bundles::Bundle


class LacpBundles::Bundles::Bundle::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData
        class BundleSystemId; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData> actor_bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId> bundle_system_id;
        
}; // LacpBundles::Bundles::Bundle::Data


class LacpBundles::Bundles::Bundle::Data::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress
        class BfdConfig; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress> mac_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress


class LacpBundles::Bundles::Bundle::Data::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId


class LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr


class LacpBundles::Bundles::Bundle::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: LacpBundles::Bundles::Bundle::Members::Member

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member> > member;
        
}; // LacpBundles::Bundles::Bundle::Members


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_3_ */

