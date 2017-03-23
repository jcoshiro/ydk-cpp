#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_85_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_85_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_49.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_84.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp : public Entity
{
    public:
        FirstUpdateErrorHandlingResetTimestamp();
        ~FirstUpdateErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp : public Entity
{
    public:
        LastErrorHandlingResetTimestamp();
        ~LastErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount : public Entity
{
    public:
        EstablishmentActionCount();
        ~EstablishmentActionCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage : public Entity
{
    public:
        UpdateErrorMessage();
        ~UpdateErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_error_final_action; //type: BgpBagUpdErrActionEnum
        YLeaf update_attribute_discard_count; //type: uint32
        YLeaf update_error_nlri_address_family; //type: BgpAfiEnum
        YLeaf update_error_nlri_string; //type: string
        YLeaf update_error_nlri_string_truncated; //type: boolean

        class UpdateMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp
        class UpdateMessageResetData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData
        class UpdateMessageData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData
        class UpdateErrorElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement> > update_error_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData> > update_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData> update_message_reset_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp> update_message_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp : public Entity
{
    public:
        UpdateMessageTimestamp();
        ~UpdateMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData : public Entity
{
    public:
        UpdateMessageResetData();
        ~UpdateMessageResetData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_error_reset_reason; //type: BgpResetReasonIndexEnum
        YLeaf update_error_reset_notification_code; //type: uint8
        YLeaf update_error_reset_notification_sub_code; //type: uint16
        YLeaf update_error_reset_notification_data; //type: string
        YLeaf update_error_reset_notification_data_length; //type: uint16



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData : public Entity
{
    public:
        UpdateMessageData();
        ~UpdateMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement : public Entity
{
    public:
        UpdateErrorElement();
        ~UpdateErrorElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_attribute_flags; //type: uint8
        YLeaf update_attribute_code; //type: uint8
        YLeaf update_attribute_length; //type: uint16
        YLeaf update_error_data; //type: string
        YLeaf update_error_data_length; //type: uint16
        YLeaf update_error_action; //type: BgpBagUpdErrActionEnum



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors : public Entity
{
    public:
        UpdateInboundFilterNeighbors();
        ~UpdateInboundFilterNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UpdateInboundFilterNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor> > update_inbound_filter_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor : public Entity
{
    public:
        UpdateInboundFilterNeighbor();
        ~UpdateInboundFilterNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf update_vrf_name; //type: string
        YLeaf update_filter_logging_enabled; //type: boolean
        YLeaf configured_update_filter_message_buffer_count; //type: uint32
        YLeaf operational_update_filter_message_buffer_count; //type: uint32
        YLeaf update_filter_message_buffer_circular; //type: boolean
        YLeaf update_attribute_filter_group_name; //type: string
        YLeaf operational_update_attribute_filtering_enabled; //type: boolean
        YLeaf message_update_attribute_filtering_enabled; //type: boolean
        YLeaf total_filter_update_message_count; //type: uint32
        YLeaf establishment_total_filter_update_message_count; //type: uint32
        YLeaf update_filtered_message_count; //type: uint32
        YLeaf establishment_update_filtered_message_count; //type: uint32
        YLeaf last_update_filtered_age; //type: uint32
        YLeaf update_filter_message_list_count; //type: uint32

        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress
        class FirstUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp
        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp
        class UpdateAttributeFilterAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes
        class UpdateFilterMessage; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp> first_update_filtered_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes> > update_attribute_filter_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage> > update_filter_message;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress> update_neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress : public Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp : public Entity
{
    public:
        FirstUpdateFilteredTimestamp();
        ~FirstUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp : public Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes : public Entity
{
    public:
        UpdateAttributeFilterAttributes();
        ~UpdateAttributeFilterAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_internal_attribute_code; //type: uint32
        YLeaf update_filter_action; //type: BgpBagUpdFilterActionEnum
        YLeaf update_filter_match_count; //type: uint32
        YLeaf establishment_update_filter_match_count; //type: uint32
        YLeaf last_update_filter_match_age; //type: uint32

        class LastUpdateFilterMatchTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp> last_update_filter_match_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp : public Entity
{
    public:
        LastUpdateFilterMatchTimestamp();
        ~LastUpdateFilterMatchTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage : public Entity
{
    public:
        UpdateFilterMessage();
        ~UpdateFilterMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_filtered_attribute_count; //type: uint32
        YLeaf update_filter_final_action; //type: BgpBagUpdFilterActionEnum
        YLeaf update_filter_nlri_address_family; //type: BgpAfiEnum
        YLeaf update_filter_nlri_string; //type: string
        YLeaf update_filter_nlri_string_truncated; //type: boolean

        class UpdateFilterMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp
        class UpdateFilterMessageData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData
        class UpdateFilterElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement> > update_filter_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData> > update_filter_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp> update_filter_message_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp : public Entity
{
    public:
        UpdateFilterMessageTimestamp();
        ~UpdateFilterMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData : public Entity
{
    public:
        UpdateFilterMessageData();
        ~UpdateFilterMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement : public Entity
{
    public:
        UpdateFilterElement();
        ~UpdateFilterElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_attribute_flags; //type: uint8
        YLeaf update_attribute_code; //type: uint8
        YLeaf update_filter_action; //type: BgpBagUpdFilterActionEnum



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp : public Entity
{
    public:
        Bmp();
        ~Bmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerSummaries; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries
        class ServerNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors> server_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries> server_summaries;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries : public Entity
{
    public:
        ServerSummaries();
        ~ServerSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerSummary; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary> > server_summary;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary : public Entity
{
    public:
        ServerSummary();
        ~ServerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32
        YLeaf bmp_server_id; //type: uint8
        YLeaf bmp_server_host_name; //type: string
        YLeaf bmp_server_port; //type: uint32
        YLeaf bmp_server_state; //type: BgpBmpStateEnum
        YLeaf bmp_server_is_flapping; //type: boolean
        YLeaf bmp_server_nbr_count; //type: uint32
        YLeaf bmp_init_msg_count; //type: uint32
        YLeaf bmp_termination_msg_count; //type: uint32
        YLeaf bmp_status_report_count; //type: uint32
        YLeaf bmp_per_peer_msg_count; //type: uint32
        YLeaf bmp_peer_msg_drop_count; //type: uint32
        YLeaf bmp_peer_msg_pending_count; //type: uint32
        YLeaf tos_type; //type: uint8
        YLeaf tos_value; //type: uint8
        YLeaf update_source_interface_name; //type: string
        YLeaf update_source_vrf_id; //type: uint32
        YLeaf bmp_vrf_name; //type: string
        YLeaf bmp_vrf_id; //type: uint32
        YLeaf bmp_update_mode; //type: BgpBmpUpdModeEnum
        YLeaf tcp_keep_alive_interval; //type: uint32
        YLeaf tcp_maximum_segment_size; //type: uint32
        YLeaf tcp_write_cb_pending; //type: uint32
        YLeaf tcp_last_write_result; //type: uint32
        YLeaf tcp_last_write_cb_time; //type: uint64
        YLeaf tcp_last_write_time; //type: uint64
        YLeaf bmpq_last_write_pulse_sent_time; //type: uint64
        YLeaf bmpq_last_all_write_pulse_sent_time; //type: uint64
        YLeaf bmpq_last_write_pulse_cb_time; //type: uint64
        YLeaf path_update_count; //type: uint32
        YLeaf path_withdraw_count; //type: uint32
        YLeaf path_update_drop; //type: uint32
        YLeaf path_withdraw_drop; //type: uint32
        YLeaf bmp_peer_msg_pending_count_max; //type: uint32
        YLeaf bmp_peer_msg_pending_count_hwts; //type: uint64
        YLeaf bmp_bytes_written_tcp; //type: uint64
        YLeaf tcp_write_time; //type: uint32
        YLeaf bmpr_mon_upd_messages; //type: uint32
        YLeaf bmpr_mon_wdraw_messages; //type: uint32
        YLeaf bmp_messages_wdraw_discarded; //type: uint32
        YLeaf bmp_pfx_wdraw_discarded; //type: uint32
        YLeaf bmp_per_peer_msg_route_mon_count; //type: uint32
        YLeaf bmpr_mon_update_gen_time; //type: uint32

        class BmpServerStateAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge
        class BmpServerStateTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec
        class BmpServerLastDisconTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime
        class UpdateSourceAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress
        class BmpSendVersion; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion> > bmp_send_version;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime> bmp_server_last_discon_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge> bmp_server_state_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec> bmp_server_state_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress> update_source_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge : public Entity
{
    public:
        BmpServerStateAge();
        ~BmpServerStateAge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec : public Entity
{
    public:
        BmpServerStateTimeSpec();
        ~BmpServerStateTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime : public Entity
{
    public:
        BmpServerLastDisconTime();
        ~BmpServerLastDisconTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress : public Entity
{
    public:
        UpdateSourceAddress();
        ~UpdateSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion : public Entity
{
    public:
        BmpSendVersion();
        ~BmpSendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors : public Entity
{
    public:
        ServerNeighbors();
        ~ServerNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor> > server_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor : public Entity
{
    public:
        ServerNeighbor();
        ~ServerNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: int32

        class MonitoredNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors> monitored_neighbors;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors : public Entity
{
    public:
        MonitoredNeighbors();
        ~MonitoredNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MonitoredNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor> > monitored_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor : public Entity
{
    public:
        MonitoredNeighbor();
        ~MonitoredNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf bmp_neighbor_msg_pending; //type: uint32
        YLeaf bmp_neighbor_msg_dropped; //type: uint32
        YLeaf bmp_neighbor_peer_up_sent; //type: uint32
        YLeaf bmp_neighbor_peer_down_sent; //type: uint32
        YLeaf bmp_neighbor_route_monitor_sent; //type: uint32
        YLeaf bmp_neighbor_path_update_sent; //type: uint32
        YLeaf bmp_neighbor_path_withdraw_sent; //type: uint32
        YLeaf bmp_neighbor_path_update_drop; //type: uint32
        YLeaf bmp_neighbor_path_withdraw_drop; //type: uint32
        YLeaf bmp_neighbor_upd_msg_sent; //type: uint32
        YLeaf bmp_neighbor_wdraw_msg_sent; //type: uint32

        class BmpNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress> bmp_neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress : public Entity
{
    public:
        BmpNeighborAddress();
        ~BmpNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo : public Entity
{
    public:
        ProcessInfo();
        ~ProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_instance; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf vrf_totals; //type: boolean

        class Global; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics> performance_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf> vrf;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_instance_node; //type: string
        YLeaf restart_count; //type: uint32
        YLeaf path_attributes_entry_count; //type: uint32
        YLeaf path_attribute_memory; //type: uint32
        YLeaf as_path_entry_count; //type: uint32
        YLeaf as_path_entries_memory; //type: uint32
        YLeaf community_entry_count; //type: uint32
        YLeaf community_memory; //type: uint32
        YLeaf extended_community_entry_count; //type: uint32
        YLeaf extended_community_memory; //type: uint32
        YLeaf pe_distinguisher_label_entry_count; //type: uint32
        YLeaf pe_distinguisher_label_memory; //type: uint32
        YLeaf pta_entry_count; //type: uint32
        YLeaf pta_memory; //type: uint32
        YLeaf tunnel_encap_entry_count; //type: uint32
        YLeaf tunnel_encap_memory; //type: uint32
        YLeaf ribrnh_entry_count; //type: uint32
        YLeaf ribrnh_memory; //type: uint32
        YLeaf ppmp_entry_count; //type: uint32
        YLeaf ppmp_memory; //type: uint32
        YLeaf route_reflectors; //type: uint32
        YLeaf route_reflector_memory; //type: uint32
        YLeaf nexthop_count; //type: uint32
        YLeaf nexthop_memory; //type: uint32
        YLeaf lsattr_entry_count; //type: uint32
        YLeaf lsattr_memory; //type: uint32
        YLeaf attr_set_entry_count; //type: uint32
        YLeaf attr_set_memory; //type: uint32
        YLeaf lindex_entry_count; //type: uint32
        YLeaf lindex_memory; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf total_vrf_count; //type: uint32
        YLeaf neighbors_count_total; //type: uint32
        YLeaf established_neighbors_count_total; //type: uint32
        YLeaf sn_num_non_dflt_vrf_nbrs; //type: uint32
        YLeaf sn_num_non_dflt_vrf_nbrs_estab; //type: uint32

        class PoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize
        class PoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount
        class PoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount
        class MsgLogPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize
        class MsgLogPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount
        class MsgLogPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount
        class BmpPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize
        class BmpPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount
        class BmpPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount> > bmp_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount> > bmp_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize> > bmp_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount> > msg_log_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount> > msg_log_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize> > msg_log_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount> > pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount> > pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize> > pool_size;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize : public Entity
{
    public:
        PoolSize();
        ~PoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount : public Entity
{
    public:
        PoolAllocCount();
        ~PoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount : public Entity
{
    public:
        PoolFreeCount();
        ~PoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize : public Entity
{
    public:
        MsgLogPoolSize();
        ~MsgLogPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount : public Entity
{
    public:
        MsgLogPoolAllocCount();
        ~MsgLogPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount : public Entity
{
    public:
        MsgLogPoolFreeCount();
        ~MsgLogPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize : public Entity
{
    public:
        BmpPoolSize();
        ~BmpPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount : public Entity
{
    public:
        BmpPoolAllocCount();
        ~BmpPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount : public Entity
{
    public:
        BmpPoolFreeCount();
        ~BmpPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbors_count; //type: uint32
        YLeaf established_neighbors_count; //type: uint32
        YLeaf update_messages_received; //type: uint32
        YLeaf update_messages_sent; //type: uint32
        YLeaf notifications_received; //type: uint32
        YLeaf notifications_sent; //type: uint32
        YLeaf network_count; //type: uint32
        YLeaf path_count; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf> vrf;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configuration_items_processed; //type: uint32
        YLeaf configuration_processing_time; //type: uint32
        YLeaf edm_requests_count; //type: uint32
        YLeaf edm_processing_time; //type: uint32
        YLeaf brib_api_output_messages_sent; //type: uint32
        YLeaf brib_api_output_bytes_sent; //type: uint32
        YLeaf brib_api_output_bytes_generated; //type: uint32
        YLeaf brib_api_output_prefixes_advertised; //type: uint32
        YLeaf brib_api_output_prefixes_withdrawn; //type: uint32
        YLeaf brib_api_output_sending_time; //type: uint32
        YLeaf brib_api_output_generation_time; //type: uint32
        YLeaf brib_api_output_calls; //type: uint32
        YLeaf brib_api_input_messages; //type: uint32
        YLeaf brib_api_input_bytes; //type: uint32
        YLeaf brib_api_input_prefixes_received; //type: uint32
        YLeaf brib_api_input_withdrawn_prefixes; //type: uint32
        YLeaf brib_api_input_processing_time; //type: uint32
        YLeaf instance_node_role; //type: boolean
        YLeaf active_nsrtcp_phase_two_enter_time; //type: uint32
        YLeaf sec_active_nsrtcp_phase_two_enter_time; //type: uint32
        YLeaf proc_scoped_sync_state; //type: BgpScopedSyncStateEnum
        YLeaf initial_sync_sessions_added; //type: boolean
        YLeaf in_event_attach_calls; //type: uint32
        YLeaf out_event_attach_calls; //type: uint32
        YLeaf in_out_event_attach_calls; //type: uint32
        YLeaf updgen_timer_id; //type: uint32
        YLeaf updgen_tree_timer_left; //type: uint64
        YLeaf updgen_tree_timer_expiry; //type: uint64
        YLeaf current_clock_time; //type: uint64
        YLeaf updgen_handler_tm; //type: uint64
        YLeaf io_timer_id; //type: uint32
        YLeaf io_tree_timer_left; //type: uint64
        YLeaf io_tree_timer_expiry; //type: uint64
        YLeaf io_handler_tm; //type: uint64
        YLeaf qad_messages_sent; //type: uint32
        YLeaf qadack_sent; //type: uint32
        YLeaf qad_send_failure; //type: uint32
        YLeaf qad_ac_ks_failure; //type: uint32
        YLeaf qad_suspends; //type: uint32
        YLeaf qad_resumes; //type: uint32
        YLeaf qad_send_drops; //type: uint32
        YLeaf qad_messages_received; //type: uint32
        YLeaf qad_processed; //type: uint32
        YLeaf qad_ac_ks_received; //type: uint32
        YLeaf qad_timeout_received; //type: uint32
        YLeaf qad_init_drops; //type: uint32
        YLeaf qadoos_drops; //type: uint32
        YLeaf qad_recv_drops; //type: uint32
        YLeaf qad_timeout_recvd; //type: uint32
        YLeaf nsr_last_reset_reason; //type: uint8
        YLeaf redcon_nsr_ready; //type: boolean
        YLeaf redcon_state_time; //type: uint32
        YLeaf active_nsr_state; //type: uint32
        YLeaf sec_active_nsr_state; //type: uint32
        YLeaf total_outstanding_postits; //type: uint32
        YLeaf total_neighbors_with_pending_postits; //type: uint32
        YLeaf tep2p_auto_tunnel_enabled; //type: boolean
        YLeaf issu_milestone_packed; //type: boolean
        YLeaf bgp_te_infra_tunnel_type; //type: BgpTeInfraTunnelEnum

        class Ipv4RibServer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer
        class Ipv6RibServer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer
        class TeConnection; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection
        class LsdConnection; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection
        class DsNpl; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl
        class ActiveNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime
        class StandbyNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime
        class ActiveNsrfoTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime
        class PostitCountInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo
        class IssuMilestone; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime> > active_nsr_mode_enter_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime> > active_nsrfo_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl> ds_npl;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer> ipv4rib_server;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer> ipv6rib_server;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone> > issu_milestone;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection> lsd_connection;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo> > postit_count_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime> > standby_nsr_mode_enter_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection> te_connection;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer : public Entity
{
    public:
        Ipv4RibServer();
        ~Ipv4RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_rib_connection_up; //type: boolean
        YLeaf rib_connection_up_count; //type: uint32
        YLeaf last_rib_connection_up_age; //type: uint32
        YLeaf rib_connection_down_count; //type: uint32
        YLeaf last_rib_connection_down_age; //type: uint32

        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp : public Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp : public Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp : public Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp : public Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer : public Entity
{
    public:
        Ipv6RibServer();
        ~Ipv6RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_rib_connection_up; //type: boolean
        YLeaf rib_connection_up_count; //type: uint32
        YLeaf last_rib_connection_up_age; //type: uint32
        YLeaf rib_connection_down_count; //type: uint32
        YLeaf last_rib_connection_down_age; //type: uint32

        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp : public Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp : public Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp : public Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp : public Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection : public Entity
{
    public:
        TeConnection();
        ~TeConnection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf last_connection_up_age; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf last_connection_down_age; //type: uint32

        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp : public Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp : public Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp : public Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp : public Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection : public Entity
{
    public:
        LsdConnection();
        ~LsdConnection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf last_connection_up_age; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf last_connection_down_age; //type: uint32

        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp : public Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp : public Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp : public Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp : public Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl : public Entity
{
    public:
        DsNpl();
        ~DsNpl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dir_service_conn_state; //type: BgpDsConnStateEnum
        YLeaf issu_mgr_conn_state; //type: BgpIsmConnStateEnum
        YLeaf issu_phase; //type: string
        YLeaf issu_type_ng; //type: boolean
        YLeaf issuha_option; //type: string
        YLeaf local_ds_handle; //type: uint64
        YLeaf service_name; //type: string
        YLeaf dsissu_status_flag; //type: uint32

        class NplPriorityStatistic; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic
        class NplEndpoint; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint> > npl_endpoint;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic> > npl_priority_statistic;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic : public Entity
{
    public:
        NplPriorityStatistic();
        ~NplPriorityStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NumSent; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent
        class NumRecv; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv
        class NumSentDrop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop
        class NumRecvDrop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv> > num_recv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent> > num_sent;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop> > num_sent_drop;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent : public Entity
{
    public:
        NumSent();
        ~NumSent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint64



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv : public Entity
{
    public:
        NumRecv();
        ~NumRecv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint64



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop : public Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPlSendDropArray; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray : public Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop : public Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPlRecvDropArray; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray : public Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint : public Entity
{
    public:
        NplEndpoint();
        ~NplEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf endpoint_name; //type: string
        YLeaf sync_group_name; //type: string
        YLeaf node_id; //type: string
        YLeaf endpoint_handle; //type: uint64
        YLeaf endpoint_stale_flag; //type: boolean
        YLeaf endpoint_issu_role; //type: string
        YLeaf endpoint_active_flag; //type: boolean
        YLeaf msg_size; //type: uint32
        YLeaf wheel_id; //type: uint32
        YLeaf expected_sequence_num; //type: uint32

        class Endpoint; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint> > endpoint;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint : public Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime : public Entity
{
    public:
        ActiveNsrModeEnterTime();
        ~ActiveNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime : public Entity
{
    public:
        StandbyNsrModeEnterTime();
        ~StandbyNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime : public Entity
{
    public:
        ActiveNsrfoTime();
        ~ActiveNsrfoTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo : public Entity
{
    public:
        PostitCountInfo();
        ~PostitCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf postit_count; //type: uint32
        YLeaf vrf_name; //type: string

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone : public Entity
{
    public:
        IssuMilestone();
        ~IssuMilestone();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf milestone_name; //type: string
        YLeaf milestone_start_timestamp; //type: uint32
        YLeaf milestone_met_timestamp; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lpts_set_up_time; //type: uint32
        YLeaf lpts_calls; //type: uint32
        YLeaf read_throttles_count; //type: uint32
        YLeaf low_throttled_read_count; //type: uint32
        YLeaf high_throttled_read_count; //type: uint32
        YLeaf read_calls_count; //type: uint32
        YLeaf read_messages_count; //type: uint32
        YLeaf data_bytes_read; //type: uint32
        YLeaf io_read_time; //type: uint32
        YLeaf write_calls_count; //type: uint32
        YLeaf data_bytes_written; //type: uint32
        YLeaf io_write_time; //type: uint32
        YLeaf write_subgroup_calls_count; //type: uint32
        YLeaf write_subgroup_messages_count; //type: uint32
        YLeaf subgroup_list_time; //type: uint32
        YLeaf write_queue_calls_count; //type: uint32
        YLeaf write_queue_messages_count; //type: uint32
        YLeaf write_queue_time; //type: uint32
        YLeaf inbound_update_messages; //type: uint32
        YLeaf inbound_update_messages_time; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session> > session;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf speaker_id; //type: uint8
        YLeaf description; //type: string
        YLeaf local_as; //type: uint32
        YLeaf remote_as; //type: uint32
        YLeaf messages_queued_in; //type: uint32
        YLeaf messages_queued_out; //type: uint32
        YLeaf connection_state; //type: BgpConnStateEnum
        YLeaf is_local_address_configured; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_state; //type: BgpSyncNbrNsrStateEnum
        YLeaf postit_pending; //type: boolean

        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress> connection_remote_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress : public Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress : public Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor> > neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf speaker_id; //type: uint8
        YLeaf description; //type: string
        YLeaf local_as; //type: uint32
        YLeaf remote_as; //type: uint32
        YLeaf has_internal_link; //type: boolean
        YLeaf is_external_neighbor_not_directly_connected; //type: boolean
        YLeaf messages_received; //type: uint32
        YLeaf messages_sent; //type: uint32
        YLeaf update_messages_in; //type: uint32
        YLeaf update_messages_out; //type: uint32
        YLeaf messages_queued_in; //type: uint32
        YLeaf messages_queued_out; //type: uint32
        YLeaf connection_established_time; //type: uint32
        YLeaf connection_state; //type: BgpConnStateEnum
        YLeaf previous_connection_state; //type: uint32
        YLeaf connection_admin_status; //type: uint32
        YLeaf open_check_error_code; //type: BgpOpenCheckErrEnum
        YLeaf is_local_address_configured; //type: boolean
        YLeaf connection_local_port; //type: uint32
        YLeaf connection_remote_port; //type: uint32
        YLeaf neighbor_interface_handle; //type: uint32
        YLeaf reset_notification_sent; //type: boolean
        YLeaf is_administratively_shut_down; //type: boolean
        YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        YLeaf is_out_of_memory_shutdown; //type: boolean
        YLeaf is_out_of_memory_forced_up; //type: boolean
        YLeaf is_ebgp_peer_as_league; //type: boolean
        YLeaf is_ebgp_peer_common_admin; //type: boolean
        YLeaf ttl_security_enabled; //type: boolean
        YLeaf suppress4_byte_as; //type: boolean
        YLeaf bfd_session_state; //type: BgpBfdStateEnum
        YLeaf bfd_session_created_state; //type: BgpBfdStateEnum
        YLeaf bfd_session_enable_mode; //type: BgpBfdEnableModeEnum
        YLeaf bfd_minintervalval; //type: uint32
        YLeaf bfd_multiplierval; //type: uint32
        YLeaf bfd_state_ts; //type: uint64
        YLeaf router_id; //type: string
        YLeaf negotiated_protocol_version; //type: uint16
        YLeaf ebgp_time_to_live; //type: uint32
        YLeaf is_ebgp_multihop_bgpmpls_forwarding_disabled; //type: boolean
        YLeaf tcpmss; //type: uint32
        YLeaf msg_log_in; //type: uint32
        YLeaf msg_log_out; //type: uint32
        YLeaf neighbor_local_as; //type: uint32
        YLeaf local_as_no_prepend; //type: boolean
        YLeaf is_capability_negotiation_suppressed; //type: boolean
        YLeaf is_capability_negotiation_performed; //type: boolean
        YLeaf is_route_refresh_capability_received; //type: boolean
        YLeaf is_route_refresh_old_capability_received; //type: boolean
        YLeaf is_gr_aware; //type: boolean
        YLeaf is4_byte_as_capability_received; //type: boolean
        YLeaf is4_byte_as_capability_sent; //type: boolean
        YLeaf multi_protocol_capability_received; //type: boolean
        YLeaf hold_time; //type: uint16
        YLeaf keep_alive_time; //type: uint16
        YLeaf configured_hold_time; //type: uint16
        YLeaf configured_keepalive; //type: uint16
        YLeaf configured_min_acc_hold_time; //type: uint16
        YLeaf min_advertise_interval; //type: uint32
        YLeaf min_advertise_interval_msecs; //type: uint32
        YLeaf min_origination_interval; //type: uint16
        YLeaf connect_retry_interval; //type: uint16
        YLeaf time_since_last_update; //type: uint32
        YLeaf time_since_last_read; //type: uint32
        YLeaf time_since_last_read_reset; //type: uint32
        YLeaf time_last_cb; //type: uint64
        YLeaf time_last_cb_reset; //type: uint32
        YLeaf time_last_fb; //type: uint64
        YLeaf count_last_write; //type: uint32
        YLeaf time_since_last_write; //type: uint32
        YLeaf attempted_last_write_bytes; //type: uint32
        YLeaf actual_last_write_bytes; //type: uint32
        YLeaf time_since_second_last_write; //type: uint32
        YLeaf attempted_second_last_write_bytes; //type: uint32
        YLeaf actual_second_last_write_bytes; //type: uint32
        YLeaf time_since_last_write_reset; //type: uint32
        YLeaf attempted_last_write_reset_bytes; //type: uint32
        YLeaf actual_last_write_reset_bytes; //type: uint32
        YLeaf time_since_second_last_write_reset; //type: uint32
        YLeaf attempted_second_last_write_reset_bytes; //type: uint32
        YLeaf actual_second_last_write_reset_bytes; //type: uint32
        YLeaf last_write_event; //type: uint32
        YLeaf second_last_write_event; //type: uint32
        YLeaf last_k_aexpiry_reset; //type: uint32
        YLeaf second_last_k_aexpiry_reset; //type: uint32
        YLeaf last_k_anotsent_reset; //type: uint32
        YLeaf last_k_aerror_reset; //type: uint32
        YLeaf last_k_astart_reset; //type: uint32
        YLeaf second_last_k_astart_reset; //type: uint32
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf time_since_connection_last_dropped; //type: uint32
        YLeaf reset_reason; //type: BgpResetReasonIndexEnum
        YLeaf peer_reset_reason; //type: BgpPeerResetReasonIndexEnum
        YLeaf peer_error_code; //type: uint32
        YLeaf last_notify_error_code; //type: uint8
        YLeaf last_notify_error_subcode; //type: uint8
        YLeaf error_notifies_received; //type: uint32
        YLeaf error_notifies_sent; //type: uint32
        YLeaf remote_as_number; //type: uint32
        YLeaf dmz_link_bandwidth; //type: uint32
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf tos_type; //type: uint8
        YLeaf tos_value; //type: uint8
        YLeaf tcp_session_open_mode; //type: BgpTcpModeEnum
        YLeaf vrf_name; //type: string
        YLeaf standby_rp; //type: boolean
        YLeaf nsr_enabled; //type: boolean
        YLeaf graceful_restart_enabled_nbr; //type: boolean
        YLeaf gr_restart_time; //type: uint32
        YLeaf gr_stale_path_time; //type: uint32
        YLeaf fssn_offset; //type: uint32
        YLeaf fpbsn_offset; //type: uint32
        YLeaf last_ackd_seq_no; //type: uint32
        YLeaf bytes_written; //type: uint32
        YLeaf bytes_read; //type: uint32
        YLeaf socket_read_bytes; //type: uint32
        YLeaf is_read_disabled; //type: boolean
        YLeaf update_bytes_read; //type: uint32
        YLeaf nsr_state; //type: BgpSyncNbrNsrStateEnum
        YLeaf is_passive_close; //type: boolean
        YLeaf nbr_enforce_first_as; //type: boolean
        YLeaf active_bmp_servers; //type: uint8
        YLeaf nbr_cluster_id; //type: uint32
        YLeaf nbr_in_cluster; //type: uint8
        YLeaf ignore_connected; //type: boolean
        YLeaf internal_vpn_client; //type: boolean
        YLeaf io_armed; //type: boolean
        YLeaf read_armed; //type: boolean
        YLeaf write_armed; //type: boolean
        YLeaf discard_data_bytes; //type: uint32
        YLeaf local_as_replace_as; //type: boolean
        YLeaf local_as_dual_as; //type: boolean
        YLeaf local_as_dual_as_mode_native; //type: boolean
        YLeaf egress_peer_engineering_enabled; //type: boolean
        YLeaf discard_as4_path; //type: uint32
        YLeaf rpki_disable; //type: boolean
        YLeaf rpki_use_validity; //type: boolean
        YLeaf rpki_allow_invalid; //type: boolean
        YLeaf rpki_signal_ibgp; //type: boolean
        YLeaf dynamic_neighbor; //type: boolean

        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress
        class SendNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo
        class ReceivedNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics
        class MessageStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics
        class TcpInitSyncTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec
        class TcpInitSyncPhaseTwoTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec
        class TcpInitSyncDoneTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData> > af_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics> message_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics> performance_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo> received_notification_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo> send_notification_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec> tcp_init_sync_done_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec> tcp_init_sync_phase_two_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec> tcp_init_sync_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress : public Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress : public Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo : public Entity
{
    public:
        SendNotificationInfo();
        ~SendNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_since_last_notification; //type: uint32
        YLeaf notification_error_code; //type: uint8
        YLeaf notification_error_subcode; //type: uint8

        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData> > last_notification_data;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData : public Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo : public Entity
{
    public:
        ReceivedNotificationInfo();
        ~ReceivedNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_since_last_notification; //type: uint32
        YLeaf notification_error_code; //type: uint8
        YLeaf notification_error_subcode; //type: uint8

        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData> > last_notification_data;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData : public Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf read_throttles; //type: uint32
        YLeaf low_throttled_read; //type: uint32
        YLeaf high_throttled_read; //type: uint32
        YLeaf time_since_last_throttled_read; //type: uint32
        YLeaf read_calls_count; //type: uint32
        YLeaf read_messages_count; //type: uint32
        YLeaf data_bytes_read; //type: uint32
        YLeaf io_read_time; //type: uint32
        YLeaf write_calls_count; //type: uint32
        YLeaf data_bytes_written; //type: uint32
        YLeaf io_write_time; //type: uint32
        YLeaf last_sent_seq_no; //type: uint32
        YLeaf write_subgroup_calls_count; //type: uint32
        YLeaf write_subgroup_messages_count; //type: uint32
        YLeaf subgroup_list_time; //type: uint32
        YLeaf write_queue_calls_count; //type: uint32
        YLeaf write_queue_messages_count; //type: uint32
        YLeaf write_queue_time; //type: uint32
        YLeaf inbound_update_messages; //type: uint32
        YLeaf inbound_update_messages_time; //type: uint32
        YLeaf maximum_read_size; //type: uint32
        YLeaf actives; //type: uint32
        YLeaf failed_post_actives; //type: uint32
        YLeaf passives; //type: uint32
        YLeaf rejected_passives; //type: uint32
        YLeaf active_collision; //type: uint32
        YLeaf passive_collision; //type: uint32
        YLeaf control_to_read_thread_trigger; //type: uint32
        YLeaf control_to_write_thread_trigger; //type: uint32
        YLeaf network_status; //type: uint32
        YLeaf reset_flags; //type: uint32
        YLeaf nbr_flags; //type: uint32
        YLeaf nbr_fd; //type: int32
        YLeaf reset_retries; //type: uint8
        YLeaf sync_flags; //type: uint32
        YLeaf nsr_oper_down_count; //type: uint32
        YLeaf last_nsr_scoped_sync; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics : public Entity
{
    public:
        MessageStatistics();
        ~MessageStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Open; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open
        class Notification; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification
        class Update; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update
        class Keepalive; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive
        class RouteRefresh; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh
        class Total; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification> notification;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open> open;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh> route_refresh;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total> total;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update> update;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open : public Entity
{
    public:
        Open();
        ~Open();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh : public Entity
{
    public:
        RouteRefresh();
        ~RouteRefresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_85_ */
