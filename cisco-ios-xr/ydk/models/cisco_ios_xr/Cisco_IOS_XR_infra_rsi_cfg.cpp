
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rsi_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rsi_cfg {

GlobalAf::GlobalAf()
    :
    afs(std::make_shared<GlobalAf::Afs>())
{
    afs->parent = this;

    yang_name = "global-af"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

GlobalAf::~GlobalAf()
{
}

bool GlobalAf::has_data() const
{
    return (afs !=  nullptr && afs->has_data());
}

bool GlobalAf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string GlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<GlobalAf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void GlobalAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalAf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GlobalAf::clone_ptr() const
{
    return std::make_shared<GlobalAf>();
}

std::string GlobalAf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GlobalAf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GlobalAf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GlobalAf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GlobalAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs")
        return true;
    return false;
}

GlobalAf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = false;
}

GlobalAf::Afs::~Afs()
{
}

bool GlobalAf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalAf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GlobalAf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalAf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalAf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GlobalAf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalAf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalAf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalAf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalAf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalAf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

GlobalAf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    create{YType::empty, "create"}
{

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false;
}

GlobalAf::Afs::Af::~Af()
{
}

bool GlobalAf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| create.is_set;
}

bool GlobalAf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(create.yfilter);
}

std::string GlobalAf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalAf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']" <<"[topology-name='" <<topology_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalAf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GlobalAf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalAf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalAf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalAf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
}

bool GlobalAf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "create")
        return true;
    return false;
}

SelectiveVrfDownload::SelectiveVrfDownload()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "selective-vrf-download"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool SelectiveVrfDownload::has_data() const
{
    return disable.is_set;
}

bool SelectiveVrfDownload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SelectiveVrfDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SelectiveVrfDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void SelectiveVrfDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> SelectiveVrfDownload::clone_ptr() const
{
    return std::make_shared<SelectiveVrfDownload>();
}

std::string SelectiveVrfDownload::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SelectiveVrfDownload::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SelectiveVrfDownload::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SelectiveVrfDownload::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SelectiveVrfDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Srlg::Srlg()
    :
    enable{YType::empty, "enable"}
    	,
    groups(std::make_shared<Srlg::Groups>())
	,inherit_nodes(std::make_shared<Srlg::InheritNodes>())
	,interfaces(std::make_shared<Srlg::Interfaces>())
	,srlg_names(std::make_shared<Srlg::SrlgNames>())
{
    groups->parent = this;
    inherit_nodes->parent = this;
    interfaces->parent = this;
    srlg_names->parent = this;

    yang_name = "srlg"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Srlg::~Srlg()
{
}

bool Srlg::has_data() const
{
    return enable.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (srlg_names !=  nullptr && srlg_names->has_data());
}

bool Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (srlg_names !=  nullptr && srlg_names->has_operation());
}

std::string Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Srlg::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes == nullptr)
        {
            inherit_nodes = std::make_shared<Srlg::InheritNodes>();
        }
        return inherit_nodes;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "srlg-names")
    {
        if(srlg_names == nullptr)
        {
            srlg_names = std::make_shared<Srlg::SrlgNames>();
        }
        return srlg_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(inherit_nodes != nullptr)
    {
        children["inherit-nodes"] = inherit_nodes;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(srlg_names != nullptr)
    {
        children["srlg-names"] = srlg_names;
    }

    return children;
}

void Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Srlg::clone_ptr() const
{
    return std::make_shared<Srlg>();
}

std::string Srlg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srlg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srlg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srlg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "inherit-nodes" || name == "interfaces" || name == "srlg-names" || name == "enable")
        return true;
    return false;
}

Srlg::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Groups::~Groups()
{
}

bool Srlg::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Srlg::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    enable{YType::empty, "enable"}
    	,
    group_values(std::make_shared<Srlg::Groups::Group::GroupValues>())
{
    group_values->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Groups::Group::~Group()
{
}

bool Srlg::Groups::Group::has_data() const
{
    return group_name.is_set
	|| enable.is_set
	|| (group_values !=  nullptr && group_values->has_data());
}

bool Srlg::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (group_values !=  nullptr && group_values->has_operation());
}

std::string Srlg::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-values")
    {
        if(group_values == nullptr)
        {
            group_values = std::make_shared<Srlg::Groups::Group::GroupValues>();
        }
        return group_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_values != nullptr)
    {
        children["group-values"] = group_values;
    }

    return children;
}

void Srlg::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Srlg::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-values" || name == "group-name" || name == "enable")
        return true;
    return false;
}

