
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_18.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_19.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbParameters()
    :
    type{YType::enumeration, "type"}
    	,
    pbb_core(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore>())
	,pbb_edge(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge>())
{
    pbb_core->parent = this;
    children["pbb-core"] = pbb_core;

    pbb_edge->parent = this;
    children["pbb-edge"] = pbb_edge;

    yang_name = "pbb-parameters"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::~PbbParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::has_data() const
{
    return type.is_set
	|| (pbb_core !=  nullptr && pbb_core->has_data())
	|| (pbb_edge !=  nullptr && pbb_edge->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (pbb_core !=  nullptr && pbb_core->has_operation())
	|| (pbb_edge !=  nullptr && pbb_edge->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-core")
    {
        if(pbb_core != nullptr)
        {
            children["pbb-core"] = pbb_core;
        }
        else
        {
            pbb_core = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore>();
            pbb_core->parent = this;
            children["pbb-core"] = pbb_core;
        }
        return children.at("pbb-core");
    }

    if(child_yang_name == "pbb-edge")
    {
        if(pbb_edge != nullptr)
        {
            children["pbb-edge"] = pbb_edge;
        }
        else
        {
            pbb_edge = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge>();
            pbb_edge->parent = this;
            children["pbb-edge"] = pbb_edge;
        }
        return children.at("pbb-edge");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::get_children()
{
    if(children.find("pbb-core") == children.end())
    {
        if(pbb_core != nullptr)
        {
            children["pbb-core"] = pbb_core;
        }
    }

    if(children.find("pbb-edge") == children.end())
    {
        if(pbb_edge != nullptr)
        {
            children["pbb-edge"] = pbb_edge;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::PbbEdge()
    :
    core_bridge_name{YType::str, "core-bridge-name"},
    core_bridge_state{YType::enumeration, "core-bridge-state"},
    i_sid{YType::uint32, "i-sid"},
    mirp_lite_protocol{YType::enumeration, "mirp-lite-protocol"},
    mirp_lite_status{YType::enumeration, "mirp-lite-status"}
    	,
    edge_port(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort>())
{
    edge_port->parent = this;
    children["edge-port"] = edge_port;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::~PbbEdge()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::has_data() const
{
    return core_bridge_name.is_set
	|| core_bridge_state.is_set
	|| i_sid.is_set
	|| mirp_lite_protocol.is_set
	|| mirp_lite_status.is_set
	|| (edge_port !=  nullptr && edge_port->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::has_operation() const
{
    return is_set(operation)
	|| is_set(core_bridge_name.operation)
	|| is_set(core_bridge_state.operation)
	|| is_set(i_sid.operation)
	|| is_set(mirp_lite_protocol.operation)
	|| is_set(mirp_lite_status.operation)
	|| (edge_port !=  nullptr && edge_port->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_bridge_name.is_set || is_set(core_bridge_name.operation)) leaf_name_data.push_back(core_bridge_name.get_name_leafdata());
    if (core_bridge_state.is_set || is_set(core_bridge_state.operation)) leaf_name_data.push_back(core_bridge_state.get_name_leafdata());
    if (i_sid.is_set || is_set(i_sid.operation)) leaf_name_data.push_back(i_sid.get_name_leafdata());
    if (mirp_lite_protocol.is_set || is_set(mirp_lite_protocol.operation)) leaf_name_data.push_back(mirp_lite_protocol.get_name_leafdata());
    if (mirp_lite_status.is_set || is_set(mirp_lite_status.operation)) leaf_name_data.push_back(mirp_lite_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "edge-port")
    {
        if(edge_port != nullptr)
        {
            children["edge-port"] = edge_port;
        }
        else
        {
            edge_port = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort>();
            edge_port->parent = this;
            children["edge-port"] = edge_port;
        }
        return children.at("edge-port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::get_children()
{
    if(children.find("edge-port") == children.end())
    {
        if(edge_port != nullptr)
        {
            children["edge-port"] = edge_port;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "core-bridge-name")
    {
        core_bridge_name = value;
    }
    if(value_path == "core-bridge-state")
    {
        core_bridge_state = value;
    }
    if(value_path == "i-sid")
    {
        i_sid = value;
    }
    if(value_path == "mirp-lite-protocol")
    {
        mirp_lite_protocol = value;
    }
    if(value_path == "mirp-lite-status")
    {
        mirp_lite_status = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::EdgePort()
    :
    edge_port_state{YType::enumeration, "edge-port-state"},
    unknown_unicast_mac{YType::str, "unknown-unicast-mac"},
    unknown_unicast_mac_set{YType::boolean, "unknown-unicast-mac-set"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics>())
{
    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "edge-port"; yang_parent_name = "pbb-edge";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::~EdgePort()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::has_operation() const
{
    for (std::size_t index=0; index<bmac_mapping.size(); index++)
    {
        if(bmac_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(edge_port_state.operation)
	|| is_set(unknown_unicast_mac.operation)
	|| is_set(unknown_unicast_mac_set.operation)
	|| is_set(xconnect_id.operation)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge-port";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_port_state.is_set || is_set(edge_port_state.operation)) leaf_name_data.push_back(edge_port_state.get_name_leafdata());
    if (unknown_unicast_mac.is_set || is_set(unknown_unicast_mac.operation)) leaf_name_data.push_back(unknown_unicast_mac.get_name_leafdata());
    if (unknown_unicast_mac_set.is_set || is_set(unknown_unicast_mac_set.operation)) leaf_name_data.push_back(unknown_unicast_mac_set.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmac-mapping")
    {
        for(auto const & c : bmac_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping>();
        c->parent = this;
        bmac_mapping.push_back(std::move(c));
        children[segment_path] = bmac_mapping.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::get_children()
{
    for (auto const & c : bmac_mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-port-state")
    {
        edge_port_state = value;
    }
    if(value_path == "unknown-unicast-mac")
    {
        unknown_unicast_mac = value;
    }
    if(value_path == "unknown-unicast-mac-set")
    {
        unknown_unicast_mac_set = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::SecurityParameters()
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
    base(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl>())
{
    base->parent = this;
    children["base"] = base;

    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "security-parameters"; yang_parent_name = "edge-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dhcpv4_trust.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.operation)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::Base()
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
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
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
    storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "base"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::has_data() const
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
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dai_address_validation_mask.operation)
	|| is_set(dhcpv4_profile_name.operation)
	|| is_set(dhcpv4_snoop.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flood_uu_disabled_mac_limit_action.operation)
	|| is_set(igm_pv4_disabled.operation)
	|| is_set(igm_pv4_profile_name.operation)
	|| is_set(is_dai_addr_validate_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validate_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validate_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_ip_source_guard_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown_enabled.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(learn_disabled_mac_limit_action.operation)
	|| is_set(mac_aging_mode.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_flooding.operation)
	|| is_set(mac_learning.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(mac_port_down_flush_enabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_profile_name.operation)
	|| is_set(mmrp_flood_optimization.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(split_horizon_group_id.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.operation)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.operation)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.operation)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.operation)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.operation)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.operation)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.operation)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.operation)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.operation)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.operation)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.operation)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.operation)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.operation)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.operation)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.operation)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.operation)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::get_children()
{
    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "base";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/base/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "edge-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::~Statistics()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
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

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::BmacMapping()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{
    yang_name = "bmac-mapping"; yang_parent_name = "edge-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::~BmacMapping()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac.operation)
	|| is_set(next_hop_ip.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmac-mapping";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.operation)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac")
    {
        bmac = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::PbbCore()
    :
    num_ass_edge{YType::uint32, "num-ass-edge"}
    	,
    core_port(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort>())
{
    core_port->parent = this;
    children["core-port"] = core_port;

    yang_name = "pbb-core"; yang_parent_name = "pbb-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::~PbbCore()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::has_data() const
{
    return num_ass_edge.is_set
	|| (core_port !=  nullptr && core_port->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::has_operation() const
{
    return is_set(operation)
	|| is_set(num_ass_edge.operation)
	|| (core_port !=  nullptr && core_port->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_ass_edge.is_set || is_set(num_ass_edge.operation)) leaf_name_data.push_back(num_ass_edge.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "core-port")
    {
        if(core_port != nullptr)
        {
            children["core-port"] = core_port;
        }
        else
        {
            core_port = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort>();
            core_port->parent = this;
            children["core-port"] = core_port;
        }
        return children.at("core-port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::get_children()
{
    if(children.find("core-port") == children.end())
    {
        if(core_port != nullptr)
        {
            children["core-port"] = core_port;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-ass-edge")
    {
        num_ass_edge = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::CorePort()
    :
    core_port_state{YType::enumeration, "core-port-state"},
    vlan_id{YType::uint32, "vlan-id"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters>())
{
    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    yang_name = "core-port"; yang_parent_name = "pbb-core";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::~CorePort()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::has_data() const
{
    return core_port_state.is_set
	|| vlan_id.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::has_operation() const
{
    return is_set(operation)
	|| is_set(core_port_state.operation)
	|| is_set(vlan_id.operation)
	|| is_set(xconnect_id.operation)
	|| (security_parameters !=  nullptr && security_parameters->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-port";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_port_state.is_set || is_set(core_port_state.operation)) leaf_name_data.push_back(core_port_state.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::get_children()
{
    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "core-port-state")
    {
        core_port_state = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::SecurityParameters()
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
    base(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl>())
{
    base->parent = this;
    children["base"] = base;

    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "security-parameters"; yang_parent_name = "core-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dhcpv4_trust.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.operation)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::Base()
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
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
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
    storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "base"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::has_data() const
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
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dai_address_validation_mask.operation)
	|| is_set(dhcpv4_profile_name.operation)
	|| is_set(dhcpv4_snoop.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flood_uu_disabled_mac_limit_action.operation)
	|| is_set(igm_pv4_disabled.operation)
	|| is_set(igm_pv4_profile_name.operation)
	|| is_set(is_dai_addr_validate_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validate_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validate_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_ip_source_guard_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown_enabled.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(learn_disabled_mac_limit_action.operation)
	|| is_set(mac_aging_mode.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_flooding.operation)
	|| is_set(mac_learning.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(mac_port_down_flush_enabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_profile_name.operation)
	|| is_set(mmrp_flood_optimization.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(split_horizon_group_id.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.operation)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.operation)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.operation)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.operation)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.operation)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.operation)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.operation)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.operation)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.operation)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.operation)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.operation)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.operation)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.operation)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.operation)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.operation)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.operation)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::get_children()
{
    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "base";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/base/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-core/core-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnParameters()
    :
    evi{YType::uint32, "evi"}
    	,
    evpn_port(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort>())
{
    evpn_port->parent = this;
    children["evpn-port"] = evpn_port;

    yang_name = "evpn-parameters"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::~EvpnParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::has_data() const
{
    return evi.is_set
	|| (evpn_port !=  nullptr && evpn_port->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| (evpn_port !=  nullptr && evpn_port->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-port")
    {
        if(evpn_port != nullptr)
        {
            children["evpn-port"] = evpn_port;
        }
        else
        {
            evpn_port = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort>();
            evpn_port->parent = this;
            children["evpn-port"] = evpn_port;
        }
        return children.at("evpn-port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::get_children()
{
    if(children.find("evpn-port") == children.end())
    {
        if(evpn_port != nullptr)
        {
            children["evpn-port"] = evpn_port;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::EvpnPort()
    :
    evpn_port_state{YType::enumeration, "evpn-port-state"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics>())
{
    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "evpn-port"; yang_parent_name = "evpn-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::~EvpnPort()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::has_data() const
{
    return evpn_port_state.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::has_operation() const
{
    return is_set(operation)
	|| is_set(evpn_port_state.operation)
	|| is_set(xconnect_id.operation)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-port";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_port_state.is_set || is_set(evpn_port_state.operation)) leaf_name_data.push_back(evpn_port_state.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::get_children()
{
    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evpn-port-state")
    {
        evpn_port_state = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::SecurityParameters()
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
    base(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl>())
{
    base->parent = this;
    children["base"] = base;

    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "security-parameters"; yang_parent_name = "evpn-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dhcpv4_trust.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.operation)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::Base()
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
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
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
    storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "base"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::has_data() const
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
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dai_address_validation_mask.operation)
	|| is_set(dhcpv4_profile_name.operation)
	|| is_set(dhcpv4_snoop.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flood_uu_disabled_mac_limit_action.operation)
	|| is_set(igm_pv4_disabled.operation)
	|| is_set(igm_pv4_profile_name.operation)
	|| is_set(is_dai_addr_validate_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validate_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validate_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_ip_source_guard_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown_enabled.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(learn_disabled_mac_limit_action.operation)
	|| is_set(mac_aging_mode.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_flooding.operation)
	|| is_set(mac_learning.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(mac_port_down_flush_enabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_profile_name.operation)
	|| is_set(mmrp_flood_optimization.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(split_horizon_group_id.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.operation)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.operation)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.operation)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.operation)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.operation)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.operation)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.operation)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.operation)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.operation)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.operation)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.operation)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.operation)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.operation)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.operation)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.operation)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.operation)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::get_children()
{
    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "base";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/base/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "evpn-port";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::~Statistics()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
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

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/evpn-parameters/evpn-port/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::VniParameters()
    :
    anycast_mcast_group_addr{YType::str, "anycast-mcast-group-addr"},
    anycast_vtep_ip_addr{YType::str, "anycast-vtep-ip-addr"},
    multicast_group_addr{YType::str, "multicast-group-addr"},
    overlay{YType::str, "overlay"},
    source_ip_addr{YType::str, "source-ip-addr"},
    udp_port{YType::uint32, "udp-port"},
    vni{YType::uint32, "vni"},
    vni_encap_type{YType::enumeration, "vni-encap-type"},
    vni_mode{YType::enumeration, "vni-mode"},
    vni_port_state{YType::enumeration, "vni-port-state"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics>())
{
    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "vni-parameters"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::~VniParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::has_data() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_data())
            return true;
    }
    return anycast_mcast_group_addr.is_set
	|| anycast_vtep_ip_addr.is_set
	|| multicast_group_addr.is_set
	|| overlay.is_set
	|| source_ip_addr.is_set
	|| udp_port.is_set
	|| vni.is_set
	|| vni_encap_type.is_set
	|| vni_mode.is_set
	|| vni_port_state.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::has_operation() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(anycast_mcast_group_addr.operation)
	|| is_set(anycast_vtep_ip_addr.operation)
	|| is_set(multicast_group_addr.operation)
	|| is_set(overlay.operation)
	|| is_set(source_ip_addr.operation)
	|| is_set(udp_port.operation)
	|| is_set(vni.operation)
	|| is_set(vni_encap_type.operation)
	|| is_set(vni_mode.operation)
	|| is_set(vni_port_state.operation)
	|| is_set(xconnect_id.operation)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_mcast_group_addr.is_set || is_set(anycast_mcast_group_addr.operation)) leaf_name_data.push_back(anycast_mcast_group_addr.get_name_leafdata());
    if (anycast_vtep_ip_addr.is_set || is_set(anycast_vtep_ip_addr.operation)) leaf_name_data.push_back(anycast_vtep_ip_addr.get_name_leafdata());
    if (multicast_group_addr.is_set || is_set(multicast_group_addr.operation)) leaf_name_data.push_back(multicast_group_addr.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (source_ip_addr.is_set || is_set(source_ip_addr.operation)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_encap_type.is_set || is_set(vni_encap_type.operation)) leaf_name_data.push_back(vni_encap_type.get_name_leafdata());
    if (vni_mode.is_set || is_set(vni_mode.operation)) leaf_name_data.push_back(vni_mode.get_name_leafdata());
    if (vni_port_state.is_set || is_set(vni_port_state.operation)) leaf_name_data.push_back(vni_port_state.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    if(child_yang_name == "static-mac")
    {
        for(auto const & c : static_mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac>();
        c->parent = this;
        static_mac.push_back(std::move(c));
        children[segment_path] = static_mac.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_children()
{
    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    for (auto const & c : static_mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-mcast-group-addr")
    {
        anycast_mcast_group_addr = value;
    }
    if(value_path == "anycast-vtep-ip-addr")
    {
        anycast_vtep_ip_addr = value;
    }
    if(value_path == "multicast-group-addr")
    {
        multicast_group_addr = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "source-ip-addr")
    {
        source_ip_addr = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "vni-encap-type")
    {
        vni_encap_type = value;
    }
    if(value_path == "vni-mode")
    {
        vni_mode = value;
    }
    if(value_path == "vni-port-state")
    {
        vni_port_state = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::SecurityParameters()
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
    base(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl>())
{
    base->parent = this;
    children["base"] = base;

    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "security-parameters"; yang_parent_name = "vni-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dhcpv4_trust.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.operation)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::Base()
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
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
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
    storm_control(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "base"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::has_data() const
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
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dai_address_validation_mask.operation)
	|| is_set(dhcpv4_profile_name.operation)
	|| is_set(dhcpv4_snoop.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flood_uu_disabled_mac_limit_action.operation)
	|| is_set(igm_pv4_disabled.operation)
	|| is_set(igm_pv4_profile_name.operation)
	|| is_set(is_dai_addr_validate_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validate_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validate_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_ip_source_guard_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown_enabled.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(learn_disabled_mac_limit_action.operation)
	|| is_set(mac_aging_mode.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_flooding.operation)
	|| is_set(mac_learning.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(mac_port_down_flush_enabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_profile_name.operation)
	|| is_set(mmrp_flood_optimization.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(split_horizon_group_id.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.operation)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.operation)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.operation)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.operation)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.operation)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.operation)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.operation)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.operation)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.operation)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.operation)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.operation)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.operation)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.operation)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.operation)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.operation)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.operation)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_children()
{
    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "base";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/base/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "vni-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::~Statistics()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
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

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::StaticMac()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{
    yang_name = "static-mac"; yang_parent_name = "vni-parameters";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::~StaticMac()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac.operation)
	|| is_set(next_hop_ip.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.operation)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac")
    {
        bmac = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Rd()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::~Rd()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::MacFilter()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{
    yang_name = "mac-filter"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::~MacFilter()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac.operation)
	|| is_set(next_hop_ip.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-filter";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.operation)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac")
    {
        bmac = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::BridgeVfi()
    :
    access{YType::boolean, "access"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    shutdown{YType::boolean, "shutdown"},
    vfi_name{YType::str, "vfi-name"},
    vfi_state{YType::enumeration, "vfi-state"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;
    children["discovery-information"] = discovery_information;

    yang_name = "bridge-vfi"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::~BridgeVfi()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(number_pseudowires.operation)
	|| is_set(shutdown.operation)
	|| is_set(vfi_name.operation)
	|| is_set(vfi_state.operation)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-vfi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.operation)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (vfi_name.is_set || is_set(vfi_name.operation)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.operation)) leaf_name_data.push_back(vfi_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-information")
    {
        if(discovery_information != nullptr)
        {
            children["discovery-information"] = discovery_information;
        }
        else
        {
            discovery_information = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>();
            discovery_information->parent = this;
            children["discovery-information"] = discovery_information;
        }
        return children.at("discovery-information");
    }

    if(child_yang_name == "p2mp-information")
    {
        for(auto const & c : p2mp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(std::move(c));
        children[segment_path] = p2mp_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_children()
{
    if(children.find("discovery-information") == children.end())
    {
        if(discovery_information != nullptr)
        {
            children["discovery-information"] = discovery_information;
        }
    }

    for (auto const & c : p2mp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "vfi-name")
    {
        vfi_name = value;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::DiscoveryInformation()
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
    rd_value(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    children["rd-value"] = rd_value;

    vpls_id->parent = this;
    children["vpls-id"] = vpls_id;

    yang_name = "discovery-information"; yang_parent_name = "bridge-vfi";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_operation() const
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
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_signalling_method.operation)
	|| is_set(as_number.operation)
	|| is_set(export_route_policy.operation)
	|| is_set(l2vpn_router_id.operation)
	|| is_set(provisioned_ve_id.operation)
	|| is_set(service_connected.operation)
	|| is_set(ve_id.operation)
	|| is_set(ve_range.operation)
	|| is_set(vpls_id_conflict.operation)
	|| is_set(vpn_added.operation)
	|| is_set(vpn_id.operation)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.operation)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.operation)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.operation)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.operation)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.operation)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.operation)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.operation)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.operation)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(std::move(c));
        children[segment_path] = export_rt.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(std::move(c));
        children[segment_path] = import_rt.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value != nullptr)
        {
            children["rd-value"] = rd_value;
        }
        else
        {
            rd_value = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>();
            rd_value->parent = this;
            children["rd-value"] = rd_value;
        }
        return children.at("rd-value");
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id != nullptr)
        {
            children["vpls-id"] = vpls_id;
        }
        else
        {
            vpls_id = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>();
            vpls_id->parent = this;
            children["vpls-id"] = vpls_id;
        }
        return children.at("vpls-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_children()
{
    for (auto const & c : export_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : import_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rd-value") == children.end())
    {
        if(rd_value != nullptr)
        {
            children["rd-value"] = rd_value;
        }
    }

    if(children.find("vpls-id") == children.end())
    {
        if(vpls_id != nullptr)
        {
            children["vpls-id"] = vpls_id;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-value"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "import-rt"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "export-rt"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::P2MpInformation()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    local_label{YType::uint32, "local-label"},
    ptree_id{YType::uint32, "ptree-id"},
    signaling{YType::enumeration, "signaling"},
    transport{YType::enumeration, "transport"},
    transport_status{YType::enumeration, "transport-status"},
    tunnel_interface{YType::str, "tunnel-interface"}
{
    yang_name = "p2mp-information"; yang_parent_name = "bridge-vfi";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::~P2MpInformation()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_data() const
{
    return attribute_set_name.is_set
	|| local_label.is_set
	|| ptree_id.is_set
	|| signaling.is_set
	|| transport.is_set
	|| transport_status.is_set
	|| tunnel_interface.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(local_label.operation)
	|| is_set(ptree_id.operation)
	|| is_set(signaling.operation)
	|| is_set(transport.operation)
	|| is_set(transport_status.operation)
	|| is_set(tunnel_interface.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-information";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (ptree_id.is_set || is_set(ptree_id.operation)) leaf_name_data.push_back(ptree_id.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.operation)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (transport_status.is_set || is_set(transport_status.operation)) leaf_name_data.push_back(transport_status.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "ptree-id")
    {
        ptree_id = value;
    }
    if(value_path == "signaling")
    {
        signaling = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "transport-status")
    {
        transport_status = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::BridgeAccessVfi()
    :
    access{YType::boolean, "access"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    shutdown{YType::boolean, "shutdown"},
    vfi_name{YType::str, "vfi-name"},
    vfi_state{YType::enumeration, "vfi-state"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;
    children["discovery-information"] = discovery_information;

    yang_name = "bridge-access-vfi"; yang_parent_name = "bridge-domain-info";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::~BridgeAccessVfi()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(number_pseudowires.operation)
	|| is_set(shutdown.operation)
	|| is_set(vfi_name.operation)
	|| is_set(vfi_state.operation)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-access-vfi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.operation)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (vfi_name.is_set || is_set(vfi_name.operation)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.operation)) leaf_name_data.push_back(vfi_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-information")
    {
        if(discovery_information != nullptr)
        {
            children["discovery-information"] = discovery_information;
        }
        else
        {
            discovery_information = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>();
            discovery_information->parent = this;
            children["discovery-information"] = discovery_information;
        }
        return children.at("discovery-information");
    }

    if(child_yang_name == "p2mp-information")
    {
        for(auto const & c : p2mp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(std::move(c));
        children[segment_path] = p2mp_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_children()
{
    if(children.find("discovery-information") == children.end())
    {
        if(discovery_information != nullptr)
        {
            children["discovery-information"] = discovery_information;
        }
    }

    for (auto const & c : p2mp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "vfi-name")
    {
        vfi_name = value;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::DiscoveryInformation()
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
    rd_value(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    children["rd-value"] = rd_value;

    vpls_id->parent = this;
    children["vpls-id"] = vpls_id;

    yang_name = "discovery-information"; yang_parent_name = "bridge-access-vfi";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_data() const
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

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_operation() const
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
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_signalling_method.operation)
	|| is_set(as_number.operation)
	|| is_set(export_route_policy.operation)
	|| is_set(l2vpn_router_id.operation)
	|| is_set(provisioned_ve_id.operation)
	|| is_set(service_connected.operation)
	|| is_set(ve_id.operation)
	|| is_set(ve_range.operation)
	|| is_set(vpls_id_conflict.operation)
	|| is_set(vpn_added.operation)
	|| is_set(vpn_id.operation)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.operation)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.operation)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.operation)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.operation)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.operation)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.operation)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.operation)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.operation)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(std::move(c));
        children[segment_path] = export_rt.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(std::move(c));
        children[segment_path] = import_rt.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value != nullptr)
        {
            children["rd-value"] = rd_value;
        }
        else
        {
            rd_value = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>();
            rd_value->parent = this;
            children["rd-value"] = rd_value;
        }
        return children.at("rd-value");
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id != nullptr)
        {
            children["vpls-id"] = vpls_id;
        }
        else
        {
            vpls_id = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>();
            vpls_id->parent = this;
            children["vpls-id"] = vpls_id;
        }
        return children.at("vpls-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_children()
{
    for (auto const & c : export_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : import_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rd-value") == children.end())
    {
        if(rd_value != nullptr)
        {
            children["rd-value"] = rd_value;
        }
    }

    if(children.find("vpls-id") == children.end())
    {
        if(vpls_id != nullptr)
        {
            children["vpls-id"] = vpls_id;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-value"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-value";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "vpls-id";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "import-rt"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "import-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "export-rt"; yang_parent_name = "discovery-information";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "export-rt";
}

L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}


}
}
