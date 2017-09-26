
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rip_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rip_cfg {

Rip::Rip()
    :
    default_vrf(std::make_shared<Rip::DefaultVrf>())
	,vrfs(std::make_shared<Rip::Vrfs>())
{
    default_vrf->parent = this;
    vrfs->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XR-ip-rip-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Rip::~Rip()
{
}

bool Rip::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Rip::has_operation() const
{
    return is_set(yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Rip::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Rip::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Rip::clone_ptr() const
{
    return std::make_shared<Rip>();
}

std::string Rip::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rip::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rip::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rip::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "vrfs")
        return true;
    return false;
}

Rip::DefaultVrf::DefaultVrf()
    :
    auto_summary{YType::empty, "auto-summary"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    default_metric{YType::uint32, "default-metric"},
    distance{YType::uint32, "distance"},
    enable{YType::empty, "enable"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    output_delay{YType::uint32, "output-delay"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    validate_source_disable{YType::empty, "validate-source-disable"}
    	,
    default_information(nullptr) // presence node
	,interfaces(std::make_shared<Rip::DefaultVrf::Interfaces>())
	,ip_distances(std::make_shared<Rip::DefaultVrf::IpDistances>())
	,neighbors(std::make_shared<Rip::DefaultVrf::Neighbors>())
	,redistribution(std::make_shared<Rip::DefaultVrf::Redistribution>())
	,timers(nullptr) // presence node
{
    interfaces->parent = this;
    ip_distances->parent = this;
    neighbors->parent = this;
    redistribution->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::~DefaultVrf()
{
}

bool Rip::DefaultVrf::has_data() const
{
    return auto_summary.is_set
	|| broadcast_for_v2.is_set
	|| default_metric.is_set
	|| distance.is_set
	|| enable.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| output_delay.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| validate_source_disable.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Rip::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(broadcast_for_v2.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(output_delay.yfilter)
	|| ydk::is_set(policy_in.yfilter)
	|| ydk::is_set(policy_out.yfilter)
	|| ydk::is_set(validate_source_disable.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Rip::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.yfilter)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.yfilter)) leaf_name_data.push_back(output_delay.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.yfilter)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.yfilter)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (validate_source_disable.is_set || is_set(validate_source_disable.yfilter)) leaf_name_data.push_back(validate_source_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Rip::DefaultVrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "ip-distances")
    {
        if(ip_distances == nullptr)
        {
            ip_distances = std::make_shared<Rip::DefaultVrf::IpDistances>();
        }
        return ip_distances;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Rip::DefaultVrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution == nullptr)
        {
            redistribution = std::make_shared<Rip::DefaultVrf::Redistribution>();
        }
        return redistribution;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Rip::DefaultVrf::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(ip_distances != nullptr)
    {
        children["ip-distances"] = ip_distances;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(redistribution != nullptr)
    {
        children["redistribution"] = redistribution;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Rip::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
        broadcast_for_v2.value_namespace = name_space;
        broadcast_for_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
        output_delay.value_namespace = name_space;
        output_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
        policy_in.value_namespace = name_space;
        policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
        policy_out.value_namespace = name_space;
        policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable = value;
        validate_source_disable.value_namespace = name_space;
        validate_source_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "output-delay")
    {
        output_delay.yfilter = yfilter;
    }
    if(value_path == "policy-in")
    {
        policy_in.yfilter = yfilter;
    }
    if(value_path == "policy-out")
    {
        policy_out.yfilter = yfilter;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information" || name == "interfaces" || name == "ip-distances" || name == "neighbors" || name == "redistribution" || name == "timers" || name == "auto-summary" || name == "broadcast-for-v2" || name == "default-metric" || name == "distance" || name == "enable" || name == "maximum-paths" || name == "nsf" || name == "output-delay" || name == "policy-in" || name == "policy-out" || name == "validate-source-disable")
        return true;
    return false;
}

Rip::DefaultVrf::DefaultInformation::DefaultInformation()
    :
    option{YType::enumeration, "option"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::DefaultInformation::~DefaultInformation()
{
}

bool Rip::DefaultVrf::DefaultInformation::has_data() const
{
    return option.is_set
	|| route_policy_name.is_set;
}

bool Rip::DefaultVrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Rip::DefaultVrf::DefaultInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "route-policy-name")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric_zero{YType::empty, "accept-metric-zero"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    enable{YType::empty, "enable"},
    passive{YType::empty, "passive"},
    poison_reverse{YType::empty, "poison-reverse"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    split_horizon_disable{YType::empty, "split-horizon-disable"}
    	,
    authentication(nullptr) // presence node
	,receive_version(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion>())
	,send_version(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SendVersion>())
	,site_of_origin(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin>())
{
    receive_version->parent = this;
    send_version->parent = this;
    site_of_origin->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| accept_metric_zero.is_set
	|| broadcast_for_v2.is_set
	|| enable.is_set
	|| passive.is_set
	|| poison_reverse.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| split_horizon_disable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (receive_version !=  nullptr && receive_version->has_data())
	|| (send_version !=  nullptr && send_version->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data());
}

bool Rip::DefaultVrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(accept_metric_zero.yfilter)
	|| ydk::is_set(broadcast_for_v2.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(poison_reverse.yfilter)
	|| ydk::is_set(policy_in.yfilter)
	|| ydk::is_set(policy_out.yfilter)
	|| ydk::is_set(split_horizon_disable.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (receive_version !=  nullptr && receive_version->has_operation())
	|| (send_version !=  nullptr && send_version->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation());
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric_zero.is_set || is_set(accept_metric_zero.yfilter)) leaf_name_data.push_back(accept_metric_zero.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.yfilter)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.yfilter)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.yfilter)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.yfilter)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (split_horizon_disable.is_set || is_set(split_horizon_disable.yfilter)) leaf_name_data.push_back(split_horizon_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "receive-version")
    {
        if(receive_version == nullptr)
        {
            receive_version = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion>();
        }
        return receive_version;
    }

    if(child_yang_name == "send-version")
    {
        if(send_version == nullptr)
        {
            send_version = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SendVersion>();
        }
        return send_version;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(receive_version != nullptr)
    {
        children["receive-version"] = receive_version;
    }

    if(send_version != nullptr)
    {
        children["send-version"] = send_version;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero = value;
        accept_metric_zero.value_namespace = name_space;
        accept_metric_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
        broadcast_for_v2.value_namespace = name_space;
        broadcast_for_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
        poison_reverse.value_namespace = name_space;
        poison_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
        policy_in.value_namespace = name_space;
        policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
        policy_out.value_namespace = name_space;
        policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable = value;
        split_horizon_disable.value_namespace = name_space;
        split_horizon_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero.yfilter = yfilter;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse.yfilter = yfilter;
    }
    if(value_path == "policy-in")
    {
        policy_in.yfilter = yfilter;
    }
    if(value_path == "policy-out")
    {
        policy_out.yfilter = yfilter;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "receive-version" || name == "send-version" || name == "site-of-origin" || name == "interface-name" || name == "accept-metric-zero" || name == "broadcast-for-v2" || name == "enable" || name == "passive" || name == "poison-reverse" || name == "policy-in" || name == "policy-out" || name == "split-horizon-disable")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::DefaultVrf::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::Authentication::has_data() const
{
    return keychain.is_set
	|| mode.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain" || name == "mode")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::ReceiveVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{

    yang_name = "receive-version"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::~ReceiveVersion()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version1.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.yfilter)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version1")
    {
        version1 = value;
        version1.value_namespace = name_space;
        version1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version1")
    {
        version1.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version1" || name == "version2")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::SendVersion::SendVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{

    yang_name = "send-version"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::DefaultVrf::Interfaces::Interface::SendVersion::~SendVersion()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::SendVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::SendVersion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version1.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.yfilter)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::SendVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version1")
    {
        version1 = value;
        version1.value_namespace = name_space;
        version1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::SendVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version1")
    {
        version1.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::SendVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version1" || name == "version2")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| type.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as-index" || name == "as-xx" || name == "as-yy" || name == "type")
        return true;
    return false;
}

Rip::DefaultVrf::IpDistances::IpDistances()
{

    yang_name = "ip-distances"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::IpDistances::~IpDistances()
{
}

bool Rip::DefaultVrf::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::IpDistances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::IpDistances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::IpDistances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_distance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::IpDistances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::IpDistances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::IpDistances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-distance")
        return true;
    return false;
}

Rip::DefaultVrf::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    distance{YType::uint32, "distance"}
{

    yang_name = "ip-distance"; yang_parent_name = "ip-distances"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::IpDistances::IpDistance::~IpDistance()
{
}

bool Rip::DefaultVrf::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| distance.is_set;
}

bool Rip::DefaultVrf::IpDistances::IpDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Rip::DefaultVrf::IpDistances::IpDistance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/ip-distances/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::IpDistances::IpDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::IpDistances::IpDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::IpDistances::IpDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::IpDistances::IpDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::IpDistances::IpDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "distance")
        return true;
    return false;
}

Rip::DefaultVrf::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Neighbors::~Neighbors()
{
}

bool Rip::DefaultVrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Rip::DefaultVrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Rip::DefaultVrf::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set;
}

bool Rip::DefaultVrf::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string Rip::DefaultVrf::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Redistribution()
    :
    bgps(std::make_shared<Rip::DefaultVrf::Redistribution::Bgps>())
	,connected(nullptr) // presence node
	,eigrp_s(std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS>())
	,isises(std::make_shared<Rip::DefaultVrf::Redistribution::Isises>())
	,ospfs(std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs>())
	,static_(nullptr) // presence node
{
    bgps->parent = this;
    eigrp_s->parent = this;
    isises->parent = this;
    ospfs->parent = this;

    yang_name = "redistribution"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::~Redistribution()
{
}

bool Rip::DefaultVrf::Redistribution::has_data() const
{
    return (bgps !=  nullptr && bgps->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp_s !=  nullptr && eigrp_s->has_data())
	|| (isises !=  nullptr && isises->has_data())
	|| (ospfs !=  nullptr && ospfs->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Rip::DefaultVrf::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| (bgps !=  nullptr && bgps->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp_s !=  nullptr && eigrp_s->has_operation())
	|| (isises !=  nullptr && isises->has_operation())
	|| (ospfs !=  nullptr && ospfs->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Rip::DefaultVrf::Redistribution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgps")
    {
        if(bgps == nullptr)
        {
            bgps = std::make_shared<Rip::DefaultVrf::Redistribution::Bgps>();
        }
        return bgps;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Rip::DefaultVrf::Redistribution::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp-s")
    {
        if(eigrp_s == nullptr)
        {
            eigrp_s = std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS>();
        }
        return eigrp_s;
    }

    if(child_yang_name == "isises")
    {
        if(isises == nullptr)
        {
            isises = std::make_shared<Rip::DefaultVrf::Redistribution::Isises>();
        }
        return isises;
    }

    if(child_yang_name == "ospfs")
    {
        if(ospfs == nullptr)
        {
            ospfs = std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs>();
        }
        return ospfs;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Rip::DefaultVrf::Redistribution::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgps != nullptr)
    {
        children["bgps"] = bgps;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp_s != nullptr)
    {
        children["eigrp-s"] = eigrp_s;
    }

    if(isises != nullptr)
    {
        children["isises"] = isises;
    }

    if(ospfs != nullptr)
    {
        children["ospfs"] = ospfs;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgps" || name == "connected" || name == "eigrp-s" || name == "isises" || name == "ospfs" || name == "static")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Bgps::Bgps()
{

    yang_name = "bgps"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Bgps::~Bgps()
{
}

bool Rip::DefaultVrf::Redistribution::Bgps::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Bgps::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Bgps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Bgps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Bgps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Bgps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Bgps::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Bgps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Bgps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Redistribution::Bgps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Redistribution::Bgps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Bgps::Bgp::Bgp()
    :
    asnxx{YType::uint32, "asnxx"},
    asnyy{YType::uint32, "asnyy"},
    policy{YType::str, "policy"},
    type{YType::enumeration, "type"}
{

    yang_name = "bgp"; yang_parent_name = "bgps"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Bgps::Bgp::~Bgp()
{
}

bool Rip::DefaultVrf::Redistribution::Bgps::Bgp::has_data() const
{
    return asnxx.is_set
	|| asnyy.is_set
	|| policy.is_set
	|| type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Bgps::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asnxx.yfilter)
	|| ydk::is_set(asnyy.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/bgps/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[asnxx='" <<asnxx <<"']" <<"[asnyy='" <<asnyy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asnxx.is_set || is_set(asnxx.yfilter)) leaf_name_data.push_back(asnxx.get_name_leafdata());
    if (asnyy.is_set || is_set(asnyy.yfilter)) leaf_name_data.push_back(asnyy.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::Bgps::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asnxx")
    {
        asnxx = value;
        asnxx.value_namespace = name_space;
        asnxx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asnyy")
    {
        asnyy = value;
        asnyy.value_namespace = name_space;
        asnyy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::Bgps::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asnxx")
    {
        asnxx.yfilter = yfilter;
    }
    if(value_path == "asnyy")
    {
        asnyy.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::Bgps::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asnxx" || name == "asnyy" || name == "policy" || name == "type")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Connected::Connected()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "connected"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Connected::~Connected()
{
}

bool Rip::DefaultVrf::Redistribution::Connected::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::EigrpS::EigrpS()
{

    yang_name = "eigrp-s"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::EigrpS::~EigrpS()
{
}

bool Rip::DefaultVrf::Redistribution::EigrpS::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::EigrpS::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::EigrpS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::EigrpS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::EigrpS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::EigrpS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Redistribution::EigrpS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Redistribution::EigrpS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::Eigrp()
    :
    as{YType::uint32, "as"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "eigrp"; yang_parent_name = "eigrp-s"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::~Eigrp()
{
}

bool Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::has_data() const
{
    return as.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/eigrp-s/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as='" <<as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Isises::Isises()
{

    yang_name = "isises"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Isises::~Isises()
{
}

bool Rip::DefaultVrf::Redistribution::Isises::has_data() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Isises::has_operation() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Isises::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Isises::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isises";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Isises::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Isises::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Isises::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Isises::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Isises::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Redistribution::Isises::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Redistribution::Isises::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Isises::Isis::Isis()
    :
    isis_name{YType::str, "isis-name"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "isis"; yang_parent_name = "isises"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Isises::Isis::~Isis()
{
}

bool Rip::DefaultVrf::Redistribution::Isises::Isis::has_data() const
{
    return isis_name.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Isises::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Isises::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/isises/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Isises::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[isis-name='" <<isis_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Isises::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_name.is_set || is_set(isis_name.yfilter)) leaf_name_data.push_back(isis_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Isises::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Isises::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::Isises::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-name")
    {
        isis_name = value;
        isis_name.value_namespace = name_space;
        isis_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::Isises::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-name")
    {
        isis_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::Isises::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-name" || name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospfs()
{

    yang_name = "ospfs"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Ospfs::~Ospfs()
{
}

bool Rip::DefaultVrf::Redistribution::Ospfs::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Ospfs::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Ospfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Ospfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Ospfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Ospfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Redistribution::Ospfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Redistribution::Ospfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospf::Ospf()
    :
    ospf_name{YType::str, "ospf-name"},
    external{YType::boolean, "external"},
    external_type{YType::uint32, "external-type"},
    internal{YType::boolean, "internal"},
    nssa_external{YType::boolean, "nssa-external"},
    nssa_external_type{YType::uint32, "nssa-external-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "ospf"; yang_parent_name = "ospfs"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospf::~Ospf()
{
}

bool Rip::DefaultVrf::Redistribution::Ospfs::Ospf::has_data() const
{
    return ospf_name.is_set
	|| external.is_set
	|| external_type.is_set
	|| internal.is_set
	|| nssa_external.is_set
	|| nssa_external_type.is_set
	|| route_policy_name.is_set;
}

bool Rip::DefaultVrf::Redistribution::Ospfs::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf_name.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(external_type.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(nssa_external.yfilter)
	|| ydk::is_set(nssa_external_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/ospfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[ospf-name='" <<ospf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_name.is_set || is_set(ospf_name.yfilter)) leaf_name_data.push_back(ospf_name.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external_type.is_set || is_set(external_type.yfilter)) leaf_name_data.push_back(external_type.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.yfilter)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (nssa_external_type.is_set || is_set(nssa_external_type.yfilter)) leaf_name_data.push_back(nssa_external_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::Ospfs::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf-name")
    {
        ospf_name = value;
        ospf_name.value_namespace = name_space;
        ospf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type")
    {
        external_type = value;
        external_type.value_namespace = name_space;
        external_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
        nssa_external.value_namespace = name_space;
        nssa_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type = value;
        nssa_external_type.value_namespace = name_space;
        nssa_external_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::Ospfs::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf-name")
    {
        ospf_name.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "external-type")
    {
        external_type.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "nssa-external")
    {
        nssa_external.yfilter = yfilter;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::Ospfs::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-name" || name == "external" || name == "external-type" || name == "internal" || name == "nssa-external" || name == "nssa-external-type" || name == "route-policy-name")
        return true;
    return false;
}

Rip::DefaultVrf::Redistribution::Static_::Static_()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "static"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Redistribution::Static_::~Static_()
{
}

bool Rip::DefaultVrf::Redistribution::Static_::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::DefaultVrf::Redistribution::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Redistribution::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Redistribution::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Redistribution::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Redistribution::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Redistribution::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Redistribution::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::DefaultVrf::Timers::Timers()
    :
    flush_timer{YType::uint32, "flush-timer"},
    holddown_timer{YType::uint32, "holddown-timer"},
    invalid_timer{YType::uint32, "invalid-timer"},
    update_timer{YType::uint32, "update-timer"}
{

    yang_name = "timers"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::DefaultVrf::Timers::~Timers()
{
}

bool Rip::DefaultVrf::Timers::has_data() const
{
    return flush_timer.is_set
	|| holddown_timer.is_set
	|| invalid_timer.is_set
	|| update_timer.is_set;
}

bool Rip::DefaultVrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(holddown_timer.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(update_timer.yfilter);
}

std::string Rip::DefaultVrf::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (holddown_timer.is_set || is_set(holddown_timer.yfilter)) leaf_name_data.push_back(holddown_timer.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer = value;
        holddown_timer.value_namespace = name_space;
        holddown_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush-timer" || name == "holddown-timer" || name == "invalid-timer" || name == "update-timer")
        return true;
    return false;
}

Rip::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::Vrfs::~Vrfs()
{
}

bool Rip::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    auto_summary{YType::empty, "auto-summary"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    default_metric{YType::uint32, "default-metric"},
    distance{YType::uint32, "distance"},
    enable{YType::empty, "enable"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    output_delay{YType::uint32, "output-delay"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    validate_source_disable{YType::empty, "validate-source-disable"}
    	,
    default_information(nullptr) // presence node
	,interfaces(std::make_shared<Rip::Vrfs::Vrf::Interfaces>())
	,ip_distances(std::make_shared<Rip::Vrfs::Vrf::IpDistances>())
	,neighbors(std::make_shared<Rip::Vrfs::Vrf::Neighbors>())
	,redistribution(std::make_shared<Rip::Vrfs::Vrf::Redistribution>())
	,timers(nullptr) // presence node
{
    interfaces->parent = this;
    ip_distances->parent = this;
    neighbors->parent = this;
    redistribution->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Rip::Vrfs::Vrf::~Vrf()
{
}

bool Rip::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| auto_summary.is_set
	|| broadcast_for_v2.is_set
	|| default_metric.is_set
	|| distance.is_set
	|| enable.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| output_delay.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| validate_source_disable.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Rip::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(broadcast_for_v2.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(output_delay.yfilter)
	|| ydk::is_set(policy_in.yfilter)
	|| ydk::is_set(policy_out.yfilter)
	|| ydk::is_set(validate_source_disable.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Rip::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.yfilter)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.yfilter)) leaf_name_data.push_back(output_delay.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.yfilter)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.yfilter)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (validate_source_disable.is_set || is_set(validate_source_disable.yfilter)) leaf_name_data.push_back(validate_source_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Rip::Vrfs::Vrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "ip-distances")
    {
        if(ip_distances == nullptr)
        {
            ip_distances = std::make_shared<Rip::Vrfs::Vrf::IpDistances>();
        }
        return ip_distances;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Rip::Vrfs::Vrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution == nullptr)
        {
            redistribution = std::make_shared<Rip::Vrfs::Vrf::Redistribution>();
        }
        return redistribution;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Rip::Vrfs::Vrf::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(ip_distances != nullptr)
    {
        children["ip-distances"] = ip_distances;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(redistribution != nullptr)
    {
        children["redistribution"] = redistribution;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Rip::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
        broadcast_for_v2.value_namespace = name_space;
        broadcast_for_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
        output_delay.value_namespace = name_space;
        output_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
        policy_in.value_namespace = name_space;
        policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
        policy_out.value_namespace = name_space;
        policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable = value;
        validate_source_disable.value_namespace = name_space;
        validate_source_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "output-delay")
    {
        output_delay.yfilter = yfilter;
    }
    if(value_path == "policy-in")
    {
        policy_in.yfilter = yfilter;
    }
    if(value_path == "policy-out")
    {
        policy_out.yfilter = yfilter;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information" || name == "interfaces" || name == "ip-distances" || name == "neighbors" || name == "redistribution" || name == "timers" || name == "vrf-name" || name == "auto-summary" || name == "broadcast-for-v2" || name == "default-metric" || name == "distance" || name == "enable" || name == "maximum-paths" || name == "nsf" || name == "output-delay" || name == "policy-in" || name == "policy-out" || name == "validate-source-disable")
        return true;
    return false;
}

Rip::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    option{YType::enumeration, "option"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Rip::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return option.is_set
	|| route_policy_name.is_set;
}

bool Rip::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Rip::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "route-policy-name")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric_zero{YType::empty, "accept-metric-zero"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    enable{YType::empty, "enable"},
    passive{YType::empty, "passive"},
    poison_reverse{YType::empty, "poison-reverse"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    split_horizon_disable{YType::empty, "split-horizon-disable"}
    	,
    authentication(nullptr) // presence node
	,receive_version(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion>())
	,send_version(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion>())
	,site_of_origin(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin>())
{
    receive_version->parent = this;
    send_version->parent = this;
    site_of_origin->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| accept_metric_zero.is_set
	|| broadcast_for_v2.is_set
	|| enable.is_set
	|| passive.is_set
	|| poison_reverse.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| split_horizon_disable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (receive_version !=  nullptr && receive_version->has_data())
	|| (send_version !=  nullptr && send_version->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data());
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(accept_metric_zero.yfilter)
	|| ydk::is_set(broadcast_for_v2.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(poison_reverse.yfilter)
	|| ydk::is_set(policy_in.yfilter)
	|| ydk::is_set(policy_out.yfilter)
	|| ydk::is_set(split_horizon_disable.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (receive_version !=  nullptr && receive_version->has_operation())
	|| (send_version !=  nullptr && send_version->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation());
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric_zero.is_set || is_set(accept_metric_zero.yfilter)) leaf_name_data.push_back(accept_metric_zero.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.yfilter)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.yfilter)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.yfilter)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.yfilter)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (split_horizon_disable.is_set || is_set(split_horizon_disable.yfilter)) leaf_name_data.push_back(split_horizon_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "receive-version")
    {
        if(receive_version == nullptr)
        {
            receive_version = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion>();
        }
        return receive_version;
    }

    if(child_yang_name == "send-version")
    {
        if(send_version == nullptr)
        {
            send_version = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion>();
        }
        return send_version;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(receive_version != nullptr)
    {
        children["receive-version"] = receive_version;
    }

    if(send_version != nullptr)
    {
        children["send-version"] = send_version;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero = value;
        accept_metric_zero.value_namespace = name_space;
        accept_metric_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
        broadcast_for_v2.value_namespace = name_space;
        broadcast_for_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
        poison_reverse.value_namespace = name_space;
        poison_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
        policy_in.value_namespace = name_space;
        policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
        policy_out.value_namespace = name_space;
        policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable = value;
        split_horizon_disable.value_namespace = name_space;
        split_horizon_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero.yfilter = yfilter;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse.yfilter = yfilter;
    }
    if(value_path == "policy-in")
    {
        policy_in.yfilter = yfilter;
    }
    if(value_path == "policy-out")
    {
        policy_out.yfilter = yfilter;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "receive-version" || name == "send-version" || name == "site-of-origin" || name == "interface-name" || name == "accept-metric-zero" || name == "broadcast-for-v2" || name == "enable" || name == "passive" || name == "poison-reverse" || name == "policy-in" || name == "policy-out" || name == "split-horizon-disable")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::has_data() const
{
    return keychain.is_set
	|| mode.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain" || name == "mode")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::ReceiveVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{

    yang_name = "receive-version"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::~ReceiveVersion()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version1.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.yfilter)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version1")
    {
        version1 = value;
        version1.value_namespace = name_space;
        version1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version1")
    {
        version1.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version1" || name == "version2")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::SendVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{

    yang_name = "send-version"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::~SendVersion()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version1.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.yfilter)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version1")
    {
        version1 = value;
        version1.value_namespace = name_space;
        version1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version1")
    {
        version1.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version1" || name == "version2")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| type.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as-index" || name == "as-xx" || name == "as-yy" || name == "type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::IpDistances::IpDistances()
{

    yang_name = "ip-distances"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::IpDistances::~IpDistances()
{
}

bool Rip::Vrfs::Vrf::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::IpDistances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::IpDistances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_distance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::IpDistances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::IpDistances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::IpDistances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-distance")
        return true;
    return false;
}

Rip::Vrfs::Vrf::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    distance{YType::uint32, "distance"}
{

    yang_name = "ip-distance"; yang_parent_name = "ip-distances"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::IpDistances::IpDistance::~IpDistance()
{
}

bool Rip::Vrfs::Vrf::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| distance.is_set;
}

bool Rip::Vrfs::Vrf::IpDistances::IpDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Rip::Vrfs::Vrf::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::IpDistances::IpDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::IpDistances::IpDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::IpDistances::IpDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::IpDistances::IpDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::IpDistances::IpDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "distance")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Rip::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Rip::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set;
}

bool Rip::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string Rip::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Redistribution()
    :
    bgps(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps>())
	,connected(nullptr) // presence node
	,eigrp_s(std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS>())
	,isises(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises>())
	,ospfs(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs>())
	,static_(nullptr) // presence node
{
    bgps->parent = this;
    eigrp_s->parent = this;
    isises->parent = this;
    ospfs->parent = this;

    yang_name = "redistribution"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::~Redistribution()
{
}

bool Rip::Vrfs::Vrf::Redistribution::has_data() const
{
    return (bgps !=  nullptr && bgps->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp_s !=  nullptr && eigrp_s->has_data())
	|| (isises !=  nullptr && isises->has_data())
	|| (ospfs !=  nullptr && ospfs->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Rip::Vrfs::Vrf::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| (bgps !=  nullptr && bgps->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp_s !=  nullptr && eigrp_s->has_operation())
	|| (isises !=  nullptr && isises->has_operation())
	|| (ospfs !=  nullptr && ospfs->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Rip::Vrfs::Vrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgps")
    {
        if(bgps == nullptr)
        {
            bgps = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps>();
        }
        return bgps;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp-s")
    {
        if(eigrp_s == nullptr)
        {
            eigrp_s = std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS>();
        }
        return eigrp_s;
    }

    if(child_yang_name == "isises")
    {
        if(isises == nullptr)
        {
            isises = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises>();
        }
        return isises;
    }

    if(child_yang_name == "ospfs")
    {
        if(ospfs == nullptr)
        {
            ospfs = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs>();
        }
        return ospfs;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgps != nullptr)
    {
        children["bgps"] = bgps;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp_s != nullptr)
    {
        children["eigrp-s"] = eigrp_s;
    }

    if(isises != nullptr)
    {
        children["isises"] = isises;
    }

    if(ospfs != nullptr)
    {
        children["ospfs"] = ospfs;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgps" || name == "connected" || name == "eigrp-s" || name == "isises" || name == "ospfs" || name == "static")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgps()
{

    yang_name = "bgps"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Bgps::~Bgps()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Bgps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Bgps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Bgps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Bgps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::Bgp()
    :
    asnxx{YType::uint32, "asnxx"},
    asnyy{YType::uint32, "asnyy"},
    policy{YType::str, "policy"},
    type{YType::enumeration, "type"}
{

    yang_name = "bgp"; yang_parent_name = "bgps"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::~Bgp()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::has_data() const
{
    return asnxx.is_set
	|| asnyy.is_set
	|| policy.is_set
	|| type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asnxx.yfilter)
	|| ydk::is_set(asnyy.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[asnxx='" <<asnxx <<"']" <<"[asnyy='" <<asnyy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asnxx.is_set || is_set(asnxx.yfilter)) leaf_name_data.push_back(asnxx.get_name_leafdata());
    if (asnyy.is_set || is_set(asnyy.yfilter)) leaf_name_data.push_back(asnyy.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asnxx")
    {
        asnxx = value;
        asnxx.value_namespace = name_space;
        asnxx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asnyy")
    {
        asnyy = value;
        asnyy.value_namespace = name_space;
        asnyy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asnxx")
    {
        asnxx.yfilter = yfilter;
    }
    if(value_path == "asnyy")
    {
        asnyy.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asnxx" || name == "asnyy" || name == "policy" || name == "type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Connected::Connected()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "connected"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Connected::~Connected()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Connected::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::EigrpS()
{

    yang_name = "eigrp-s"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::~EigrpS()
{
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::EigrpS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::EigrpS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::EigrpS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::EigrpS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::Eigrp()
    :
    as{YType::uint32, "as"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "eigrp"; yang_parent_name = "eigrp-s"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::~Eigrp()
{
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::has_data() const
{
    return as.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as='" <<as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isises()
{

    yang_name = "isises"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Isises::~Isises()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::has_data() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::has_operation() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Isises::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isises";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Isises::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Isises::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Isises::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Isises::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Redistribution::Isises::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isis::Isis()
    :
    isis_name{YType::str, "isis-name"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "isis"; yang_parent_name = "isises"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isis::~Isis()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::Isis::has_data() const
{
    return isis_name.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[isis-name='" <<isis_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_name.is_set || is_set(isis_name.yfilter)) leaf_name_data.push_back(isis_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Isises::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-name")
    {
        isis_name = value;
        isis_name.value_namespace = name_space;
        isis_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::Isises::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-name")
    {
        isis_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-name" || name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospfs()
{

    yang_name = "ospfs"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::~Ospfs()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Ospfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Ospfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Ospfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Ospfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::Ospf()
    :
    ospf_name{YType::str, "ospf-name"},
    external{YType::boolean, "external"},
    external_type{YType::uint32, "external-type"},
    internal{YType::boolean, "internal"},
    nssa_external{YType::boolean, "nssa-external"},
    nssa_external_type{YType::uint32, "nssa-external-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "ospf"; yang_parent_name = "ospfs"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::~Ospf()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::has_data() const
{
    return ospf_name.is_set
	|| external.is_set
	|| external_type.is_set
	|| internal.is_set
	|| nssa_external.is_set
	|| nssa_external_type.is_set
	|| route_policy_name.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf_name.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(external_type.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(nssa_external.yfilter)
	|| ydk::is_set(nssa_external_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[ospf-name='" <<ospf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_name.is_set || is_set(ospf_name.yfilter)) leaf_name_data.push_back(ospf_name.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external_type.is_set || is_set(external_type.yfilter)) leaf_name_data.push_back(external_type.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.yfilter)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (nssa_external_type.is_set || is_set(nssa_external_type.yfilter)) leaf_name_data.push_back(nssa_external_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf-name")
    {
        ospf_name = value;
        ospf_name.value_namespace = name_space;
        ospf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type")
    {
        external_type = value;
        external_type.value_namespace = name_space;
        external_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
        nssa_external.value_namespace = name_space;
        nssa_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type = value;
        nssa_external_type.value_namespace = name_space;
        nssa_external_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf-name")
    {
        ospf_name.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "external-type")
    {
        external_type.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "nssa-external")
    {
        nssa_external.yfilter = yfilter;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-name" || name == "external" || name == "external-type" || name == "internal" || name == "nssa-external" || name == "nssa-external-type" || name == "route-policy-name")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Redistribution::Static_::Static_()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "static"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Redistribution::Static_::~Static_()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Static_::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Rip::Vrfs::Vrf::Redistribution::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Redistribution::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Redistribution::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Redistribution::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Redistribution::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "route-type")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Timers::Timers()
    :
    flush_timer{YType::uint32, "flush-timer"},
    holddown_timer{YType::uint32, "holddown-timer"},
    invalid_timer{YType::uint32, "invalid-timer"},
    update_timer{YType::uint32, "update-timer"}
{

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Rip::Vrfs::Vrf::Timers::~Timers()
{
}

bool Rip::Vrfs::Vrf::Timers::has_data() const
{
    return flush_timer.is_set
	|| holddown_timer.is_set
	|| invalid_timer.is_set
	|| update_timer.is_set;
}

bool Rip::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(holddown_timer.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(update_timer.yfilter);
}

std::string Rip::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (holddown_timer.is_set || is_set(holddown_timer.yfilter)) leaf_name_data.push_back(holddown_timer.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer = value;
        holddown_timer.value_namespace = name_space;
        holddown_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush-timer" || name == "holddown-timer" || name == "invalid-timer" || name == "update-timer")
        return true;
    return false;
}

const Enum::YLeaf RipAuthMode::text {2, "text"};
const Enum::YLeaf RipAuthMode::md5 {3, "md5"};

const Enum::YLeaf DefaultInformationOption::always {0, "always"};
const Enum::YLeaf DefaultInformationOption::policy {1, "policy"};

const Enum::YLeaf IsisRedistRoute::level1 {1, "level1"};
const Enum::YLeaf IsisRedistRoute::level2 {2, "level2"};
const Enum::YLeaf IsisRedistRoute::level1_and2 {3, "level1-and2"};

const Enum::YLeaf BgpRedistRoute::all {0, "all"};
const Enum::YLeaf BgpRedistRoute::internal {512, "internal"};
const Enum::YLeaf BgpRedistRoute::external {1024, "external"};
const Enum::YLeaf BgpRedistRoute::local {2048, "local"};

const Enum::YLeaf RipExtCommunity::as {0, "as"};
const Enum::YLeaf RipExtCommunity::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf RipExtCommunity::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf DefaultRedistRoute::all {0, "all"};


}
}

