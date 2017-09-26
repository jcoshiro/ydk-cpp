#ifndef _CISCO_IOS_XR_INFRA_RSI_CFG_
#define _CISCO_IOS_XR_INFRA_RSI_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rsi_cfg {

class GlobalAf : public ydk::Entity
{
    public:
        GlobalAf();
        ~GlobalAf();

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

        class Afs; //type: GlobalAf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::GlobalAf::Afs> afs;
        
}; // GlobalAf


class GlobalAf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

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

        class Af; //type: GlobalAf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::GlobalAf::Afs::Af> > af;
        
}; // GlobalAf::Afs


class GlobalAf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

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

        ydk::YLeaf af_name; //type: VrfAddressFamily
        ydk::YLeaf saf_name; //type: VrfSubAddressFamily
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf create; //type: empty

}; // GlobalAf::Afs::Af

class SelectiveVrfDownload : public ydk::Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

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

        ydk::YLeaf disable; //type: empty

}; // SelectiveVrfDownload

class Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

        ydk::YLeaf enable; //type: empty
        class Interfaces; //type: Srlg::Interfaces
        class SrlgNames; //type: Srlg::SrlgNames
        class Groups; //type: Srlg::Groups
        class InheritNodes; //type: Srlg::InheritNodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes> inherit_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::SrlgNames> srlg_names;
        
}; // Srlg


class Srlg::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Srlg::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group> > group;
        
}; // Srlg::Groups


class Srlg::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf enable; //type: empty
        class GroupValues; //type: Srlg::Groups::Group::GroupValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group::GroupValues> group_values;
        
}; // Srlg::Groups::Group


class Srlg::Groups::Group::GroupValues : public ydk::Entity
{
    public:
        GroupValues();
        ~GroupValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupValue; //type: Srlg::Groups::Group::GroupValues::GroupValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group::GroupValues::GroupValue> > group_value;
        
}; // Srlg::Groups::Group::GroupValues


class Srlg::Groups::Group::GroupValues::GroupValue : public ydk::Entity
{
    public:
        GroupValue();
        ~GroupValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_index; //type: uint32
        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf srlg_priority; //type: SrlgPriority

}; // Srlg::Groups::Group::GroupValues::GroupValue


class Srlg::InheritNodes : public ydk::Entity
{
    public:
        InheritNodes();
        ~InheritNodes();

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

        class InheritNode; //type: Srlg::InheritNodes::InheritNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode> > inherit_node;
        
}; // Srlg::InheritNodes


class Srlg::InheritNodes::InheritNode : public ydk::Entity
{
    public:
        InheritNode();
        ~InheritNode();

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

        ydk::YLeaf inherit_node_name; //type: string
        ydk::YLeaf enable; //type: empty
        class InheritNodeValues; //type: Srlg::InheritNodes::InheritNode::InheritNodeValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode::InheritNodeValues> inherit_node_values;
        
}; // Srlg::InheritNodes::InheritNode


class Srlg::InheritNodes::InheritNode::InheritNodeValues : public ydk::Entity
{
    public:
        InheritNodeValues();
        ~InheritNodeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InheritNodeValue; //type: Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue> > inherit_node_value;
        
}; // Srlg::InheritNodes::InheritNode::InheritNodeValues


class Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue : public ydk::Entity
{
    public:
        InheritNodeValue();
        ~InheritNodeValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_index; //type: uint32
        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf srlg_priority; //type: SrlgPriority

}; // Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue


class Srlg::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Srlg::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface> > interface;
        
}; // Srlg::Interfaces


class Srlg::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf enable; //type: empty
        class IncludeOptical; //type: Srlg::Interfaces::Interface::IncludeOptical
        class InterfaceGroup; //type: Srlg::Interfaces::Interface::InterfaceGroup
        class Values; //type: Srlg::Interfaces::Interface::Values
        class InterfaceSrlgNames; //type: Srlg::Interfaces::Interface::InterfaceSrlgNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::IncludeOptical> include_optical;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup> interface_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceSrlgNames> interface_srlg_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::Values> values;
        
}; // Srlg::Interfaces::Interface