Srlg::Groups::Group::GroupValues::GroupValues()
{

    yang_name = "group-values"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Groups::Group::GroupValues::~GroupValues()
{
}

bool Srlg::Groups::Group::GroupValues::has_data() const
{
    for (std::size_t index=0; index<group_value.size(); index++)
    {
        if(group_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Groups::Group::GroupValues::has_operation() const
{
    for (std::size_t index=0; index<group_value.size(); index++)
    {
        if(group_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Groups::Group::GroupValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::Group::GroupValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::Group::GroupValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-value")
    {
        for(auto const & c : group_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Groups::Group::GroupValues::GroupValue>();
        c->parent = this;
        group_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::Group::GroupValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Groups::Group::GroupValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Groups::Group::GroupValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Groups::Group::GroupValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-value")
        return true;
    return false;
}

Srlg::Groups::Group::GroupValues::GroupValue::GroupValue()
    :
    srlg_index{YType::uint32, "srlg-index"},
    srlg_priority{YType::enumeration, "srlg-priority"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "group-value"; yang_parent_name = "group-values"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Groups::Group::GroupValues::GroupValue::~GroupValue()
{
}

bool Srlg::Groups::Group::GroupValues::GroupValue::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::Groups::Group::GroupValues::GroupValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_priority.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Groups::Group::GroupValues::GroupValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-value" <<"[srlg-index='" <<srlg_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::Group::GroupValues::GroupValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.yfilter)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::Group::GroupValues::GroupValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::Group::GroupValues::GroupValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Groups::Group::GroupValues::GroupValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
        srlg_priority.value_namespace = name_space;
        srlg_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Groups::Group::GroupValues::GroupValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Groups::Group::GroupValues::GroupValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-index" || name == "srlg-priority" || name == "srlg-value")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNodes()
{

    yang_name = "inherit-nodes"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::InheritNodes::~InheritNodes()
{
}

bool Srlg::InheritNodes::has_data() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InheritNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node")
    {
        for(auto const & c : inherit_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inherit_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::InheritNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InheritNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InheritNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNode::InheritNode()
    :
    inherit_node_name{YType::str, "inherit-node-name"},
    enable{YType::empty, "enable"}
    	,
    inherit_node_values(std::make_shared<Srlg::InheritNodes::InheritNode::InheritNodeValues>())
{
    inherit_node_values->parent = this;

    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::InheritNodes::InheritNode::has_data() const
{
    return inherit_node_name.is_set
	|| enable.is_set
	|| (inherit_node_values !=  nullptr && inherit_node_values->has_data());
}

bool Srlg::InheritNodes::InheritNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit_node_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (inherit_node_values !=  nullptr && inherit_node_values->has_operation());
}

std::string Srlg::InheritNodes::InheritNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/inherit-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node" <<"[inherit-node-name='" <<inherit_node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::InheritNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit_node_name.is_set || is_set(inherit_node_name.yfilter)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node-values")
    {
        if(inherit_node_values == nullptr)
        {
            inherit_node_values = std::make_shared<Srlg::InheritNodes::InheritNode::InheritNodeValues>();
        }
        return inherit_node_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::InheritNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit_node_values != nullptr)
    {
        children["inherit-node-values"] = inherit_node_values;
    }

    return children;
}

void Srlg::InheritNodes::InheritNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
        inherit_node_name.value_namespace = name_space;
        inherit_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InheritNodes::InheritNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Srlg::InheritNodes::InheritNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node-values" || name == "inherit-node-name" || name == "enable")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValues()
{

    yang_name = "inherit-node-values"; yang_parent_name = "inherit-node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::~InheritNodeValues()
{
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::has_data() const
{
    for (std::size_t index=0; index<inherit_node_value.size(); index++)
    {
        if(inherit_node_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::has_operation() const
{
    for (std::size_t index=0; index<inherit_node_value.size(); index++)
    {
        if(inherit_node_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InheritNodes::InheritNode::InheritNodeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::InheritNode::InheritNodeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::InheritNode::InheritNodeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node-value")
    {
        for(auto const & c : inherit_node_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue>();
        c->parent = this;
        inherit_node_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::InheritNode::InheritNodeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inherit_node_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node-value")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::InheritNodeValue()
    :
    srlg_index{YType::uint32, "srlg-index"},
    srlg_priority{YType::enumeration, "srlg-priority"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "inherit-node-value"; yang_parent_name = "inherit-node-values"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::~InheritNodeValue()
{
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_priority.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node-value" <<"[srlg-index='" <<srlg_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.yfilter)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
        srlg_priority.value_namespace = name_space;
        srlg_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-index" || name == "srlg-priority" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Interfaces::~Interfaces()
{
}

bool Srlg::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Srlg::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
    	,
    include_optical(std::make_shared<Srlg::Interfaces::Interface::IncludeOptical>())
	,interface_group(std::make_shared<Srlg::Interfaces::Interface::InterfaceGroup>())
	,interface_srlg_names(std::make_shared<Srlg::Interfaces::Interface::InterfaceSrlgNames>())
	,values(std::make_shared<Srlg::Interfaces::Interface::Values>())
{
    include_optical->parent = this;
    interface_group->parent = this;
    interface_srlg_names->parent = this;
    values->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Interfaces::Interface::~Interface()
{
}

bool Srlg::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (include_optical !=  nullptr && include_optical->has_data())
	|| (interface_group !=  nullptr && interface_group->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (values !=  nullptr && values->has_data());
}

bool Srlg::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (include_optical !=  nullptr && include_optical->has_operation())
	|| (interface_group !=  nullptr && interface_group->has_operation())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (values !=  nullptr && values->has_operation());
}

std::string Srlg::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-optical")
    {
        if(include_optical == nullptr)
        {
            include_optical = std::make_shared<Srlg::Interfaces::Interface::IncludeOptical>();
        }
        return include_optical;
    }

    if(child_yang_name == "interface-group")
    {
        if(interface_group == nullptr)
        {
            interface_group = std::make_shared<Srlg::Interfaces::Interface::InterfaceGroup>();
        }
        return interface_group;
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names == nullptr)
        {
            interface_srlg_names = std::make_shared<Srlg::Interfaces::Interface::InterfaceSrlgNames>();
        }
        return interface_srlg_names;
    }

    if(child_yang_name == "values")
    {
        if(values == nullptr)
        {
            values = std::make_shared<Srlg::Interfaces::Interface::Values>();
        }
        return values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include_optical != nullptr)
    {
        children["include-optical"] = include_optical;
    }

    if(interface_group != nullptr)
    {
        children["interface-group"] = interface_group;
    }

    if(interface_srlg_names != nullptr)
    {
        children["interface-srlg-names"] = interface_srlg_names;
    }

    if(values != nullptr)
    {
        children["values"] = values;
    }

    return children;
}

void Srlg::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-optical" || name == "interface-group" || name == "interface-srlg-names" || name == "values" || name == "interface-name" || name == "enable")
        return true;
    return false;
}

Srlg::Interfaces::Interface::IncludeOptical::IncludeOptical()
    :
    enable{YType::empty, "enable"},
    priority{YType::enumeration, "priority"}
{

    yang_name = "include-optical"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::IncludeOptical::~IncludeOptical()
{
}

bool Srlg::Interfaces::Interface::IncludeOptical::has_data() const
{
    return enable.is_set
	|| priority.is_set;
}

bool Srlg::Interfaces::Interface::IncludeOptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Srlg::Interfaces::Interface::IncludeOptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-optical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::IncludeOptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::IncludeOptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::IncludeOptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Interfaces::Interface::IncludeOptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::IncludeOptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::IncludeOptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "priority")
        return true;
    return false;
}

Srlg::Interfaces::Interface::InterfaceGroup::InterfaceGroup()
    :
    enable{YType::empty, "enable"}
    	,
    group_names(std::make_shared<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames>())
{
    group_names->parent = this;

    yang_name = "interface-group"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::InterfaceGroup::~InterfaceGroup()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::has_data() const
{
    return enable.is_set
	|| (group_names !=  nullptr && group_names->has_data());
}

bool Srlg::Interfaces::Interface::InterfaceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (group_names !=  nullptr && group_names->has_operation());
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::InterfaceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::InterfaceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-names")
    {
        if(group_names == nullptr)
        {
            group_names = std::make_shared<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames>();
        }
        return group_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::InterfaceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_names != nullptr)
    {
        children["group-names"] = group_names;
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::InterfaceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::InterfaceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-names" || name == "enable")
        return true;
    return false;
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupNames()
{

    yang_name = "group-names"; yang_parent_name = "interface-group"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::~GroupNames()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::has_data() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::has_operation() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-name")
    {
        for(auto const & c : group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName>();
        c->parent = this;
        group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::GroupName()
    :
    group_name_index{YType::uint32, "group-name-index"},
    group_name{YType::str, "group-name"},
    srlg_priority{YType::enumeration, "srlg-priority"}
{

    yang_name = "group-name"; yang_parent_name = "group-names"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::~GroupName()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::has_data() const
{
    return group_name_index.is_set
	|| group_name.is_set
	|| srlg_priority.is_set;
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name_index.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(srlg_priority.yfilter);
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name" <<"[group-name-index='" <<group_name_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name_index.is_set || is_set(group_name_index.yfilter)) leaf_name_data.push_back(group_name_index.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.yfilter)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name-index")
    {
        group_name_index = value;
        group_name_index.value_namespace = name_space;
        group_name_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
        srlg_priority.value_namespace = name_space;
        srlg_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name-index")
    {
        group_name_index.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name-index" || name == "group-name" || name == "srlg-priority")
        return true;
    return false;
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgNames()
{

    yang_name = "interface-srlg-names"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Interfaces::Interface::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::InterfaceSrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::InterfaceSrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_srlg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-name")
        return true;
    return false;
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set;
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name")
        return true;
    return false;
}

Srlg::Interfaces::Interface::Values::Values()
{

    yang_name = "values"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::Values::~Values()
{
}

bool Srlg::Interfaces::Interface::Values::has_data() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::Values::has_operation() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Interfaces::Interface::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::Values::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        for(auto const & c : value_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Interfaces::Interface::Values::Value_>();
        c->parent = this;
        value_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::Values::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : value_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Interfaces::Interface::Values::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Interfaces::Interface::Values::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Interfaces::Interface::Values::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Srlg::Interfaces::Interface::Values::Value_::Value_()
    :
    srlg_index{YType::uint32, "srlg-index"},
    srlg_priority{YType::enumeration, "srlg-priority"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "value"; yang_parent_name = "values"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Interfaces::Interface::Values::Value_::~Value_()
{
}

bool Srlg::Interfaces::Interface::Values::Value_::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::Interfaces::Interface::Values::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_priority.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Interfaces::Interface::Values::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value" <<"[srlg-index='" <<srlg_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::Values::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.yfilter)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::Values::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::Values::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Interfaces::Interface::Values::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
        srlg_priority.value_namespace = name_space;
        srlg_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Interfaces::Interface::Values::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::Values::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-index" || name == "srlg-priority" || name == "srlg-value")
        return true;
    return false;
}

Srlg::SrlgNames::SrlgNames()
{

    yang_name = "srlg-names"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::SrlgNames::~SrlgNames()
{
}

bool Srlg::SrlgNames::has_data() const
{
    for (std::size_t index=0; index<srlg_name.size(); index++)
    {
        if(srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgNames::has_operation() const
{
    for (std::size_t index=0; index<srlg_name.size(); index++)
    {
        if(srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::SrlgNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-name")
    {
        for(auto const & c : srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::SrlgNames::SrlgName>();
        c->parent = this;
        srlg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::SrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::SrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::SrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name")
        return true;
    return false;
}

Srlg::SrlgNames::SrlgName::SrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-name"; yang_parent_name = "srlg-names"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::SrlgNames::SrlgName::~SrlgName()
{
}

bool Srlg::SrlgNames::SrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_value.is_set;
}

bool Srlg::SrlgNames::SrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::SrlgNames::SrlgName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/srlg-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgNames::SrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-name" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgNames::SrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgNames::SrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgNames::SrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::SrlgNames::SrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::SrlgNames::SrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::SrlgNames::SrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name" || name == "srlg-value")
        return true;
    return false;
}

VrfGroups::VrfGroups()
{

    yang_name = "vrf-groups"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

VrfGroups::~VrfGroups()
{
}

bool VrfGroups::has_data() const
{
    for (std::size_t index=0; index<vrf_group.size(); index++)
    {
        if(vrf_group[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroups::has_operation() const
{
    for (std::size_t index=0; index<vrf_group.size(); index++)
    {
        if(vrf_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrf-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-group")
    {
        for(auto const & c : vrf_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfGroups::VrfGroup>();
        c->parent = this;
        vrf_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VrfGroups::clone_ptr() const
{
    return std::make_shared<VrfGroups>();
}

std::string VrfGroups::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VrfGroups::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VrfGroups::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VrfGroups::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VrfGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-group")
        return true;
    return false;
}

VrfGroups::VrfGroup::VrfGroup()
    :
    vrf_group_name{YType::str, "vrf-group-name"},
    enable{YType::empty, "enable"}
    	,
    vrfs(std::make_shared<VrfGroups::VrfGroup::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "vrf-group"; yang_parent_name = "vrf-groups"; is_top_level_class = false; has_list_ancestor = false;
}

VrfGroups::VrfGroup::~VrfGroup()
{
}

bool VrfGroups::VrfGroup::has_data() const
{
    return vrf_group_name.is_set
	|| enable.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool VrfGroups::VrfGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string VrfGroups::VrfGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrf-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfGroups::VrfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-group" <<"[vrf-group-name='" <<vrf_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroups::VrfGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_group_name.is_set || is_set(vrf_group_name.yfilter)) leaf_name_data.push_back(vrf_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroups::VrfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<VrfGroups::VrfGroup::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroups::VrfGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void VrfGroups::VrfGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-group-name")
    {
        vrf_group_name = value;
        vrf_group_name.value_namespace = name_space;
        vrf_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroups::VrfGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-group-name")
    {
        vrf_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool VrfGroups::VrfGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "vrf-group-name" || name == "enable")
        return true;
    return false;
}

VrfGroups::VrfGroup::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "vrf-group"; is_top_level_class = false; has_list_ancestor = true;
}

VrfGroups::VrfGroup::Vrfs::~Vrfs()
{
}

bool VrfGroups::VrfGroup::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroups::VrfGroup::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroups::VrfGroup::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroups::VrfGroup::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroups::VrfGroup::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfGroups::VrfGroup::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroups::VrfGroup::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfGroups::VrfGroup::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroups::VrfGroup::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VrfGroups::VrfGroup::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

VrfGroups::VrfGroup::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

VrfGroups::VrfGroup::Vrfs::Vrf::~Vrf()
{
}

bool VrfGroups::VrfGroup::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set;
}

bool VrfGroups::VrfGroup::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string VrfGroups::VrfGroup::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroups::VrfGroup::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroups::VrfGroup::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroups::VrfGroup::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VrfGroups::VrfGroup::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroups::VrfGroup::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool VrfGroups::VrfGroup::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Vrfs::~Vrfs()
{
}

bool Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Vrfs::clone_ptr() const
{
    return std::make_shared<Vrfs>();
}

std::string Vrfs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vrfs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vrfs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vrfs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    fallback_vrf{YType::str, "fallback-vrf"},
    mode_big{YType::empty, "mode-big"},
    remote_route_filter_disable{YType::empty, "remote-route-filter-disable"}
    	,
    afs(std::make_shared<Vrfs::Vrf::Afs>())
	,multicast_host(std::make_shared<Vrfs::Vrf::MulticastHost>())
	,vpn_id(nullptr) // presence node
{
    afs->parent = this;
    multicast_host->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Vrfs::Vrf::~Vrf()
{
}

bool Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| create.is_set
	|| description.is_set
	|| fallback_vrf.is_set
	|| mode_big.is_set
	|| remote_route_filter_disable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (multicast_host !=  nullptr && multicast_host->has_data())
	|| (vpn_id !=  nullptr && vpn_id->has_data());
}

bool Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(fallback_vrf.yfilter)
	|| ydk::is_set(mode_big.yfilter)
	|| ydk::is_set(remote_route_filter_disable.yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (multicast_host !=  nullptr && multicast_host->has_operation())
	|| (vpn_id !=  nullptr && vpn_id->has_operation());
}

std::string Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (fallback_vrf.is_set || is_set(fallback_vrf.yfilter)) leaf_name_data.push_back(fallback_vrf.get_name_leafdata());
    if (mode_big.is_set || is_set(mode_big.yfilter)) leaf_name_data.push_back(mode_big.get_name_leafdata());
    if (remote_route_filter_disable.is_set || is_set(remote_route_filter_disable.yfilter)) leaf_name_data.push_back(remote_route_filter_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "multicast-host")
    {
        if(multicast_host == nullptr)
        {
            multicast_host = std::make_shared<Vrfs::Vrf::MulticastHost>();
        }
        return multicast_host;
    }

    if(child_yang_name == "vpn-id")
    {
        if(vpn_id == nullptr)
        {
            vpn_id = std::make_shared<Vrfs::Vrf::VpnId>();
        }
        return vpn_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(multicast_host != nullptr)
    {
        children["multicast-host"] = multicast_host;
    }

    if(vpn_id != nullptr)
    {
        children["vpn-id"] = vpn_id;
    }

    return children;
}

void Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-vrf")
    {
        fallback_vrf = value;
        fallback_vrf.value_namespace = name_space;
        fallback_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-big")
    {
        mode_big = value;
        mode_big.value_namespace = name_space;
        mode_big.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-route-filter-disable")
    {
        remote_route_filter_disable = value;
        remote_route_filter_disable.value_namespace = name_space;
        remote_route_filter_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "fallback-vrf")
    {
        fallback_vrf.yfilter = yfilter;
    }
    if(value_path == "mode-big")
    {
        mode_big.yfilter = yfilter;
    }
    if(value_path == "remote-route-filter-disable")
    {
        remote_route_filter_disable.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "multicast-host" || name == "vpn-id" || name == "vrf-name" || name == "create" || name == "description" || name == "fallback-vrf" || name == "mode-big" || name == "remote-route-filter-disable")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::~Afs()
{
}

bool Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    create{YType::empty, "create"}
    	,
    bgp(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp>())
	,maximum_prefix(nullptr) // presence node
{
    bgp->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| create.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data());
}

bool Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(create.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation());
}

std::string Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']" <<"[topology-name='" <<topology_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Vrfs::Vrf::Afs::Af::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "maximum-prefix" || name == "af-name" || name == "saf-name" || name == "topology-name" || name == "create")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::Bgp()
    :
    export_route_policy{YType::str, "export-route-policy"},
    import_route_policy{YType::str, "import-route-policy"},
    import_vrf_options{YType::boolean, "import-vrf-options"}
    	,
    export_route_targets(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets>())
	,export_vrf_options(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions>())
	,global_to_vrf_import_route_policy(nullptr) // presence node
	,import_route_targets(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets>())
	,vrf_to_global_export_route_policy(nullptr) // presence node
{
    export_route_targets->parent = this;
    export_vrf_options->parent = this;
    import_route_targets->parent = this;

    yang_name = "bgp"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::~Bgp()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::has_data() const
{
    return export_route_policy.is_set
	|| import_route_policy.is_set
	|| import_vrf_options.is_set
	|| (export_route_targets !=  nullptr && export_route_targets->has_data())
	|| (export_vrf_options !=  nullptr && export_vrf_options->has_data())
	|| (global_to_vrf_import_route_policy !=  nullptr && global_to_vrf_import_route_policy->has_data())
	|| (import_route_targets !=  nullptr && import_route_targets->has_data())
	|| (vrf_to_global_export_route_policy !=  nullptr && vrf_to_global_export_route_policy->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| ydk::is_set(import_route_policy.yfilter)
	|| ydk::is_set(import_vrf_options.yfilter)
	|| (export_route_targets !=  nullptr && export_route_targets->has_operation())
	|| (export_vrf_options !=  nullptr && export_vrf_options->has_operation())
	|| (global_to_vrf_import_route_policy !=  nullptr && global_to_vrf_import_route_policy->has_operation())
	|| (import_route_targets !=  nullptr && import_route_targets->has_operation())
	|| (vrf_to_global_export_route_policy !=  nullptr && vrf_to_global_export_route_policy->has_operation());
}

std::string Vrfs::Vrf::Afs::Af::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.yfilter)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());
    if (import_vrf_options.is_set || is_set(import_vrf_options.yfilter)) leaf_name_data.push_back(import_vrf_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export-route-targets")
    {
        if(export_route_targets == nullptr)
        {
            export_route_targets = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets>();
        }
        return export_route_targets;
    }

    if(child_yang_name == "export-vrf-options")
    {
        if(export_vrf_options == nullptr)
        {
            export_vrf_options = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions>();
        }
        return export_vrf_options;
    }

    if(child_yang_name == "global-to-vrf-import-route-policy")
    {
        if(global_to_vrf_import_route_policy == nullptr)
        {
            global_to_vrf_import_route_policy = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy>();
        }
        return global_to_vrf_import_route_policy;
    }

    if(child_yang_name == "import-route-targets")
    {
        if(import_route_targets == nullptr)
        {
            import_route_targets = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets>();
        }
        return import_route_targets;
    }

    if(child_yang_name == "vrf-to-global-export-route-policy")
    {
        if(vrf_to_global_export_route_policy == nullptr)
        {
            vrf_to_global_export_route_policy = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy>();
        }
        return vrf_to_global_export_route_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(export_route_targets != nullptr)
    {
        children["export-route-targets"] = export_route_targets;
    }

    if(export_vrf_options != nullptr)
    {
        children["export-vrf-options"] = export_vrf_options;
    }

    if(global_to_vrf_import_route_policy != nullptr)
    {
        children["global-to-vrf-import-route-policy"] = global_to_vrf_import_route_policy;
    }

    if(import_route_targets != nullptr)
    {
        children["import-route-targets"] = import_route_targets;
    }

    if(vrf_to_global_export_route_policy != nullptr)
    {
        children["vrf-to-global-export-route-policy"] = vrf_to_global_export_route_policy;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
        import_route_policy.value_namespace = name_space;
        import_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-vrf-options")
    {
        import_vrf_options = value;
        import_vrf_options.value_namespace = name_space;
        import_vrf_options.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy.yfilter = yfilter;
    }
    if(value_path == "import-vrf-options")
    {
        import_vrf_options.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export-route-targets" || name == "export-vrf-options" || name == "global-to-vrf-import-route-policy" || name == "import-route-targets" || name == "vrf-to-global-export-route-policy" || name == "export-route-policy" || name == "import-route-policy" || name == "import-vrf-options")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::ExportRouteTargets()
    :
    route_targets(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets>())
{
    route_targets->parent = this;

    yang_name = "export-route-targets"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::~ExportRouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::has_data() const
{
    return (route_targets !=  nullptr && route_targets->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::has_operation() const
{
    return is_set(yfilter)
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-targets")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTargets()
{

    yang_name = "route-targets"; yang_parent_name = "export-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::~RouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::RouteTarget()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-or-four-byte-as")
    {
        for(auto const & c : as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs>();
        c->parent = this;
        as_or_four_byte_as.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_or_four_byte_as)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-or-four-byte-as" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::AsOrFourByteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching_rt{YType::uint32, "stitching-rt"}
{

    yang_name = "as-or-four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::~AsOrFourByteAs()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_data() const
{
    return as_xx.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching_rt.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-or-four-byte-as" <<"[as-xx='" <<as_xx <<"']" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']" <<"[stitching-rt='" <<stitching_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.yfilter)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
        stitching_rt.value_namespace = name_space;
        stitching_rt.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as" || name == "as-index" || name == "stitching-rt")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    stitching_rt{YType::uint32, "stitching-rt"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(stitching_rt.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']" <<"[address-index='" <<address_index <<"']" <<"[stitching-rt='" <<stitching_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.yfilter)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
        stitching_rt.value_namespace = name_space;
        stitching_rt.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "stitching-rt")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::ExportVrfOptions()
    :
    allow_imported_vpn{YType::boolean, "allow-imported-vpn"},
    import_stitching_rt{YType::boolean, "import-stitching-rt"}
{

    yang_name = "export-vrf-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::~ExportVrfOptions()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::has_data() const
{
    return allow_imported_vpn.is_set
	|| import_stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_imported_vpn.yfilter)
	|| ydk::is_set(import_stitching_rt.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-vrf-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_imported_vpn.is_set || is_set(allow_imported_vpn.yfilter)) leaf_name_data.push_back(allow_imported_vpn.get_name_leafdata());
    if (import_stitching_rt.is_set || is_set(import_stitching_rt.yfilter)) leaf_name_data.push_back(import_stitching_rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn = value;
        allow_imported_vpn.value_namespace = name_space;
        allow_imported_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching-rt")
    {
        import_stitching_rt = value;
        import_stitching_rt.value_namespace = name_space;
        import_stitching_rt.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn.yfilter = yfilter;
    }
    if(value_path == "import-stitching-rt")
    {
        import_stitching_rt.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-imported-vpn" || name == "import-stitching-rt")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::GlobalToVrfImportRoutePolicy()
    :
    advertise_as_vpn{YType::boolean, "advertise-as-vpn"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "global-to-vrf-import-route-policy"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::~GlobalToVrfImportRoutePolicy()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::has_data() const
{
    return advertise_as_vpn.is_set
	|| route_policy_name.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_as_vpn.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-to-vrf-import-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_as_vpn.is_set || is_set(advertise_as_vpn.yfilter)) leaf_name_data.push_back(advertise_as_vpn.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-as-vpn")
    {
        advertise_as_vpn = value;
        advertise_as_vpn.value_namespace = name_space;
        advertise_as_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-as-vpn")
    {
        advertise_as_vpn.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-as-vpn" || name == "route-policy-name")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::ImportRouteTargets()
    :
    route_targets(std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets>())
{
    route_targets->parent = this;

    yang_name = "import-route-targets"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::~ImportRouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::has_data() const
{
    return (route_targets !=  nullptr && route_targets->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::has_operation() const
{
    return is_set(yfilter)
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-targets")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTargets()
{

    yang_name = "route-targets"; yang_parent_name = "import-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::~RouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::RouteTarget()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-or-four-byte-as")
    {
        for(auto const & c : as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs>();
        c->parent = this;
        as_or_four_byte_as.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_or_four_byte_as)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-or-four-byte-as" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::AsOrFourByteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching_rt{YType::uint32, "stitching-rt"}
{

    yang_name = "as-or-four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::~AsOrFourByteAs()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_data() const
{
    return as_xx.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching_rt.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-or-four-byte-as" <<"[as-xx='" <<as_xx <<"']" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']" <<"[stitching-rt='" <<stitching_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.yfilter)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
        stitching_rt.value_namespace = name_space;
        stitching_rt.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as" || name == "as-index" || name == "stitching-rt")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    stitching_rt{YType::uint32, "stitching-rt"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(stitching_rt.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']" <<"[address-index='" <<address_index <<"']" <<"[stitching-rt='" <<stitching_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.yfilter)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
        stitching_rt.value_namespace = name_space;
        stitching_rt.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "stitching-rt")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::VrfToGlobalExportRoutePolicy()
    :
    allow_imported_vpn{YType::boolean, "allow-imported-vpn"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "vrf-to-global-export-route-policy"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::~VrfToGlobalExportRoutePolicy()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::has_data() const
{
    return allow_imported_vpn.is_set
	|| route_policy_name.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_imported_vpn.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-to-global-export-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_imported_vpn.is_set || is_set(allow_imported_vpn.yfilter)) leaf_name_data.push_back(allow_imported_vpn.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn = value;
        allow_imported_vpn.value_namespace = name_space;
        allow_imported_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-imported-vpn" || name == "route-policy-name")
        return true;
    return false;
}

Vrfs::Vrf::Afs::Af::MaximumPrefix::MaximumPrefix()
    :
    mid_threshold{YType::uint32, "mid-threshold"},
    prefix_limit{YType::uint32, "prefix-limit"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::Afs::Af::MaximumPrefix::~MaximumPrefix()
{
}

bool Vrfs::Vrf::Afs::Af::MaximumPrefix::has_data() const
{
    return mid_threshold.is_set
	|| prefix_limit.is_set;
}

bool Vrfs::Vrf::Afs::Af::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mid_threshold.yfilter)
	|| ydk::is_set(prefix_limit.yfilter);
}

std::string Vrfs::Vrf::Afs::Af::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::Afs::Af::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mid_threshold.is_set || is_set(mid_threshold.yfilter)) leaf_name_data.push_back(mid_threshold.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::Afs::Af::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::Afs::Af::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::Afs::Af::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mid-threshold")
    {
        mid_threshold = value;
        mid_threshold.value_namespace = name_space;
        mid_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::Afs::Af::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mid-threshold")
    {
        mid_threshold.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::Afs::Af::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mid-threshold" || name == "prefix-limit")
        return true;
    return false;
}

Vrfs::Vrf::MulticastHost::MulticastHost()
    :
    ipv4(std::make_shared<Vrfs::Vrf::MulticastHost::Ipv4>())
	,ipv6(std::make_shared<Vrfs::Vrf::MulticastHost::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "multicast-host"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::MulticastHost::~MulticastHost()
{
}

bool Vrfs::Vrf::MulticastHost::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Vrfs::Vrf::MulticastHost::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Vrfs::Vrf::MulticastHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-vrf-cfg:multicast-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::MulticastHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::MulticastHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Vrfs::Vrf::MulticastHost::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Vrfs::Vrf::MulticastHost::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::MulticastHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Vrfs::Vrf::MulticastHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrfs::Vrf::MulticastHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrfs::Vrf::MulticastHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Vrfs::Vrf::MulticastHost::Ipv4::Ipv4()
    :
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "multicast-host"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::MulticastHost::Ipv4::~Ipv4()
{
}

bool Vrfs::Vrf::MulticastHost::Ipv4::has_data() const
{
    return interface.is_set;
}

bool Vrfs::Vrf::MulticastHost::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Vrfs::Vrf::MulticastHost::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::MulticastHost::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::MulticastHost::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::MulticastHost::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::MulticastHost::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::MulticastHost::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::MulticastHost::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrfs::Vrf::MulticastHost::Ipv6::Ipv6()
    :
    interface{YType::str, "interface"}
{

    yang_name = "ipv6"; yang_parent_name = "multicast-host"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::MulticastHost::Ipv6::~Ipv6()
{
}

bool Vrfs::Vrf::MulticastHost::Ipv6::has_data() const
{
    return interface.is_set;
}

bool Vrfs::Vrf::MulticastHost::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Vrfs::Vrf::MulticastHost::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::MulticastHost::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::MulticastHost::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::MulticastHost::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::MulticastHost::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::MulticastHost::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::MulticastHost::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrfs::Vrf::VpnId::VpnId()
    :
    vpn_index{YType::uint32, "vpn-index"},
    vpn_oui{YType::uint32, "vpn-oui"}
{

    yang_name = "vpn-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Vrfs::Vrf::VpnId::~VpnId()
{
}

bool Vrfs::Vrf::VpnId::has_data() const
{
    return vpn_index.is_set
	|| vpn_oui.is_set;
}

bool Vrfs::Vrf::VpnId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_index.yfilter)
	|| ydk::is_set(vpn_oui.yfilter);
}

std::string Vrfs::Vrf::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrfs::Vrf::VpnId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_index.is_set || is_set(vpn_index.yfilter)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (vpn_oui.is_set || is_set(vpn_oui.yfilter)) leaf_name_data.push_back(vpn_oui.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrfs::Vrf::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrfs::Vrf::VpnId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrfs::Vrf::VpnId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-index")
    {
        vpn_index = value;
        vpn_index.value_namespace = name_space;
        vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-oui")
    {
        vpn_oui = value;
        vpn_oui.value_namespace = name_space;
        vpn_oui.value_namespace_prefix = name_space_prefix;
    }
}

void Vrfs::Vrf::VpnId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-index")
    {
        vpn_index.yfilter = yfilter;
    }
    if(value_path == "vpn-oui")
    {
        vpn_oui.yfilter = yfilter;
    }
}

bool Vrfs::Vrf::VpnId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-index" || name == "vpn-oui")
        return true;
    return false;
}

const Enum::YLeaf VrfSubAddressFamily::unicast {1, "unicast"};
const Enum::YLeaf VrfSubAddressFamily::multicast {2, "multicast"};
const Enum::YLeaf VrfSubAddressFamily::flow_spec {133, "flow-spec"};

const Enum::YLeaf VrfAddressFamily::ipv4 {1, "ipv4"};
const Enum::YLeaf VrfAddressFamily::ipv6 {2, "ipv6"};

const Enum::YLeaf SrlgPriority::critical {0, "critical"};
const Enum::YLeaf SrlgPriority::high {1, "high"};
const Enum::YLeaf SrlgPriority::default_ {2, "default"};
const Enum::YLeaf SrlgPriority::low {3, "low"};
const Enum::YLeaf SrlgPriority::very_low {4, "very-low"};


}
}

