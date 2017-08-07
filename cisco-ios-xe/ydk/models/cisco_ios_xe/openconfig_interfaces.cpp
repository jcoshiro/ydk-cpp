
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_interfaces.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace openconfig_interfaces {

Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "openconfig-interfaces";
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-interfaces:interfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Interfaces::clone_ptr() const
{
    return std::make_shared<Interfaces>();
}

std::string Interfaces::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Interfaces::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    aggregation(std::make_shared<Interfaces::Interface::Aggregation>())
	,config(std::make_shared<Interfaces::Interface::Config>())
	,ethernet(std::make_shared<Interfaces::Interface::Ethernet>())
	,hold_time(std::make_shared<Interfaces::Interface::HoldTime>())
	,routed_vlan(std::make_shared<Interfaces::Interface::RoutedVlan>())
	,state(std::make_shared<Interfaces::Interface::State>())
	,subinterfaces(std::make_shared<Interfaces::Interface::Subinterfaces>())
{
    aggregation->parent = this;

    config->parent = this;

    ethernet->parent = this;

    hold_time->parent = this;

    routed_vlan->parent = this;

    state->parent = this;

    subinterfaces->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (aggregation !=  nullptr && aggregation->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (routed_vlan !=  nullptr && routed_vlan->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (subinterfaces !=  nullptr && subinterfaces->has_data());
}

bool Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (aggregation !=  nullptr && aggregation->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (routed_vlan !=  nullptr && routed_vlan->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (subinterfaces !=  nullptr && subinterfaces->has_operation());
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-interfaces:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation")
    {
        if(aggregation == nullptr)
        {
            aggregation = std::make_shared<Interfaces::Interface::Aggregation>();
        }
        return aggregation;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Interfaces::Interface::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Interfaces::Interface::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "routed-vlan")
    {
        if(routed_vlan == nullptr)
        {
            routed_vlan = std::make_shared<Interfaces::Interface::RoutedVlan>();
        }
        return routed_vlan;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "subinterfaces")
    {
        if(subinterfaces == nullptr)
        {
            subinterfaces = std::make_shared<Interfaces::Interface::Subinterfaces>();
        }
        return subinterfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation != nullptr)
    {
        children["aggregation"] = aggregation;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(routed_vlan != nullptr)
    {
        children["routed-vlan"] = routed_vlan;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(subinterfaces != nullptr)
    {
        children["subinterfaces"] = subinterfaces;
    }

    return children;
}

void Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregation" || name == "config" || name == "ethernet" || name == "hold-time" || name == "routed-vlan" || name == "state" || name == "subinterfaces" || name == "name")
        return true;
    return false;
}

Interfaces::Interface::Config::Config()
    :
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"},
    name{YType::str, "name"},
    type{YType::identityref, "type"}
    	,
    bandwidth(std::make_shared<Interfaces::Interface::Config::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "config"; yang_parent_name = "interface";
}

Interfaces::Interface::Config::~Config()
{
}

bool Interfaces::Interface::Config::has_data() const
{
    return description.is_set
	|| enabled.is_set
	|| mtu.is_set
	|| name.is_set
	|| type.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Interfaces::Interface::Config::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "description" || name == "enabled" || name == "mtu" || name == "name" || name == "type")
        return true;
    return false;
}

Interfaces::Interface::Config::Bandwidth::Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "bandwidth"; yang_parent_name = "config";
}

Interfaces::Interface::Config::Bandwidth::~Bandwidth()
{
}

bool Interfaces::Interface::Config::Bandwidth::has_data() const
{
    return kilobits.is_set;
}

bool Interfaces::Interface::Config::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Interfaces::Interface::Config::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-xe-openconfig-interfaces-ext:bandwidth";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Config::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Config::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Config::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Config::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Config::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Config::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::RoutedVlan()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Config>())
	,ipv4(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4>())
	,ipv6(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::State>())
{
    config->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    state->parent = this;

    yang_name = "routed-vlan"; yang_parent_name = "interface";
}

Interfaces::Interface::RoutedVlan::~RoutedVlan()
{
}

bool Interfaces::Interface::RoutedVlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:routed-vlan";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutedVlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "ipv4" || name == "ipv6" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Config::Config()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "config"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Config::has_data() const
{
    return vlan.is_set;
}

bool Interfaces::Interface::RoutedVlan::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::State::State()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "state"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::State::has_data() const
{
    return vlan.is_set;
}

bool Interfaces::Interface::RoutedVlan::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Ipv4()
    :
    addresses(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses>())
	,config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Config>())
	,neighbors(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::State>())
	,unnumbered(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered>())
{
    addresses->parent = this;

    config->parent = this;

    neighbors->parent = this;

    state->parent = this;

    unnumbered->parent = this;

    yang_name = "ipv4"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (unnumbered !=  nullptr && unnumbered->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (unnumbered !=  nullptr && unnumbered->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv4";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Config>();
        }
        return config;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::State>();
        }
        return state;
    }

    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered>();
        }
        return unnumbered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "config" || name == "neighbors" || name == "state" || name == "unnumbered")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::~Addresses()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp>())
{
    config->parent = this;

    state->parent = this;

    vrrp->parent = this;

    yang_name = "address"; yang_parent_name = "addresses";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::~Address()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State>();
        }
        return state;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "vrrp" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrrp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;

    interface_tracking->parent = this;

    state->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking == nullptr)
        {
            interface_tracking = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>();
        }
        return interface_tracking;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_tracking != nullptr)
    {
        children["interface-tracking"] = interface_tracking;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-tracking" || name == "state" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(current_priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.yfilter)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
        current_priority.value_namespace = name_space;
        current_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "current-priority")
    {
        current_priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "current-priority" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Addresses::Address::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::~Neighbors()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address" || name == "origin")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Unnumbered()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config>())
	,interface_ref(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State>())
{
    config->parent = this;

    interface_ref->parent = this;

    state->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::~Unnumbered()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unnumbered' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-ref" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::~InterfaceRef()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Unnumbered::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Config::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv4::State::State()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::State::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv4::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv4::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv4::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv4::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Ipv6()
    :
    addresses(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses>())
	,config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Config>())
	,neighbors(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::State>())
	,unnumbered(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered>())
{
    addresses->parent = this;

    config->parent = this;

    neighbors->parent = this;

    state->parent = this;

    unnumbered->parent = this;

    yang_name = "ipv6"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (unnumbered !=  nullptr && unnumbered->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (unnumbered !=  nullptr && unnumbered->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv6";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Config>();
        }
        return config;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::State>();
        }
        return state;
    }

    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered>();
        }
        return unnumbered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "config" || name == "neighbors" || name == "state" || name == "unnumbered")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::~Addresses()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp>())
{
    config->parent = this;

    state->parent = this;

    vrrp->parent = this;

    yang_name = "address"; yang_parent_name = "addresses";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::~Address()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State>();
        }
        return state;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "vrrp" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length" || name == "status")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrrp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;

    interface_tracking->parent = this;

    state->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking == nullptr)
        {
            interface_tracking = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>();
        }
        return interface_tracking;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_tracking != nullptr)
    {
        children["interface-tracking"] = interface_tracking;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-tracking" || name == "state" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_link_local.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.yfilter)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
        virtual_link_local.value_namespace = name_space;
        virtual_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-link-local" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(current_priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_link_local.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.yfilter)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.yfilter)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
        current_priority.value_namespace = name_space;
        current_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
        virtual_link_local.value_namespace = name_space;
        virtual_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "current-priority")
    {
        current_priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "current-priority" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-link-local" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::~Neighbors()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| neighbor_state.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "is-router" || name == "link-layer-address" || name == "neighbor-state" || name == "origin")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Unnumbered()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config>())
	,interface_ref(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State>())
{
    config->parent = this;

    interface_ref->parent = this;

    state->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::~Unnumbered()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unnumbered' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-ref" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::~InterfaceRef()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Unnumbered::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::Config::Config()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Config::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dup-addr-detect-transmits" || name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::RoutedVlan::Ipv6::State::State()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::State::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::RoutedVlan::Ipv6::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::RoutedVlan::Ipv6::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::RoutedVlan::Ipv6::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::RoutedVlan::Ipv6::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dup-addr-detect-transmits" || name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::Aggregation()
    :
    config(std::make_shared<Interfaces::Interface::Aggregation::Config>())
	,state(std::make_shared<Interfaces::Interface::Aggregation::State>())
	,switched_vlan(std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan>())
{
    config->parent = this;

    state->parent = this;

    switched_vlan->parent = this;

    yang_name = "aggregation"; yang_parent_name = "interface";
}

Interfaces::Interface::Aggregation::~Aggregation()
{
}

bool Interfaces::Interface::Aggregation::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (switched_vlan !=  nullptr && switched_vlan->has_data());
}

bool Interfaces::Interface::Aggregation::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (switched_vlan !=  nullptr && switched_vlan->has_operation());
}

