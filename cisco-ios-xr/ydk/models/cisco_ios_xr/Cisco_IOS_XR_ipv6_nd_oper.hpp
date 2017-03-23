#ifndef _CISCO_IOS_XR_IPV6_ND_OPER_
#define _CISCO_IOS_XR_IPV6_ND_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_oper {

class Ipv6NodeDiscovery : public Entity
{
    public:
        Ipv6NodeDiscovery();
        ~Ipv6NodeDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: Ipv6NodeDiscovery::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes> nodes;


}; // Ipv6NodeDiscovery


class Ipv6NodeDiscovery::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Ipv6NodeDiscovery::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node> > node;


}; // Ipv6NodeDiscovery::Nodes


class Ipv6NodeDiscovery::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class NeighborInterfaces; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces
        class NeighborSummary; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary
        class BundleNodes; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes
        class BundleInterfaces; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces
        class Interfaces; //type: Ipv6NodeDiscovery::Nodes::Node::Interfaces
        class NdVirtualRouters; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes> bundle_nodes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters> nd_virtual_routers;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces> neighbor_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary> neighbor_summary;


}; // Ipv6NodeDiscovery::Nodes::Node


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces : public Entity
{
    public:
        NeighborInterfaces();
        ~NeighborInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborInterface; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface> > neighbor_interface;


}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface : public Entity
{
    public:
        NeighborInterface();
        ~NeighborInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class HostAddresses; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses> host_addresses;


}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses : public Entity
{
    public:
        HostAddresses();
        ~HostAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HostAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress> > host_address;


}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress : public Entity
{
    public:
        HostAddress();
        ~HostAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host_address; //type: string
        YLeaf reachability_state; //type: Ipv6NdShStateEnum
        YLeaf link_layer_address; //type: string
        YLeaf encapsulation; //type: Ipv6NdMediaEncapEnum
        YLeaf selected_encapsulation; //type: Ipv6NdMediaEncapEnum
        YLeaf origin_encapsulation; //type: Ipv6NdNeighborOriginEnum
        YLeaf interface_name; //type: string
        YLeaf location; //type: string
        YLeaf is_router; //type: boolean
        YLeaf serg_flags; //type: uint32

        class LastReachedTime; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime> last_reached_time;


}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime : public Entity
{
    public:
        LastReachedTime();
        ~LastReachedTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_neighbor_entries; //type: uint32

        class Multicast; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast
        class Static_; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_
        class Dynamic; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic> dynamic;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_> static_;


}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf incomplete_entries; //type: uint32
        YLeaf reachable_entries; //type: uint32
        YLeaf stale_entries; //type: uint32
        YLeaf delayed_entries; //type: uint32
        YLeaf probe_entries; //type: uint32
        YLeaf deleted_entries; //type: uint32
        YLeaf subtotal_neighbor_entries; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf incomplete_entries; //type: uint32
        YLeaf reachable_entries; //type: uint32
        YLeaf stale_entries; //type: uint32
        YLeaf delayed_entries; //type: uint32
        YLeaf probe_entries; //type: uint32
        YLeaf deleted_entries; //type: uint32
        YLeaf subtotal_neighbor_entries; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf incomplete_entries; //type: uint32
        YLeaf reachable_entries; //type: uint32
        YLeaf stale_entries; //type: uint32
        YLeaf delayed_entries; //type: uint32
        YLeaf probe_entries; //type: uint32
        YLeaf deleted_entries; //type: uint32
        YLeaf subtotal_neighbor_entries; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes : public Entity
{
    public:
        BundleNodes();
        ~BundleNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleNode; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode> > bundle_node;


}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode : public Entity
{
    public:
        BundleNode();
        ~BundleNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf group_id; //type: uint32
        YLeaf process_name; //type: string
        YLeaf sent_sequence_number; //type: uint32
        YLeaf received_sequence_number; //type: uint32
        YLeaf state; //type: Ipv6NdBndlStateEnum
        YLeaf state_changes; //type: uint32
        YLeaf sent_packets; //type: uint32
        YLeaf received_packets; //type: uint32

        class Age; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age> age;


}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age : public Entity
{
    public:
        Age();
        ~Age();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces : public Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleInterface; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface : public Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf iftype; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf etype; //type: uint32
        YLeaf vlan_tag; //type: uint16
        YLeaf mac_addr_size; //type: uint32
        YLeaf mac_addr; //type: string
        YLeaf is_interface_enabled; //type: boolean
        YLeaf is_ipv6_enabled; //type: boolean
        YLeaf is_mpls_enabled; //type: boolean
        YLeafList member_link; //type: list of  uint32

        class NdParameters; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters
        class LocalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress
        class GlobalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress
        class MemberNode; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress> > global_address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress> local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode> > member_node;
        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters> nd_parameters;


}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters : public Entity
{
    public:
        NdParameters();
        ~NdParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_dad_enabled; //type: boolean
        YLeaf dad_attempts; //type: uint32
        YLeaf is_icm_pv6_redirect; //type: boolean
        YLeaf is_dhcp_managed; //type: boolean
        YLeaf is_route_address_managed; //type: boolean
        YLeaf is_suppressed; //type: boolean
        YLeaf send_unicast_ra; //type: boolean
        YLeaf nd_retransmit_interval; //type: uint32
        YLeaf nd_min_transmit_interval; //type: uint32
        YLeaf nd_max_transmit_interval; //type: uint32
        YLeaf nd_advertisement_lifetime; //type: uint32
        YLeaf nd_reachable_time; //type: uint32
        YLeaf nd_cache_limit; //type: uint32
        YLeaf complete_protocol_count; //type: uint32
        YLeaf complete_glean_count; //type: uint32
        YLeaf incomplete_protocol_count; //type: uint32
        YLeaf incomplete_glean_count; //type: uint32
        YLeaf dropped_protocol_req_count; //type: uint32
        YLeaf dropped_glean_req_count; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress : public Entity
{
    public:
        GlobalAddress();
        ~GlobalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode : public Entity
{
    public:
        MemberNode();
        ~MemberNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf total_links; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode


class Ipv6NodeDiscovery::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface> > interface;


}; // Ipv6NodeDiscovery::Nodes::Node::Interfaces


class Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_dad_enabled; //type: boolean
        YLeaf dad_attempts; //type: uint32
        YLeaf is_icm_pv6_redirect; //type: boolean
        YLeaf is_dhcp_managed; //type: boolean
        YLeaf is_route_address_managed; //type: boolean
        YLeaf is_suppressed; //type: boolean
        YLeaf send_unicast_ra; //type: boolean
        YLeaf nd_retransmit_interval; //type: uint32
        YLeaf nd_min_transmit_interval; //type: uint32
        YLeaf nd_max_transmit_interval; //type: uint32
        YLeaf nd_advertisement_lifetime; //type: uint32
        YLeaf nd_reachable_time; //type: uint32
        YLeaf nd_cache_limit; //type: uint32
        YLeaf complete_protocol_count; //type: uint32
        YLeaf complete_glean_count; //type: uint32
        YLeaf incomplete_protocol_count; //type: uint32
        YLeaf incomplete_glean_count; //type: uint32
        YLeaf dropped_protocol_req_count; //type: uint32
        YLeaf dropped_glean_req_count; //type: uint32



}; // Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters : public Entity
{
    public:
        NdVirtualRouters();
        ~NdVirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NdVirtualRouter; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter> > nd_virtual_router;


}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter : public Entity
{
    public:
        NdVirtualRouter();
        ~NdVirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_layer_address; //type: string
        YLeaf context; //type: uint32
        YLeaf state; //type: Ipv6NdShVrStateEnum
        YLeaf flags; //type: Ipv6NdShVrFlagsEnum
        YLeaf vr_gl_addr_ct; //type: uint32

        class LocalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress
        class VrGlobalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress> local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress> > vr_global_address;


}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress : public Entity
{
    public:
        VrGlobalAddress();
        ~VrGlobalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress

class Ipv6NdShVrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf deleted;
        static const Enum::YLeaf standby;
        static const Enum::YLeaf active;

};

class Ipv6NdBndlStateEnum : public Enum
{
    public:
        static const Enum::YLeaf run;
        static const Enum::YLeaf error;
        static const Enum::YLeaf wait;

};

class Ipv6NdMediaEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf arpa;
        static const Enum::YLeaf snap;
        static const Enum::YLeaf ieee802_1q;
        static const Enum::YLeaf srp;
        static const Enum::YLeaf srpa;
        static const Enum::YLeaf srpb;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf hdlc;
        static const Enum::YLeaf chdlc;
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf fr;
        static const Enum::YLeaf gre;

};

class Ipv6NdNeighborOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;

};

class Ipv6NdShStateEnum : public Enum
{
    public:
        static const Enum::YLeaf incomplete;
        static const Enum::YLeaf reachable;
        static const Enum::YLeaf stale;
        static const Enum::YLeaf glean;
        static const Enum::YLeaf delay;
        static const Enum::YLeaf probe;
        static const Enum::YLeaf delete_;

};

class Ipv6NdShVrFlagsEnum : public Enum
{
    public:
        static const Enum::YLeaf no_flags;
        static const Enum::YLeaf final_ra;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_OPER_ */
