#ifndef _CISCO_IOS_XR_IP_IARM_V6_OPER_
#define _CISCO_IOS_XR_IP_IARM_V6_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_v6_oper {

class Ipv6Arm : public ydk::Entity
{
    public:
        Ipv6Arm();
        ~Ipv6Arm();

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

        ydk::YLeaf multicast_host_interface; //type: string
        class Addresses; //type: Ipv6Arm::Addresses
        class Summary; //type: Ipv6Arm::Summary
        class VrfSummaries; //type: Ipv6Arm::VrfSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries> vrf_summaries;
        
}; // Ipv6Arm


class Ipv6Arm::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

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

        class Vrfs; //type: Ipv6Arm::Addresses::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs> vrfs;
        
}; // Ipv6Arm::Addresses


class Ipv6Arm::Addresses::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Ipv6Arm::Addresses::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf> > vrf;
        
}; // Ipv6Arm::Addresses::Vrfs


class Ipv6Arm::Addresses::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class Networks; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks
        class Interfaces; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks> networks;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf referenced_interface; //type: string
        ydk::YLeaf vrf_name; //type: string
        class Address; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_tentative; //type: boolean
        ydk::YLeaf is_prefix_sid; //type: boolean
        ydk::YLeaf producer; //type: string
        class Address_; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_ : public ydk::Entity
{
    public:
        Address_();
        ~Address_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: int32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks : public ydk::Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Network; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf handle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf referenced_interface; //type: string
        ydk::YLeaf vrf_name; //type: string
        class AddressXr; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr : public ydk::Entity
{
    public:
        AddressXr();
        ~AddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_tentative; //type: boolean
        ydk::YLeaf is_prefix_sid; //type: boolean
        ydk::YLeaf producer; //type: string
        class Address; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;
        
}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: int32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


class Ipv6Arm::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf producer_count; //type: int32
        ydk::YLeaf address_conflict_count; //type: int32
        ydk::YLeaf unnumbered_conflict_count; //type: int32
        ydk::YLeaf db_master_version; //type: uint32
        ydk::YLeaf vrf_count; //type: int32

}; // Ipv6Arm::Summary


class Ipv6Arm::VrfSummaries : public ydk::Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

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

        class VrfSummary; //type: Ipv6Arm::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries::VrfSummary> > vrf_summary;
        
}; // Ipv6Arm::VrfSummaries


class Ipv6Arm::VrfSummaries::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string

}; // Ipv6Arm::VrfSummaries::VrfSummary


}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V6_OPER_ */