class Srlg::Interfaces::Interface::IncludeOptical : public ydk::Entity
{
    public:
        IncludeOptical();
        ~IncludeOptical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf priority; //type: SrlgPriority

}; // Srlg::Interfaces::Interface::IncludeOptical


class Srlg::Interfaces::Interface::InterfaceGroup : public ydk::Entity
{
    public:
        InterfaceGroup();
        ~InterfaceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class GroupNames; //type: Srlg::Interfaces::Interface::InterfaceGroup::GroupNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup::GroupNames> group_names;
        
}; // Srlg::Interfaces::Interface::InterfaceGroup


class Srlg::Interfaces::Interface::InterfaceGroup::GroupNames : public ydk::Entity
{
    public:
        GroupNames();
        ~GroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupName; //type: Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName> > group_name;
        
}; // Srlg::Interfaces::Interface::InterfaceGroup::GroupNames


class Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName : public ydk::Entity
{
    public:
        GroupName();
        ~GroupName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name_index; //type: uint32
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf srlg_priority; //type: SrlgPriority

}; // Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName


class Srlg::Interfaces::Interface::InterfaceSrlgNames : public ydk::Entity
{
    public:
        InterfaceSrlgNames();
        ~InterfaceSrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceSrlgName; //type: Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;
        
}; // Srlg::Interfaces::Interface::InterfaceSrlgNames


class Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName : public ydk::Entity
{
    public:
        InterfaceSrlgName();
        ~InterfaceSrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_name; //type: string

}; // Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName


class Srlg::Interfaces::Interface::Values : public ydk::Entity
{
    public:
        Values();
        ~Values();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: Srlg::Interfaces::Interface::Values::Value_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::Values::Value_> > value_;
        
}; // Srlg::Interfaces::Interface::Values


class Srlg::Interfaces::Interface::Values::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_index; //type: uint32
        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf srlg_priority; //type: SrlgPriority

}; // Srlg::Interfaces::Interface::Values::Value_


class Srlg::SrlgNames : public ydk::Entity
{
    public:
        SrlgNames();
        ~SrlgNames();

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

        class SrlgName; //type: Srlg::SrlgNames::SrlgName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Srlg::SrlgNames::SrlgName> > srlg_name;
        
}; // Srlg::SrlgNames


class Srlg::SrlgNames::SrlgName : public ydk::Entity
{
    public:
        SrlgName();
        ~SrlgName();

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

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf srlg_value; //type: uint32

}; // Srlg::SrlgNames::SrlgName

class VrfGroups : public ydk::Entity
{
    public:
        VrfGroups();
        ~VrfGroups();

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

        class VrfGroup; //type: VrfGroups::VrfGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup> > vrf_group;
        
}; // VrfGroups


class VrfGroups::VrfGroup : public ydk::Entity
{
    public:
        VrfGroup();
        ~VrfGroup();

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

        ydk::YLeaf vrf_group_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Vrfs; //type: VrfGroups::VrfGroup::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup::Vrfs> vrfs;
        
}; // VrfGroups::VrfGroup


class VrfGroups::VrfGroup::Vrfs : public ydk::Entity
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

        class Vrf; //type: VrfGroups::VrfGroup::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup::Vrfs::Vrf> > vrf;
        
}; // VrfGroups::VrfGroup::Vrfs


class VrfGroups::VrfGroup::Vrfs::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string

}; // VrfGroups::VrfGroup::Vrfs::Vrf

class Vrfs : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Vrf; //type: Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf> > vrf;
        
}; // Vrfs


class Vrfs::Vrf : public ydk::Entity
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
        ydk::YLeaf fallback_vrf; //type: string
        ydk::YLeaf remote_route_filter_disable; //type: empty
        ydk::YLeaf create; //type: empty
        ydk::YLeaf mode_big; //type: empty
        ydk::YLeaf description; //type: string
        class VpnId; //type: Vrfs::Vrf::VpnId
        class Afs; //type: Vrfs::Vrf::Afs
        class MulticastHost; //type: Vrfs::Vrf::MulticastHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost> multicast_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::VpnId> vpn_id; // presence node
        
}; // Vrfs::Vrf


class Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af> > af;
        
}; // Vrfs::Vrf::Afs


class Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: VrfAddressFamily
        ydk::YLeaf saf_name; //type: VrfSubAddressFamily
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf create; //type: empty
        class MaximumPrefix; //type: Vrfs::Vrf::Afs::Af::MaximumPrefix
        class Bgp; //type: Vrfs::Vrf::Afs::Af::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::MaximumPrefix> maximum_prefix; // presence node
        
}; // Vrfs::Vrf::Afs::Af


class Vrfs::Vrf::Afs::Af::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf export_route_policy; //type: string
        ydk::YLeaf import_route_policy; //type: string
        ydk::YLeaf import_vrf_options; //type: boolean
        class ImportRouteTargets; //type: Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets
        class ExportRouteTargets; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets
        class VrfToGlobalExportRoutePolicy; //type: Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy
        class ExportVrfOptions; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions
        class GlobalToVrfImportRoutePolicy; //type: Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets> export_route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions> export_vrf_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy> global_to_vrf_import_route_policy; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets> import_route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy> vrf_to_global_export_route_policy; // presence node
        
}; // Vrfs::Vrf::Afs::Af::Bgp


class Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets : public ydk::Entity
{
    public:
        ExportRouteTargets();
        ~ExportRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTargets; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets> route_targets;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets


class Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTarget; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget> > route_target;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets


class Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpVrfRouteTarget
        class AsOrFourByteAs; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs
        class Ipv4Address; //type: Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs> > as_or_four_byte_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget


class Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs : public ydk::Entity
{
    public:
        AsOrFourByteAs();
        ~AsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching_rt; //type: uint32

}; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs


class Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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
        ydk::YLeaf address_index; //type: uint32
        ydk::YLeaf stitching_rt; //type: uint32

}; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address


class Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions : public ydk::Entity
{
    public:
        ExportVrfOptions();
        ~ExportVrfOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_imported_vpn; //type: boolean
        ydk::YLeaf import_stitching_rt; //type: boolean

}; // Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions


class Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy : public ydk::Entity
{
    public:
        GlobalToVrfImportRoutePolicy();
        ~GlobalToVrfImportRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf advertise_as_vpn; //type: boolean

}; // Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy


class Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets : public ydk::Entity
{
    public:
        ImportRouteTargets();
        ~ImportRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTargets; //type: Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets> route_targets;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets


class Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTarget; //type: Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget> > route_target;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets


class Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpVrfRouteTarget
        class AsOrFourByteAs; //type: Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs
        class Ipv4Address; //type: Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs> > as_or_four_byte_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;
        
}; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget


class Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs : public ydk::Entity
{
    public:
        AsOrFourByteAs();
        ~AsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching_rt; //type: uint32

}; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs


class Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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
        ydk::YLeaf address_index; //type: uint32
        ydk::YLeaf stitching_rt; //type: uint32

}; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address


class Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy : public ydk::Entity
{
    public:
        VrfToGlobalExportRoutePolicy();
        ~VrfToGlobalExportRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf allow_imported_vpn; //type: boolean

}; // Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy


class Vrfs::Vrf::Afs::Af::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf mid_threshold; //type: uint32

}; // Vrfs::Vrf::Afs::Af::MaximumPrefix


class Vrfs::Vrf::MulticastHost : public ydk::Entity
{
    public:
        MulticastHost();
        ~MulticastHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Vrfs::Vrf::MulticastHost::Ipv4
        class Ipv6; //type: Vrfs::Vrf::MulticastHost::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost::Ipv6> ipv6;
        
}; // Vrfs::Vrf::MulticastHost


class Vrfs::Vrf::MulticastHost::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

}; // Vrfs::Vrf::MulticastHost::Ipv4


class Vrfs::Vrf::MulticastHost::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

}; // Vrfs::Vrf::MulticastHost::Ipv6


class Vrfs::Vrf::VpnId : public ydk::Entity
{
    public:
        VpnId();
        ~VpnId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpn_oui; //type: uint32
        ydk::YLeaf vpn_index; //type: uint32

}; // Vrfs::Vrf::VpnId

class VrfSubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf flow_spec;

};

class VrfAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class SrlgPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf very_low;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RSI_CFG_ */

