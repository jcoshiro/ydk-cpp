
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_io_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_io_oper {

Ipv4Network::Ipv4Network()
    :
    interfaces(std::make_shared<Ipv4Network::Interfaces>())
	,nodes(std::make_shared<Ipv4Network::Nodes>())
{
    interfaces->parent = this;
    nodes->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-io-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv4Network::~Ipv4Network()
{
}

bool Ipv4Network::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv4Network::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ipv4Network::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv4Network::clone_ptr() const
{
    return std::make_shared<Ipv4Network>();
}

std::string Ipv4Network::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Network::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Network::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4Network::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "nodes")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Network::Interfaces::~Interfaces()
{
}

bool Ipv4Network::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Network::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-oper:interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Network::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    vrfs(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Network::Interfaces::Interface::~Interface()
{
}

bool Ipv4Network::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Network::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Network::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/Cisco-IOS-XR-ipv4-ma-oper:interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Network::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "interface-name")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::~Vrfs()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    brief(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief>())
	,detail(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::Brief()
    :
    line_state{YType::enumeration, "line-state"},
    primary_address{YType::str, "primary-address"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "brief"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::~Brief()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::has_data() const
{
    return line_state.is_set
	|| primary_address.is_set
	|| vrf_id.is_set
	|| vrf_name.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-state" || name == "primary-address" || name == "vrf-id" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Detail()
    :
    direct_broadcast{YType::boolean, "direct-broadcast"},
    flow_tag_dst{YType::boolean, "flow-tag-dst"},
    flow_tag_src{YType::boolean, "flow-tag-src"},
    line_state{YType::enumeration, "line-state"},
    mask_reply{YType::boolean, "mask-reply"},
    mlacp_active{YType::boolean, "mlacp-active"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    primary_address{YType::str, "primary-address"},
    proxy_arp_disabled{YType::boolean, "proxy-arp-disabled"},
    redirect{YType::boolean, "redirect"},
    rg_id_exists{YType::boolean, "rg-id-exists"},
    route_tag{YType::uint32, "route-tag"},
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"},
    unreachable{YType::boolean, "unreachable"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    acl(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl>())
	,bgp_pa(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa>())
	,caps_utime(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime>())
	,fwd_dis_utime(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime>())
	,fwd_en_utime(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime>())
	,helper_address(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress>())
	,idb_utime(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime>())
	,multi_acl(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl>())
	,pub_utime(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime>())
	,rpf(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf>())
{
    acl->parent = this;
    bgp_pa->parent = this;
    caps_utime->parent = this;
    fwd_dis_utime->parent = this;
    fwd_en_utime->parent = this;
    helper_address->parent = this;
    idb_utime->parent = this;
    multi_acl->parent = this;
    pub_utime->parent = this;
    rpf->parent = this;

    yang_name = "detail"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::~Detail()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_data())
            return true;
    }
    return direct_broadcast.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| line_state.is_set
	|| mask_reply.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| primary_address.is_set
	|| proxy_arp_disabled.is_set
	|| redirect.is_set
	|| rg_id_exists.is_set
	|| route_tag.is_set
	|| unnumbered_interface_name.is_set
	|| unreachable.is_set
	|| vrf_id.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (helper_address !=  nullptr && helper_address->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (multi_acl !=  nullptr && multi_acl->has_data())
	|| (pub_utime !=  nullptr && pub_utime->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direct_broadcast.yfilter)
	|| ydk::is_set(flow_tag_dst.yfilter)
	|| ydk::is_set(flow_tag_src.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(mask_reply.yfilter)
	|| ydk::is_set(mlacp_active.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(proxy_arp_disabled.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(rg_id_exists.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (caps_utime !=  nullptr && caps_utime->has_operation())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_operation())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_operation())
	|| (helper_address !=  nullptr && helper_address->has_operation())
	|| (idb_utime !=  nullptr && idb_utime->has_operation())
	|| (multi_acl !=  nullptr && multi_acl->has_operation())
	|| (pub_utime !=  nullptr && pub_utime->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.yfilter)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.yfilter)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.yfilter)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.yfilter)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (proxy_arp_disabled.is_set || is_set(proxy_arp_disabled.yfilter)) leaf_name_data.push_back(proxy_arp_disabled.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.yfilter)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime == nullptr)
        {
            caps_utime = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime>();
        }
        return caps_utime;
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime == nullptr)
        {
            fwd_dis_utime = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime>();
        }
        return fwd_dis_utime;
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime == nullptr)
        {
            fwd_en_utime = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime>();
        }
        return fwd_en_utime;
    }

    if(child_yang_name == "helper-address")
    {
        if(helper_address == nullptr)
        {
            helper_address = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress>();
        }
        return helper_address;
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime == nullptr)
        {
            idb_utime = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime>();
        }
        return idb_utime;
    }

    if(child_yang_name == "multi-acl")
    {
        if(multi_acl == nullptr)
        {
            multi_acl = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl>();
        }
        return multi_acl;
    }

    if(child_yang_name == "multicast-group")
    {
        for(auto const & c : multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(c);
        return c;
    }

    if(child_yang_name == "pub-utime")
    {
        if(pub_utime == nullptr)
        {
            pub_utime = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime>();
        }
        return pub_utime;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "secondary-address")
    {
        for(auto const & c : secondary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress>();
        c->parent = this;
        secondary_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(caps_utime != nullptr)
    {
        children["caps-utime"] = caps_utime;
    }

    if(fwd_dis_utime != nullptr)
    {
        children["fwd-dis-utime"] = fwd_dis_utime;
    }

    if(fwd_en_utime != nullptr)
    {
        children["fwd-en-utime"] = fwd_en_utime;
    }

    if(helper_address != nullptr)
    {
        children["helper-address"] = helper_address;
    }

    if(idb_utime != nullptr)
    {
        children["idb-utime"] = idb_utime;
    }

    if(multi_acl != nullptr)
    {
        children["multi-acl"] = multi_acl;
    }

    for (auto const & c : multicast_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(pub_utime != nullptr)
    {
        children["pub-utime"] = pub_utime;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    for (auto const & c : secondary_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
        flow_tag_dst.value_namespace = name_space;
        flow_tag_dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
        flow_tag_src.value_namespace = name_space;
        flow_tag_src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
        mask_reply.value_namespace = name_space;
        mask_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
        mlacp_active.value_namespace = name_space;
        mlacp_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled = value;
        proxy_arp_disabled.value_namespace = name_space;
        proxy_arp_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
        rg_id_exists.value_namespace = name_space;
        rg_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst.yfilter = yfilter;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "mask-reply")
    {
        mask_reply.yfilter = yfilter;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "bgp-pa" || name == "caps-utime" || name == "fwd-dis-utime" || name == "fwd-en-utime" || name == "helper-address" || name == "idb-utime" || name == "multi-acl" || name == "multicast-group" || name == "pub-utime" || name == "rpf" || name == "secondary-address" || name == "direct-broadcast" || name == "flow-tag-dst" || name == "flow-tag-src" || name == "line-state" || name == "mask-reply" || name == "mlacp-active" || name == "mtu" || name == "prefix-length" || name == "primary-address" || name == "proxy-arp-disabled" || name == "redirect" || name == "rg-id-exists" || name == "route-tag" || name == "unnumbered-interface-name" || name == "unreachable" || name == "vrf-id")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::Acl()
    :
    common_in_bound{YType::str, "common-in-bound"},
    common_out_bound{YType::str, "common-out-bound"},
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{

    yang_name = "acl"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::~Acl()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| inbound.is_set
	|| outbound.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_in_bound.yfilter)
	|| ydk::is_set(common_out_bound.yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_in_bound.is_set || is_set(common_in_bound.yfilter)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.yfilter)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());
    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
        common_in_bound.value_namespace = name_space;
        common_in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
        common_out_bound.value_namespace = name_space;
        common_out_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound.yfilter = yfilter;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-in-bound" || name == "common-out-bound" || name == "inbound" || name == "outbound")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::BgpPa()
    :
    input(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input>())
	,output(std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::~BgpPa()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::Input()
    :
    destination{YType::boolean, "destination"},
    enable{YType::boolean, "enable"},
    source{YType::boolean, "source"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::~Input()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "enable" || name == "source")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::Output()
    :
    destination{YType::boolean, "destination"},
    enable{YType::boolean, "enable"},
    source{YType::boolean, "source"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::~Output()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "enable" || name == "source")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::CapsUtime()
{

    yang_name = "caps-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::FwdDisUtime()
{

    yang_name = "fwd-dis-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::FwdEnUtime()
{

    yang_name = "fwd-en-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::HelperAddress()
    :
    address_array{YType::str, "address-array"}
{

    yang_name = "helper-address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::~HelperAddress()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::has_data() const
{
    for (auto const & leaf : address_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::has_operation() const
{
    for (auto const & leaf : address_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_array.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_array_name_datas = address_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_array_name_datas.begin(), address_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-array")
    {
        address_array.append(value);
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-array")
    {
        address_array.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-array")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::IdbUtime()
{

    yang_name = "idb-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::MultiAcl()
    :
    common{YType::str, "common"},
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{

    yang_name = "multi-acl"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::~MultiAcl()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::has_data() const
{
    for (auto const & leaf : common.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inbound.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : outbound.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::has_operation() const
{
    for (auto const & leaf : common.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inbound.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : outbound.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto common_name_datas = common.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), common_name_datas.begin(), common_name_datas.end());
    auto inbound_name_datas = inbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inbound_name_datas.begin(), inbound_name_datas.end());
    auto outbound_name_datas = outbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outbound_name_datas.begin(), outbound_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common.append(value);
    }
    if(value_path == "inbound")
    {
        inbound.append(value);
    }
    if(value_path == "outbound")
    {
        outbound.append(value);
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "inbound" || name == "outbound")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::MulticastGroup()
    :
    group_address{YType::str, "group-address"}
{

    yang_name = "multicast-group"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::has_data() const
{
    return group_address.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::PubUtime()
{

    yang_name = "pub-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::~PubUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::Rpf()
    :
    allow_default_route{YType::boolean, "allow-default-route"},
    allow_self_ping{YType::boolean, "allow-self-ping"},
    enable{YType::boolean, "enable"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "rpf"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::~Rpf()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_default_route.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default_route.is_set || is_set(allow_default_route.yfilter)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
        allow_default_route.value_namespace = name_space;
        allow_default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-default-route" || name == "allow-self-ping" || name == "enable" || name == "mode")
        return true;
    return false;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::SecondaryAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "secondary-address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::~SecondaryAddress()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag")
        return true;
    return false;
}

Ipv4Network::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Network::Nodes::~Nodes()
{
}

bool Ipv4Network::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Network::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    interface_data(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData>())
	,statistics(std::make_shared<Ipv4Network::Nodes::Node::Statistics>())
{
    interface_data->parent = this;
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Network::Nodes::Node::~Node()
{
}

bool Ipv4Network::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interface_data !=  nullptr && interface_data->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Network::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interface_data !=  nullptr && interface_data->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Network::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Network::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-data")
    {
        if(interface_data == nullptr)
        {
            interface_data = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData>();
        }
        return interface_data;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Network::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_data != nullptr)
    {
        children["interface-data"] = interface_data;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Network::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-data" || name == "statistics" || name == "node-name")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::InterfaceData()
    :
    summary(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary>())
	,vrfs(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs>())
{
    summary->parent = this;
    vrfs->parent = this;

    yang_name = "interface-data"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::~InterfaceData()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Network::Nodes::Node::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "vrfs")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::Summary()
    :
    if_up_down_basecaps_up{YType::uint32, "if-up-down-basecaps-up"}
    	,
    if_down_down(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown>())
	,if_shutdown_down(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>())
	,if_up_down(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown>())
	,if_up_up(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp>())
{
    if_down_down->parent = this;
    if_shutdown_down->parent = this;
    if_up_down->parent = this;
    if_up_up->parent = this;

    yang_name = "summary"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::~Summary()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::has_data() const
{
    return if_up_down_basecaps_up.is_set
	|| (if_down_down !=  nullptr && if_down_down->has_data())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_data())
	|| (if_up_down !=  nullptr && if_up_down->has_data())
	|| (if_up_up !=  nullptr && if_up_up->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_up_down_basecaps_up.yfilter)
	|| (if_down_down !=  nullptr && if_down_down->has_operation())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_operation())
	|| (if_up_down !=  nullptr && if_up_down->has_operation())
	|| (if_up_up !=  nullptr && if_up_up->has_operation());
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_up_down_basecaps_up.is_set || is_set(if_up_down_basecaps_up.yfilter)) leaf_name_data.push_back(if_up_down_basecaps_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-down-down")
    {
        if(if_down_down == nullptr)
        {
            if_down_down = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown>();
        }
        return if_down_down;
    }

    if(child_yang_name == "if-shutdown-down")
    {
        if(if_shutdown_down == nullptr)
        {
            if_shutdown_down = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>();
        }
        return if_shutdown_down;
    }

    if(child_yang_name == "if-up-down")
    {
        if(if_up_down == nullptr)
        {
            if_up_down = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown>();
        }
        return if_up_down;
    }

    if(child_yang_name == "if-up-up")
    {
        if(if_up_up == nullptr)
        {
            if_up_up = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp>();
        }
        return if_up_up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(if_down_down != nullptr)
    {
        children["if-down-down"] = if_down_down;
    }

    if(if_shutdown_down != nullptr)
    {
        children["if-shutdown-down"] = if_shutdown_down;
    }

    if(if_up_down != nullptr)
    {
        children["if-up-down"] = if_up_down;
    }

    if(if_up_up != nullptr)
    {
        children["if-up-up"] = if_up_up;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up = value;
        if_up_down_basecaps_up.value_namespace = name_space;
        if_up_down_basecaps_up.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-down-down" || name == "if-shutdown-down" || name == "if-up-down" || name == "if-up-up" || name == "if-up-down-basecaps-up")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::IfDownDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unassigned{YType::uint32, "ip-unassigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"}
{

    yang_name = "if-down-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::~IfDownDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-down-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unassigned" || name == "ip-unnumbered")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::IfShutdownDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unassigned{YType::uint32, "ip-unassigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"}
{

    yang_name = "if-shutdown-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::~IfShutdownDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-shutdown-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unassigned" || name == "ip-unnumbered")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::IfUpDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unassigned{YType::uint32, "ip-unassigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"}
{

    yang_name = "if-up-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::~IfUpDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unassigned" || name == "ip-unnumbered")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::IfUpUp()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unassigned{YType::uint32, "ip-unassigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"}
{

    yang_name = "if-up-up"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::~IfUpUp()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unassigned" || name == "ip-unnumbered")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::~Vrfs()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    briefs(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>())
	,details(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>())
{
    briefs->parent = this;
    details->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (briefs !=  nullptr && briefs->has_data())
	|| (details !=  nullptr && details->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (briefs !=  nullptr && briefs->has_operation())
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "briefs")
    {
        if(briefs == nullptr)
        {
            briefs = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>();
        }
        return briefs;
    }

    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(briefs != nullptr)
    {
        children["briefs"] = briefs;
    }

    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "briefs" || name == "details" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Briefs()
{

    yang_name = "briefs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::~Briefs()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_data() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_operation() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        for(auto const & c : brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief>();
        c->parent = this;
        brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    line_state{YType::enumeration, "line-state"},
    primary_address{YType::str, "primary-address"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "brief"; yang_parent_name = "briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::~Brief()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_data() const
{
    return interface_name.is_set
	|| line_state.is_set
	|| primary_address.is_set
	|| vrf_id.is_set
	|| vrf_name.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "line-state" || name == "primary-address" || name == "vrf-id" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Details()
{

    yang_name = "details"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::~Details()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail>();
        c->parent = this;
        detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Detail()
    :
    interface_name{YType::str, "interface-name"},
    direct_broadcast{YType::boolean, "direct-broadcast"},
    flow_tag_dst{YType::boolean, "flow-tag-dst"},
    flow_tag_src{YType::boolean, "flow-tag-src"},
    line_state{YType::enumeration, "line-state"},
    mask_reply{YType::boolean, "mask-reply"},
    mlacp_active{YType::boolean, "mlacp-active"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    primary_address{YType::str, "primary-address"},
    proxy_arp_disabled{YType::boolean, "proxy-arp-disabled"},
    redirect{YType::boolean, "redirect"},
    rg_id_exists{YType::boolean, "rg-id-exists"},
    route_tag{YType::uint32, "route-tag"},
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"},
    unreachable{YType::boolean, "unreachable"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    acl(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl>())
	,bgp_pa(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>())
	,caps_utime(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>())
	,fwd_dis_utime(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>())
	,fwd_en_utime(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>())
	,helper_address(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress>())
	,idb_utime(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>())
	,multi_acl(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl>())
	,pub_utime(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime>())
	,rpf(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>())
{
    acl->parent = this;
    bgp_pa->parent = this;
    caps_utime->parent = this;
    fwd_dis_utime->parent = this;
    fwd_en_utime->parent = this;
    helper_address->parent = this;
    idb_utime->parent = this;
    multi_acl->parent = this;
    pub_utime->parent = this;
    rpf->parent = this;

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::~Detail()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| direct_broadcast.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| line_state.is_set
	|| mask_reply.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| primary_address.is_set
	|| proxy_arp_disabled.is_set
	|| redirect.is_set
	|| rg_id_exists.is_set
	|| route_tag.is_set
	|| unnumbered_interface_name.is_set
	|| unreachable.is_set
	|| vrf_id.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (helper_address !=  nullptr && helper_address->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (multi_acl !=  nullptr && multi_acl->has_data())
	|| (pub_utime !=  nullptr && pub_utime->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(direct_broadcast.yfilter)
	|| ydk::is_set(flow_tag_dst.yfilter)
	|| ydk::is_set(flow_tag_src.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(mask_reply.yfilter)
	|| ydk::is_set(mlacp_active.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(proxy_arp_disabled.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(rg_id_exists.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (caps_utime !=  nullptr && caps_utime->has_operation())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_operation())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_operation())
	|| (helper_address !=  nullptr && helper_address->has_operation())
	|| (idb_utime !=  nullptr && idb_utime->has_operation())
	|| (multi_acl !=  nullptr && multi_acl->has_operation())
	|| (pub_utime !=  nullptr && pub_utime->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.yfilter)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.yfilter)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.yfilter)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.yfilter)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (proxy_arp_disabled.is_set || is_set(proxy_arp_disabled.yfilter)) leaf_name_data.push_back(proxy_arp_disabled.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.yfilter)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime == nullptr)
        {
            caps_utime = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>();
        }
        return caps_utime;
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime == nullptr)
        {
            fwd_dis_utime = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>();
        }
        return fwd_dis_utime;
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime == nullptr)
        {
            fwd_en_utime = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>();
        }
        return fwd_en_utime;
    }

    if(child_yang_name == "helper-address")
    {
        if(helper_address == nullptr)
        {
            helper_address = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress>();
        }
        return helper_address;
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime == nullptr)
        {
            idb_utime = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>();
        }
        return idb_utime;
    }

    if(child_yang_name == "multi-acl")
    {
        if(multi_acl == nullptr)
        {
            multi_acl = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl>();
        }
        return multi_acl;
    }

    if(child_yang_name == "multicast-group")
    {
        for(auto const & c : multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(c);
        return c;
    }

    if(child_yang_name == "pub-utime")
    {
        if(pub_utime == nullptr)
        {
            pub_utime = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime>();
        }
        return pub_utime;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "secondary-address")
    {
        for(auto const & c : secondary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress>();
        c->parent = this;
        secondary_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(caps_utime != nullptr)
    {
        children["caps-utime"] = caps_utime;
    }

    if(fwd_dis_utime != nullptr)
    {
        children["fwd-dis-utime"] = fwd_dis_utime;
    }

    if(fwd_en_utime != nullptr)
    {
        children["fwd-en-utime"] = fwd_en_utime;
    }

    if(helper_address != nullptr)
    {
        children["helper-address"] = helper_address;
    }

    if(idb_utime != nullptr)
    {
        children["idb-utime"] = idb_utime;
    }

    if(multi_acl != nullptr)
    {
        children["multi-acl"] = multi_acl;
    }

    for (auto const & c : multicast_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(pub_utime != nullptr)
    {
        children["pub-utime"] = pub_utime;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    for (auto const & c : secondary_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
        flow_tag_dst.value_namespace = name_space;
        flow_tag_dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
        flow_tag_src.value_namespace = name_space;
        flow_tag_src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
        mask_reply.value_namespace = name_space;
        mask_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
        mlacp_active.value_namespace = name_space;
        mlacp_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled = value;
        proxy_arp_disabled.value_namespace = name_space;
        proxy_arp_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
        rg_id_exists.value_namespace = name_space;
        rg_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst.yfilter = yfilter;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "mask-reply")
    {
        mask_reply.yfilter = yfilter;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "bgp-pa" || name == "caps-utime" || name == "fwd-dis-utime" || name == "fwd-en-utime" || name == "helper-address" || name == "idb-utime" || name == "multi-acl" || name == "multicast-group" || name == "pub-utime" || name == "rpf" || name == "secondary-address" || name == "interface-name" || name == "direct-broadcast" || name == "flow-tag-dst" || name == "flow-tag-src" || name == "line-state" || name == "mask-reply" || name == "mlacp-active" || name == "mtu" || name == "prefix-length" || name == "primary-address" || name == "proxy-arp-disabled" || name == "redirect" || name == "rg-id-exists" || name == "route-tag" || name == "unnumbered-interface-name" || name == "unreachable" || name == "vrf-id")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::Acl()
    :
    common_in_bound{YType::str, "common-in-bound"},
    common_out_bound{YType::str, "common-out-bound"},
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{

    yang_name = "acl"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::~Acl()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| inbound.is_set
	|| outbound.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_in_bound.yfilter)
	|| ydk::is_set(common_out_bound.yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_in_bound.is_set || is_set(common_in_bound.yfilter)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.yfilter)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());
    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
        common_in_bound.value_namespace = name_space;
        common_in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
        common_out_bound.value_namespace = name_space;
        common_out_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound.yfilter = yfilter;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-in-bound" || name == "common-out-bound" || name == "inbound" || name == "outbound")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::BgpPa()
    :
    input(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>())
	,output(std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::~BgpPa()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::Input()
    :
    destination{YType::boolean, "destination"},
    enable{YType::boolean, "enable"},
    source{YType::boolean, "source"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::~Input()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "enable" || name == "source")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::Output()
    :
    destination{YType::boolean, "destination"},
    enable{YType::boolean, "enable"},
    source{YType::boolean, "source"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::~Output()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "enable" || name == "source")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::CapsUtime()
{

    yang_name = "caps-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::FwdDisUtime()
{

    yang_name = "fwd-dis-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::FwdEnUtime()
{

    yang_name = "fwd-en-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::HelperAddress()
{

    yang_name = "helper-address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::~HelperAddress()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::has_data() const
{
    for (std::size_t index=0; index<address_array.size(); index++)
    {
        if(address_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::has_operation() const
{
    for (std::size_t index=0; index<address_array.size(); index++)
    {
        if(address_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-array")
    {
        for(auto const & c : address_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray>();
        c->parent = this;
        address_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-array")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::AddressArray()
    :
    entry{YType::str, "entry"}
{

    yang_name = "address-array"; yang_parent_name = "helper-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::~AddressArray()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::has_data() const
{
    return entry.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::IdbUtime()
{

    yang_name = "idb-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::MultiAcl()
{

    yang_name = "multi-acl"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::~MultiAcl()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::has_data() const
{
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::has_operation() const
{
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        for(auto const & c : common)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common>();
        c->parent = this;
        common.push_back(c);
        return c;
    }

    if(child_yang_name == "inbound")
    {
        for(auto const & c : inbound)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound>();
        c->parent = this;
        inbound.push_back(c);
        return c;
    }

    if(child_yang_name == "outbound")
    {
        for(auto const & c : outbound)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound>();
        c->parent = this;
        outbound.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : common)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : inbound)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : outbound)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "inbound" || name == "outbound")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::Common()
    :
    entry{YType::str, "entry"}
{

    yang_name = "common"; yang_parent_name = "multi-acl"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::~Common()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::has_data() const
{
    return entry.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::Inbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "inbound"; yang_parent_name = "multi-acl"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::~Inbound()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::has_data() const
{
    return entry.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::Outbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "outbound"; yang_parent_name = "multi-acl"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::~Outbound()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::has_data() const
{
    return entry.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::MulticastGroup()
    :
    group_address{YType::str, "group-address"}
{

    yang_name = "multicast-group"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_data() const
{
    return group_address.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::PubUtime()
{

    yang_name = "pub-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::~PubUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::Rpf()
    :
    allow_default_route{YType::boolean, "allow-default-route"},
    allow_self_ping{YType::boolean, "allow-self-ping"},
    enable{YType::boolean, "enable"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "rpf"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::~Rpf()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_default_route.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default_route.is_set || is_set(allow_default_route.yfilter)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
        allow_default_route.value_namespace = name_space;
        allow_default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-default-route" || name == "allow-self-ping" || name == "enable" || name == "mode")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::SecondaryAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "secondary-address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::~SecondaryAddress()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::Statistics::Statistics()
    :
    traffic(std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic>())
{
    traffic->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::Statistics::~Statistics()
{
}

bool Ipv4Network::Nodes::Node::Statistics::has_data() const
{
    return (traffic !=  nullptr && traffic->has_data());
}

bool Ipv4Network::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string Ipv4Network::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic>();
        }
        return traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic != nullptr)
    {
        children["traffic"] = traffic;
    }

    return children;
}

void Ipv4Network::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Traffic()
    :
    icmp_stats(std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats>())
	,ipv4_stats(std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats>())
{
    icmp_stats->parent = this;
    ipv4_stats->parent = this;

    yang_name = "traffic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::~Traffic()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::has_data() const
{
    return (icmp_stats !=  nullptr && icmp_stats->has_data())
	|| (ipv4_stats !=  nullptr && ipv4_stats->has_data());
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| (icmp_stats !=  nullptr && icmp_stats->has_operation())
	|| (ipv4_stats !=  nullptr && ipv4_stats->has_operation());
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::Statistics::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::Statistics::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-stats")
    {
        if(icmp_stats == nullptr)
        {
            icmp_stats = std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats>();
        }
        return icmp_stats;
    }

    if(child_yang_name == "ipv4-stats")
    {
        if(ipv4_stats == nullptr)
        {
            ipv4_stats = std::make_shared<Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats>();
        }
        return ipv4_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::Statistics::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp_stats != nullptr)
    {
        children["icmp-stats"] = icmp_stats;
    }

    if(ipv4_stats != nullptr)
    {
        children["ipv4-stats"] = ipv4_stats;
    }

    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-stats" || name == "ipv4-stats")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::IcmpStats()
    :
    admin_unreachable_received{YType::uint32, "admin-unreachable-received"},
    admin_unreachable_sent{YType::uint32, "admin-unreachable-sent"},
    checksum_error{YType::uint32, "checksum-error"},
    echo_reply_received{YType::uint32, "echo-reply-received"},
    echo_reply_sent{YType::uint32, "echo-reply-sent"},
    echo_request_received{YType::uint32, "echo-request-received"},
    echo_request_sent{YType::uint32, "echo-request-sent"},
    fragment_unreachable_received{YType::uint32, "fragment-unreachable-received"},
    fragment_unreachable_sent{YType::uint32, "fragment-unreachable-sent"},
    hopcount_received{YType::uint32, "hopcount-received"},
    hopcount_sent{YType::uint32, "hopcount-sent"},
    host_unreachable_received{YType::uint32, "host-unreachable-received"},
    host_unreachable_sent{YType::uint32, "host-unreachable-sent"},
    mask_reply_received{YType::uint32, "mask-reply-received"},
    mask_reply_sent{YType::uint32, "mask-reply-sent"},
    mask_request_received{YType::uint32, "mask-request-received"},
    mask_request_sent{YType::uint32, "mask-request-sent"},
    network_unreachable_received{YType::uint32, "network-unreachable-received"},
    network_unreachable_sent{YType::uint32, "network-unreachable-sent"},
    output{YType::uint32, "output"},
    param_error_received{YType::uint32, "param-error-received"},
    param_error_send{YType::uint32, "param-error-send"},
    port_unreachable_received{YType::uint32, "port-unreachable-received"},
    port_unreachable_sent{YType::uint32, "port-unreachable-sent"},
    protocol_unreachable_received{YType::uint32, "protocol-unreachable-received"},
    protocol_unreachable_sent{YType::uint32, "protocol-unreachable-sent"},
    reassebly_received{YType::uint32, "reassebly-received"},
    reassembly_sent{YType::uint32, "reassembly-sent"},
    received{YType::uint32, "received"},
    redirect_received{YType::uint32, "redirect-received"},
    redirect_send{YType::uint32, "redirect-send"},
    router_advert_received{YType::uint32, "router-advert-received"},
    router_solicit_received{YType::uint32, "router-solicit-received"},
    source_quench_received{YType::uint32, "source-quench-received"},
    timestamp_received{YType::uint32, "timestamp-received"},
    timestamp_reply_received{YType::uint32, "timestamp-reply-received"},
    unknown{YType::uint32, "unknown"}
{

    yang_name = "icmp-stats"; yang_parent_name = "traffic"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::~IcmpStats()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::has_data() const
{
    return admin_unreachable_received.is_set
	|| admin_unreachable_sent.is_set
	|| checksum_error.is_set
	|| echo_reply_received.is_set
	|| echo_reply_sent.is_set
	|| echo_request_received.is_set
	|| echo_request_sent.is_set
	|| fragment_unreachable_received.is_set
	|| fragment_unreachable_sent.is_set
	|| hopcount_received.is_set
	|| hopcount_sent.is_set
	|| host_unreachable_received.is_set
	|| host_unreachable_sent.is_set
	|| mask_reply_received.is_set
	|| mask_reply_sent.is_set
	|| mask_request_received.is_set
	|| mask_request_sent.is_set
	|| network_unreachable_received.is_set
	|| network_unreachable_sent.is_set
	|| output.is_set
	|| param_error_received.is_set
	|| param_error_send.is_set
	|| port_unreachable_received.is_set
	|| port_unreachable_sent.is_set
	|| protocol_unreachable_received.is_set
	|| protocol_unreachable_sent.is_set
	|| reassebly_received.is_set
	|| reassembly_sent.is_set
	|| received.is_set
	|| redirect_received.is_set
	|| redirect_send.is_set
	|| router_advert_received.is_set
	|| router_solicit_received.is_set
	|| source_quench_received.is_set
	|| timestamp_received.is_set
	|| timestamp_reply_received.is_set
	|| unknown.is_set;
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_unreachable_received.yfilter)
	|| ydk::is_set(admin_unreachable_sent.yfilter)
	|| ydk::is_set(checksum_error.yfilter)
	|| ydk::is_set(echo_reply_received.yfilter)
	|| ydk::is_set(echo_reply_sent.yfilter)
	|| ydk::is_set(echo_request_received.yfilter)
	|| ydk::is_set(echo_request_sent.yfilter)
	|| ydk::is_set(fragment_unreachable_received.yfilter)
	|| ydk::is_set(fragment_unreachable_sent.yfilter)
	|| ydk::is_set(hopcount_received.yfilter)
	|| ydk::is_set(hopcount_sent.yfilter)
	|| ydk::is_set(host_unreachable_received.yfilter)
	|| ydk::is_set(host_unreachable_sent.yfilter)
	|| ydk::is_set(mask_reply_received.yfilter)
	|| ydk::is_set(mask_reply_sent.yfilter)
	|| ydk::is_set(mask_request_received.yfilter)
	|| ydk::is_set(mask_request_sent.yfilter)
	|| ydk::is_set(network_unreachable_received.yfilter)
	|| ydk::is_set(network_unreachable_sent.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(param_error_received.yfilter)
	|| ydk::is_set(param_error_send.yfilter)
	|| ydk::is_set(port_unreachable_received.yfilter)
	|| ydk::is_set(port_unreachable_sent.yfilter)
	|| ydk::is_set(protocol_unreachable_received.yfilter)
	|| ydk::is_set(protocol_unreachable_sent.yfilter)
	|| ydk::is_set(reassebly_received.yfilter)
	|| ydk::is_set(reassembly_sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(redirect_received.yfilter)
	|| ydk::is_set(redirect_send.yfilter)
	|| ydk::is_set(router_advert_received.yfilter)
	|| ydk::is_set(router_solicit_received.yfilter)
	|| ydk::is_set(source_quench_received.yfilter)
	|| ydk::is_set(timestamp_received.yfilter)
	|| ydk::is_set(timestamp_reply_received.yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_unreachable_received.is_set || is_set(admin_unreachable_received.yfilter)) leaf_name_data.push_back(admin_unreachable_received.get_name_leafdata());
    if (admin_unreachable_sent.is_set || is_set(admin_unreachable_sent.yfilter)) leaf_name_data.push_back(admin_unreachable_sent.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.yfilter)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (echo_reply_received.is_set || is_set(echo_reply_received.yfilter)) leaf_name_data.push_back(echo_reply_received.get_name_leafdata());
    if (echo_reply_sent.is_set || is_set(echo_reply_sent.yfilter)) leaf_name_data.push_back(echo_reply_sent.get_name_leafdata());
    if (echo_request_received.is_set || is_set(echo_request_received.yfilter)) leaf_name_data.push_back(echo_request_received.get_name_leafdata());
    if (echo_request_sent.is_set || is_set(echo_request_sent.yfilter)) leaf_name_data.push_back(echo_request_sent.get_name_leafdata());
    if (fragment_unreachable_received.is_set || is_set(fragment_unreachable_received.yfilter)) leaf_name_data.push_back(fragment_unreachable_received.get_name_leafdata());
    if (fragment_unreachable_sent.is_set || is_set(fragment_unreachable_sent.yfilter)) leaf_name_data.push_back(fragment_unreachable_sent.get_name_leafdata());
    if (hopcount_received.is_set || is_set(hopcount_received.yfilter)) leaf_name_data.push_back(hopcount_received.get_name_leafdata());
    if (hopcount_sent.is_set || is_set(hopcount_sent.yfilter)) leaf_name_data.push_back(hopcount_sent.get_name_leafdata());
    if (host_unreachable_received.is_set || is_set(host_unreachable_received.yfilter)) leaf_name_data.push_back(host_unreachable_received.get_name_leafdata());
    if (host_unreachable_sent.is_set || is_set(host_unreachable_sent.yfilter)) leaf_name_data.push_back(host_unreachable_sent.get_name_leafdata());
    if (mask_reply_received.is_set || is_set(mask_reply_received.yfilter)) leaf_name_data.push_back(mask_reply_received.get_name_leafdata());
    if (mask_reply_sent.is_set || is_set(mask_reply_sent.yfilter)) leaf_name_data.push_back(mask_reply_sent.get_name_leafdata());
    if (mask_request_received.is_set || is_set(mask_request_received.yfilter)) leaf_name_data.push_back(mask_request_received.get_name_leafdata());
    if (mask_request_sent.is_set || is_set(mask_request_sent.yfilter)) leaf_name_data.push_back(mask_request_sent.get_name_leafdata());
    if (network_unreachable_received.is_set || is_set(network_unreachable_received.yfilter)) leaf_name_data.push_back(network_unreachable_received.get_name_leafdata());
    if (network_unreachable_sent.is_set || is_set(network_unreachable_sent.yfilter)) leaf_name_data.push_back(network_unreachable_sent.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (param_error_received.is_set || is_set(param_error_received.yfilter)) leaf_name_data.push_back(param_error_received.get_name_leafdata());
    if (param_error_send.is_set || is_set(param_error_send.yfilter)) leaf_name_data.push_back(param_error_send.get_name_leafdata());
    if (port_unreachable_received.is_set || is_set(port_unreachable_received.yfilter)) leaf_name_data.push_back(port_unreachable_received.get_name_leafdata());
    if (port_unreachable_sent.is_set || is_set(port_unreachable_sent.yfilter)) leaf_name_data.push_back(port_unreachable_sent.get_name_leafdata());
    if (protocol_unreachable_received.is_set || is_set(protocol_unreachable_received.yfilter)) leaf_name_data.push_back(protocol_unreachable_received.get_name_leafdata());
    if (protocol_unreachable_sent.is_set || is_set(protocol_unreachable_sent.yfilter)) leaf_name_data.push_back(protocol_unreachable_sent.get_name_leafdata());
    if (reassebly_received.is_set || is_set(reassebly_received.yfilter)) leaf_name_data.push_back(reassebly_received.get_name_leafdata());
    if (reassembly_sent.is_set || is_set(reassembly_sent.yfilter)) leaf_name_data.push_back(reassembly_sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (redirect_received.is_set || is_set(redirect_received.yfilter)) leaf_name_data.push_back(redirect_received.get_name_leafdata());
    if (redirect_send.is_set || is_set(redirect_send.yfilter)) leaf_name_data.push_back(redirect_send.get_name_leafdata());
    if (router_advert_received.is_set || is_set(router_advert_received.yfilter)) leaf_name_data.push_back(router_advert_received.get_name_leafdata());
    if (router_solicit_received.is_set || is_set(router_solicit_received.yfilter)) leaf_name_data.push_back(router_solicit_received.get_name_leafdata());
    if (source_quench_received.is_set || is_set(source_quench_received.yfilter)) leaf_name_data.push_back(source_quench_received.get_name_leafdata());
    if (timestamp_received.is_set || is_set(timestamp_received.yfilter)) leaf_name_data.push_back(timestamp_received.get_name_leafdata());
    if (timestamp_reply_received.is_set || is_set(timestamp_reply_received.yfilter)) leaf_name_data.push_back(timestamp_reply_received.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-unreachable-received")
    {
        admin_unreachable_received = value;
        admin_unreachable_received.value_namespace = name_space;
        admin_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-unreachable-sent")
    {
        admin_unreachable_sent = value;
        admin_unreachable_sent.value_namespace = name_space;
        admin_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
        checksum_error.value_namespace = name_space;
        checksum_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-reply-received")
    {
        echo_reply_received = value;
        echo_reply_received.value_namespace = name_space;
        echo_reply_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-reply-sent")
    {
        echo_reply_sent = value;
        echo_reply_sent.value_namespace = name_space;
        echo_reply_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-request-received")
    {
        echo_request_received = value;
        echo_request_received.value_namespace = name_space;
        echo_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-request-sent")
    {
        echo_request_sent = value;
        echo_request_sent.value_namespace = name_space;
        echo_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-unreachable-received")
    {
        fragment_unreachable_received = value;
        fragment_unreachable_received.value_namespace = name_space;
        fragment_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-unreachable-sent")
    {
        fragment_unreachable_sent = value;
        fragment_unreachable_sent.value_namespace = name_space;
        fragment_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopcount-received")
    {
        hopcount_received = value;
        hopcount_received.value_namespace = name_space;
        hopcount_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopcount-sent")
    {
        hopcount_sent = value;
        hopcount_sent.value_namespace = name_space;
        hopcount_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-unreachable-received")
    {
        host_unreachable_received = value;
        host_unreachable_received.value_namespace = name_space;
        host_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-unreachable-sent")
    {
        host_unreachable_sent = value;
        host_unreachable_sent.value_namespace = name_space;
        host_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-reply-received")
    {
        mask_reply_received = value;
        mask_reply_received.value_namespace = name_space;
        mask_reply_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-reply-sent")
    {
        mask_reply_sent = value;
        mask_reply_sent.value_namespace = name_space;
        mask_reply_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-request-received")
    {
        mask_request_received = value;
        mask_request_received.value_namespace = name_space;
        mask_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-request-sent")
    {
        mask_request_sent = value;
        mask_request_sent.value_namespace = name_space;
        mask_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-unreachable-received")
    {
        network_unreachable_received = value;
        network_unreachable_received.value_namespace = name_space;
        network_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-unreachable-sent")
    {
        network_unreachable_sent = value;
        network_unreachable_sent.value_namespace = name_space;
        network_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-error-received")
    {
        param_error_received = value;
        param_error_received.value_namespace = name_space;
        param_error_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-error-send")
    {
        param_error_send = value;
        param_error_send.value_namespace = name_space;
        param_error_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-unreachable-received")
    {
        port_unreachable_received = value;
        port_unreachable_received.value_namespace = name_space;
        port_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-unreachable-sent")
    {
        port_unreachable_sent = value;
        port_unreachable_sent.value_namespace = name_space;
        port_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-unreachable-received")
    {
        protocol_unreachable_received = value;
        protocol_unreachable_received.value_namespace = name_space;
        protocol_unreachable_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-unreachable-sent")
    {
        protocol_unreachable_sent = value;
        protocol_unreachable_sent.value_namespace = name_space;
        protocol_unreachable_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassebly-received")
    {
        reassebly_received = value;
        reassebly_received.value_namespace = name_space;
        reassebly_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly-sent")
    {
        reassembly_sent = value;
        reassembly_sent.value_namespace = name_space;
        reassembly_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-received")
    {
        redirect_received = value;
        redirect_received.value_namespace = name_space;
        redirect_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-send")
    {
        redirect_send = value;
        redirect_send.value_namespace = name_space;
        redirect_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-advert-received")
    {
        router_advert_received = value;
        router_advert_received.value_namespace = name_space;
        router_advert_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-solicit-received")
    {
        router_solicit_received = value;
        router_solicit_received.value_namespace = name_space;
        router_solicit_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-quench-received")
    {
        source_quench_received = value;
        source_quench_received.value_namespace = name_space;
        source_quench_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-received")
    {
        timestamp_received = value;
        timestamp_received.value_namespace = name_space;
        timestamp_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-reply-received")
    {
        timestamp_reply_received = value;
        timestamp_reply_received.value_namespace = name_space;
        timestamp_reply_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-unreachable-received")
    {
        admin_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "admin-unreachable-sent")
    {
        admin_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "checksum-error")
    {
        checksum_error.yfilter = yfilter;
    }
    if(value_path == "echo-reply-received")
    {
        echo_reply_received.yfilter = yfilter;
    }
    if(value_path == "echo-reply-sent")
    {
        echo_reply_sent.yfilter = yfilter;
    }
    if(value_path == "echo-request-received")
    {
        echo_request_received.yfilter = yfilter;
    }
    if(value_path == "echo-request-sent")
    {
        echo_request_sent.yfilter = yfilter;
    }
    if(value_path == "fragment-unreachable-received")
    {
        fragment_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "fragment-unreachable-sent")
    {
        fragment_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "hopcount-received")
    {
        hopcount_received.yfilter = yfilter;
    }
    if(value_path == "hopcount-sent")
    {
        hopcount_sent.yfilter = yfilter;
    }
    if(value_path == "host-unreachable-received")
    {
        host_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "host-unreachable-sent")
    {
        host_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "mask-reply-received")
    {
        mask_reply_received.yfilter = yfilter;
    }
    if(value_path == "mask-reply-sent")
    {
        mask_reply_sent.yfilter = yfilter;
    }
    if(value_path == "mask-request-received")
    {
        mask_request_received.yfilter = yfilter;
    }
    if(value_path == "mask-request-sent")
    {
        mask_request_sent.yfilter = yfilter;
    }
    if(value_path == "network-unreachable-received")
    {
        network_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "network-unreachable-sent")
    {
        network_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "param-error-received")
    {
        param_error_received.yfilter = yfilter;
    }
    if(value_path == "param-error-send")
    {
        param_error_send.yfilter = yfilter;
    }
    if(value_path == "port-unreachable-received")
    {
        port_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "port-unreachable-sent")
    {
        port_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "protocol-unreachable-received")
    {
        protocol_unreachable_received.yfilter = yfilter;
    }
    if(value_path == "protocol-unreachable-sent")
    {
        protocol_unreachable_sent.yfilter = yfilter;
    }
    if(value_path == "reassebly-received")
    {
        reassebly_received.yfilter = yfilter;
    }
    if(value_path == "reassembly-sent")
    {
        reassembly_sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "redirect-received")
    {
        redirect_received.yfilter = yfilter;
    }
    if(value_path == "redirect-send")
    {
        redirect_send.yfilter = yfilter;
    }
    if(value_path == "router-advert-received")
    {
        router_advert_received.yfilter = yfilter;
    }
    if(value_path == "router-solicit-received")
    {
        router_solicit_received.yfilter = yfilter;
    }
    if(value_path == "source-quench-received")
    {
        source_quench_received.yfilter = yfilter;
    }
    if(value_path == "timestamp-received")
    {
        timestamp_received.yfilter = yfilter;
    }
    if(value_path == "timestamp-reply-received")
    {
        timestamp_reply_received.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-unreachable-received" || name == "admin-unreachable-sent" || name == "checksum-error" || name == "echo-reply-received" || name == "echo-reply-sent" || name == "echo-request-received" || name == "echo-request-sent" || name == "fragment-unreachable-received" || name == "fragment-unreachable-sent" || name == "hopcount-received" || name == "hopcount-sent" || name == "host-unreachable-received" || name == "host-unreachable-sent" || name == "mask-reply-received" || name == "mask-reply-sent" || name == "mask-request-received" || name == "mask-request-sent" || name == "network-unreachable-received" || name == "network-unreachable-sent" || name == "output" || name == "param-error-received" || name == "param-error-send" || name == "port-unreachable-received" || name == "port-unreachable-sent" || name == "protocol-unreachable-received" || name == "protocol-unreachable-sent" || name == "reassebly-received" || name == "reassembly-sent" || name == "received" || name == "redirect-received" || name == "redirect-send" || name == "router-advert-received" || name == "router-solicit-received" || name == "source-quench-received" || name == "timestamp-received" || name == "timestamp-reply-received" || name == "unknown")
        return true;
    return false;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::Ipv4Stats()
    :
    bad_header{YType::uint32, "bad-header"},
    bad_hop_count{YType::uint32, "bad-hop-count"},
    bad_option{YType::uint32, "bad-option"},
    bad_security_option{YType::uint32, "bad-security-option"},
    bad_source_address{YType::uint32, "bad-source-address"},
    basic_security_option{YType::uint32, "basic-security-option"},
    broadcast_in{YType::uint32, "broadcast-in"},
    broadcast_out{YType::uint32, "broadcast-out"},
    cipso_option{YType::uint32, "cipso-option"},
    encapsulation_failed{YType::uint32, "encapsulation-failed"},
    end_option{YType::uint32, "end-option"},
    extended_security_option{YType::uint32, "extended-security-option"},
    format_errors{YType::uint32, "format-errors"},
    fragment_count{YType::uint32, "fragment-count"},
    input_packets{YType::uint32, "input-packets"},
    lisp_decap_error{YType::uint32, "lisp-decap-error"},
    lisp_encap_error{YType::uint32, "lisp-encap-error"},
    lisp_v4_decap{YType::uint32, "lisp-v4-decap"},
    lisp_v4_encap{YType::uint32, "lisp-v4-encap"},
    lisp_v6_decap{YType::uint32, "lisp-v6-decap"},
    lisp_v6_encap{YType::uint32, "lisp-v6-encap"},
    loose_source_route_option{YType::uint32, "loose-source-route-option"},
    multicast_in{YType::uint32, "multicast-in"},
    multicast_out{YType::uint32, "multicast-out"},
    no_gateway{YType::uint32, "no-gateway"},
    no_protocol{YType::uint32, "no-protocol"},
    no_router{YType::uint32, "no-router"},
    noop_option{YType::uint32, "noop-option"},
    options_present{YType::uint32, "options-present"},
    packet_too_big{YType::uint32, "packet-too-big"},
    packets_forwarded{YType::uint32, "packets-forwarded"},
    packets_fragmented{YType::uint32, "packets-fragmented"},
    packets_output{YType::uint32, "packets-output"},
    reassemble_failed{YType::uint32, "reassemble-failed"},
    reassemble_input{YType::uint32, "reassemble-input"},
    reassemble_max_drop{YType::uint32, "reassemble-max-drop"},
    reassemble_timeout{YType::uint32, "reassemble-timeout"},
    reassembled{YType::uint32, "reassembled"},
    received_packets{YType::uint32, "received-packets"},
    record_route_option{YType::uint32, "record-route-option"},
    router_alert_option{YType::uint32, "router-alert-option"},
    sid_option{YType::uint32, "sid-option"},
    strict_source_route_option{YType::uint32, "strict-source-route-option"},
    timestamp_option{YType::uint32, "timestamp-option"},
    unknown_option{YType::uint32, "unknown-option"}
{

    yang_name = "ipv4-stats"; yang_parent_name = "traffic"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::~Ipv4Stats()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::has_data() const
{
    return bad_header.is_set
	|| bad_hop_count.is_set
	|| bad_option.is_set
	|| bad_security_option.is_set
	|| bad_source_address.is_set
	|| basic_security_option.is_set
	|| broadcast_in.is_set
	|| broadcast_out.is_set
	|| cipso_option.is_set
	|| encapsulation_failed.is_set
	|| end_option.is_set
	|| extended_security_option.is_set
	|| format_errors.is_set
	|| fragment_count.is_set
	|| input_packets.is_set
	|| lisp_decap_error.is_set
	|| lisp_encap_error.is_set
	|| lisp_v4_decap.is_set
	|| lisp_v4_encap.is_set
	|| lisp_v6_decap.is_set
	|| lisp_v6_encap.is_set
	|| loose_source_route_option.is_set
	|| multicast_in.is_set
	|| multicast_out.is_set
	|| no_gateway.is_set
	|| no_protocol.is_set
	|| no_router.is_set
	|| noop_option.is_set
	|| options_present.is_set
	|| packet_too_big.is_set
	|| packets_forwarded.is_set
	|| packets_fragmented.is_set
	|| packets_output.is_set
	|| reassemble_failed.is_set
	|| reassemble_input.is_set
	|| reassemble_max_drop.is_set
	|| reassemble_timeout.is_set
	|| reassembled.is_set
	|| received_packets.is_set
	|| record_route_option.is_set
	|| router_alert_option.is_set
	|| sid_option.is_set
	|| strict_source_route_option.is_set
	|| timestamp_option.is_set
	|| unknown_option.is_set;
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bad_header.yfilter)
	|| ydk::is_set(bad_hop_count.yfilter)
	|| ydk::is_set(bad_option.yfilter)
	|| ydk::is_set(bad_security_option.yfilter)
	|| ydk::is_set(bad_source_address.yfilter)
	|| ydk::is_set(basic_security_option.yfilter)
	|| ydk::is_set(broadcast_in.yfilter)
	|| ydk::is_set(broadcast_out.yfilter)
	|| ydk::is_set(cipso_option.yfilter)
	|| ydk::is_set(encapsulation_failed.yfilter)
	|| ydk::is_set(end_option.yfilter)
	|| ydk::is_set(extended_security_option.yfilter)
	|| ydk::is_set(format_errors.yfilter)
	|| ydk::is_set(fragment_count.yfilter)
	|| ydk::is_set(input_packets.yfilter)
	|| ydk::is_set(lisp_decap_error.yfilter)
	|| ydk::is_set(lisp_encap_error.yfilter)
	|| ydk::is_set(lisp_v4_decap.yfilter)
	|| ydk::is_set(lisp_v4_encap.yfilter)
	|| ydk::is_set(lisp_v6_decap.yfilter)
	|| ydk::is_set(lisp_v6_encap.yfilter)
	|| ydk::is_set(loose_source_route_option.yfilter)
	|| ydk::is_set(multicast_in.yfilter)
	|| ydk::is_set(multicast_out.yfilter)
	|| ydk::is_set(no_gateway.yfilter)
	|| ydk::is_set(no_protocol.yfilter)
	|| ydk::is_set(no_router.yfilter)
	|| ydk::is_set(noop_option.yfilter)
	|| ydk::is_set(options_present.yfilter)
	|| ydk::is_set(packet_too_big.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(packets_fragmented.yfilter)
	|| ydk::is_set(packets_output.yfilter)
	|| ydk::is_set(reassemble_failed.yfilter)
	|| ydk::is_set(reassemble_input.yfilter)
	|| ydk::is_set(reassemble_max_drop.yfilter)
	|| ydk::is_set(reassemble_timeout.yfilter)
	|| ydk::is_set(reassembled.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(record_route_option.yfilter)
	|| ydk::is_set(router_alert_option.yfilter)
	|| ydk::is_set(sid_option.yfilter)
	|| ydk::is_set(strict_source_route_option.yfilter)
	|| ydk::is_set(timestamp_option.yfilter)
	|| ydk::is_set(unknown_option.yfilter);
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_header.is_set || is_set(bad_header.yfilter)) leaf_name_data.push_back(bad_header.get_name_leafdata());
    if (bad_hop_count.is_set || is_set(bad_hop_count.yfilter)) leaf_name_data.push_back(bad_hop_count.get_name_leafdata());
    if (bad_option.is_set || is_set(bad_option.yfilter)) leaf_name_data.push_back(bad_option.get_name_leafdata());
    if (bad_security_option.is_set || is_set(bad_security_option.yfilter)) leaf_name_data.push_back(bad_security_option.get_name_leafdata());
    if (bad_source_address.is_set || is_set(bad_source_address.yfilter)) leaf_name_data.push_back(bad_source_address.get_name_leafdata());
    if (basic_security_option.is_set || is_set(basic_security_option.yfilter)) leaf_name_data.push_back(basic_security_option.get_name_leafdata());
    if (broadcast_in.is_set || is_set(broadcast_in.yfilter)) leaf_name_data.push_back(broadcast_in.get_name_leafdata());
    if (broadcast_out.is_set || is_set(broadcast_out.yfilter)) leaf_name_data.push_back(broadcast_out.get_name_leafdata());
    if (cipso_option.is_set || is_set(cipso_option.yfilter)) leaf_name_data.push_back(cipso_option.get_name_leafdata());
    if (encapsulation_failed.is_set || is_set(encapsulation_failed.yfilter)) leaf_name_data.push_back(encapsulation_failed.get_name_leafdata());
    if (end_option.is_set || is_set(end_option.yfilter)) leaf_name_data.push_back(end_option.get_name_leafdata());
    if (extended_security_option.is_set || is_set(extended_security_option.yfilter)) leaf_name_data.push_back(extended_security_option.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.yfilter)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (fragment_count.is_set || is_set(fragment_count.yfilter)) leaf_name_data.push_back(fragment_count.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.yfilter)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (lisp_decap_error.is_set || is_set(lisp_decap_error.yfilter)) leaf_name_data.push_back(lisp_decap_error.get_name_leafdata());
    if (lisp_encap_error.is_set || is_set(lisp_encap_error.yfilter)) leaf_name_data.push_back(lisp_encap_error.get_name_leafdata());
    if (lisp_v4_decap.is_set || is_set(lisp_v4_decap.yfilter)) leaf_name_data.push_back(lisp_v4_decap.get_name_leafdata());
    if (lisp_v4_encap.is_set || is_set(lisp_v4_encap.yfilter)) leaf_name_data.push_back(lisp_v4_encap.get_name_leafdata());
    if (lisp_v6_decap.is_set || is_set(lisp_v6_decap.yfilter)) leaf_name_data.push_back(lisp_v6_decap.get_name_leafdata());
    if (lisp_v6_encap.is_set || is_set(lisp_v6_encap.yfilter)) leaf_name_data.push_back(lisp_v6_encap.get_name_leafdata());
    if (loose_source_route_option.is_set || is_set(loose_source_route_option.yfilter)) leaf_name_data.push_back(loose_source_route_option.get_name_leafdata());
    if (multicast_in.is_set || is_set(multicast_in.yfilter)) leaf_name_data.push_back(multicast_in.get_name_leafdata());
    if (multicast_out.is_set || is_set(multicast_out.yfilter)) leaf_name_data.push_back(multicast_out.get_name_leafdata());
    if (no_gateway.is_set || is_set(no_gateway.yfilter)) leaf_name_data.push_back(no_gateway.get_name_leafdata());
    if (no_protocol.is_set || is_set(no_protocol.yfilter)) leaf_name_data.push_back(no_protocol.get_name_leafdata());
    if (no_router.is_set || is_set(no_router.yfilter)) leaf_name_data.push_back(no_router.get_name_leafdata());
    if (noop_option.is_set || is_set(noop_option.yfilter)) leaf_name_data.push_back(noop_option.get_name_leafdata());
    if (options_present.is_set || is_set(options_present.yfilter)) leaf_name_data.push_back(options_present.get_name_leafdata());
    if (packet_too_big.is_set || is_set(packet_too_big.yfilter)) leaf_name_data.push_back(packet_too_big.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (packets_fragmented.is_set || is_set(packets_fragmented.yfilter)) leaf_name_data.push_back(packets_fragmented.get_name_leafdata());
    if (packets_output.is_set || is_set(packets_output.yfilter)) leaf_name_data.push_back(packets_output.get_name_leafdata());
    if (reassemble_failed.is_set || is_set(reassemble_failed.yfilter)) leaf_name_data.push_back(reassemble_failed.get_name_leafdata());
    if (reassemble_input.is_set || is_set(reassemble_input.yfilter)) leaf_name_data.push_back(reassemble_input.get_name_leafdata());
    if (reassemble_max_drop.is_set || is_set(reassemble_max_drop.yfilter)) leaf_name_data.push_back(reassemble_max_drop.get_name_leafdata());
    if (reassemble_timeout.is_set || is_set(reassemble_timeout.yfilter)) leaf_name_data.push_back(reassemble_timeout.get_name_leafdata());
    if (reassembled.is_set || is_set(reassembled.yfilter)) leaf_name_data.push_back(reassembled.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (record_route_option.is_set || is_set(record_route_option.yfilter)) leaf_name_data.push_back(record_route_option.get_name_leafdata());
    if (router_alert_option.is_set || is_set(router_alert_option.yfilter)) leaf_name_data.push_back(router_alert_option.get_name_leafdata());
    if (sid_option.is_set || is_set(sid_option.yfilter)) leaf_name_data.push_back(sid_option.get_name_leafdata());
    if (strict_source_route_option.is_set || is_set(strict_source_route_option.yfilter)) leaf_name_data.push_back(strict_source_route_option.get_name_leafdata());
    if (timestamp_option.is_set || is_set(timestamp_option.yfilter)) leaf_name_data.push_back(timestamp_option.get_name_leafdata());
    if (unknown_option.is_set || is_set(unknown_option.yfilter)) leaf_name_data.push_back(unknown_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bad-header")
    {
        bad_header = value;
        bad_header.value_namespace = name_space;
        bad_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hop-count")
    {
        bad_hop_count = value;
        bad_hop_count.value_namespace = name_space;
        bad_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-option")
    {
        bad_option = value;
        bad_option.value_namespace = name_space;
        bad_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-security-option")
    {
        bad_security_option = value;
        bad_security_option.value_namespace = name_space;
        bad_security_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-source-address")
    {
        bad_source_address = value;
        bad_source_address.value_namespace = name_space;
        bad_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-security-option")
    {
        basic_security_option = value;
        basic_security_option.value_namespace = name_space;
        basic_security_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-in")
    {
        broadcast_in = value;
        broadcast_in.value_namespace = name_space;
        broadcast_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-out")
    {
        broadcast_out = value;
        broadcast_out.value_namespace = name_space;
        broadcast_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipso-option")
    {
        cipso_option = value;
        cipso_option.value_namespace = name_space;
        cipso_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-failed")
    {
        encapsulation_failed = value;
        encapsulation_failed.value_namespace = name_space;
        encapsulation_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-option")
    {
        end_option = value;
        end_option.value_namespace = name_space;
        end_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-security-option")
    {
        extended_security_option = value;
        extended_security_option.value_namespace = name_space;
        extended_security_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
        format_errors.value_namespace = name_space;
        format_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-count")
    {
        fragment_count = value;
        fragment_count.value_namespace = name_space;
        fragment_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
        input_packets.value_namespace = name_space;
        input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-decap-error")
    {
        lisp_decap_error = value;
        lisp_decap_error.value_namespace = name_space;
        lisp_decap_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-encap-error")
    {
        lisp_encap_error = value;
        lisp_encap_error.value_namespace = name_space;
        lisp_encap_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v4-decap")
    {
        lisp_v4_decap = value;
        lisp_v4_decap.value_namespace = name_space;
        lisp_v4_decap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v4-encap")
    {
        lisp_v4_encap = value;
        lisp_v4_encap.value_namespace = name_space;
        lisp_v4_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v6-decap")
    {
        lisp_v6_decap = value;
        lisp_v6_decap.value_namespace = name_space;
        lisp_v6_decap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v6-encap")
    {
        lisp_v6_encap = value;
        lisp_v6_encap.value_namespace = name_space;
        lisp_v6_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loose-source-route-option")
    {
        loose_source_route_option = value;
        loose_source_route_option.value_namespace = name_space;
        loose_source_route_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-in")
    {
        multicast_in = value;
        multicast_in.value_namespace = name_space;
        multicast_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-out")
    {
        multicast_out = value;
        multicast_out.value_namespace = name_space;
        multicast_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-gateway")
    {
        no_gateway = value;
        no_gateway.value_namespace = name_space;
        no_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-protocol")
    {
        no_protocol = value;
        no_protocol.value_namespace = name_space;
        no_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-router")
    {
        no_router = value;
        no_router.value_namespace = name_space;
        no_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noop-option")
    {
        noop_option = value;
        noop_option.value_namespace = name_space;
        noop_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options-present")
    {
        options_present = value;
        options_present.value_namespace = name_space;
        options_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-too-big")
    {
        packet_too_big = value;
        packet_too_big.value_namespace = name_space;
        packet_too_big.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-fragmented")
    {
        packets_fragmented = value;
        packets_fragmented.value_namespace = name_space;
        packets_fragmented.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-output")
    {
        packets_output = value;
        packets_output.value_namespace = name_space;
        packets_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-failed")
    {
        reassemble_failed = value;
        reassemble_failed.value_namespace = name_space;
        reassemble_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-input")
    {
        reassemble_input = value;
        reassemble_input.value_namespace = name_space;
        reassemble_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-max-drop")
    {
        reassemble_max_drop = value;
        reassemble_max_drop.value_namespace = name_space;
        reassemble_max_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-timeout")
    {
        reassemble_timeout = value;
        reassemble_timeout.value_namespace = name_space;
        reassemble_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembled")
    {
        reassembled = value;
        reassembled.value_namespace = name_space;
        reassembled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-option")
    {
        record_route_option = value;
        record_route_option.value_namespace = name_space;
        record_route_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-alert-option")
    {
        router_alert_option = value;
        router_alert_option.value_namespace = name_space;
        router_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-option")
    {
        sid_option = value;
        sid_option.value_namespace = name_space;
        sid_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-source-route-option")
    {
        strict_source_route_option = value;
        strict_source_route_option.value_namespace = name_space;
        strict_source_route_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-option")
    {
        timestamp_option = value;
        timestamp_option.value_namespace = name_space;
        timestamp_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-option")
    {
        unknown_option = value;
        unknown_option.value_namespace = name_space;
        unknown_option.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bad-header")
    {
        bad_header.yfilter = yfilter;
    }
    if(value_path == "bad-hop-count")
    {
        bad_hop_count.yfilter = yfilter;
    }
    if(value_path == "bad-option")
    {
        bad_option.yfilter = yfilter;
    }
    if(value_path == "bad-security-option")
    {
        bad_security_option.yfilter = yfilter;
    }
    if(value_path == "bad-source-address")
    {
        bad_source_address.yfilter = yfilter;
    }
    if(value_path == "basic-security-option")
    {
        basic_security_option.yfilter = yfilter;
    }
    if(value_path == "broadcast-in")
    {
        broadcast_in.yfilter = yfilter;
    }
    if(value_path == "broadcast-out")
    {
        broadcast_out.yfilter = yfilter;
    }
    if(value_path == "cipso-option")
    {
        cipso_option.yfilter = yfilter;
    }
    if(value_path == "encapsulation-failed")
    {
        encapsulation_failed.yfilter = yfilter;
    }
    if(value_path == "end-option")
    {
        end_option.yfilter = yfilter;
    }
    if(value_path == "extended-security-option")
    {
        extended_security_option.yfilter = yfilter;
    }
    if(value_path == "format-errors")
    {
        format_errors.yfilter = yfilter;
    }
    if(value_path == "fragment-count")
    {
        fragment_count.yfilter = yfilter;
    }
    if(value_path == "input-packets")
    {
        input_packets.yfilter = yfilter;
    }
    if(value_path == "lisp-decap-error")
    {
        lisp_decap_error.yfilter = yfilter;
    }
    if(value_path == "lisp-encap-error")
    {
        lisp_encap_error.yfilter = yfilter;
    }
    if(value_path == "lisp-v4-decap")
    {
        lisp_v4_decap.yfilter = yfilter;
    }
    if(value_path == "lisp-v4-encap")
    {
        lisp_v4_encap.yfilter = yfilter;
    }
    if(value_path == "lisp-v6-decap")
    {
        lisp_v6_decap.yfilter = yfilter;
    }
    if(value_path == "lisp-v6-encap")
    {
        lisp_v6_encap.yfilter = yfilter;
    }
    if(value_path == "loose-source-route-option")
    {
        loose_source_route_option.yfilter = yfilter;
    }
    if(value_path == "multicast-in")
    {
        multicast_in.yfilter = yfilter;
    }
    if(value_path == "multicast-out")
    {
        multicast_out.yfilter = yfilter;
    }
    if(value_path == "no-gateway")
    {
        no_gateway.yfilter = yfilter;
    }
    if(value_path == "no-protocol")
    {
        no_protocol.yfilter = yfilter;
    }
    if(value_path == "no-router")
    {
        no_router.yfilter = yfilter;
    }
    if(value_path == "noop-option")
    {
        noop_option.yfilter = yfilter;
    }
    if(value_path == "options-present")
    {
        options_present.yfilter = yfilter;
    }
    if(value_path == "packet-too-big")
    {
        packet_too_big.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "packets-fragmented")
    {
        packets_fragmented.yfilter = yfilter;
    }
    if(value_path == "packets-output")
    {
        packets_output.yfilter = yfilter;
    }
    if(value_path == "reassemble-failed")
    {
        reassemble_failed.yfilter = yfilter;
    }
    if(value_path == "reassemble-input")
    {
        reassemble_input.yfilter = yfilter;
    }
    if(value_path == "reassemble-max-drop")
    {
        reassemble_max_drop.yfilter = yfilter;
    }
    if(value_path == "reassemble-timeout")
    {
        reassemble_timeout.yfilter = yfilter;
    }
    if(value_path == "reassembled")
    {
        reassembled.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "record-route-option")
    {
        record_route_option.yfilter = yfilter;
    }
    if(value_path == "router-alert-option")
    {
        router_alert_option.yfilter = yfilter;
    }
    if(value_path == "sid-option")
    {
        sid_option.yfilter = yfilter;
    }
    if(value_path == "strict-source-route-option")
    {
        strict_source_route_option.yfilter = yfilter;
    }
    if(value_path == "timestamp-option")
    {
        timestamp_option.yfilter = yfilter;
    }
    if(value_path == "unknown-option")
    {
        unknown_option.yfilter = yfilter;
    }
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bad-header" || name == "bad-hop-count" || name == "bad-option" || name == "bad-security-option" || name == "bad-source-address" || name == "basic-security-option" || name == "broadcast-in" || name == "broadcast-out" || name == "cipso-option" || name == "encapsulation-failed" || name == "end-option" || name == "extended-security-option" || name == "format-errors" || name == "fragment-count" || name == "input-packets" || name == "lisp-decap-error" || name == "lisp-encap-error" || name == "lisp-v4-decap" || name == "lisp-v4-encap" || name == "lisp-v6-decap" || name == "lisp-v6-encap" || name == "loose-source-route-option" || name == "multicast-in" || name == "multicast-out" || name == "no-gateway" || name == "no-protocol" || name == "no-router" || name == "noop-option" || name == "options-present" || name == "packet-too-big" || name == "packets-forwarded" || name == "packets-fragmented" || name == "packets-output" || name == "reassemble-failed" || name == "reassemble-input" || name == "reassemble-max-drop" || name == "reassemble-timeout" || name == "reassembled" || name == "received-packets" || name == "record-route-option" || name == "router-alert-option" || name == "sid-option" || name == "strict-source-route-option" || name == "timestamp-option" || name == "unknown-option")
        return true;
    return false;
}

const Enum::YLeaf Ipv4MaOperLineState::unknown {0, "unknown"};
const Enum::YLeaf Ipv4MaOperLineState::shutdown {1, "shutdown"};
const Enum::YLeaf Ipv4MaOperLineState::down {2, "down"};
const Enum::YLeaf Ipv4MaOperLineState::up {3, "up"};

const Enum::YLeaf RpfMode::strict {0, "strict"};
const Enum::YLeaf RpfMode::loose {1, "loose"};


}
}