std::string Interfaces::Interface::Aggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-aggregate:aggregation";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregation' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Aggregation::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::State>();
        }
        return state;
    }

    if(child_yang_name == "switched-vlan")
    {
        if(switched_vlan == nullptr)
        {
            switched_vlan = std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan>();
        }
        return switched_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(switched_vlan != nullptr)
    {
        children["switched-vlan"] = switched_vlan;
    }

    return children;
}

void Interfaces::Interface::Aggregation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Aggregation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Aggregation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "switched-vlan")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::Config::Config()
    :
    lag_type{YType::enumeration, "lag-type"},
    min_links{YType::uint16, "min-links"}
{
    yang_name = "config"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::Config::~Config()
{
}

bool Interfaces::Interface::Aggregation::Config::has_data() const
{
    return lag_type.is_set
	|| min_links.is_set;
}

bool Interfaces::Interface::Aggregation::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lag_type.yfilter)
	|| ydk::is_set(min_links.yfilter);
}

std::string Interfaces::Interface::Aggregation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lag_type.is_set || is_set(lag_type.yfilter)) leaf_name_data.push_back(lag_type.get_name_leafdata());
    if (min_links.is_set || is_set(min_links.yfilter)) leaf_name_data.push_back(min_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Aggregation::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lag-type")
    {
        lag_type = value;
        lag_type.value_namespace = name_space;
        lag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-links")
    {
        min_links = value;
        min_links.value_namespace = name_space;
        min_links.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Aggregation::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lag-type")
    {
        lag_type.yfilter = yfilter;
    }
    if(value_path == "min-links")
    {
        min_links.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Aggregation::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lag-type" || name == "min-links")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::State::State()
    :
    lag_speed{YType::uint32, "lag-speed"},
    lag_type{YType::enumeration, "lag-type"},
    member{YType::str, "member"},
    min_links{YType::uint16, "min-links"}
{
    yang_name = "state"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::State::~State()
{
}

bool Interfaces::Interface::Aggregation::State::has_data() const
{
    for (auto const & leaf : member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lag_speed.is_set
	|| lag_type.is_set
	|| min_links.is_set;
}

bool Interfaces::Interface::Aggregation::State::has_operation() const
{
    for (auto const & leaf : member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lag_speed.yfilter)
	|| ydk::is_set(lag_type.yfilter)
	|| ydk::is_set(member.yfilter)
	|| ydk::is_set(min_links.yfilter);
}

std::string Interfaces::Interface::Aggregation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lag_speed.is_set || is_set(lag_speed.yfilter)) leaf_name_data.push_back(lag_speed.get_name_leafdata());
    if (lag_type.is_set || is_set(lag_type.yfilter)) leaf_name_data.push_back(lag_type.get_name_leafdata());
    if (min_links.is_set || is_set(min_links.yfilter)) leaf_name_data.push_back(min_links.get_name_leafdata());

    auto member_name_datas = member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_name_datas.begin(), member_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Aggregation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lag-speed")
    {
        lag_speed = value;
        lag_speed.value_namespace = name_space;
        lag_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lag-type")
    {
        lag_type = value;
        lag_type.value_namespace = name_space;
        lag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member")
    {
        member.append(value);
    }
    if(value_path == "min-links")
    {
        min_links = value;
        min_links.value_namespace = name_space;
        min_links.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Aggregation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lag-speed")
    {
        lag_speed.yfilter = yfilter;
    }
    if(value_path == "lag-type")
    {
        lag_type.yfilter = yfilter;
    }
    if(value_path == "member")
    {
        member.yfilter = yfilter;
    }
    if(value_path == "min-links")
    {
        min_links.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Aggregation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lag-speed" || name == "lag-type" || name == "member" || name == "min-links")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::SwitchedVlan::SwitchedVlan()
    :
    config(std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "switched-vlan"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::SwitchedVlan::~SwitchedVlan()
{
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Aggregation::SwitchedVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:switched-vlan";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::SwitchedVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchedVlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::SwitchedVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::SwitchedVlan::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::SwitchedVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Aggregation::SwitchedVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Aggregation::SwitchedVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::SwitchedVlan::Config::Config()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "config"; yang_parent_name = "switched-vlan";
}

Interfaces::Interface::Aggregation::SwitchedVlan::Config::~Config()
{
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::Config::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::Config::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(interface_mode.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(trunk_vlans.yfilter);
}

std::string Interfaces::Interface::Aggregation::SwitchedVlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::SwitchedVlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.yfilter)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::SwitchedVlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::SwitchedVlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Aggregation::SwitchedVlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
        interface_mode.value_namespace = name_space;
        interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

void Interfaces::Interface::Aggregation::SwitchedVlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "interface-mode")
    {
        interface_mode.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vlan" || name == "interface-mode" || name == "native-vlan" || name == "trunk-vlans")
        return true;
    return false;
}

Interfaces::Interface::Aggregation::SwitchedVlan::State::State()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "state"; yang_parent_name = "switched-vlan";
}

Interfaces::Interface::Aggregation::SwitchedVlan::State::~State()
{
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::State::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::State::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(interface_mode.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(trunk_vlans.yfilter);
}

std::string Interfaces::Interface::Aggregation::SwitchedVlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Aggregation::SwitchedVlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.yfilter)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::SwitchedVlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Aggregation::SwitchedVlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Aggregation::SwitchedVlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
        interface_mode.value_namespace = name_space;
        interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

void Interfaces::Interface::Aggregation::SwitchedVlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "interface-mode")
    {
        interface_mode.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Aggregation::SwitchedVlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vlan" || name == "interface-mode" || name == "native-vlan" || name == "trunk-vlans")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterfaces()
{
    yang_name = "subinterfaces"; yang_parent_name = "interface";
}

Interfaces::Interface::Subinterfaces::~Subinterfaces()
{
}

bool Interfaces::Interface::Subinterfaces::has_data() const
{
    for (std::size_t index=0; index<subinterface.size(); index++)
    {
        if(subinterface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::has_operation() const
{
    for (std::size_t index=0; index<subinterface.size(); index++)
    {
        if(subinterface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subinterfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subinterfaces' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subinterface")
    {
        for(auto const & c : subinterface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface>();
        c->parent = this;
        subinterface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subinterface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Subinterface()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Config>())
	,ipv4(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4>())
	,ipv6(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State>())
	,vlan(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan>())
{
    config->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    state->parent = this;

    vlan->parent = this;

    yang_name = "subinterface"; yang_parent_name = "subinterfaces";
}

Interfaces::Interface::Subinterfaces::Subinterface::~Subinterface()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subinterface" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subinterface' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Config>();
        }
        return config;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State>();
        }
        return state;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "ipv4" || name == "ipv6" || name == "state" || name == "vlan" || name == "index")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Config::Config()
    :
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{
    yang_name = "config"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Config::has_data() const
{
    return description.is_set
	|| enabled.is_set
	|| index_.is_set
	|| name.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "enabled" || name == "index" || name == "name")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Ipv6()
    :
    addresses(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses>())
	,config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config>())
	,neighbors(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State>())
	,unnumbered(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered>())
{
    addresses->parent = this;

    config->parent = this;

    neighbors->parent = this;

    state->parent = this;

    unnumbered->parent = this;

    yang_name = "ipv6"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (unnumbered !=  nullptr && unnumbered->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (unnumbered !=  nullptr && unnumbered->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv6";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config>();
        }
        return config;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State>();
        }
        return state;
    }

    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered>();
        }
        return unnumbered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "config" || name == "neighbors" || name == "state" || name == "unnumbered")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::~Addresses()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp>())
{
    config->parent = this;

    state->parent = this;

    vrrp->parent = this;

    yang_name = "address"; yang_parent_name = "addresses";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::~Address()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State>();
        }
        return state;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "vrrp" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length" || name == "status")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrrp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;

    interface_tracking->parent = this;

    state->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking == nullptr)
        {
            interface_tracking = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>();
        }
        return interface_tracking;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_tracking != nullptr)
    {
        children["interface-tracking"] = interface_tracking;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-tracking" || name == "state" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_link_local.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.yfilter)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
        virtual_link_local.value_namespace = name_space;
        virtual_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-link-local" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(current_priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_link_local.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.yfilter)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.yfilter)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
        current_priority.value_namespace = name_space;
        current_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
        virtual_link_local.value_namespace = name_space;
        virtual_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "current-priority")
    {
        current_priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "current-priority" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-link-local" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::~Neighbors()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| neighbor_state.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "is-router" || name == "link-layer-address" || name == "neighbor-state" || name == "origin")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Unnumbered()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config>())
	,interface_ref(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State>())
{
    config->parent = this;

    interface_ref->parent = this;

    state->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::~Unnumbered()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unnumbered' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-ref" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::~InterfaceRef()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Unnumbered::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::Config()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dup-addr-detect-transmits" || name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::State()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dup-addr-detect-transmits" || name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::State::State()
    :
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    ifindex{YType::uint32, "ifindex"},
    index_{YType::uint32, "index"},
    last_change{YType::uint32, "last-change"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"}
    	,
    counters(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| enabled.is_set
	|| ifindex.is_set
	|| index_.is_set
	|| last_change.is_set
	|| name.is_set
	|| oper_status.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "admin-status" || name == "description" || name == "enabled" || name == "ifindex" || name == "index" || name == "last-change" || name == "name" || name == "oper-status")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::Counters()
    :
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint64, "in-discards"},
    in_errors{YType::uint64, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    last_clear{YType::str, "last-clear"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint64, "out-discards"},
    out_errors{YType::uint64, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::~Counters()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::has_data() const
{
    return in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| last_clear.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_unicast_pkts.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_unicast_pkts.yfilter)
	|| ydk::is_set(in_unknown_protos.yfilter)
	|| ydk::is_set(last_clear.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(out_discards.yfilter)
	|| ydk::is_set(out_errors.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_unicast_pkts.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.yfilter)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.yfilter)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.yfilter)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.yfilter)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.yfilter)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
        in_discards.value_namespace = name_space;
        in_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
        in_errors.value_namespace = name_space;
        in_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
        in_unicast_pkts.value_namespace = name_space;
        in_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
        in_unknown_protos.value_namespace = name_space;
        in_unknown_protos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
        last_clear.value_namespace = name_space;
        last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
        out_discards.value_namespace = name_space;
        out_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
        out_errors.value_namespace = name_space;
        out_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
        out_unicast_pkts.value_namespace = name_space;
        out_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos.yfilter = yfilter;
    }
    if(value_path == "last-clear")
    {
        last_clear.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-discards")
    {
        out_discards.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-broadcast-pkts" || name == "in-discards" || name == "in-errors" || name == "in-multicast-pkts" || name == "in-octets" || name == "in-unicast-pkts" || name == "in-unknown-protos" || name == "last-clear" || name == "out-broadcast-pkts" || name == "out-discards" || name == "out-errors" || name == "out-multicast-pkts" || name == "out-octets" || name == "out-unicast-pkts")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Ipv4()
    :
    addresses(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses>())
	,config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config>())
	,neighbors(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State>())
	,unnumbered(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered>())
{
    addresses->parent = this;

    config->parent = this;

    neighbors->parent = this;

    state->parent = this;

    unnumbered->parent = this;

    yang_name = "ipv4"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (unnumbered !=  nullptr && unnumbered->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (unnumbered !=  nullptr && unnumbered->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv4";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config>();
        }
        return config;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State>();
        }
        return state;
    }

    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered>();
        }
        return unnumbered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "config" || name == "neighbors" || name == "state" || name == "unnumbered")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::~Addresses()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp>())
{
    config->parent = this;

    state->parent = this;

    vrrp->parent = this;

    yang_name = "address"; yang_parent_name = "addresses";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::~Address()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State>();
        }
        return state;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "vrrp" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrrp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;

    interface_tracking->parent = this;

    state->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking == nullptr)
        {
            interface_tracking = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking>();
        }
        return interface_tracking;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_tracking != nullptr)
    {
        children["interface-tracking"] = interface_tracking;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-tracking" || name == "state" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accept_mode.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(current_priority.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(virtual_address.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.yfilter)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.yfilter)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
        accept_mode.value_namespace = name_space;
        accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
        current_priority.value_namespace = name_space;
        current_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mode")
    {
        accept_mode.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "current-priority")
    {
        current_priority.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mode" || name == "advertisement-interval" || name == "current-priority" || name == "preempt" || name == "preempt-delay" || name == "priority" || name == "virtual-address" || name == "virtual-router-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(track_interface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.yfilter)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
        track_interface.value_namespace = name_space;
        track_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "track-interface")
    {
        track_interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Addresses::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-decrement" || name == "track-interface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::~Neighbors()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address" || name == "origin")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Unnumbered()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config>())
	,interface_ref(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State>())
{
    config->parent = this;

    interface_ref->parent = this;

    state->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::~Unnumbered()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unnumbered' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-ref" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::has_data() const
{
    return enabled.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "unnumbered";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::~InterfaceRef()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Unnumbered::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::State()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Vlan()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "vlan"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::~Vlan()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlan";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::Config()
    :
    vlan_id{YType::str, "vlan-id"}
{
    yang_name = "config"; yang_parent_name = "vlan";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::has_data() const
{
    return vlan_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::State()
    :
    vlan_id{YType::str, "vlan-id"}
{
    yang_name = "state"; yang_parent_name = "vlan";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::has_data() const
{
    return vlan_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Interfaces::Interface::HoldTime::HoldTime()
    :
    config(std::make_shared<Interfaces::Interface::HoldTime::Config>())
	,state(std::make_shared<Interfaces::Interface::HoldTime::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "hold-time"; yang_parent_name = "interface";
}

Interfaces::Interface::HoldTime::~HoldTime()
{
}

bool Interfaces::Interface::HoldTime::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::HoldTime::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::HoldTime::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::HoldTime::Config::Config()
    :
    dampening_time{YType::uint32, "cisco-xe-openconfig-interfaces-ext:dampening-time"},
    down{YType::uint32, "down"},
    maximum_suppressing_time{YType::uint32, "cisco-xe-openconfig-interfaces-ext:maximum-suppressing-time"},
    up{YType::uint32, "up"}
{
    yang_name = "config"; yang_parent_name = "hold-time";
}

Interfaces::Interface::HoldTime::Config::~Config()
{
}

bool Interfaces::Interface::HoldTime::Config::has_data() const
{
    return dampening_time.is_set
	|| down.is_set
	|| maximum_suppressing_time.is_set
	|| up.is_set;
}

bool Interfaces::Interface::HoldTime::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(maximum_suppressing_time.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Interfaces::Interface::HoldTime::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::HoldTime::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (maximum_suppressing_time.is_set || is_set(maximum_suppressing_time.yfilter)) leaf_name_data.push_back(maximum_suppressing_time.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::HoldTime::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::HoldTime::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppressing-time")
    {
        maximum_suppressing_time = value;
        maximum_suppressing_time.value_namespace = name_space;
        maximum_suppressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::HoldTime::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "maximum-suppressing-time")
    {
        maximum_suppressing_time.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Interfaces::Interface::HoldTime::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-time" || name == "down" || name == "maximum-suppressing-time" || name == "up")
        return true;
    return false;
}

Interfaces::Interface::HoldTime::State::State()
    :
    dampening_time{YType::uint32, "cisco-xe-openconfig-interfaces-ext:dampening-time"},
    down{YType::uint32, "down"},
    maximum_suppressing_time{YType::uint32, "cisco-xe-openconfig-interfaces-ext:maximum-suppressing-time"},
    up{YType::uint32, "up"}
{
    yang_name = "state"; yang_parent_name = "hold-time";
}

Interfaces::Interface::HoldTime::State::~State()
{
}

bool Interfaces::Interface::HoldTime::State::has_data() const
{
    return dampening_time.is_set
	|| down.is_set
	|| maximum_suppressing_time.is_set
	|| up.is_set;
}

bool Interfaces::Interface::HoldTime::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(maximum_suppressing_time.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Interfaces::Interface::HoldTime::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::HoldTime::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (maximum_suppressing_time.is_set || is_set(maximum_suppressing_time.yfilter)) leaf_name_data.push_back(maximum_suppressing_time.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::HoldTime::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::HoldTime::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppressing-time")
    {
        maximum_suppressing_time = value;
        maximum_suppressing_time.value_namespace = name_space;
        maximum_suppressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::HoldTime::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "maximum-suppressing-time")
    {
        maximum_suppressing_time.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Interfaces::Interface::HoldTime::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-time" || name == "down" || name == "maximum-suppressing-time" || name == "up")
        return true;
    return false;
}

Interfaces::Interface::State::State()
    :
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    hardware_port{YType::str, "openconfig-platform:hardware-port"},
    ifindex{YType::uint32, "ifindex"},
    last_change{YType::uint32, "last-change"},
    mtu{YType::uint16, "mtu"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"},
    type{YType::identityref, "type"}
    	,
    counters(std::make_shared<Interfaces::Interface::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "interface";
}

Interfaces::Interface::State::~State()
{
}

bool Interfaces::Interface::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| enabled.is_set
	|| hardware_port.is_set
	|| ifindex.is_set
	|| last_change.is_set
	|| mtu.is_set
	|| name.is_set
	|| oper_status.is_set
	|| type.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(hardware_port.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (hardware_port.is_set || is_set(hardware_port.yfilter)) leaf_name_data.push_back(hardware_port.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Interfaces::Interface::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-port")
    {
        hardware_port = value;
        hardware_port.value_namespace = name_space;
        hardware_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "hardware-port")
    {
        hardware_port.yfilter = yfilter;
    }
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "admin-status" || name == "description" || name == "enabled" || name == "hardware-port" || name == "ifindex" || name == "last-change" || name == "mtu" || name == "name" || name == "oper-status" || name == "type")
        return true;
    return false;
}

Interfaces::Interface::State::Counters::Counters()
    :
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint64, "in-discards"},
    in_errors{YType::uint64, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    last_clear{YType::str, "last-clear"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint64, "out-discards"},
    out_errors{YType::uint64, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::State::Counters::~Counters()
{
}

bool Interfaces::Interface::State::Counters::has_data() const
{
    return in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| last_clear.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_unicast_pkts.is_set;
}

bool Interfaces::Interface::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_unicast_pkts.yfilter)
	|| ydk::is_set(in_unknown_protos.yfilter)
	|| ydk::is_set(last_clear.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(out_discards.yfilter)
	|| ydk::is_set(out_errors.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_unicast_pkts.yfilter);
}

std::string Interfaces::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.yfilter)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.yfilter)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.yfilter)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.yfilter)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.yfilter)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
        in_discards.value_namespace = name_space;
        in_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
        in_errors.value_namespace = name_space;
        in_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
        in_unicast_pkts.value_namespace = name_space;
        in_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
        in_unknown_protos.value_namespace = name_space;
        in_unknown_protos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
        last_clear.value_namespace = name_space;
        last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
        out_discards.value_namespace = name_space;
        out_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
        out_errors.value_namespace = name_space;
        out_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
        out_unicast_pkts.value_namespace = name_space;
        out_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos.yfilter = yfilter;
    }
    if(value_path == "last-clear")
    {
        last_clear.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-discards")
    {
        out_discards.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-broadcast-pkts" || name == "in-discards" || name == "in-errors" || name == "in-multicast-pkts" || name == "in-octets" || name == "in-unicast-pkts" || name == "in-unknown-protos" || name == "last-clear" || name == "out-broadcast-pkts" || name == "out-discards" || name == "out-errors" || name == "out-multicast-pkts" || name == "out-octets" || name == "out-unicast-pkts")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::Ethernet()
    :
    config(std::make_shared<Interfaces::Interface::Ethernet::Config>())
	,state(std::make_shared<Interfaces::Interface::Ethernet::State>())
	,switched_vlan(std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan>())
{
    config->parent = this;

    state->parent = this;

    switched_vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface";
}

Interfaces::Interface::Ethernet::~Ethernet()
{
}

bool Interfaces::Interface::Ethernet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (switched_vlan !=  nullptr && switched_vlan->has_data());
}

bool Interfaces::Interface::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (switched_vlan !=  nullptr && switched_vlan->has_operation());
}

std::string Interfaces::Interface::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ethernet:ethernet";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Ethernet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Ethernet::State>();
        }
        return state;
    }

    if(child_yang_name == "switched-vlan")
    {
        if(switched_vlan == nullptr)
        {
            switched_vlan = std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan>();
        }
        return switched_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(switched_vlan != nullptr)
    {
        children["switched-vlan"] = switched_vlan;
    }

    return children;
}

void Interfaces::Interface::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "switched-vlan")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::SwitchedVlan::SwitchedVlan()
    :
    config(std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "switched-vlan"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::SwitchedVlan::~SwitchedVlan()
{
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Ethernet::SwitchedVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:switched-vlan";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::SwitchedVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchedVlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::SwitchedVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Interfaces::Interface::Ethernet::SwitchedVlan::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::SwitchedVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Interfaces::Interface::Ethernet::SwitchedVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Ethernet::SwitchedVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::SwitchedVlan::Config::Config()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "config"; yang_parent_name = "switched-vlan";
}

Interfaces::Interface::Ethernet::SwitchedVlan::Config::~Config()
{
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::Config::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::Config::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(interface_mode.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(trunk_vlans.yfilter);
}

std::string Interfaces::Interface::Ethernet::SwitchedVlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::SwitchedVlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.yfilter)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::SwitchedVlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::SwitchedVlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ethernet::SwitchedVlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
        interface_mode.value_namespace = name_space;
        interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

void Interfaces::Interface::Ethernet::SwitchedVlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "interface-mode")
    {
        interface_mode.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vlan" || name == "interface-mode" || name == "native-vlan" || name == "trunk-vlans")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::SwitchedVlan::State::State()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "state"; yang_parent_name = "switched-vlan";
}

Interfaces::Interface::Ethernet::SwitchedVlan::State::~State()
{
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::State::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::State::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(interface_mode.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(trunk_vlans.yfilter);
}

std::string Interfaces::Interface::Ethernet::SwitchedVlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::SwitchedVlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.yfilter)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::SwitchedVlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::SwitchedVlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ethernet::SwitchedVlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
        interface_mode.value_namespace = name_space;
        interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

void Interfaces::Interface::Ethernet::SwitchedVlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "interface-mode")
    {
        interface_mode.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::SwitchedVlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vlan" || name == "interface-mode" || name == "native-vlan" || name == "trunk-vlans")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::State::State()
    :
    aggregate_id{YType::str, "openconfig-if-aggregate:aggregate-id"},
    auto_negotiate{YType::boolean, "auto-negotiate"},
    duplex_mode{YType::enumeration, "duplex-mode"},
    effective_speed{YType::uint32, "effective-speed"},
    enable_flow_control{YType::boolean, "enable-flow-control"},
    hw_mac_address{YType::str, "hw-mac-address"},
    mac_address{YType::str, "mac-address"},
    port_speed{YType::identityref, "port-speed"}
    	,
    counters(std::make_shared<Interfaces::Interface::Ethernet::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::State::~State()
{
}

bool Interfaces::Interface::Ethernet::State::has_data() const
{
    return aggregate_id.is_set
	|| auto_negotiate.is_set
	|| duplex_mode.is_set
	|| effective_speed.is_set
	|| enable_flow_control.is_set
	|| hw_mac_address.is_set
	|| mac_address.is_set
	|| port_speed.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::Ethernet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_id.yfilter)
	|| ydk::is_set(auto_negotiate.yfilter)
	|| ydk::is_set(duplex_mode.yfilter)
	|| ydk::is_set(effective_speed.yfilter)
	|| ydk::is_set(enable_flow_control.yfilter)
	|| ydk::is_set(hw_mac_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::Ethernet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_id.is_set || is_set(aggregate_id.yfilter)) leaf_name_data.push_back(aggregate_id.get_name_leafdata());
    if (auto_negotiate.is_set || is_set(auto_negotiate.yfilter)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (duplex_mode.is_set || is_set(duplex_mode.yfilter)) leaf_name_data.push_back(duplex_mode.get_name_leafdata());
    if (effective_speed.is_set || is_set(effective_speed.yfilter)) leaf_name_data.push_back(effective_speed.get_name_leafdata());
    if (enable_flow_control.is_set || is_set(enable_flow_control.yfilter)) leaf_name_data.push_back(enable_flow_control.get_name_leafdata());
    if (hw_mac_address.is_set || is_set(hw_mac_address.yfilter)) leaf_name_data.push_back(hw_mac_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Interfaces::Interface::Ethernet::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Interfaces::Interface::Ethernet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id = value;
        aggregate_id.value_namespace = name_space;
        aggregate_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
        auto_negotiate.value_namespace = name_space;
        auto_negotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode = value;
        duplex_mode.value_namespace = name_space;
        duplex_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-speed")
    {
        effective_speed = value;
        effective_speed.value_namespace = name_space;
        effective_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control = value;
        enable_flow_control.value_namespace = name_space;
        enable_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-mac-address")
    {
        hw_mac_address = value;
        hw_mac_address.value_namespace = name_space;
        hw_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ethernet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id.yfilter = yfilter;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate.yfilter = yfilter;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode.yfilter = yfilter;
    }
    if(value_path == "effective-speed")
    {
        effective_speed.yfilter = yfilter;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control.yfilter = yfilter;
    }
    if(value_path == "hw-mac-address")
    {
        hw_mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "aggregate-id" || name == "auto-negotiate" || name == "duplex-mode" || name == "effective-speed" || name == "enable-flow-control" || name == "hw-mac-address" || name == "mac-address" || name == "port-speed")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::State::Counters::Counters()
    :
    in_8021q_frames{YType::uint64, "in-8021q-frames"},
    in_crc_errors{YType::uint64, "in-crc-errors"},
    in_fragment_frames{YType::uint64, "in-fragment-frames"},
    in_jabber_frames{YType::uint64, "in-jabber-frames"},
    in_mac_control_frames{YType::uint64, "in-mac-control-frames"},
    in_mac_pause_frames{YType::uint64, "in-mac-pause-frames"},
    in_oversize_frames{YType::uint64, "in-oversize-frames"},
    out_8021q_frames{YType::uint64, "out-8021q-frames"},
    out_mac_control_frames{YType::uint64, "out-mac-control-frames"},
    out_mac_pause_frames{YType::uint64, "out-mac-pause-frames"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::Ethernet::State::Counters::~Counters()
{
}

bool Interfaces::Interface::Ethernet::State::Counters::has_data() const
{
    return in_8021q_frames.is_set
	|| in_crc_errors.is_set
	|| in_fragment_frames.is_set
	|| in_jabber_frames.is_set
	|| in_mac_control_frames.is_set
	|| in_mac_pause_frames.is_set
	|| in_oversize_frames.is_set
	|| out_8021q_frames.is_set
	|| out_mac_control_frames.is_set
	|| out_mac_pause_frames.is_set;
}

bool Interfaces::Interface::Ethernet::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_8021q_frames.yfilter)
	|| ydk::is_set(in_crc_errors.yfilter)
	|| ydk::is_set(in_fragment_frames.yfilter)
	|| ydk::is_set(in_jabber_frames.yfilter)
	|| ydk::is_set(in_mac_control_frames.yfilter)
	|| ydk::is_set(in_mac_pause_frames.yfilter)
	|| ydk::is_set(in_oversize_frames.yfilter)
	|| ydk::is_set(out_8021q_frames.yfilter)
	|| ydk::is_set(out_mac_control_frames.yfilter)
	|| ydk::is_set(out_mac_pause_frames.yfilter);
}

std::string Interfaces::Interface::Ethernet::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_8021q_frames.is_set || is_set(in_8021q_frames.yfilter)) leaf_name_data.push_back(in_8021q_frames.get_name_leafdata());
    if (in_crc_errors.is_set || is_set(in_crc_errors.yfilter)) leaf_name_data.push_back(in_crc_errors.get_name_leafdata());
    if (in_fragment_frames.is_set || is_set(in_fragment_frames.yfilter)) leaf_name_data.push_back(in_fragment_frames.get_name_leafdata());
    if (in_jabber_frames.is_set || is_set(in_jabber_frames.yfilter)) leaf_name_data.push_back(in_jabber_frames.get_name_leafdata());
    if (in_mac_control_frames.is_set || is_set(in_mac_control_frames.yfilter)) leaf_name_data.push_back(in_mac_control_frames.get_name_leafdata());
    if (in_mac_pause_frames.is_set || is_set(in_mac_pause_frames.yfilter)) leaf_name_data.push_back(in_mac_pause_frames.get_name_leafdata());
    if (in_oversize_frames.is_set || is_set(in_oversize_frames.yfilter)) leaf_name_data.push_back(in_oversize_frames.get_name_leafdata());
    if (out_8021q_frames.is_set || is_set(out_8021q_frames.yfilter)) leaf_name_data.push_back(out_8021q_frames.get_name_leafdata());
    if (out_mac_control_frames.is_set || is_set(out_mac_control_frames.yfilter)) leaf_name_data.push_back(out_mac_control_frames.get_name_leafdata());
    if (out_mac_pause_frames.is_set || is_set(out_mac_pause_frames.yfilter)) leaf_name_data.push_back(out_mac_pause_frames.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ethernet::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames = value;
        in_8021q_frames.value_namespace = name_space;
        in_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors = value;
        in_crc_errors.value_namespace = name_space;
        in_crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames = value;
        in_fragment_frames.value_namespace = name_space;
        in_fragment_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames = value;
        in_jabber_frames.value_namespace = name_space;
        in_jabber_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames = value;
        in_mac_control_frames.value_namespace = name_space;
        in_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames = value;
        in_mac_pause_frames.value_namespace = name_space;
        in_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames = value;
        in_oversize_frames.value_namespace = name_space;
        in_oversize_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames = value;
        out_8021q_frames.value_namespace = name_space;
        out_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames = value;
        out_mac_control_frames.value_namespace = name_space;
        out_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames = value;
        out_mac_pause_frames.value_namespace = name_space;
        out_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ethernet::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames.yfilter = yfilter;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors.yfilter = yfilter;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames.yfilter = yfilter;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames.yfilter = yfilter;
    }
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames.yfilter = yfilter;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames.yfilter = yfilter;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames.yfilter = yfilter;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-8021q-frames" || name == "in-crc-errors" || name == "in-fragment-frames" || name == "in-jabber-frames" || name == "in-mac-control-frames" || name == "in-mac-pause-frames" || name == "in-oversize-frames" || name == "out-8021q-frames" || name == "out-mac-control-frames" || name == "out-mac-pause-frames")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::Config::Config()
    :
    aggregate_id{YType::str, "openconfig-if-aggregate:aggregate-id"},
    auto_negotiate{YType::boolean, "auto-negotiate"},
    duplex_mode{YType::enumeration, "duplex-mode"},
    enable_flow_control{YType::boolean, "enable-flow-control"},
    mac_address{YType::str, "mac-address"},
    port_speed{YType::identityref, "port-speed"},
    switchport{YType::boolean, "cisco-xe-openconfig-if-ethernet-ext:switchport"}
{
    yang_name = "config"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::Config::~Config()
{
}

bool Interfaces::Interface::Ethernet::Config::has_data() const
{
    return aggregate_id.is_set
	|| auto_negotiate.is_set
	|| duplex_mode.is_set
	|| enable_flow_control.is_set
	|| mac_address.is_set
	|| port_speed.is_set
	|| switchport.is_set;
}

bool Interfaces::Interface::Ethernet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_id.yfilter)
	|| ydk::is_set(auto_negotiate.yfilter)
	|| ydk::is_set(duplex_mode.yfilter)
	|| ydk::is_set(enable_flow_control.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Interfaces::Interface::Ethernet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_id.is_set || is_set(aggregate_id.yfilter)) leaf_name_data.push_back(aggregate_id.get_name_leafdata());
    if (auto_negotiate.is_set || is_set(auto_negotiate.yfilter)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (duplex_mode.is_set || is_set(duplex_mode.yfilter)) leaf_name_data.push_back(duplex_mode.get_name_leafdata());
    if (enable_flow_control.is_set || is_set(enable_flow_control.yfilter)) leaf_name_data.push_back(enable_flow_control.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ethernet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id = value;
        aggregate_id.value_namespace = name_space;
        aggregate_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
        auto_negotiate.value_namespace = name_space;
        auto_negotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode = value;
        duplex_mode.value_namespace = name_space;
        duplex_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control = value;
        enable_flow_control.value_namespace = name_space;
        enable_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ethernet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id.yfilter = yfilter;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate.yfilter = yfilter;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode.yfilter = yfilter;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-id" || name == "auto-negotiate" || name == "duplex-mode" || name == "enable-flow-control" || name == "mac-address" || name == "port-speed" || name == "switchport")
        return true;
    return false;
}

const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::PREFERRED {0, "PREFERRED"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::DEPRECATED {1, "DEPRECATED"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::INVALID {2, "INVALID"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::INACCESSIBLE {3, "INACCESSIBLE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::TENTATIVE {5, "TENTATIVE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::DUPLICATE {6, "DUPLICATE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Addresses::Address::State::Status::OPTIMISTIC {7, "OPTIMISTIC"};

const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState::INCOMPLETE {0, "INCOMPLETE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState::REACHABLE {1, "REACHABLE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState::STALE {2, "STALE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState::DELAY {3, "DELAY"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbors::Neighbor::State::NeighborState::PROBE {4, "PROBE"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::PREFERRED {0, "PREFERRED"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::DEPRECATED {1, "DEPRECATED"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::INVALID {2, "INVALID"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::INACCESSIBLE {3, "INACCESSIBLE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::TENTATIVE {5, "TENTATIVE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::DUPLICATE {6, "DUPLICATE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Addresses::Address::State::Status::OPTIMISTIC {7, "OPTIMISTIC"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState::INCOMPLETE {0, "INCOMPLETE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState::REACHABLE {1, "REACHABLE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState::STALE {2, "STALE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState::DELAY {3, "DELAY"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbors::Neighbor::State::NeighborState::PROBE {4, "PROBE"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatus::UP {0, "UP"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatus::DOWN {1, "DOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatus::TESTING {2, "TESTING"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::UP {1, "UP"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::DOWN {2, "DOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::TESTING {3, "TESTING"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::DORMANT {5, "DORMANT"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::NOT_PRESENT {6, "NOT_PRESENT"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatus::LOWER_LAYER_DOWN {7, "LOWER_LAYER_DOWN"};

const Enum::YLeaf Interfaces::Interface::State::AdminStatus::UP {0, "UP"};
const Enum::YLeaf Interfaces::Interface::State::AdminStatus::DOWN {1, "DOWN"};
const Enum::YLeaf Interfaces::Interface::State::AdminStatus::TESTING {2, "TESTING"};

const Enum::YLeaf Interfaces::Interface::State::OperStatus::UP {1, "UP"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::DOWN {2, "DOWN"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::TESTING {3, "TESTING"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::DORMANT {5, "DORMANT"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::NOT_PRESENT {6, "NOT_PRESENT"};
const Enum::YLeaf Interfaces::Interface::State::OperStatus::LOWER_LAYER_DOWN {7, "LOWER_LAYER_DOWN"};

const Enum::YLeaf Interfaces::Interface::Ethernet::State::DuplexMode::FULL {0, "FULL"};
const Enum::YLeaf Interfaces::Interface::Ethernet::State::DuplexMode::HALF {1, "HALF"};

const Enum::YLeaf Interfaces::Interface::Ethernet::Config::DuplexMode::FULL {0, "FULL"};
const Enum::YLeaf Interfaces::Interface::Ethernet::Config::DuplexMode::HALF {1, "HALF"};


}
}
