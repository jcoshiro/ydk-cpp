
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_length{YType::uint16, "attribute-length"},
    attribute_type{YType::uint16, "attribute-type"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    return attribute_length.is_set
	|| attribute_type.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-length")
    {
        attribute_length = value;
        attribute_length.value_namespace = name_space;
        attribute_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-value")
    {
        attribute_value = value;
        attribute_value.value_namespace = name_space;
        attribute_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-length")
    {
        attribute_length.yfilter = yfilter;
    }
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "attribute-value")
    {
        attribute_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-length" || name == "attribute-type" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_data() const
{
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_data() const
{
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::RouteAttrList()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    origin_type{YType::enumeration, "origin-type"}
    	,
    aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>())
	,next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>())
{
    aggregrator_attributes->parent = this;
    next_hop->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_data() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| origin_type.is_set
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregrator_attributes != nullptr)
    {
        children["aggregrator-attributes"] = aggregrator_attributes;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregrator-attributes" || name == "community" || name == "next-hop" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "local-pref" || name == "med" || name == "origin-type")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4")
    {
        as4 = value;
        as4.value_namespace = name_space;
        as4.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_data() const
{
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}


}
}

