
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_telemetry_model_driven_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_telemetry_model_driven_cfg {

TelemetryModelDriven::TelemetryModelDriven()
    :
    enable{YType::empty, "enable"}
    	,
    destination_groups(std::make_shared<TelemetryModelDriven::DestinationGroups>())
	,sensor_groups(std::make_shared<TelemetryModelDriven::SensorGroups>())
	,subscriptions(std::make_shared<TelemetryModelDriven::Subscriptions>())
{
    destination_groups->parent = this;
    sensor_groups->parent = this;
    subscriptions->parent = this;

    yang_name = "telemetry-model-driven"; yang_parent_name = "Cisco-IOS-XR-telemetry-model-driven-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

TelemetryModelDriven::~TelemetryModelDriven()
{
}

bool TelemetryModelDriven::has_data() const
{
    return enable.is_set
	|| (destination_groups !=  nullptr && destination_groups->has_data())
	|| (sensor_groups !=  nullptr && sensor_groups->has_data())
	|| (subscriptions !=  nullptr && subscriptions->has_data());
}

bool TelemetryModelDriven::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (destination_groups !=  nullptr && destination_groups->has_operation())
	|| (sensor_groups !=  nullptr && sensor_groups->has_operation())
	|| (subscriptions !=  nullptr && subscriptions->has_operation());
}

std::string TelemetryModelDriven::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-groups")
    {
        if(destination_groups == nullptr)
        {
            destination_groups = std::make_shared<TelemetryModelDriven::DestinationGroups>();
        }
        return destination_groups;
    }

    if(child_yang_name == "sensor-groups")
    {
        if(sensor_groups == nullptr)
        {
            sensor_groups = std::make_shared<TelemetryModelDriven::SensorGroups>();
        }
        return sensor_groups;
    }

    if(child_yang_name == "subscriptions")
    {
        if(subscriptions == nullptr)
        {
            subscriptions = std::make_shared<TelemetryModelDriven::Subscriptions>();
        }
        return subscriptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_groups != nullptr)
    {
        children["destination-groups"] = destination_groups;
    }

    if(sensor_groups != nullptr)
    {
        children["sensor-groups"] = sensor_groups;
    }

    if(subscriptions != nullptr)
    {
        children["subscriptions"] = subscriptions;
    }

    return children;
}

void TelemetryModelDriven::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> TelemetryModelDriven::clone_ptr() const
{
    return std::make_shared<TelemetryModelDriven>();
}

