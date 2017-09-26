
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_23.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_24.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "encapsulation-type" || name == "outer-tag" || name == "simple-efp" || name == "vlan-rewrite-tag" || name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/remote-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/remote-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "status-tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/remote-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/remote-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/pseudowire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl>())
{
    base->parent = this;
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "bridge-pw"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dhcpv4_trust.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.yfilter)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base>();
        }
        return base;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
        dhcpv4_trust.value_namespace = name_space;
        dhcpv4_trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dhcpv4-trust" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;

    yang_name = "base"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/security-parameters/base/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::StaticMac()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "static-mac"; yang_parent_name = "bridge-pw"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::~StaticMac()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-core-vfi-table/bridge-pws/bridge-pw/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeDomainInfo()
    :
    acpwup{YType::uint32, "acpwup"},
    as{YType::uint32, "as"},
    bridge_coupled_state{YType::enumeration, "bridge-coupled-state"},
    bridge_description{YType::str, "bridge-description"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_internal_msti{YType::uint32, "bridge-internal-msti"},
    bridge_msti{YType::uint32, "bridge-msti"},
    bridge_mtu{YType::uint32, "bridge-mtu"},
    bridge_name{YType::str, "bridge-name"},
    bridge_shg_id{YType::uint32, "bridge-shg-id"},
    bridge_state{YType::enumeration, "bridge-state"},
    bridge_type{YType::enumeration, "bridge-type"},
    configured{YType::boolean, "configured"},
    disposition_bytecount{YType::uint64, "disposition-bytecount"},
    disposition_pkt_count{YType::uint64, "disposition-pkt-count"},
    evi{YType::uint32, "evi"},
    flodd_group_id_down{YType::boolean, "flodd-group-id-down"},
    group_name{YType::str, "group-name"},
    imposition_byte_count{YType::uint64, "imposition-byte-count"},
    imposition_pkt_count{YType::uint64, "imposition-pkt-count"},
    is_bridge_partially_programmed{YType::boolean, "is-bridge-partially-programmed"},
    is_rd_configured{YType::boolean, "is-rd-configured"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    load_balance{YType::enumeration, "load-balance"},
    mac_limit_down{YType::boolean, "mac-limit-down"},
    mac_withdraw{YType::boolean, "mac-withdraw"},
    mac_withdraw_access{YType::boolean, "mac-withdraw-access"},
    mac_withdraw_option{YType::enumeration, "mac-withdraw-option"},
    mac_withdraw_relay{YType::boolean, "mac-withdraw-relay"},
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_access_vf_is{YType::uint32, "number-access-vf-is"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_pb_bs{YType::uint8, "number-pb-bs"},
    number_pb_bs_up{YType::uint8, "number-pb-bs-up"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    number_vf_is{YType::uint32, "number-vf-is"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    p2mp_enabled{YType::boolean, "p2mp-enabled"},
    partially_programmed_a_cs{YType::uint32, "partially-programmed-a-cs"},
    partially_programmed_pseudowires{YType::uint32, "partially-programmed-pseudowires"},
    shutdown{YType::boolean, "shutdown"},
    standby_pseudowires{YType::uint32, "standby-pseudowires"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    vine_fsm_state{YType::str, "vine-fsm-state"}
    	,
    evpn_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters>())
	,pbb_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters>())
	,rd(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd>())
	,security_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters>())
	,vni_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters>())
{
    evpn_parameters->parent = this;
    pbb_parameters->parent = this;
    rd->parent = this;
    security_parameters->parent = this;
    vni_parameters->parent = this;

    yang_name = "bridge-domain-info"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::~BridgeDomainInfo()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::has_data() const
{
    for (std::size_t index=0; index<bridge_access_vfi.size(); index++)
    {
        if(bridge_access_vfi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bridge_vfi.size(); index++)
    {
        if(bridge_vfi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mac_filter.size(); index++)
    {
        if(mac_filter[index]->has_data())
            return true;
    }
    return acpwup.is_set
	|| as.is_set
	|| bridge_coupled_state.is_set
	|| bridge_description.is_set
	|| bridge_domain_id.is_set
	|| bridge_internal_msti.is_set
	|| bridge_msti.is_set
	|| bridge_mtu.is_set
	|| bridge_name.is_set
	|| bridge_shg_id.is_set
	|| bridge_state.is_set
	|| bridge_type.is_set
	|| configured.is_set
	|| disposition_bytecount.is_set
	|| disposition_pkt_count.is_set
	|| evi.is_set
	|| flodd_group_id_down.is_set
	|| group_name.is_set
	|| imposition_byte_count.is_set
	|| imposition_pkt_count.is_set
	|| is_bridge_partially_programmed.is_set
	|| is_rd_configured.is_set
	|| last_time_status_changed.is_set
	|| load_balance.is_set
	|| mac_limit_down.is_set
	|| mac_withdraw.is_set
	|| mac_withdraw_access.is_set
	|| mac_withdraw_option.is_set
	|| mac_withdraw_relay.is_set
	|| num_vn_is.is_set
	|| num_vn_is_up.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_access_vf_is.is_set
	|| number_p_ws_up.is_set
	|| number_pb_bs.is_set
	|| number_pb_bs_up.is_set
	|| number_pseudowires.is_set
	|| number_vf_is.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| p2mp_enabled.is_set
	|| partially_programmed_a_cs.is_set
	|| partially_programmed_pseudowires.is_set
	|| shutdown.is_set
	|| standby_pseudowires.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| time_elapsed_status_changed.is_set
	|| vine_fsm_state.is_set
	|| (evpn_parameters !=  nullptr && evpn_parameters->has_data())
	|| (pbb_parameters !=  nullptr && pbb_parameters->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (vni_parameters !=  nullptr && vni_parameters->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::has_operation() const
{
    for (std::size_t index=0; index<bridge_access_vfi.size(); index++)
    {
        if(bridge_access_vfi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bridge_vfi.size(); index++)
    {
        if(bridge_vfi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mac_filter.size(); index++)
    {
        if(mac_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acpwup.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(bridge_coupled_state.yfilter)
	|| ydk::is_set(bridge_description.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_internal_msti.yfilter)
	|| ydk::is_set(bridge_msti.yfilter)
	|| ydk::is_set(bridge_mtu.yfilter)
	|| ydk::is_set(bridge_name.yfilter)
	|| ydk::is_set(bridge_shg_id.yfilter)
	|| ydk::is_set(bridge_state.yfilter)
	|| ydk::is_set(bridge_type.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(disposition_bytecount.yfilter)
	|| ydk::is_set(disposition_pkt_count.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(flodd_group_id_down.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(imposition_byte_count.yfilter)
	|| ydk::is_set(imposition_pkt_count.yfilter)
	|| ydk::is_set(is_bridge_partially_programmed.yfilter)
	|| ydk::is_set(is_rd_configured.yfilter)
	|| ydk::is_set(last_time_status_changed.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(mac_limit_down.yfilter)
	|| ydk::is_set(mac_withdraw.yfilter)
	|| ydk::is_set(mac_withdraw_access.yfilter)
	|| ydk::is_set(mac_withdraw_option.yfilter)
	|| ydk::is_set(mac_withdraw_relay.yfilter)
	|| ydk::is_set(num_vn_is.yfilter)
	|| ydk::is_set(num_vn_is_up.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_access_vf_is.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_pb_bs.yfilter)
	|| ydk::is_set(number_pb_bs_up.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(number_vf_is.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)
	|| ydk::is_set(p2mp_enabled.yfilter)
	|| ydk::is_set(partially_programmed_a_cs.yfilter)
	|| ydk::is_set(partially_programmed_pseudowires.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(standby_pseudowires.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(time_elapsed_creation.yfilter)
	|| ydk::is_set(time_elapsed_status_changed.yfilter)
	|| ydk::is_set(vine_fsm_state.yfilter)
	|| (evpn_parameters !=  nullptr && evpn_parameters->has_operation())
	|| (pbb_parameters !=  nullptr && pbb_parameters->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (vni_parameters !=  nullptr && vni_parameters->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acpwup.is_set || is_set(acpwup.yfilter)) leaf_name_data.push_back(acpwup.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (bridge_coupled_state.is_set || is_set(bridge_coupled_state.yfilter)) leaf_name_data.push_back(bridge_coupled_state.get_name_leafdata());
    if (bridge_description.is_set || is_set(bridge_description.yfilter)) leaf_name_data.push_back(bridge_description.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_internal_msti.is_set || is_set(bridge_internal_msti.yfilter)) leaf_name_data.push_back(bridge_internal_msti.get_name_leafdata());
    if (bridge_msti.is_set || is_set(bridge_msti.yfilter)) leaf_name_data.push_back(bridge_msti.get_name_leafdata());
    if (bridge_mtu.is_set || is_set(bridge_mtu.yfilter)) leaf_name_data.push_back(bridge_mtu.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.yfilter)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (bridge_shg_id.is_set || is_set(bridge_shg_id.yfilter)) leaf_name_data.push_back(bridge_shg_id.get_name_leafdata());
    if (bridge_state.is_set || is_set(bridge_state.yfilter)) leaf_name_data.push_back(bridge_state.get_name_leafdata());
    if (bridge_type.is_set || is_set(bridge_type.yfilter)) leaf_name_data.push_back(bridge_type.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (disposition_bytecount.is_set || is_set(disposition_bytecount.yfilter)) leaf_name_data.push_back(disposition_bytecount.get_name_leafdata());
    if (disposition_pkt_count.is_set || is_set(disposition_pkt_count.yfilter)) leaf_name_data.push_back(disposition_pkt_count.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (flodd_group_id_down.is_set || is_set(flodd_group_id_down.yfilter)) leaf_name_data.push_back(flodd_group_id_down.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (imposition_byte_count.is_set || is_set(imposition_byte_count.yfilter)) leaf_name_data.push_back(imposition_byte_count.get_name_leafdata());
    if (imposition_pkt_count.is_set || is_set(imposition_pkt_count.yfilter)) leaf_name_data.push_back(imposition_pkt_count.get_name_leafdata());
    if (is_bridge_partially_programmed.is_set || is_set(is_bridge_partially_programmed.yfilter)) leaf_name_data.push_back(is_bridge_partially_programmed.get_name_leafdata());
    if (is_rd_configured.is_set || is_set(is_rd_configured.yfilter)) leaf_name_data.push_back(is_rd_configured.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.yfilter)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (mac_limit_down.is_set || is_set(mac_limit_down.yfilter)) leaf_name_data.push_back(mac_limit_down.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.yfilter)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());
    if (mac_withdraw_access.is_set || is_set(mac_withdraw_access.yfilter)) leaf_name_data.push_back(mac_withdraw_access.get_name_leafdata());
    if (mac_withdraw_option.is_set || is_set(mac_withdraw_option.yfilter)) leaf_name_data.push_back(mac_withdraw_option.get_name_leafdata());
    if (mac_withdraw_relay.is_set || is_set(mac_withdraw_relay.yfilter)) leaf_name_data.push_back(mac_withdraw_relay.get_name_leafdata());
    if (num_vn_is.is_set || is_set(num_vn_is.yfilter)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.yfilter)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_access_vf_is.is_set || is_set(number_access_vf_is.yfilter)) leaf_name_data.push_back(number_access_vf_is.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_pb_bs.is_set || is_set(number_pb_bs.yfilter)) leaf_name_data.push_back(number_pb_bs.get_name_leafdata());
    if (number_pb_bs_up.is_set || is_set(number_pb_bs_up.yfilter)) leaf_name_data.push_back(number_pb_bs_up.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (number_vf_is.is_set || is_set(number_vf_is.yfilter)) leaf_name_data.push_back(number_vf_is.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (p2mp_enabled.is_set || is_set(p2mp_enabled.yfilter)) leaf_name_data.push_back(p2mp_enabled.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.yfilter)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.yfilter)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.yfilter)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.yfilter)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.yfilter)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (vine_fsm_state.is_set || is_set(vine_fsm_state.yfilter)) leaf_name_data.push_back(vine_fsm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-access-vfi")
    {
        for(auto const & c : bridge_access_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi>();
        c->parent = this;
        bridge_access_vfi.push_back(c);
        return c;
    }

    if(child_yang_name == "bridge-vfi")
    {
        for(auto const & c : bridge_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi>();
        c->parent = this;
        bridge_vfi.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-parameters")
    {
        if(evpn_parameters == nullptr)
        {
            evpn_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters>();
        }
        return evpn_parameters;
    }

    if(child_yang_name == "mac-filter")
    {
        for(auto const & c : mac_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter>();
        c->parent = this;
        mac_filter.push_back(c);
        return c;
    }

    if(child_yang_name == "pbb-parameters")
    {
        if(pbb_parameters == nullptr)
        {
            pbb_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters>();
        }
        return pbb_parameters;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters == nullptr)
        {
            security_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters>();
        }
        return security_parameters;
    }

    if(child_yang_name == "vni-parameters")
    {
        if(vni_parameters == nullptr)
        {
            vni_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters>();
        }
        return vni_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_access_vfi)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bridge_vfi)
    {
        children[c->get_segment_path()] = c;
    }

    if(evpn_parameters != nullptr)
    {
        children["evpn-parameters"] = evpn_parameters;
    }

    for (auto const & c : mac_filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(pbb_parameters != nullptr)
    {
        children["pbb-parameters"] = pbb_parameters;
    }

    if(rd != nullptr)
    {
        children["rd"] = rd;
    }

    if(security_parameters != nullptr)
    {
        children["security-parameters"] = security_parameters;
    }

    if(vni_parameters != nullptr)
    {
        children["vni-parameters"] = vni_parameters;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acpwup")
    {
        acpwup = value;
        acpwup.value_namespace = name_space;
        acpwup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-coupled-state")
    {
        bridge_coupled_state = value;
        bridge_coupled_state.value_namespace = name_space;
        bridge_coupled_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-description")
    {
        bridge_description = value;
        bridge_description.value_namespace = name_space;
        bridge_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-internal-msti")
    {
        bridge_internal_msti = value;
        bridge_internal_msti.value_namespace = name_space;
        bridge_internal_msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-msti")
    {
        bridge_msti = value;
        bridge_msti.value_namespace = name_space;
        bridge_msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-mtu")
    {
        bridge_mtu = value;
        bridge_mtu.value_namespace = name_space;
        bridge_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
        bridge_name.value_namespace = name_space;
        bridge_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-shg-id")
    {
        bridge_shg_id = value;
        bridge_shg_id.value_namespace = name_space;
        bridge_shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-state")
    {
        bridge_state = value;
        bridge_state.value_namespace = name_space;
        bridge_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-type")
    {
        bridge_type = value;
        bridge_type.value_namespace = name_space;
        bridge_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disposition-bytecount")
    {
        disposition_bytecount = value;
        disposition_bytecount.value_namespace = name_space;
        disposition_bytecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disposition-pkt-count")
    {
        disposition_pkt_count = value;
        disposition_pkt_count.value_namespace = name_space;
        disposition_pkt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flodd-group-id-down")
    {
        flodd_group_id_down = value;
        flodd_group_id_down.value_namespace = name_space;
        flodd_group_id_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposition-byte-count")
    {
        imposition_byte_count = value;
        imposition_byte_count.value_namespace = name_space;
        imposition_byte_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposition-pkt-count")
    {
        imposition_pkt_count = value;
        imposition_pkt_count.value_namespace = name_space;
        imposition_pkt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bridge-partially-programmed")
    {
        is_bridge_partially_programmed = value;
        is_bridge_partially_programmed.value_namespace = name_space;
        is_bridge_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rd-configured")
    {
        is_rd_configured = value;
        is_rd_configured.value_namespace = name_space;
        is_rd_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
        last_time_status_changed.value_namespace = name_space;
        last_time_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-down")
    {
        mac_limit_down = value;
        mac_limit_down.value_namespace = name_space;
        mac_limit_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
        mac_withdraw.value_namespace = name_space;
        mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw-access")
    {
        mac_withdraw_access = value;
        mac_withdraw_access.value_namespace = name_space;
        mac_withdraw_access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw-option")
    {
        mac_withdraw_option = value;
        mac_withdraw_option.value_namespace = name_space;
        mac_withdraw_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw-relay")
    {
        mac_withdraw_relay = value;
        mac_withdraw_relay.value_namespace = name_space;
        mac_withdraw_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
        num_vn_is.value_namespace = name_space;
        num_vn_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
        num_vn_is_up.value_namespace = name_space;
        num_vn_is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-access-vf-is")
    {
        number_access_vf_is = value;
        number_access_vf_is.value_namespace = name_space;
        number_access_vf_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pb-bs")
    {
        number_pb_bs = value;
        number_pb_bs.value_namespace = name_space;
        number_pb_bs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pb-bs-up")
    {
        number_pb_bs_up = value;
        number_pb_bs_up.value_namespace = name_space;
        number_pb_bs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vf-is")
    {
        number_vf_is = value;
        number_vf_is.value_namespace = name_space;
        number_vf_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-enabled")
    {
        p2mp_enabled = value;
        p2mp_enabled.value_namespace = name_space;
        p2mp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
        partially_programmed_a_cs.value_namespace = name_space;
        partially_programmed_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
        partially_programmed_pseudowires.value_namespace = name_space;
        partially_programmed_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
        standby_pseudowires.value_namespace = name_space;
        standby_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
        time_elapsed_creation.value_namespace = name_space;
        time_elapsed_creation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
        time_elapsed_status_changed.value_namespace = name_space;
        time_elapsed_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vine-fsm-state")
    {
        vine_fsm_state = value;
        vine_fsm_state.value_namespace = name_space;
        vine_fsm_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acpwup")
    {
        acpwup.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "bridge-coupled-state")
    {
        bridge_coupled_state.yfilter = yfilter;
    }
    if(value_path == "bridge-description")
    {
        bridge_description.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-internal-msti")
    {
        bridge_internal_msti.yfilter = yfilter;
    }
    if(value_path == "bridge-msti")
    {
        bridge_msti.yfilter = yfilter;
    }
    if(value_path == "bridge-mtu")
    {
        bridge_mtu.yfilter = yfilter;
    }
    if(value_path == "bridge-name")
    {
        bridge_name.yfilter = yfilter;
    }
    if(value_path == "bridge-shg-id")
    {
        bridge_shg_id.yfilter = yfilter;
    }
    if(value_path == "bridge-state")
    {
        bridge_state.yfilter = yfilter;
    }
    if(value_path == "bridge-type")
    {
        bridge_type.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "disposition-bytecount")
    {
        disposition_bytecount.yfilter = yfilter;
    }
    if(value_path == "disposition-pkt-count")
    {
        disposition_pkt_count.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "flodd-group-id-down")
    {
        flodd_group_id_down.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "imposition-byte-count")
    {
        imposition_byte_count.yfilter = yfilter;
    }
    if(value_path == "imposition-pkt-count")
    {
        imposition_pkt_count.yfilter = yfilter;
    }
    if(value_path == "is-bridge-partially-programmed")
    {
        is_bridge_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "is-rd-configured")
    {
        is_rd_configured.yfilter = yfilter;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "mac-limit-down")
    {
        mac_limit_down.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw-access")
    {
        mac_withdraw_access.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw-option")
    {
        mac_withdraw_option.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw-relay")
    {
        mac_withdraw_relay.yfilter = yfilter;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-access-vf-is")
    {
        number_access_vf_is.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-pb-bs")
    {
        number_pb_bs.yfilter = yfilter;
    }
    if(value_path == "number-pb-bs-up")
    {
        number_pb_bs_up.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "number-vf-is")
    {
        number_vf_is.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
    if(value_path == "p2mp-enabled")
    {
        p2mp_enabled.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed.yfilter = yfilter;
    }
    if(value_path == "vine-fsm-state")
    {
        vine_fsm_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-access-vfi" || name == "bridge-vfi" || name == "evpn-parameters" || name == "mac-filter" || name == "pbb-parameters" || name == "rd" || name == "security-parameters" || name == "vni-parameters" || name == "acpwup" || name == "as" || name == "bridge-coupled-state" || name == "bridge-description" || name == "bridge-domain-id" || name == "bridge-internal-msti" || name == "bridge-msti" || name == "bridge-mtu" || name == "bridge-name" || name == "bridge-shg-id" || name == "bridge-state" || name == "bridge-type" || name == "configured" || name == "disposition-bytecount" || name == "disposition-pkt-count" || name == "evi" || name == "flodd-group-id-down" || name == "group-name" || name == "imposition-byte-count" || name == "imposition-pkt-count" || name == "is-bridge-partially-programmed" || name == "is-rd-configured" || name == "last-time-status-changed" || name == "load-balance" || name == "mac-limit-down" || name == "mac-withdraw" || name == "mac-withdraw-access" || name == "mac-withdraw-option" || name == "mac-withdraw-relay" || name == "num-vn-is" || name == "num-vn-is-up" || name == "number-a-cs" || name == "number-a-cs-up" || name == "number-access-vf-is" || name == "number-p-ws-up" || name == "number-pb-bs" || name == "number-pb-bs-up" || name == "number-pseudowires" || name == "number-vf-is" || name == "nv-satellite-offload-ipv4-multicast-disabled" || name == "p2mp-enabled" || name == "partially-programmed-a-cs" || name == "partially-programmed-pseudowires" || name == "shutdown" || name == "standby-pseudowires" || name == "time-created" || name == "time-elapsed-creation" || name == "time-elapsed-status-changed" || name == "vine-fsm-state")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::BridgeAccessVfi()
    :
    access{YType::boolean, "access"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    shutdown{YType::boolean, "shutdown"},
    vfi_name{YType::str, "vfi-name"},
    vfi_state{YType::enumeration, "vfi-state"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;

    yang_name = "bridge-access-vfi"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::~BridgeAccessVfi()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_data() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_data())
            return true;
    }
    return access.is_set
	|| number_pseudowires.is_set
	|| shutdown.is_set
	|| vfi_name.is_set
	|| vfi_state.is_set
	|| (discovery_information !=  nullptr && discovery_information->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(vfi_name.yfilter)
	|| ydk::is_set(vfi_state.yfilter)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-access-vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (vfi_name.is_set || is_set(vfi_name.yfilter)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.yfilter)) leaf_name_data.push_back(vfi_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-information")
    {
        if(discovery_information == nullptr)
        {
            discovery_information = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>();
        }
        return discovery_information;
    }

    if(child_yang_name == "p2mp-information")
    {
        for(auto const & c : p2mp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery_information != nullptr)
    {
        children["discovery-information"] = discovery_information;
    }

    for (auto const & c : p2mp_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-name")
    {
        vfi_name = value;
        vfi_name.value_namespace = name_space;
        vfi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
        vfi_state.value_namespace = name_space;
        vfi_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "vfi-name")
    {
        vfi_name.yfilter = yfilter;
    }
    if(value_path == "vfi-state")
    {
        vfi_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-information" || name == "p2mp-information" || name == "access" || name == "number-pseudowires" || name == "shutdown" || name == "vfi-name" || name == "vfi-state")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::DiscoveryInformation()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    as_number{YType::uint32, "as-number"},
    export_route_policy{YType::str, "export-route-policy"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    provisioned_ve_id{YType::uint32, "provisioned-ve-id"},
    service_connected{YType::boolean, "service-connected"},
    ve_id{YType::uint32, "ve-id"},
    ve_range{YType::uint16, "ve-range"},
    vpls_id_conflict{YType::boolean, "vpls-id-conflict"},
    vpn_added{YType::boolean, "vpn-added"},
    vpn_id{YType::uint32, "vpn-id"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    vpls_id->parent = this;

    yang_name = "discovery-information"; yang_parent_name = "bridge-access-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_data() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    return ad_method.is_set
	|| ad_signalling_method.is_set
	|| as_number.is_set
	|| export_route_policy.is_set
	|| l2vpn_router_id.is_set
	|| provisioned_ve_id.is_set
	|| service_connected.is_set
	|| ve_id.is_set
	|| ve_range.is_set
	|| vpls_id_conflict.is_set
	|| vpn_added.is_set
	|| vpn_id.is_set
	|| (rd_value !=  nullptr && rd_value->has_data())
	|| (vpls_id !=  nullptr && vpls_id->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_operation() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| ydk::is_set(provisioned_ve_id.yfilter)
	|| ydk::is_set(service_connected.yfilter)
	|| ydk::is_set(ve_id.yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(vpls_id_conflict.yfilter)
	|| ydk::is_set(vpn_added.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.yfilter)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.yfilter)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.yfilter)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.yfilter)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.yfilter)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>();
        }
        return rd_value;
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>();
        }
        return vpls_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_rt)
    {
        children[c->get_segment_path()] = c;
    }

    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
        provisioned_ve_id.value_namespace = name_space;
        provisioned_ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
        service_connected.value_namespace = name_space;
        service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
        ve_id.value_namespace = name_space;
        ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
        vpls_id_conflict.value_namespace = name_space;
        vpls_id_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
        vpn_added.value_namespace = name_space;
        vpn_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id.yfilter = yfilter;
    }
    if(value_path == "service-connected")
    {
        service_connected.yfilter = yfilter;
    }
    if(value_path == "ve-id")
    {
        ve_id.yfilter = yfilter;
    }
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict.yfilter = yfilter;
    }
    if(value_path == "vpn-added")
    {
        vpn_added.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export-rt" || name == "import-rt" || name == "rd-value" || name == "vpls-id" || name == "ad-method" || name == "ad-signalling-method" || name == "as-number" || name == "export-route-policy" || name == "l2vpn-router-id" || name == "provisioned-ve-id" || name == "service-connected" || name == "ve-id" || name == "ve-range" || name == "vpls-id-conflict" || name == "vpn-added" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::P2MpInformation()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    local_label{YType::uint32, "local-label"},
    ptree_id{YType::uint32, "ptree-id"},
    signaling{YType::enumeration, "signaling"},
    transport{YType::enumeration, "transport"},
    transport_status{YType::enumeration, "transport-status"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "p2mp-information"; yang_parent_name = "bridge-access-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::~P2MpInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_data() const
{
    return attribute_set_name.is_set
	|| local_label.is_set
	|| ptree_id.is_set
	|| signaling.is_set
	|| transport.is_set
	|| transport_status.is_set
	|| tunnel_interface.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(ptree_id.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(transport_status.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (ptree_id.is_set || is_set(ptree_id.yfilter)) leaf_name_data.push_back(ptree_id.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (transport_status.is_set || is_set(transport_status.yfilter)) leaf_name_data.push_back(transport_status.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-id")
    {
        ptree_id = value;
        ptree_id.value_namespace = name_space;
        ptree_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-status")
    {
        transport_status = value;
        transport_status.value_namespace = name_space;
        transport_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "ptree-id")
    {
        ptree_id.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "transport-status")
    {
        transport_status.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-name" || name == "local-label" || name == "ptree-id" || name == "signaling" || name == "transport" || name == "transport-status" || name == "tunnel-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::BridgeVfi()
    :
    access{YType::boolean, "access"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    shutdown{YType::boolean, "shutdown"},
    vfi_name{YType::str, "vfi-name"},
    vfi_state{YType::enumeration, "vfi-state"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;

    yang_name = "bridge-vfi"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::~BridgeVfi()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_data() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_data())
            return true;
    }
    return access.is_set
	|| number_pseudowires.is_set
	|| shutdown.is_set
	|| vfi_name.is_set
	|| vfi_state.is_set
	|| (discovery_information !=  nullptr && discovery_information->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(vfi_name.yfilter)
	|| ydk::is_set(vfi_state.yfilter)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (vfi_name.is_set || is_set(vfi_name.yfilter)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.yfilter)) leaf_name_data.push_back(vfi_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-information")
    {
        if(discovery_information == nullptr)
        {
            discovery_information = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>();
        }
        return discovery_information;
    }

    if(child_yang_name == "p2mp-information")
    {
        for(auto const & c : p2mp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery_information != nullptr)
    {
        children["discovery-information"] = discovery_information;
    }

    for (auto const & c : p2mp_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-name")
    {
        vfi_name = value;
        vfi_name.value_namespace = name_space;
        vfi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
        vfi_state.value_namespace = name_space;
        vfi_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "vfi-name")
    {
        vfi_name.yfilter = yfilter;
    }
    if(value_path == "vfi-state")
    {
        vfi_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-information" || name == "p2mp-information" || name == "access" || name == "number-pseudowires" || name == "shutdown" || name == "vfi-name" || name == "vfi-state")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::DiscoveryInformation()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    as_number{YType::uint32, "as-number"},
    export_route_policy{YType::str, "export-route-policy"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    provisioned_ve_id{YType::uint32, "provisioned-ve-id"},
    service_connected{YType::boolean, "service-connected"},
    ve_id{YType::uint32, "ve-id"},
    ve_range{YType::uint16, "ve-range"},
    vpls_id_conflict{YType::boolean, "vpls-id-conflict"},
    vpn_added{YType::boolean, "vpn-added"},
    vpn_id{YType::uint32, "vpn-id"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    vpls_id->parent = this;

    yang_name = "discovery-information"; yang_parent_name = "bridge-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_data() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    return ad_method.is_set
	|| ad_signalling_method.is_set
	|| as_number.is_set
	|| export_route_policy.is_set
	|| l2vpn_router_id.is_set
	|| provisioned_ve_id.is_set
	|| service_connected.is_set
	|| ve_id.is_set
	|| ve_range.is_set
	|| vpls_id_conflict.is_set
	|| vpn_added.is_set
	|| vpn_id.is_set
	|| (rd_value !=  nullptr && rd_value->has_data())
	|| (vpls_id !=  nullptr && vpls_id->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_operation() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| ydk::is_set(provisioned_ve_id.yfilter)
	|| ydk::is_set(service_connected.yfilter)
	|| ydk::is_set(ve_id.yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(vpls_id_conflict.yfilter)
	|| ydk::is_set(vpn_added.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.yfilter)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.yfilter)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.yfilter)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.yfilter)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.yfilter)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>();
        }
        return rd_value;
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>();
        }
        return vpls_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_rt)
    {
        children[c->get_segment_path()] = c;
    }

    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
        provisioned_ve_id.value_namespace = name_space;
        provisioned_ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
        service_connected.value_namespace = name_space;
        service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
        ve_id.value_namespace = name_space;
        ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
        vpls_id_conflict.value_namespace = name_space;
        vpls_id_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
        vpn_added.value_namespace = name_space;
        vpn_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id.yfilter = yfilter;
    }
    if(value_path == "service-connected")
    {
        service_connected.yfilter = yfilter;
    }
    if(value_path == "ve-id")
    {
        ve_id.yfilter = yfilter;
    }
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict.yfilter = yfilter;
    }
    if(value_path == "vpn-added")
    {
        vpn_added.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export-rt" || name == "import-rt" || name == "rd-value" || name == "vpls-id" || name == "ad-method" || name == "ad-signalling-method" || name == "as-number" || name == "export-route-policy" || name == "l2vpn-router-id" || name == "provisioned-ve-id" || name == "service-connected" || name == "ve-id" || name == "ve-range" || name == "vpls-id-conflict" || name == "vpn-added" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::P2MpInformation()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    local_label{YType::uint32, "local-label"},
    ptree_id{YType::uint32, "ptree-id"},
    signaling{YType::enumeration, "signaling"},
    transport{YType::enumeration, "transport"},
    transport_status{YType::enumeration, "transport-status"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "p2mp-information"; yang_parent_name = "bridge-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::~P2MpInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_data() const
{
    return attribute_set_name.is_set
	|| local_label.is_set
	|| ptree_id.is_set
	|| signaling.is_set
	|| transport.is_set
	|| transport_status.is_set
	|| tunnel_interface.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(ptree_id.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(transport_status.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (ptree_id.is_set || is_set(ptree_id.yfilter)) leaf_name_data.push_back(ptree_id.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (transport_status.is_set || is_set(transport_status.yfilter)) leaf_name_data.push_back(transport_status.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-id")
    {
        ptree_id = value;
        ptree_id.value_namespace = name_space;
        ptree_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-status")
    {
        transport_status = value;
        transport_status.value_namespace = name_space;
        transport_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "ptree-id")
    {
        ptree_id.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "transport-status")
    {
        transport_status.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-name" || name == "local-label" || name == "ptree-id" || name == "signaling" || name == "transport" || name == "transport-status" || name == "tunnel-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnParameters()
    :
    evi{YType::uint32, "evi"}
    	,
    evpn_port(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort>())
{
    evpn_port->parent = this;

    yang_name = "evpn-parameters"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::~EvpnParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::has_data() const
{
    return evi.is_set
	|| (evpn_port !=  nullptr && evpn_port->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| (evpn_port !=  nullptr && evpn_port->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-port")
    {
        if(evpn_port == nullptr)
        {
            evpn_port = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort>();
        }
        return evpn_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_port != nullptr)
    {
        children["evpn-port"] = evpn_port;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-port" || name == "evi")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::EvpnPort()
    :
    evpn_port_state{YType::enumeration, "evpn-port-state"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics>())
{
    security_parameters->parent = this;
    statistics->parent = this;

    yang_name = "evpn-port"; yang_parent_name = "evpn-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::~EvpnPort()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::has_data() const
{
    return evpn_port_state.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_port_state.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_port_state.is_set || is_set(evpn_port_state.yfilter)) leaf_name_data.push_back(evpn_port_state.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-parameters")
    {
        if(security_parameters == nullptr)
        {
            security_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters>();
        }
        return security_parameters;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_parameters != nullptr)
    {
        children["security-parameters"] = security_parameters;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-port-state")
    {
        evpn_port_state = value;
        evpn_port_state.value_namespace = name_space;
        evpn_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-port-state")
    {
        evpn_port_state.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-parameters" || name == "statistics" || name == "evpn-port-state" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl>())
{
    base->parent = this;
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "evpn-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dhcpv4_trust.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.yfilter)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base>();
        }
        return base;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
        dhcpv4_trust.value_namespace = name_space;
        dhcpv4_trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dhcpv4-trust" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;

    yang_name = "base"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/base/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "evpn-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::MacFilter()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "mac-filter"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::~MacFilter()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbParameters()
    :
    type{YType::enumeration, "type"}
    	,
    pbb_core(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore>())
	,pbb_edge(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge>())
{
    pbb_core->parent = this;
    pbb_edge->parent = this;

    yang_name = "pbb-parameters"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::~PbbParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::has_data() const
{
    return type.is_set
	|| (pbb_core !=  nullptr && pbb_core->has_data())
	|| (pbb_edge !=  nullptr && pbb_edge->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (pbb_core !=  nullptr && pbb_core->has_operation())
	|| (pbb_edge !=  nullptr && pbb_edge->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core")
    {
        if(pbb_core == nullptr)
        {
            pbb_core = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore>();
        }
        return pbb_core;
    }

    if(child_yang_name == "pbb-edge")
    {
        if(pbb_edge == nullptr)
        {
            pbb_edge = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge>();
        }
        return pbb_edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_core != nullptr)
    {
        children["pbb-core"] = pbb_core;
    }

    if(pbb_edge != nullptr)
    {
        children["pbb-edge"] = pbb_edge;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core" || name == "pbb-edge" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::PbbCore()
    :
    num_ass_edge{YType::uint32, "num-ass-edge"}
    	,
    core_port(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort>())
{
    core_port->parent = this;

    yang_name = "pbb-core"; yang_parent_name = "pbb-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::~PbbCore()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::has_data() const
{
    return num_ass_edge.is_set
	|| (core_port !=  nullptr && core_port->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_ass_edge.yfilter)
	|| (core_port !=  nullptr && core_port->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_ass_edge.is_set || is_set(num_ass_edge.yfilter)) leaf_name_data.push_back(num_ass_edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-port")
    {
        if(core_port == nullptr)
        {
            core_port = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort>();
        }
        return core_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_port != nullptr)
    {
        children["core-port"] = core_port;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-ass-edge")
    {
        num_ass_edge = value;
        num_ass_edge.value_namespace = name_space;
        num_ass_edge.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-ass-edge")
    {
        num_ass_edge.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-port" || name == "num-ass-edge")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::CorePort()
    :
    core_port_state{YType::enumeration, "core-port-state"},
    vlan_id{YType::uint32, "vlan-id"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters>())
{
    security_parameters->parent = this;

    yang_name = "core-port"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::~CorePort()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::has_data() const
{
    return core_port_state.is_set
	|| vlan_id.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core_port_state.yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (security_parameters !=  nullptr && security_parameters->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_port_state.is_set || is_set(core_port_state.yfilter)) leaf_name_data.push_back(core_port_state.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-parameters")
    {
        if(security_parameters == nullptr)
        {
            security_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters>();
        }
        return security_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_parameters != nullptr)
    {
        children["security-parameters"] = security_parameters;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core-port-state")
    {
        core_port_state = value;
        core_port_state.value_namespace = name_space;
        core_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core-port-state")
    {
        core_port_state.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-parameters" || name == "core-port-state" || name == "vlan-id" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl>())
{
    base->parent = this;
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "core-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dhcpv4_trust.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.yfilter)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base>();
        }
        return base;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
        dhcpv4_trust.value_namespace = name_space;
        dhcpv4_trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dhcpv4-trust" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;

    yang_name = "base"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/base/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::PbbEdge()
    :
    core_bridge_name{YType::str, "core-bridge-name"},
    core_bridge_state{YType::enumeration, "core-bridge-state"},
    i_sid{YType::uint32, "i-sid"},
    mirp_lite_protocol{YType::enumeration, "mirp-lite-protocol"},
    mirp_lite_status{YType::enumeration, "mirp-lite-status"}
    	,
    edge_port(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort>())
{
    edge_port->parent = this;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::~PbbEdge()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::has_data() const
{
    return core_bridge_name.is_set
	|| core_bridge_state.is_set
	|| i_sid.is_set
	|| mirp_lite_protocol.is_set
	|| mirp_lite_status.is_set
	|| (edge_port !=  nullptr && edge_port->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core_bridge_name.yfilter)
	|| ydk::is_set(core_bridge_state.yfilter)
	|| ydk::is_set(i_sid.yfilter)
	|| ydk::is_set(mirp_lite_protocol.yfilter)
	|| ydk::is_set(mirp_lite_status.yfilter)
	|| (edge_port !=  nullptr && edge_port->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_bridge_name.is_set || is_set(core_bridge_name.yfilter)) leaf_name_data.push_back(core_bridge_name.get_name_leafdata());
    if (core_bridge_state.is_set || is_set(core_bridge_state.yfilter)) leaf_name_data.push_back(core_bridge_state.get_name_leafdata());
    if (i_sid.is_set || is_set(i_sid.yfilter)) leaf_name_data.push_back(i_sid.get_name_leafdata());
    if (mirp_lite_protocol.is_set || is_set(mirp_lite_protocol.yfilter)) leaf_name_data.push_back(mirp_lite_protocol.get_name_leafdata());
    if (mirp_lite_status.is_set || is_set(mirp_lite_status.yfilter)) leaf_name_data.push_back(mirp_lite_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge-port")
    {
        if(edge_port == nullptr)
        {
            edge_port = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort>();
        }
        return edge_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(edge_port != nullptr)
    {
        children["edge-port"] = edge_port;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core-bridge-name")
    {
        core_bridge_name = value;
        core_bridge_name.value_namespace = name_space;
        core_bridge_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-bridge-state")
    {
        core_bridge_state = value;
        core_bridge_state.value_namespace = name_space;
        core_bridge_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "i-sid")
    {
        i_sid = value;
        i_sid.value_namespace = name_space;
        i_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-protocol")
    {
        mirp_lite_protocol = value;
        mirp_lite_protocol.value_namespace = name_space;
        mirp_lite_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-status")
    {
        mirp_lite_status = value;
        mirp_lite_status.value_namespace = name_space;
        mirp_lite_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core-bridge-name")
    {
        core_bridge_name.yfilter = yfilter;
    }
    if(value_path == "core-bridge-state")
    {
        core_bridge_state.yfilter = yfilter;
    }
    if(value_path == "i-sid")
    {
        i_sid.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-protocol")
    {
        mirp_lite_protocol.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-status")
    {
        mirp_lite_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge-port" || name == "core-bridge-name" || name == "core-bridge-state" || name == "i-sid" || name == "mirp-lite-protocol" || name == "mirp-lite-status")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::EdgePort()
    :
    edge_port_state{YType::enumeration, "edge-port-state"},
    unknown_unicast_mac{YType::str, "unknown-unicast-mac"},
    unknown_unicast_mac_set{YType::boolean, "unknown-unicast-mac-set"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics>())
{
    security_parameters->parent = this;
    statistics->parent = this;

    yang_name = "edge-port"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::~EdgePort()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::has_data() const
{
    for (std::size_t index=0; index<bmac_mapping.size(); index++)
    {
        if(bmac_mapping[index]->has_data())
            return true;
    }
    return edge_port_state.is_set
	|| unknown_unicast_mac.is_set
	|| unknown_unicast_mac_set.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::has_operation() const
{
    for (std::size_t index=0; index<bmac_mapping.size(); index++)
    {
        if(bmac_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_port_state.yfilter)
	|| ydk::is_set(unknown_unicast_mac.yfilter)
	|| ydk::is_set(unknown_unicast_mac_set.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_port_state.is_set || is_set(edge_port_state.yfilter)) leaf_name_data.push_back(edge_port_state.get_name_leafdata());
    if (unknown_unicast_mac.is_set || is_set(unknown_unicast_mac.yfilter)) leaf_name_data.push_back(unknown_unicast_mac.get_name_leafdata());
    if (unknown_unicast_mac_set.is_set || is_set(unknown_unicast_mac_set.yfilter)) leaf_name_data.push_back(unknown_unicast_mac_set.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmac-mapping")
    {
        for(auto const & c : bmac_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping>();
        c->parent = this;
        bmac_mapping.push_back(c);
        return c;
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters == nullptr)
        {
            security_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters>();
        }
        return security_parameters;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmac_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    if(security_parameters != nullptr)
    {
        children["security-parameters"] = security_parameters;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-port-state")
    {
        edge_port_state = value;
        edge_port_state.value_namespace = name_space;
        edge_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-mac")
    {
        unknown_unicast_mac = value;
        unknown_unicast_mac.value_namespace = name_space;
        unknown_unicast_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-mac-set")
    {
        unknown_unicast_mac_set = value;
        unknown_unicast_mac_set.value_namespace = name_space;
        unknown_unicast_mac_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-port-state")
    {
        edge_port_state.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-mac")
    {
        unknown_unicast_mac.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-mac-set")
    {
        unknown_unicast_mac_set.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmac-mapping" || name == "security-parameters" || name == "statistics" || name == "edge-port-state" || name == "unknown-unicast-mac" || name == "unknown-unicast-mac-set" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::BmacMapping()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "bmac-mapping"; yang_parent_name = "edge-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::~BmacMapping()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmac-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl>())
{
    base->parent = this;
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "edge-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dhcpv4_trust.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.yfilter)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base>();
        }
        return base;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
        dhcpv4_trust.value_namespace = name_space;
        dhcpv4_trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dhcpv4-trust" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;

    yang_name = "base"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/base/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "edge-port"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}


}
}