std::string TelemetryModelDriven::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TelemetryModelDriven::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TelemetryModelDriven::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TelemetryModelDriven::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TelemetryModelDriven::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-groups" || name == "sensor-groups" || name == "subscriptions" || name == "enable")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroups()
{

    yang_name = "destination-groups"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::DestinationGroups::~DestinationGroups()
{
}

bool TelemetryModelDriven::DestinationGroups::has_data() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::DestinationGroups::has_operation() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::DestinationGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::DestinationGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-group")
    {
        for(auto const & c : destination_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup>();
        c->parent = this;
        destination_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::DestinationGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::DestinationGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-group")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::DestinationGroup()
    :
    destination_id{YType::str, "destination-id"},
    vrf{YType::str, "vrf"}
    	,
    ipv4_destinations(std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations>())
	,ipv6_destinations(std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations>())
{
    ipv4_destinations->parent = this;
    ipv6_destinations->parent = this;

    yang_name = "destination-group"; yang_parent_name = "destination-groups"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::~DestinationGroup()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::has_data() const
{
    return destination_id.is_set
	|| vrf.is_set
	|| (ipv4_destinations !=  nullptr && ipv4_destinations->has_data())
	|| (ipv6_destinations !=  nullptr && ipv6_destinations->has_data());
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ipv4_destinations !=  nullptr && ipv4_destinations->has_operation())
	|| (ipv6_destinations !=  nullptr && ipv6_destinations->has_operation());
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/destination-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-group" <<"[destination-id='" <<destination_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_id.is_set || is_set(destination_id.yfilter)) leaf_name_data.push_back(destination_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-destinations")
    {
        if(ipv4_destinations == nullptr)
        {
            ipv4_destinations = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations>();
        }
        return ipv4_destinations;
    }

    if(child_yang_name == "ipv6-destinations")
    {
        if(ipv6_destinations == nullptr)
        {
            ipv6_destinations = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations>();
        }
        return ipv6_destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_destinations != nullptr)
    {
        children["ipv4-destinations"] = ipv4_destinations;
    }

    if(ipv6_destinations != nullptr)
    {
        children["ipv6-destinations"] = ipv6_destinations;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-id")
    {
        destination_id = value;
        destination_id.value_namespace = name_space;
        destination_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-id")
    {
        destination_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-destinations" || name == "ipv6-destinations" || name == "destination-id" || name == "vrf")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destinations()
{

    yang_name = "ipv4-destinations"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::~Ipv4Destinations()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::has_data() const
{
    for (std::size_t index=0; index<ipv4_destination.size(); index++)
    {
        if(ipv4_destination[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::has_operation() const
{
    for (std::size_t index=0; index<ipv4_destination.size(); index++)
    {
        if(ipv4_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-destination")
    {
        for(auto const & c : ipv4_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination>();
        c->parent = this;
        ipv4_destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-destination")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Ipv4Destination()
    :
    ipv4_address{YType::str, "ipv4-address"},
    destination_port{YType::uint16, "destination-port"},
    encoding{YType::enumeration, "encoding"}
    	,
    protocol(nullptr) // presence node
{

    yang_name = "ipv4-destination"; yang_parent_name = "ipv4-destinations"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::~Ipv4Destination()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::has_data() const
{
    return ipv4_address.is_set
	|| destination_port.is_set
	|| encoding.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-destination" <<"[ipv4-address='" <<ipv4_address <<"']" <<"[destination-port='" <<destination_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "ipv4-address" || name == "destination-port" || name == "encoding")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::Protocol()
    :
    no_tls{YType::int32, "no-tls"},
    packetsize{YType::uint32, "packetsize"},
    protocol{YType::enumeration, "protocol"},
    tls_hostname{YType::str, "tls-hostname"}
{

    yang_name = "protocol"; yang_parent_name = "ipv4-destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::~Protocol()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::has_data() const
{
    return no_tls.is_set
	|| packetsize.is_set
	|| protocol.is_set
	|| tls_hostname.is_set;
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_tls.yfilter)
	|| ydk::is_set(packetsize.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(tls_hostname.yfilter);
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_tls.is_set || is_set(no_tls.yfilter)) leaf_name_data.push_back(no_tls.get_name_leafdata());
    if (packetsize.is_set || is_set(packetsize.yfilter)) leaf_name_data.push_back(packetsize.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tls_hostname.is_set || is_set(tls_hostname.yfilter)) leaf_name_data.push_back(tls_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-tls")
    {
        no_tls = value;
        no_tls.value_namespace = name_space;
        no_tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetsize")
    {
        packetsize = value;
        packetsize.value_namespace = name_space;
        packetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-hostname")
    {
        tls_hostname = value;
        tls_hostname.value_namespace = name_space;
        tls_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-tls")
    {
        no_tls.yfilter = yfilter;
    }
    if(value_path == "packetsize")
    {
        packetsize.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "tls-hostname")
    {
        tls_hostname.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-tls" || name == "packetsize" || name == "protocol" || name == "tls-hostname")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destinations()
{

    yang_name = "ipv6-destinations"; yang_parent_name = "destination-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::~Ipv6Destinations()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::has_data() const
{
    for (std::size_t index=0; index<ipv6_destination.size(); index++)
    {
        if(ipv6_destination[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::has_operation() const
{
    for (std::size_t index=0; index<ipv6_destination.size(); index++)
    {
        if(ipv6_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-destination")
    {
        for(auto const & c : ipv6_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination>();
        c->parent = this;
        ipv6_destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-destination")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Ipv6Destination()
    :
    ipv6_address{YType::str, "ipv6-address"},
    destination_port{YType::uint16, "destination-port"},
    encoding{YType::enumeration, "encoding"}
    	,
    protocol(nullptr) // presence node
{

    yang_name = "ipv6-destination"; yang_parent_name = "ipv6-destinations"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::~Ipv6Destination()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::has_data() const
{
    return ipv6_address.is_set
	|| destination_port.is_set
	|| encoding.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-destination" <<"[ipv6-address='" <<ipv6_address <<"']" <<"[destination-port='" <<destination_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "ipv6-address" || name == "destination-port" || name == "encoding")
        return true;
    return false;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::Protocol()
    :
    no_tls{YType::int32, "no-tls"},
    packetsize{YType::uint32, "packetsize"},
    protocol{YType::enumeration, "protocol"},
    tls_hostname{YType::str, "tls-hostname"}
{

    yang_name = "protocol"; yang_parent_name = "ipv6-destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::~Protocol()
{
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::has_data() const
{
    return no_tls.is_set
	|| packetsize.is_set
	|| protocol.is_set
	|| tls_hostname.is_set;
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_tls.yfilter)
	|| ydk::is_set(packetsize.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(tls_hostname.yfilter);
}

std::string TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_tls.is_set || is_set(no_tls.yfilter)) leaf_name_data.push_back(no_tls.get_name_leafdata());
    if (packetsize.is_set || is_set(packetsize.yfilter)) leaf_name_data.push_back(packetsize.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tls_hostname.is_set || is_set(tls_hostname.yfilter)) leaf_name_data.push_back(tls_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-tls")
    {
        no_tls = value;
        no_tls.value_namespace = name_space;
        no_tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetsize")
    {
        packetsize = value;
        packetsize.value_namespace = name_space;
        packetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-hostname")
    {
        tls_hostname = value;
        tls_hostname.value_namespace = name_space;
        tls_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-tls")
    {
        no_tls.yfilter = yfilter;
    }
    if(value_path == "packetsize")
    {
        packetsize.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "tls-hostname")
    {
        tls_hostname.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-tls" || name == "packetsize" || name == "protocol" || name == "tls-hostname")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroups()
{

    yang_name = "sensor-groups"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::SensorGroups::~SensorGroups()
{
}

bool TelemetryModelDriven::SensorGroups::has_data() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::SensorGroups::has_operation() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::SensorGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::SensorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-group")
    {
        for(auto const & c : sensor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup>();
        c->parent = this;
        sensor_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::SensorGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::SensorGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorGroup()
    :
    sensor_group_identifier{YType::str, "sensor-group-identifier"}
    	,
    sensor_paths(std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths>())
{
    sensor_paths->parent = this;

    yang_name = "sensor-group"; yang_parent_name = "sensor-groups"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::~SensorGroup()
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_data() const
{
    return sensor_group_identifier.is_set
	|| (sensor_paths !=  nullptr && sensor_paths->has_data());
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_group_identifier.yfilter)
	|| (sensor_paths !=  nullptr && sensor_paths->has_operation());
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/sensor-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group" <<"[sensor-group-identifier='" <<sensor_group_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::SensorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_identifier.is_set || is_set(sensor_group_identifier.yfilter)) leaf_name_data.push_back(sensor_group_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-paths")
    {
        if(sensor_paths == nullptr)
        {
            sensor_paths = std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths>();
        }
        return sensor_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::SensorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sensor_paths != nullptr)
    {
        children["sensor-paths"] = sensor_paths;
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group-identifier")
    {
        sensor_group_identifier = value;
        sensor_group_identifier.value_namespace = name_space;
        sensor_group_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::SensorGroups::SensorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group-identifier")
    {
        sensor_group_identifier.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-paths" || name == "sensor-group-identifier")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPaths()
{

    yang_name = "sensor-paths"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::~SensorPaths()
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::has_data() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath>();
        c->parent = this;
        sensor_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-path")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::SensorPath()
    :
    telemetry_sensor_path{YType::str, "telemetry-sensor-path"}
{

    yang_name = "sensor-path"; yang_parent_name = "sensor-paths"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::~SensorPath()
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_data() const
{
    return telemetry_sensor_path.is_set;
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telemetry_sensor_path.yfilter);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path" <<"[telemetry-sensor-path='" <<telemetry_sensor_path <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telemetry_sensor_path.is_set || is_set(telemetry_sensor_path.yfilter)) leaf_name_data.push_back(telemetry_sensor_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telemetry-sensor-path")
    {
        telemetry_sensor_path = value;
        telemetry_sensor_path.value_namespace = name_space;
        telemetry_sensor_path.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telemetry-sensor-path")
    {
        telemetry_sensor_path.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telemetry-sensor-path")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscriptions()
{

    yang_name = "subscriptions"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Subscriptions::~Subscriptions()
{
}

bool TelemetryModelDriven::Subscriptions::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::Subscriptions::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::Subscriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription>();
        c->parent = this;
        subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Subscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Subscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription()
    :
    subscription_identifier{YType::str, "subscription-identifier"},
    source_interface{YType::str, "source-interface"},
    source_qos_marking{YType::enumeration, "source-qos-marking"}
    	,
    destination_profiles(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles>())
	,sensor_profiles(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles>())
{
    destination_profiles->parent = this;
    sensor_profiles->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscriptions"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Subscriptions::Subscription::~Subscription()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_data() const
{
    return subscription_identifier.is_set
	|| source_interface.is_set
	|| source_qos_marking.is_set
	|| (destination_profiles !=  nullptr && destination_profiles->has_data())
	|| (sensor_profiles !=  nullptr && sensor_profiles->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_identifier.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_qos_marking.yfilter)
	|| (destination_profiles !=  nullptr && destination_profiles->has_operation())
	|| (sensor_profiles !=  nullptr && sensor_profiles->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven/subscriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Subscriptions::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-identifier='" <<subscription_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_identifier.is_set || is_set(subscription_identifier.yfilter)) leaf_name_data.push_back(subscription_identifier.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_qos_marking.is_set || is_set(source_qos_marking.yfilter)) leaf_name_data.push_back(source_qos_marking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-profiles")
    {
        if(destination_profiles == nullptr)
        {
            destination_profiles = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles>();
        }
        return destination_profiles;
    }

    if(child_yang_name == "sensor-profiles")
    {
        if(sensor_profiles == nullptr)
        {
            sensor_profiles = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles>();
        }
        return sensor_profiles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_profiles != nullptr)
    {
        children["destination-profiles"] = destination_profiles;
    }

    if(sensor_profiles != nullptr)
    {
        children["sensor-profiles"] = sensor_profiles;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-identifier")
    {
        subscription_identifier = value;
        subscription_identifier.value_namespace = name_space;
        subscription_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-qos-marking")
    {
        source_qos_marking = value;
        source_qos_marking.value_namespace = name_space;
        source_qos_marking.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-identifier")
    {
        subscription_identifier.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-qos-marking")
    {
        source_qos_marking.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-profiles" || name == "sensor-profiles" || name == "subscription-identifier" || name == "source-interface" || name == "source-qos-marking")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfiles()
{

    yang_name = "destination-profiles"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::~DestinationProfiles()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::has_data() const
{
    for (std::size_t index=0; index<destination_profile.size(); index++)
    {
        if(destination_profile[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::has_operation() const
{
    for (std::size_t index=0; index<destination_profile.size(); index++)
    {
        if(destination_profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-profile")
    {
        for(auto const & c : destination_profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile>();
        c->parent = this;
        destination_profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-profile")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::DestinationProfile()
    :
    destination_id{YType::str, "destination-id"}
{

    yang_name = "destination-profile"; yang_parent_name = "destination-profiles"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::~DestinationProfile()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::has_data() const
{
    return destination_id.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_id.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-profile" <<"[destination-id='" <<destination_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_id.is_set || is_set(destination_id.yfilter)) leaf_name_data.push_back(destination_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-id")
    {
        destination_id = value;
        destination_id.value_namespace = name_space;
        destination_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-id")
    {
        destination_id.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-id")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfiles()
{

    yang_name = "sensor-profiles"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::~SensorProfiles()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::has_data() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::has_operation() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-profile")
    {
        for(auto const & c : sensor_profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile>();
        c->parent = this;
        sensor_profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-profile")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::SensorProfile()
    :
    sensorgroupid{YType::str, "sensorgroupid"},
    sample_interval{YType::uint32, "sample-interval"},
    strict_timer{YType::empty, "strict-timer"}
{

    yang_name = "sensor-profile"; yang_parent_name = "sensor-profiles"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::~SensorProfile()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::has_data() const
{
    return sensorgroupid.is_set
	|| sample_interval.is_set
	|| strict_timer.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensorgroupid.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(strict_timer.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profile" <<"[sensorgroupid='" <<sensorgroupid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensorgroupid.is_set || is_set(sensorgroupid.yfilter)) leaf_name_data.push_back(sensorgroupid.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (strict_timer.is_set || is_set(strict_timer.yfilter)) leaf_name_data.push_back(strict_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensorgroupid")
    {
        sensorgroupid = value;
        sensorgroupid.value_namespace = name_space;
        sensorgroupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-timer")
    {
        strict_timer = value;
        strict_timer.value_namespace = name_space;
        strict_timer.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensorgroupid")
    {
        sensorgroupid.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "strict-timer")
    {
        strict_timer.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensorgroupid" || name == "sample-interval" || name == "strict-timer")
        return true;
    return false;
}

const Enum::YLeaf ProtoType::grpc {1, "grpc"};
const Enum::YLeaf ProtoType::tcp {2, "tcp"};
const Enum::YLeaf ProtoType::udp {3, "udp"};

const Enum::YLeaf EncodeType::gpb {2, "gpb"};
const Enum::YLeaf EncodeType::self_describing_gpb {3, "self-describing-gpb"};
const Enum::YLeaf EncodeType::json {4, "json"};

const Enum::YLeaf MdtDscpValue::default_ {0, "default"};
const Enum::YLeaf MdtDscpValue::cs1 {8, "cs1"};
const Enum::YLeaf MdtDscpValue::af11 {10, "af11"};
const Enum::YLeaf MdtDscpValue::af12 {12, "af12"};
const Enum::YLeaf MdtDscpValue::af13 {14, "af13"};
const Enum::YLeaf MdtDscpValue::cs2 {16, "cs2"};
const Enum::YLeaf MdtDscpValue::af21 {18, "af21"};
const Enum::YLeaf MdtDscpValue::af22 {20, "af22"};
const Enum::YLeaf MdtDscpValue::af23 {22, "af23"};
const Enum::YLeaf MdtDscpValue::cs3 {24, "cs3"};
const Enum::YLeaf MdtDscpValue::af31 {26, "af31"};
const Enum::YLeaf MdtDscpValue::af32 {28, "af32"};
const Enum::YLeaf MdtDscpValue::af33 {30, "af33"};
const Enum::YLeaf MdtDscpValue::cs4 {32, "cs4"};
const Enum::YLeaf MdtDscpValue::af41 {34, "af41"};
const Enum::YLeaf MdtDscpValue::af42 {36, "af42"};
const Enum::YLeaf MdtDscpValue::af43 {38, "af43"};
const Enum::YLeaf MdtDscpValue::cs5 {40, "cs5"};
const Enum::YLeaf MdtDscpValue::ef {46, "ef"};
const Enum::YLeaf MdtDscpValue::cs6 {48, "cs6"};
const Enum::YLeaf MdtDscpValue::cs7 {56, "cs7"};


}
}

